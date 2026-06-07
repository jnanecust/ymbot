# generated from
# ament_cmake_core/cmake/symlink_install/ament_cmake_symlink_install.cmake.in

# create empty symlink install manifest before starting install step
file(WRITE "${CMAKE_CURRENT_BINARY_DIR}/symlink_install_manifest.txt")

#
# Reimplement CMake install(DIRECTORY) command to use symlinks instead of
# copying resources.
#
# :param cmake_current_source_dir: The CMAKE_CURRENT_SOURCE_DIR when install
#   was invoked
# :type cmake_current_source_dir: string
# :param ARGN: the same arguments as the CMake install command.
# :type ARGN: various
#
function(ament_cmake_symlink_install_directory cmake_current_source_dir)
  cmake_parse_arguments(ARG "OPTIONAL" "DESTINATION" "DIRECTORY;PATTERN;PATTERN_EXCLUDE" ${ARGN})
  if(ARG_UNPARSED_ARGUMENTS)
    message(FATAL_ERROR "ament_cmake_symlink_install_directory() called with "
      "unused/unsupported arguments: ${ARG_UNPARSED_ARGUMENTS}")
  endif()

  # make destination absolute path and ensure that it exists
  if(NOT IS_ABSOLUTE "${ARG_DESTINATION}")
    set(ARG_DESTINATION "/home/ymzz/YMbot_ROS2/install/ymrobot_msgs/${ARG_DESTINATION}")
  endif()
  if(NOT EXISTS "${ARG_DESTINATION}")
    file(MAKE_DIRECTORY "${ARG_DESTINATION}")
  endif()

  # default pattern to include
  if(NOT ARG_PATTERN)
    set(ARG_PATTERN "*")
  endif()

  # iterate over directories
  foreach(dir ${ARG_DIRECTORY})
    # make dir an absolute path
    if(NOT IS_ABSOLUTE "${dir}")
      set(dir "${cmake_current_source_dir}/${dir}")
    endif()

    if(EXISTS "${dir}")
      # if directory has no trailing slash
      # append folder name to destination
      set(destination "${ARG_DESTINATION}")
      string(LENGTH "${dir}" length)
      math(EXPR offset "${length} - 1")
      string(SUBSTRING "${dir}" ${offset} 1 dir_last_char)
      if(NOT dir_last_char STREQUAL "/")
        get_filename_component(destination_name "${dir}" NAME)
        set(destination "${destination}/${destination_name}")
      else()
        # remove trailing slash
        string(SUBSTRING "${dir}" 0 ${offset} dir)
      endif()

      # glob recursive files
      set(relative_files "")
      foreach(pattern ${ARG_PATTERN})
        file(
          GLOB_RECURSE
          include_files
          RELATIVE "${dir}"
          "${dir}/${pattern}"
        )
        if(NOT include_files STREQUAL "")
          list(APPEND relative_files ${include_files})
        endif()
      endforeach()
      foreach(pattern ${ARG_PATTERN_EXCLUDE})
        file(
          GLOB_RECURSE
          exclude_files
          RELATIVE "${dir}"
          "${dir}/${pattern}"
        )
        if(NOT exclude_files STREQUAL "")
          list(REMOVE_ITEM relative_files ${exclude_files})
        endif()
      endforeach()
      list(SORT relative_files)

      foreach(relative_file ${relative_files})
        set(absolute_file "${dir}/${relative_file}")
        # determine link name for file including destination path
        set(symlink "${destination}/${relative_file}")

        # ensure that destination exists
        get_filename_component(symlink_dir "${symlink}" PATH)
        if(NOT EXISTS "${symlink_dir}")
          file(MAKE_DIRECTORY "${symlink_dir}")
        endif()

        _ament_cmake_symlink_install_create_symlink("${absolute_file}" "${symlink}")
      endforeach()
    else()
      if(NOT ARG_OPTIONAL)
        message(FATAL_ERROR
          "ament_cmake_symlink_install_directory() can't find '${dir}'")
      endif()
    endif()
  endforeach()
endfunction()

#
# Reimplement CMake install(FILES) command to use symlinks instead of copying
# resources.
#
# :param cmake_current_source_dir: The CMAKE_CURRENT_SOURCE_DIR when install
#   was invoked
# :type cmake_current_source_dir: string
# :param ARGN: the same arguments as the CMake install command.
# :type ARGN: various
#
function(ament_cmake_symlink_install_files cmake_current_source_dir)
  cmake_parse_arguments(ARG "OPTIONAL" "DESTINATION;RENAME" "FILES" ${ARGN})
  if(ARG_UNPARSED_ARGUMENTS)
    message(FATAL_ERROR "ament_cmake_symlink_install_files() called with "
      "unused/unsupported arguments: ${ARG_UNPARSED_ARGUMENTS}")
  endif()

  # make destination an absolute path and ensure that it exists
  if(NOT IS_ABSOLUTE "${ARG_DESTINATION}")
    set(ARG_DESTINATION "/home/ymzz/YMbot_ROS2/install/ymrobot_msgs/${ARG_DESTINATION}")
  endif()
  if(NOT EXISTS "${ARG_DESTINATION}")
    file(MAKE_DIRECTORY "${ARG_DESTINATION}")
  endif()

  if(ARG_RENAME)
    list(LENGTH ARG_FILES file_count)
    if(NOT file_count EQUAL 1)
    message(FATAL_ERROR "ament_cmake_symlink_install_files() called with "
      "RENAME argument but not with a single file")
    endif()
  endif()

  # iterate over files
  foreach(file ${ARG_FILES})
    # make file an absolute path
    if(NOT IS_ABSOLUTE "${file}")
      set(file "${cmake_current_source_dir}/${file}")
    endif()

    if(EXISTS "${file}")
      # determine link name for file including destination path
      get_filename_component(filename "${file}" NAME)
      if(NOT ARG_RENAME)
        set(symlink "${ARG_DESTINATION}/${filename}")
      else()
        set(symlink "${ARG_DESTINATION}/${ARG_RENAME}")
      endif()
      _ament_cmake_symlink_install_create_symlink("${file}" "${symlink}")
    else()
      if(NOT ARG_OPTIONAL)
        message(FATAL_ERROR
          "ament_cmake_symlink_install_files() can't find '${file}'")
      endif()
    endif()
  endforeach()
endfunction()

