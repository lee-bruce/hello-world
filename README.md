# hello-world

learn source
<3>
一般来说著名的linux系统基本上分两大类： 
1.RedHat系列：Redhat、Centos、Fedora等 --------------------yum
2.Debian系列：Debian、Ubuntu等 --------------------sudo apt-get

<4>
static全局变量与普通的全局变量有什么区别：static全局变量只初使化一次，防止在其他文件单元中被引用;
static局部变量和普通局部变量有什么区别：static局部变量只被初始化一次，下一次依据上一次结果值；
static函数与普通函数有什么区别：static函数在内存中只有一份，普通函数在每个被调用中维持一份拷贝；
static成员函数与普通成员函数的区别是:普通成员函数在参数传递时编译器会隐藏地传递一个this指针.通过this指针来确定调用类产生的哪个对象;但是静态成员函数没有this指针,不知道应该访问哪个对象中的数据,所以在程序中不可以用静态成员函数访问类中的普通变量.

<5>
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
    
    
<8>
gdb调试int main(int argc,char *argv[])带参数的程序
gdb main
set args a b c或者 run a b c










