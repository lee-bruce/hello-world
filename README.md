# hello-world

learn source


<1>
 void关键字的使用规则：
1. 如果函数没有返回值，那么应声明为void类型；
2. 如果函数无参数，那么应声明其参数为void；
3. 如果函数的参数可以是任意类型指针，那么应声明其参数为void * ；
4. void不能代表一个真实的变量；

<2>
(int *)是强行转换
*(int *) 是强行转换后去指针指向变量的值

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
    
    
<6>
是c语言中的位运算符：取反.
0在内存中的存储方式是所有位为0,
0000000000000000
那么按位取反后位16个1（如果整形在你的机器上站16位）,那么表示的数为-1.


<7>
int *p;则p是一个指向int型的变量的地址， p是地址；  
*p指的是内容
而int **p；p指的是一个地址，p放的是*p的地址， *p指的是存放int 的地址.

<8>
gdb调试int main(int argc,char *argv[])带参数的程序
gdb main
set args a b c或者 run a b c

<9>
__declspec(dllexport):
 将一个函数声名为导出函数，就是说这个函数要被其他程序调用，即作为DLL的一个对外函数接口。
   通常它和extern    "C"   合用，形式如下：
extern "C"
{
__declspec(dllexport) RETURN_TYPE FUNCTION()