#
# Reimplement CMake install(PROGRAMS) command to use symlinks instead of copying
# resources.
#
# :param cmake_current_source_dir: The CMAKE_CURRENT_SOURCE_DIR when install
#   was invoked
# :type cmake_current_source_dir: string
# :param ARGN: the same arguments as the CMake install command.
# :type ARGN: various
#
function(ament_cmake_symlink_install_programs cmake_current_source_dir)
  cmake_parse_arguments(ARG "OPTIONAL" "DESTINATION" "PROGRAMS" ${ARGN})
  if(ARG_UNPARSED_ARGUMENTS)
    message(FATAL_ERROR "ament_cmake_symlink_install_programs() called with "
      "unused/unsupported arguments: ${ARG_UNPARSED_ARGUMENTS}")
  endif()

  # make destination an absolute path and ensure that it exists
  if(NOT IS_ABSOLUTE "${ARG_DESTINATION}")
    set(ARG_DESTINATION "/home/ymzz/YMbot_ROS2/install/ymrobot_msgs/${ARG_DESTINATION}")
  endif()
  if(NOT EXISTS "${ARG_DESTINATION}")
    file(MAKE_DIRECTORY "${ARG_DESTINATION}")
  endif()

  # iterate over programs
  foreach(file ${ARG_PROGRAMS})
    # make file an absolute path
    if(NOT IS_ABSOLUTE "${file}")
      set(file "${cmake_current_source_dir}/${file}")
    endif()

    if(EXISTS "${file}")
      # determine link name for file including destination path
      get_filename_component(filename "${file}" NAME)
      set(symlink "${ARG_DESTINATION}/${filename}")
      _ament_cmake_symlink_install_create_symlink("${file}" "${symlink}")
    else()
      if(NOT ARG_OPTIONAL)
        message(FATAL_ERROR
          "ament_cmake_symlink_install_programs() can't find '${file}'")
      endif()
    endif()
  endforeach()
endfunction()

#
# Reimplement CMake install(TARGETS) command to use symlinks instead of copying
# resources.
#
# :param TARGET_FILES: the absolute files, replacing the name of targets passed
#   in as TARGETS
# :type TARGET_FILES: list of files
# :param ARGN: the same arguments as the CMake install command except that
#   keywords identifying the kind of type and the DESTINATION keyword must be
#   joined with an underscore, e.g. ARCHIVE_DESTINATION.
# :type ARGN: various
#
function(ament_cmake_symlink_install_targets)
  cmake_parse_arguments(ARG "OPTIONAL" "ARCHIVE_DESTINATION;DESTINATION;LIBRARY_DESTINATION;RUNTIME_DESTINATION"
    "TARGETS;TARGET_FILES" ${ARGN})
  if(ARG_UNPARSED_ARGUMENTS)
    message(FATAL_ERROR "ament_cmake_symlink_install_targets() called with "
      "unused/unsupported arguments: ${ARG_UNPARSED_ARGUMENTS}")
  endif()

  # iterate over target files
  foreach(file ${ARG_TARGET_FILES})
    if(NOT IS_ABSOLUTE "${file}")
      message(FATAL_ERROR "ament_cmake_symlink_install_targets() target file "
        "'${file}' must be an absolute path")
    endif()

    # determine destination of file based on extension
    set(destination "")
    get_filename_component(fileext "${file}" EXT)
    if(fileext STREQUAL ".a" OR fileext STREQUAL ".lib")
      set(destination "${ARG_ARCHIVE_DESTINATION}")
    elseif(fileext STREQUAL ".dylib" OR fileext MATCHES "\\.so(\\.[0-9]+)?(\\.[0-9]+)?(\\.[0-9]+)?$")
      set(destination "${ARG_LIBRARY_DESTINATION}")
    elseif(fileext STREQUAL "" OR fileext STREQUAL ".dll" OR fileext STREQUAL ".exe")
      set(destination "${ARG_RUNTIME_DESTINATION}")
    endif()
    if(destination STREQUAL "")
      set(destination "${ARG_DESTINATION}")
    endif()

    # make destination an absolute path and ensure that it exists
    if(NOT IS_ABSOLUTE "${destination}")
      set(destination "/home/ymzz/YMbot_ROS2/install/ymrobot_msgs/${destination}")
    endif()
    if(NOT EXISTS "${destination}")
      file(MAKE_DIRECTORY "${destination}")
    endif()

    if(EXISTS "${file}")
      # determine link name for file including destination path
      get_filename_component(filename "${file}" NAME)
      set(symlink "${destination}/${filename}")
      _ament_cmake_symlink_install_create_symlink("${file}" "${symlink}")
    else()
      if(NOT ARG_OPTIONAL)
        message(FATAL_ERROR
          "ament_cmake_symlink_install_targets() can't find '${file}'")
      endif()
    endif()
  endforeach()
endfunction()

function(_ament_cmake_symlink_install_create_symlink absolute_file symlink)
  # register symlink for being removed during install step
  file(APPEND "${CMAKE_CURRENT_BINARY_DIR}/symlink_install_manifest.txt"
    "${symlink}\n")

  # avoid any work if correct symlink is already in place
  if(EXISTS "${symlink}" AND IS_SYMLINK "${symlink}")
    get_filename_component(destination "${symlink}" REALPATH)
    get_filename_component(real_absolute_file "${absolute_file}" REALPATH)
    if(destination STREQUAL real_absolute_file)
      message(STATUS "Up-to-date symlink: ${symlink}")
      return()
    endif()
  endif()

  message(STATUS "Symlinking: ${symlink}")
  if(EXISTS "${symlink}" OR IS_SYMLINK "${symlink}")
    file(REMOVE "${symlink}")
  endif()

  execute_process(
    COMMAND "/usr/bin/cmake" "-E" "create_symlink"
      "${absolute_file}"
      "${symlink}"
  )
  # the CMake command does not provide a return code so check manually
  if(NOT EXISTS "${symlink}" OR NOT IS_SYMLINK "${symlink}")
    get_filename_component(destination "${symlink}" REALPATH)
    message(FATAL_ERROR
      "Could not create symlink '${symlink}' pointing to '${absolute_file}'")
  endif()
endfunction()

# end of template

message(STATUS "Execute custom install script")

