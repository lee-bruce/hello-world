# hello-world

learn source


<1>
一般来说著名的linux系统基本上分两大类： 
1.RedHat系列：Redhat、Centos、Fedora等 --------------------yum
2.Debian系列：Debian、Ubuntu等 --------------------sudo apt-get

<2>
#define calc_role_attr2(attr_name) {\
        ui32 gp_value = 0,lesson_value = 0;\
        for (size_t i = 0;i < gp_cfg_vec.size(); ++i) \
		        {\
            gp_value += gp_cfg_vec[i]->attr_name + gp_cfg_vec[i]->attr_name##_up2 * (role_info_ptr->level() - 1);\
		        }\
		for(size_t i = 0;i < lesson_cfg_vec.size(); ++i)\
		{\
			lesson_value += lesson_cfg_vec[i]->attr_name;\
		}\
        if (role_info_ptr->stars() >= 2)\
            role_info_ptr->set_##attr_name(star_extra_##attr_name + gp_value + (float)player_data_ptr->attr_name##_up2 * (role_info_ptr->level() - 1)/10000 + ((float)player_data_ptr->attr_name) * ((float)(star_level_ptr->item_info_vec[role_info_ptr->stars()]->star_up) / 10000) + lesson_value + role_info_ptr->fit_##attr_name());\
        else\
            role_info_ptr->set_##attr_name((float)player_data_ptr->attr_name + gp_value + (float)player_data_ptr->attr_name##_up2 * (role_info_ptr->level() - 1)/10000 + lesson_value + role_info_ptr->fit_##attr_name());\
    }
    
    
<3>
gdb调试int main(int argc,char *argv[])带参数的程序
gdb main
set args a b c或者 run a b c










