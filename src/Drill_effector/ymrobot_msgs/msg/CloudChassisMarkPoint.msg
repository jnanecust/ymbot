uint8   nav_mode            #导航模式  0: 目标名导航  1：坐标点导航  3:打点 4：充电 5：取消充电 2:重定位
string  nav_target_name     #导航目标名
float32 nav_target_x        #导航目标x坐标
float32 nav_target_y        #导航目标y坐标
float32 nav_target_yaw      #导航目标yaw角度
bool    is_activate_the_nearby_point # 是否激活附近点
float32 nearby_point_radius    #就近点半径