# begin of custom install code

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/ament_cmake_index/share/ament_index/resource_index/rosidl_interfaces/ymrobot_msgs" "DESTINATION" "share/ament_index/resource_index/rosidl_interfaces")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/ament_cmake_index/share/ament_index/resource_index/rosidl_interfaces/ymrobot_msgs" "DESTINATION" "share/ament_index/resource_index/rosidl_interfaces")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/msg/Command.json" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/msg/Command.json" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/msg/Task.json" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/msg/Task.json" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/msg/TaskStatus.json" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/msg/TaskStatus.json" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/msg/TaskStatusCode.json" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/msg/TaskStatusCode.json" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/msg/RobotDeviceStatus.json" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/msg/RobotDeviceStatus.json" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/msg/Upper.json" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/msg/Upper.json" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/msg/MapManage.json" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/msg/MapManage.json" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/msg/MapTaskCommand.json" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/msg/MapTaskCommand.json" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/msg/SlamCommand.json" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/msg/SlamCommand.json" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/msg/DotPoints.json" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/msg/DotPoints.json" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/msg/NavPoint.json" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/msg/NavPoint.json" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/msg/Movebase.json" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/msg/Movebase.json" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/msg/ControlMode.json" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/msg/ControlMode.json" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/msg/DotPointsList.json" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/msg/DotPointsList.json" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/msg/CurrentPose.json" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/msg/CurrentPose.json" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/msg/BinaryData.json" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/msg/BinaryData.json" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/msg/EmojiFixed.json" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/msg/EmojiFixed.json" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/msg/UpdateList.json" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/msg/UpdateList.json" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/msg/CloudChassisStatus.json" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/msg/CloudChassisStatus.json" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/msg/LedShow.json" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/msg/LedShow.json" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/msg/CloudChassisMarkPoint.json" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/msg/CloudChassisMarkPoint.json" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/msg/GuideRoute.json" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/msg/GuideRoute.json" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/msg/BTNodeTaskState.json" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/msg/BTNodeTaskState.json" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/msg/VoiceMessage.json" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/msg/VoiceMessage.json" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/msg/ImageVideo.json" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/msg/ImageVideo.json" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/msg/WakeUpWordSetting.json" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/msg/WakeUpWordSetting.json" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/msg/PatrolMission.json" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/msg/PatrolMission.json" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/msg/HumanoidMovebase.json" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/msg/HumanoidMovebase.json" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/srv/SlamTaskManage.json" "DESTINATION" "share/ymrobot_msgs/srv")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/srv/SlamTaskManage.json" "DESTINATION" "share/ymrobot_msgs/srv")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/srv/MapTaskManage.json" "DESTINATION" "share/ymrobot_msgs/srv")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/srv/MapTaskManage.json" "DESTINATION" "share/ymrobot_msgs/srv")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/srv/DotPoint.json" "DESTINATION" "share/ymrobot_msgs/srv")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/srv/DotPoint.json" "DESTINATION" "share/ymrobot_msgs/srv")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/srv/UpLimb.json" "DESTINATION" "share/ymrobot_msgs/srv")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/srv/UpLimb.json" "DESTINATION" "share/ymrobot_msgs/srv")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/srv/DualArm.json" "DESTINATION" "share/ymrobot_msgs/srv")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/srv/DualArm.json" "DESTINATION" "share/ymrobot_msgs/srv")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/srv/EMOJI.json" "DESTINATION" "share/ymrobot_msgs/srv")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/srv/EMOJI.json" "DESTINATION" "share/ymrobot_msgs/srv")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/srv/Audio.json" "DESTINATION" "share/ymrobot_msgs/srv")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/srv/Audio.json" "DESTINATION" "share/ymrobot_msgs/srv")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/srv/MoveTarget.json" "DESTINATION" "share/ymrobot_msgs/srv")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/srv/MoveTarget.json" "DESTINATION" "share/ymrobot_msgs/srv")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/srv/CLoudNav.json" "DESTINATION" "share/ymrobot_msgs/srv")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/srv/CLoudNav.json" "DESTINATION" "share/ymrobot_msgs/srv")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/srv/LargeModelRequestTask.json" "DESTINATION" "share/ymrobot_msgs/srv")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/srv/LargeModelRequestTask.json" "DESTINATION" "share/ymrobot_msgs/srv")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/srv/DownloadFile.json" "DESTINATION" "share/ymrobot_msgs/srv")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/srv/DownloadFile.json" "DESTINATION" "share/ymrobot_msgs/srv")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/srv/SystemGuidance.json" "DESTINATION" "share/ymrobot_msgs/srv")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/srv/SystemGuidance.json" "DESTINATION" "share/ymrobot_msgs/srv")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/srv/HumanoidUpperLimb.json" "DESTINATION" "share/ymrobot_msgs/srv")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/srv/HumanoidUpperLimb.json" "DESTINATION" "share/ymrobot_msgs/srv")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/srv/Detect.json" "DESTINATION" "share/ymrobot_msgs/srv")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/srv/Detect.json" "DESTINATION" "share/ymrobot_msgs/srv")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/srv/Grasp.json" "DESTINATION" "share/ymrobot_msgs/srv")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/srv/Grasp.json" "DESTINATION" "share/ymrobot_msgs/srv")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/srv/PowerDrill.json" "DESTINATION" "share/ymrobot_msgs/srv")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/srv/PowerDrill.json" "DESTINATION" "share/ymrobot_msgs/srv")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/action/Recharge.json" "DESTINATION" "share/ymrobot_msgs/action")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/action/Recharge.json" "DESTINATION" "share/ymrobot_msgs/action")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/action/ArmControl.json" "DESTINATION" "share/ymrobot_msgs/action")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/action/ArmControl.json" "DESTINATION" "share/ymrobot_msgs/action")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/action/AudioControl.json" "DESTINATION" "share/ymrobot_msgs/action")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/action/AudioControl.json" "DESTINATION" "share/ymrobot_msgs/action")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/action/Relcation.json" "DESTINATION" "share/ymrobot_msgs/action")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/action/Relcation.json" "DESTINATION" "share/ymrobot_msgs/action")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/action/Relocalize.json" "DESTINATION" "share/ymrobot_msgs/action")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/action/Relocalize.json" "DESTINATION" "share/ymrobot_msgs/action")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/action/LoadMap.json" "DESTINATION" "share/ymrobot_msgs/action")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/action/LoadMap.json" "DESTINATION" "share/ymrobot_msgs/action")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/action/PlayMp3.json" "DESTINATION" "share/ymrobot_msgs/action")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/action/PlayMp3.json" "DESTINATION" "share/ymrobot_msgs/action")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/action/WaitElevator.json" "DESTINATION" "share/ymrobot_msgs/action")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/action/WaitElevator.json" "DESTINATION" "share/ymrobot_msgs/action")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/action/MoveElevator.json" "DESTINATION" "share/ymrobot_msgs/action")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/action/MoveElevator.json" "DESTINATION" "share/ymrobot_msgs/action")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/action/UpClimbAction.json" "DESTINATION" "share/ymrobot_msgs/action")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/action/UpClimbAction.json" "DESTINATION" "share/ymrobot_msgs/action")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/action/DynamicFusParameters.json" "DESTINATION" "share/ymrobot_msgs/action")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/action/DynamicFusParameters.json" "DESTINATION" "share/ymrobot_msgs/action")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/action/ResquestMoveFloor.json" "DESTINATION" "share/ymrobot_msgs/action")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/action/ResquestMoveFloor.json" "DESTINATION" "share/ymrobot_msgs/action")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/action/EnterOutElvatorResult.json" "DESTINATION" "share/ymrobot_msgs/action")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/action/EnterOutElvatorResult.json" "DESTINATION" "share/ymrobot_msgs/action")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/action/ElevatorDetection.json" "DESTINATION" "share/ymrobot_msgs/action")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/action/ElevatorDetection.json" "DESTINATION" "share/ymrobot_msgs/action")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/action/PoseManager.json" "DESTINATION" "share/ymrobot_msgs/action")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/action/PoseManager.json" "DESTINATION" "share/ymrobot_msgs/action")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/action/CloudChassisNav.json" "DESTINATION" "share/ymrobot_msgs/action")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/action/CloudChassisNav.json" "DESTINATION" "share/ymrobot_msgs/action")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/action/CloudChassisCharge.json" "DESTINATION" "share/ymrobot_msgs/action")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/action/CloudChassisCharge.json" "DESTINATION" "share/ymrobot_msgs/action")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/action/SetParams.json" "DESTINATION" "share/ymrobot_msgs/action")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/action/SetParams.json" "DESTINATION" "share/ymrobot_msgs/action")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/action/GetCurrentTask.json" "DESTINATION" "share/ymrobot_msgs/action")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/action/GetCurrentTask.json" "DESTINATION" "share/ymrobot_msgs/action")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/action/CloudChassisNavReposition.json" "DESTINATION" "share/ymrobot_msgs/action")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/action/CloudChassisNavReposition.json" "DESTINATION" "share/ymrobot_msgs/action")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/action/LogUpdate.json" "DESTINATION" "share/ymrobot_msgs/action")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/action/LogUpdate.json" "DESTINATION" "share/ymrobot_msgs/action")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/action/CameraFunction.json" "DESTINATION" "share/ymrobot_msgs/action")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/action/CameraFunction.json" "DESTINATION" "share/ymrobot_msgs/action")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/action/SystemGuidance.json" "DESTINATION" "share/ymrobot_msgs/action")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_type_description/ymrobot_msgs/action/SystemGuidance.json" "DESTINATION" "share/ymrobot_msgs/action")

# install(DIRECTORY "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_c/ymrobot_msgs/" "DESTINATION" "include/ymrobot_msgs/ymrobot_msgs" "PATTERN" "*.h")
ament_cmake_symlink_install_directory("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" DIRECTORY "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_c/ymrobot_msgs/" "DESTINATION" "include/ymrobot_msgs/ymrobot_msgs" "PATTERN" "*.h")

# install(FILES "/opt/ros/jazzy/lib/python3.12/site-packages/ament_package/template/environment_hook/library_path.sh" "DESTINATION" "share/ymrobot_msgs/environment")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/opt/ros/jazzy/lib/python3.12/site-packages/ament_package/template/environment_hook/library_path.sh" "DESTINATION" "share/ymrobot_msgs/environment")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/ament_cmake_environment_hooks/library_path.dsv" "DESTINATION" "share/ymrobot_msgs/environment")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/ament_cmake_environment_hooks/library_path.dsv" "DESTINATION" "share/ymrobot_msgs/environment")

# install(DIRECTORY "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_typesupport_fastrtps_c/ymrobot_msgs/" "DESTINATION" "include/ymrobot_msgs/ymrobot_msgs" "PATTERN_EXCLUDE" "*.cpp")
ament_cmake_symlink_install_directory("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" DIRECTORY "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_typesupport_fastrtps_c/ymrobot_msgs/" "DESTINATION" "include/ymrobot_msgs/ymrobot_msgs" "PATTERN_EXCLUDE" "*.cpp")

# install(DIRECTORY "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_typesupport_introspection_c/ymrobot_msgs/" "DESTINATION" "include/ymrobot_msgs/ymrobot_msgs" "PATTERN" "*.h")
ament_cmake_symlink_install_directory("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" DIRECTORY "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_typesupport_introspection_c/ymrobot_msgs/" "DESTINATION" "include/ymrobot_msgs/ymrobot_msgs" "PATTERN" "*.h")

# install(DIRECTORY "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_cpp/ymrobot_msgs/" "DESTINATION" "include/ymrobot_msgs/ymrobot_msgs" "PATTERN" "*.hpp")
ament_cmake_symlink_install_directory("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" DIRECTORY "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_cpp/ymrobot_msgs/" "DESTINATION" "include/ymrobot_msgs/ymrobot_msgs" "PATTERN" "*.hpp")

# install(DIRECTORY "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_typesupport_fastrtps_cpp/ymrobot_msgs/" "DESTINATION" "include/ymrobot_msgs/ymrobot_msgs" "PATTERN_EXCLUDE" "*.cpp")
ament_cmake_symlink_install_directory("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" DIRECTORY "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_typesupport_fastrtps_cpp/ymrobot_msgs/" "DESTINATION" "include/ymrobot_msgs/ymrobot_msgs" "PATTERN_EXCLUDE" "*.cpp")

# install(DIRECTORY "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_typesupport_introspection_cpp/ymrobot_msgs/" "DESTINATION" "include/ymrobot_msgs/ymrobot_msgs" "PATTERN" "*.hpp")
ament_cmake_symlink_install_directory("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" DIRECTORY "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_typesupport_introspection_cpp/ymrobot_msgs/" "DESTINATION" "include/ymrobot_msgs/ymrobot_msgs" "PATTERN" "*.hpp")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/ament_cmake_environment_hooks/pythonpath.sh" "DESTINATION" "share/ymrobot_msgs/environment")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/ament_cmake_environment_hooks/pythonpath.sh" "DESTINATION" "share/ymrobot_msgs/environment")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/ament_cmake_environment_hooks/pythonpath.dsv" "DESTINATION" "share/ymrobot_msgs/environment")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/ament_cmake_environment_hooks/pythonpath.dsv" "DESTINATION" "share/ymrobot_msgs/environment")

# install(DIRECTORY "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/ament_cmake_python/ymrobot_msgs/ymrobot_msgs.egg-info/" "DESTINATION" "lib/python3.12/site-packages/ymrobot_msgs-0.0.0-py3.12.egg-info")
ament_cmake_symlink_install_directory("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" DIRECTORY "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/ament_cmake_python/ymrobot_msgs/ymrobot_msgs.egg-info/" "DESTINATION" "lib/python3.12/site-packages/ymrobot_msgs-0.0.0-py3.12.egg-info")

# install(DIRECTORY "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_py/ymrobot_msgs/" "DESTINATION" "lib/python3.12/site-packages/ymrobot_msgs" "PATTERN_EXCLUDE" "*.pyc" "PATTERN_EXCLUDE" "__pycache__")
ament_cmake_symlink_install_directory("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" DIRECTORY "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_generator_py/ymrobot_msgs/" "DESTINATION" "lib/python3.12/site-packages/ymrobot_msgs" "PATTERN_EXCLUDE" "*.pyc" "PATTERN_EXCLUDE" "__pycache__")

# install("TARGETS" "ymrobot_msgs_s__rosidl_typesupport_fastrtps_c" "DESTINATION" "lib/python3.12/site-packages/ymrobot_msgs")
include("/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/ament_cmake_symlink_install_targets_0_${CMAKE_INSTALL_CONFIG_NAME}.cmake")

# install("TARGETS" "ymrobot_msgs_s__rosidl_typesupport_introspection_c" "DESTINATION" "lib/python3.12/site-packages/ymrobot_msgs")
include("/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/ament_cmake_symlink_install_targets_1_${CMAKE_INSTALL_CONFIG_NAME}.cmake")

# install("TARGETS" "ymrobot_msgs_s__rosidl_typesupport_c" "DESTINATION" "lib/python3.12/site-packages/ymrobot_msgs")
include("/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/ament_cmake_symlink_install_targets_2_${CMAKE_INSTALL_CONFIG_NAME}.cmake")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/msg/Command.idl" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/msg/Command.idl" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/msg/Task.idl" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/msg/Task.idl" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/msg/TaskStatus.idl" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/msg/TaskStatus.idl" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/msg/TaskStatusCode.idl" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/msg/TaskStatusCode.idl" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/msg/RobotDeviceStatus.idl" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/msg/RobotDeviceStatus.idl" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/msg/Upper.idl" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/msg/Upper.idl" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/msg/MapManage.idl" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/msg/MapManage.idl" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/msg/MapTaskCommand.idl" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/msg/MapTaskCommand.idl" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/msg/SlamCommand.idl" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/msg/SlamCommand.idl" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/msg/DotPoints.idl" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/msg/DotPoints.idl" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/msg/NavPoint.idl" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/msg/NavPoint.idl" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/msg/Movebase.idl" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/msg/Movebase.idl" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/msg/ControlMode.idl" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/msg/ControlMode.idl" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/msg/DotPointsList.idl" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/msg/DotPointsList.idl" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/msg/CurrentPose.idl" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/msg/CurrentPose.idl" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/msg/BinaryData.idl" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/msg/BinaryData.idl" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/msg/EmojiFixed.idl" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/msg/EmojiFixed.idl" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/msg/UpdateList.idl" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/msg/UpdateList.idl" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/msg/CloudChassisStatus.idl" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/msg/CloudChassisStatus.idl" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/msg/LedShow.idl" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/msg/LedShow.idl" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/msg/CloudChassisMarkPoint.idl" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/msg/CloudChassisMarkPoint.idl" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/msg/GuideRoute.idl" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/msg/GuideRoute.idl" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/msg/BTNodeTaskState.idl" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/msg/BTNodeTaskState.idl" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/msg/VoiceMessage.idl" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/msg/VoiceMessage.idl" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/msg/ImageVideo.idl" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/msg/ImageVideo.idl" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/msg/WakeUpWordSetting.idl" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/msg/WakeUpWordSetting.idl" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/msg/PatrolMission.idl" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/msg/PatrolMission.idl" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/msg/HumanoidMovebase.idl" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/msg/HumanoidMovebase.idl" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/srv/SlamTaskManage.idl" "DESTINATION" "share/ymrobot_msgs/srv")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/srv/SlamTaskManage.idl" "DESTINATION" "share/ymrobot_msgs/srv")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/srv/MapTaskManage.idl" "DESTINATION" "share/ymrobot_msgs/srv")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/srv/MapTaskManage.idl" "DESTINATION" "share/ymrobot_msgs/srv")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/srv/DotPoint.idl" "DESTINATION" "share/ymrobot_msgs/srv")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/srv/DotPoint.idl" "DESTINATION" "share/ymrobot_msgs/srv")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/srv/UpLimb.idl" "DESTINATION" "share/ymrobot_msgs/srv")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/srv/UpLimb.idl" "DESTINATION" "share/ymrobot_msgs/srv")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/srv/DualArm.idl" "DESTINATION" "share/ymrobot_msgs/srv")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/srv/DualArm.idl" "DESTINATION" "share/ymrobot_msgs/srv")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/srv/EMOJI.idl" "DESTINATION" "share/ymrobot_msgs/srv")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/srv/EMOJI.idl" "DESTINATION" "share/ymrobot_msgs/srv")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/srv/Audio.idl" "DESTINATION" "share/ymrobot_msgs/srv")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/srv/Audio.idl" "DESTINATION" "share/ymrobot_msgs/srv")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/srv/MoveTarget.idl" "DESTINATION" "share/ymrobot_msgs/srv")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/srv/MoveTarget.idl" "DESTINATION" "share/ymrobot_msgs/srv")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/srv/CLoudNav.idl" "DESTINATION" "share/ymrobot_msgs/srv")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/srv/CLoudNav.idl" "DESTINATION" "share/ymrobot_msgs/srv")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/srv/LargeModelRequestTask.idl" "DESTINATION" "share/ymrobot_msgs/srv")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/srv/LargeModelRequestTask.idl" "DESTINATION" "share/ymrobot_msgs/srv")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/srv/DownloadFile.idl" "DESTINATION" "share/ymrobot_msgs/srv")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/srv/DownloadFile.idl" "DESTINATION" "share/ymrobot_msgs/srv")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/srv/SystemGuidance.idl" "DESTINATION" "share/ymrobot_msgs/srv")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/srv/SystemGuidance.idl" "DESTINATION" "share/ymrobot_msgs/srv")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/srv/HumanoidUpperLimb.idl" "DESTINATION" "share/ymrobot_msgs/srv")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/srv/HumanoidUpperLimb.idl" "DESTINATION" "share/ymrobot_msgs/srv")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/srv/Detect.idl" "DESTINATION" "share/ymrobot_msgs/srv")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/srv/Detect.idl" "DESTINATION" "share/ymrobot_msgs/srv")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/srv/Grasp.idl" "DESTINATION" "share/ymrobot_msgs/srv")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/srv/Grasp.idl" "DESTINATION" "share/ymrobot_msgs/srv")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/srv/PowerDrill.idl" "DESTINATION" "share/ymrobot_msgs/srv")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/srv/PowerDrill.idl" "DESTINATION" "share/ymrobot_msgs/srv")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/action/Recharge.idl" "DESTINATION" "share/ymrobot_msgs/action")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/action/Recharge.idl" "DESTINATION" "share/ymrobot_msgs/action")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/action/ArmControl.idl" "DESTINATION" "share/ymrobot_msgs/action")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/action/ArmControl.idl" "DESTINATION" "share/ymrobot_msgs/action")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/action/AudioControl.idl" "DESTINATION" "share/ymrobot_msgs/action")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/action/AudioControl.idl" "DESTINATION" "share/ymrobot_msgs/action")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/action/Relcation.idl" "DESTINATION" "share/ymrobot_msgs/action")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/action/Relcation.idl" "DESTINATION" "share/ymrobot_msgs/action")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/action/Relocalize.idl" "DESTINATION" "share/ymrobot_msgs/action")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/action/Relocalize.idl" "DESTINATION" "share/ymrobot_msgs/action")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/action/LoadMap.idl" "DESTINATION" "share/ymrobot_msgs/action")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/action/LoadMap.idl" "DESTINATION" "share/ymrobot_msgs/action")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/action/PlayMp3.idl" "DESTINATION" "share/ymrobot_msgs/action")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/action/PlayMp3.idl" "DESTINATION" "share/ymrobot_msgs/action")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/action/WaitElevator.idl" "DESTINATION" "share/ymrobot_msgs/action")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/action/WaitElevator.idl" "DESTINATION" "share/ymrobot_msgs/action")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/action/MoveElevator.idl" "DESTINATION" "share/ymrobot_msgs/action")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/action/MoveElevator.idl" "DESTINATION" "share/ymrobot_msgs/action")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/action/UpClimbAction.idl" "DESTINATION" "share/ymrobot_msgs/action")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/action/UpClimbAction.idl" "DESTINATION" "share/ymrobot_msgs/action")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/action/DynamicFusParameters.idl" "DESTINATION" "share/ymrobot_msgs/action")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/action/DynamicFusParameters.idl" "DESTINATION" "share/ymrobot_msgs/action")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/action/ResquestMoveFloor.idl" "DESTINATION" "share/ymrobot_msgs/action")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/action/ResquestMoveFloor.idl" "DESTINATION" "share/ymrobot_msgs/action")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/action/EnterOutElvatorResult.idl" "DESTINATION" "share/ymrobot_msgs/action")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/action/EnterOutElvatorResult.idl" "DESTINATION" "share/ymrobot_msgs/action")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/action/ElevatorDetection.idl" "DESTINATION" "share/ymrobot_msgs/action")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/action/ElevatorDetection.idl" "DESTINATION" "share/ymrobot_msgs/action")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/action/PoseManager.idl" "DESTINATION" "share/ymrobot_msgs/action")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/action/PoseManager.idl" "DESTINATION" "share/ymrobot_msgs/action")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/action/CloudChassisNav.idl" "DESTINATION" "share/ymrobot_msgs/action")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/action/CloudChassisNav.idl" "DESTINATION" "share/ymrobot_msgs/action")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/action/CloudChassisCharge.idl" "DESTINATION" "share/ymrobot_msgs/action")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/action/CloudChassisCharge.idl" "DESTINATION" "share/ymrobot_msgs/action")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/action/SetParams.idl" "DESTINATION" "share/ymrobot_msgs/action")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/action/SetParams.idl" "DESTINATION" "share/ymrobot_msgs/action")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/action/GetCurrentTask.idl" "DESTINATION" "share/ymrobot_msgs/action")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/action/GetCurrentTask.idl" "DESTINATION" "share/ymrobot_msgs/action")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/action/CloudChassisNavReposition.idl" "DESTINATION" "share/ymrobot_msgs/action")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/action/CloudChassisNavReposition.idl" "DESTINATION" "share/ymrobot_msgs/action")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/action/LogUpdate.idl" "DESTINATION" "share/ymrobot_msgs/action")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/action/LogUpdate.idl" "DESTINATION" "share/ymrobot_msgs/action")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/action/CameraFunction.idl" "DESTINATION" "share/ymrobot_msgs/action")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/action/CameraFunction.idl" "DESTINATION" "share/ymrobot_msgs/action")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/action/SystemGuidance.idl" "DESTINATION" "share/ymrobot_msgs/action")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_adapter/ymrobot_msgs/action/SystemGuidance.idl" "DESTINATION" "share/ymrobot_msgs/action")

# install(FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/msg/Command.msg" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/msg/Command.msg" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/msg/Task.msg" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/msg/Task.msg" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/msg/TaskStatus.msg" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/msg/TaskStatus.msg" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/msg/TaskStatusCode.msg" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/msg/TaskStatusCode.msg" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/msg/RobotDeviceStatus.msg" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/msg/RobotDeviceStatus.msg" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/msg/Upper.msg" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/msg/Upper.msg" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/msg/MapManage.msg" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/msg/MapManage.msg" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/msg/MapTaskCommand.msg" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/msg/MapTaskCommand.msg" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/msg/SlamCommand.msg" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/msg/SlamCommand.msg" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/msg/DotPoints.msg" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/msg/DotPoints.msg" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/msg/NavPoint.msg" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/msg/NavPoint.msg" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/msg/Movebase.msg" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/msg/Movebase.msg" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/msg/ControlMode.msg" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/msg/ControlMode.msg" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/msg/DotPointsList.msg" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/msg/DotPointsList.msg" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/msg/CurrentPose.msg" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/msg/CurrentPose.msg" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/msg/BinaryData.msg" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/msg/BinaryData.msg" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/msg/EmojiFixed.msg" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/msg/EmojiFixed.msg" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/msg/UpdateList.msg" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/msg/UpdateList.msg" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/msg/CloudChassisStatus.msg" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/msg/CloudChassisStatus.msg" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/msg/LedShow.msg" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/msg/LedShow.msg" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/msg/CloudChassisMarkPoint.msg" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/msg/CloudChassisMarkPoint.msg" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/msg/GuideRoute.msg" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/msg/GuideRoute.msg" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/msg/BTNodeTaskState.msg" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/msg/BTNodeTaskState.msg" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/msg/VoiceMessage.msg" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/msg/VoiceMessage.msg" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/msg/ImageVideo.msg" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/msg/ImageVideo.msg" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/msg/WakeUpWordSetting.msg" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/msg/WakeUpWordSetting.msg" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/msg/PatrolMission.msg" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/msg/PatrolMission.msg" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/msg/HumanoidMovebase.msg" "DESTINATION" "share/ymrobot_msgs/msg")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/msg/HumanoidMovebase.msg" "DESTINATION" "share/ymrobot_msgs/msg")

# install(FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/srv/SlamTaskManage.srv" "DESTINATION" "share/ymrobot_msgs/srv")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/srv/SlamTaskManage.srv" "DESTINATION" "share/ymrobot_msgs/srv")

# install(FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/srv/MapTaskManage.srv" "DESTINATION" "share/ymrobot_msgs/srv")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/srv/MapTaskManage.srv" "DESTINATION" "share/ymrobot_msgs/srv")

# install(FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/srv/DotPoint.srv" "DESTINATION" "share/ymrobot_msgs/srv")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/srv/DotPoint.srv" "DESTINATION" "share/ymrobot_msgs/srv")

# install(FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/srv/UpLimb.srv" "DESTINATION" "share/ymrobot_msgs/srv")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/srv/UpLimb.srv" "DESTINATION" "share/ymrobot_msgs/srv")

# install(FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/srv/DualArm.srv" "DESTINATION" "share/ymrobot_msgs/srv")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/srv/DualArm.srv" "DESTINATION" "share/ymrobot_msgs/srv")

# install(FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/srv/EMOJI.srv" "DESTINATION" "share/ymrobot_msgs/srv")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/srv/EMOJI.srv" "DESTINATION" "share/ymrobot_msgs/srv")

# install(FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/srv/Audio.srv" "DESTINATION" "share/ymrobot_msgs/srv")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/srv/Audio.srv" "DESTINATION" "share/ymrobot_msgs/srv")

# install(FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/srv/MoveTarget.srv" "DESTINATION" "share/ymrobot_msgs/srv")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/srv/MoveTarget.srv" "DESTINATION" "share/ymrobot_msgs/srv")

# install(FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/srv/CLoudNav.srv" "DESTINATION" "share/ymrobot_msgs/srv")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/srv/CLoudNav.srv" "DESTINATION" "share/ymrobot_msgs/srv")

# install(FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/srv/LargeModelRequestTask.srv" "DESTINATION" "share/ymrobot_msgs/srv")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/srv/LargeModelRequestTask.srv" "DESTINATION" "share/ymrobot_msgs/srv")

# install(FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/srv/DownloadFile.srv" "DESTINATION" "share/ymrobot_msgs/srv")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/srv/DownloadFile.srv" "DESTINATION" "share/ymrobot_msgs/srv")

# install(FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/srv/SystemGuidance.srv" "DESTINATION" "share/ymrobot_msgs/srv")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/srv/SystemGuidance.srv" "DESTINATION" "share/ymrobot_msgs/srv")

# install(FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/srv/HumanoidUpperLimb.srv" "DESTINATION" "share/ymrobot_msgs/srv")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/srv/HumanoidUpperLimb.srv" "DESTINATION" "share/ymrobot_msgs/srv")

# install(FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/srv/Detect.srv" "DESTINATION" "share/ymrobot_msgs/srv")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/srv/Detect.srv" "DESTINATION" "share/ymrobot_msgs/srv")

# install(FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/srv/Grasp.srv" "DESTINATION" "share/ymrobot_msgs/srv")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/srv/Grasp.srv" "DESTINATION" "share/ymrobot_msgs/srv")

# install(FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/srv/PowerDrill.srv" "DESTINATION" "share/ymrobot_msgs/srv")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/srv/PowerDrill.srv" "DESTINATION" "share/ymrobot_msgs/srv")

# install(FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/action/Recharge.action" "DESTINATION" "share/ymrobot_msgs/action")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/action/Recharge.action" "DESTINATION" "share/ymrobot_msgs/action")

# install(FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/action/ArmControl.action" "DESTINATION" "share/ymrobot_msgs/action")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/action/ArmControl.action" "DESTINATION" "share/ymrobot_msgs/action")

# install(FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/action/AudioControl.action" "DESTINATION" "share/ymrobot_msgs/action")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/action/AudioControl.action" "DESTINATION" "share/ymrobot_msgs/action")

# install(FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/action/Relcation.action" "DESTINATION" "share/ymrobot_msgs/action")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/action/Relcation.action" "DESTINATION" "share/ymrobot_msgs/action")

# install(FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/action/Relocalize.action" "DESTINATION" "share/ymrobot_msgs/action")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/action/Relocalize.action" "DESTINATION" "share/ymrobot_msgs/action")

# install(FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/action/LoadMap.action" "DESTINATION" "share/ymrobot_msgs/action")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/action/LoadMap.action" "DESTINATION" "share/ymrobot_msgs/action")

# install(FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/action/PlayMp3.action" "DESTINATION" "share/ymrobot_msgs/action")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/action/PlayMp3.action" "DESTINATION" "share/ymrobot_msgs/action")

# install(FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/action/WaitElevator.action" "DESTINATION" "share/ymrobot_msgs/action")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/action/WaitElevator.action" "DESTINATION" "share/ymrobot_msgs/action")

# install(FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/action/MoveElevator.action" "DESTINATION" "share/ymrobot_msgs/action")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/action/MoveElevator.action" "DESTINATION" "share/ymrobot_msgs/action")

# install(FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/action/UpClimbAction.action" "DESTINATION" "share/ymrobot_msgs/action")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/action/UpClimbAction.action" "DESTINATION" "share/ymrobot_msgs/action")

# install(FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/action/DynamicFusParameters.action" "DESTINATION" "share/ymrobot_msgs/action")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/action/DynamicFusParameters.action" "DESTINATION" "share/ymrobot_msgs/action")

# install(FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/action/ResquestMoveFloor.action" "DESTINATION" "share/ymrobot_msgs/action")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/action/ResquestMoveFloor.action" "DESTINATION" "share/ymrobot_msgs/action")

# install(FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/action/EnterOutElvatorResult.action" "DESTINATION" "share/ymrobot_msgs/action")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/action/EnterOutElvatorResult.action" "DESTINATION" "share/ymrobot_msgs/action")

# install(FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/action/ElevatorDetection.action" "DESTINATION" "share/ymrobot_msgs/action")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/action/ElevatorDetection.action" "DESTINATION" "share/ymrobot_msgs/action")

# install(FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/action/PoseManager.action" "DESTINATION" "share/ymrobot_msgs/action")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/action/PoseManager.action" "DESTINATION" "share/ymrobot_msgs/action")

# install(FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/action/CloudChassisNav.action" "DESTINATION" "share/ymrobot_msgs/action")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/action/CloudChassisNav.action" "DESTINATION" "share/ymrobot_msgs/action")

# install(FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/action/CloudChassisCharge.action" "DESTINATION" "share/ymrobot_msgs/action")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/action/CloudChassisCharge.action" "DESTINATION" "share/ymrobot_msgs/action")

# install(FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/action/SetParams.action" "DESTINATION" "share/ymrobot_msgs/action")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/action/SetParams.action" "DESTINATION" "share/ymrobot_msgs/action")

# install(FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/action/GetCurrentTask.action" "DESTINATION" "share/ymrobot_msgs/action")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/action/GetCurrentTask.action" "DESTINATION" "share/ymrobot_msgs/action")

# install(FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/action/CloudChassisNavReposition.action" "DESTINATION" "share/ymrobot_msgs/action")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/action/CloudChassisNavReposition.action" "DESTINATION" "share/ymrobot_msgs/action")

# install(FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/action/LogUpdate.action" "DESTINATION" "share/ymrobot_msgs/action")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/action/LogUpdate.action" "DESTINATION" "share/ymrobot_msgs/action")

# install(FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/action/CameraFunction.action" "DESTINATION" "share/ymrobot_msgs/action")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/action/CameraFunction.action" "DESTINATION" "share/ymrobot_msgs/action")

# install(FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/action/SystemGuidance.action" "DESTINATION" "share/ymrobot_msgs/action")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/action/SystemGuidance.action" "DESTINATION" "share/ymrobot_msgs/action")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/ymrobot_msgs" "DESTINATION" "share/ament_index/resource_index/package_run_dependencies")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/ymrobot_msgs" "DESTINATION" "share/ament_index/resource_index/package_run_dependencies")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/ymrobot_msgs" "DESTINATION" "share/ament_index/resource_index/parent_prefix_path")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/ymrobot_msgs" "DESTINATION" "share/ament_index/resource_index/parent_prefix_path")

# install(FILES "/opt/ros/jazzy/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh" "DESTINATION" "share/ymrobot_msgs/environment")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/opt/ros/jazzy/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh" "DESTINATION" "share/ymrobot_msgs/environment")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/ament_cmake_environment_hooks/ament_prefix_path.dsv" "DESTINATION" "share/ymrobot_msgs/environment")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/ament_cmake_environment_hooks/ament_prefix_path.dsv" "DESTINATION" "share/ymrobot_msgs/environment")

# install(FILES "/opt/ros/jazzy/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh" "DESTINATION" "share/ymrobot_msgs/environment")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/opt/ros/jazzy/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh" "DESTINATION" "share/ymrobot_msgs/environment")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/ament_cmake_environment_hooks/path.dsv" "DESTINATION" "share/ymrobot_msgs/environment")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/ament_cmake_environment_hooks/path.dsv" "DESTINATION" "share/ymrobot_msgs/environment")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/ament_cmake_environment_hooks/local_setup.bash" "DESTINATION" "share/ymrobot_msgs")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/ament_cmake_environment_hooks/local_setup.bash" "DESTINATION" "share/ymrobot_msgs")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/ament_cmake_environment_hooks/local_setup.sh" "DESTINATION" "share/ymrobot_msgs")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/ament_cmake_environment_hooks/local_setup.sh" "DESTINATION" "share/ymrobot_msgs")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/ament_cmake_environment_hooks/local_setup.zsh" "DESTINATION" "share/ymrobot_msgs")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/ament_cmake_environment_hooks/local_setup.zsh" "DESTINATION" "share/ymrobot_msgs")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/ament_cmake_environment_hooks/local_setup.dsv" "DESTINATION" "share/ymrobot_msgs")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/ament_cmake_environment_hooks/local_setup.dsv" "DESTINATION" "share/ymrobot_msgs")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/ament_cmake_environment_hooks/package.dsv" "DESTINATION" "share/ymrobot_msgs")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/ament_cmake_environment_hooks/package.dsv" "DESTINATION" "share/ymrobot_msgs")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/ament_cmake_index/share/ament_index/resource_index/packages/ymrobot_msgs" "DESTINATION" "share/ament_index/resource_index/packages")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/ament_cmake_index/share/ament_index/resource_index/packages/ymrobot_msgs" "DESTINATION" "share/ament_index/resource_index/packages")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_cmake/rosidl_cmake-extras.cmake" "DESTINATION" "share/ymrobot_msgs/cmake")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_cmake/rosidl_cmake-extras.cmake" "DESTINATION" "share/ymrobot_msgs/cmake")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/ament_cmake_export_dependencies/ament_cmake_export_dependencies-extras.cmake" "DESTINATION" "share/ymrobot_msgs/cmake")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/ament_cmake_export_dependencies/ament_cmake_export_dependencies-extras.cmake" "DESTINATION" "share/ymrobot_msgs/cmake")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/ament_cmake_export_include_directories/ament_cmake_export_include_directories-extras.cmake" "DESTINATION" "share/ymrobot_msgs/cmake")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/ament_cmake_export_include_directories/ament_cmake_export_include_directories-extras.cmake" "DESTINATION" "share/ymrobot_msgs/cmake")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/ament_cmake_export_libraries/ament_cmake_export_libraries-extras.cmake" "DESTINATION" "share/ymrobot_msgs/cmake")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/ament_cmake_export_libraries/ament_cmake_export_libraries-extras.cmake" "DESTINATION" "share/ymrobot_msgs/cmake")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/ament_cmake_export_targets/ament_cmake_export_targets-extras.cmake" "DESTINATION" "share/ymrobot_msgs/cmake")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/ament_cmake_export_targets/ament_cmake_export_targets-extras.cmake" "DESTINATION" "share/ymrobot_msgs/cmake")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_cmake/rosidl_cmake_export_typesupport_targets-extras.cmake" "DESTINATION" "share/ymrobot_msgs/cmake")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_cmake/rosidl_cmake_export_typesupport_targets-extras.cmake" "DESTINATION" "share/ymrobot_msgs/cmake")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_cmake/rosidl_cmake_export_typesupport_libraries-extras.cmake" "DESTINATION" "share/ymrobot_msgs/cmake")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/rosidl_cmake/rosidl_cmake_export_typesupport_libraries-extras.cmake" "DESTINATION" "share/ymrobot_msgs/cmake")

# install(FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/ament_cmake_core/ymrobot_msgsConfig.cmake" "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/ament_cmake_core/ymrobot_msgsConfig-version.cmake" "DESTINATION" "share/ymrobot_msgs/cmake")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/ament_cmake_core/ymrobot_msgsConfig.cmake" "/home/ymzz/YMbot_ROS2/build/ymrobot_msgs/ament_cmake_core/ymrobot_msgsConfig-version.cmake" "DESTINATION" "share/ymrobot_msgs/cmake")

# install(FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/package.xml" "DESTINATION" "share/ymrobot_msgs")
ament_cmake_symlink_install_files("/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs" FILES "/home/ymzz/YMbot_ROS2/src/Drill_effector/ymrobot_msgs/package.xml" "DESTINATION" "share/ymrobot_msgs")
