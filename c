<1>
单引号和双引号在C中的意义完全不同，包围在单引号中的一个字符只是编写整数的另一种方法。这个整数是给定的字符在实现的对照序列中的一个对应的值，即ASCII码值。
因此在一个ASCII实现中，‘a’和0141或97表示完全相同的东西，而一个包围在双引号中的字符串，只是编写一个有双引号之间的字符和一个附加的二进制为零的字符所初始
化的一个无名数组的指针的一种简短方法。使用一个指针来代替一个整数通常会得到一个警告消息（反之亦然），使用双引号来代替单引号也会得到一个警告消息（反之亦然）。
但通常对不检查参数类型的编译器却除外。因此用printf('\n');来代替printf("\n");通常在运行时得到奇怪的结果。因为'\n'代表一个整数，它被转换为了一个指针，
这个指针所指向的内容是没有意义的。由于一个整数通常足够大，以至于可以放下多个字符，一些C编译器允许在一个字符常量中存放多个字符，这意味着用'yes'来代替
'"yes"将不会被发现，后者意味着“包含yes和一个空字符的四个连续存储区域中的第一个的地址”，而前者意味着“在一些实现定义的样式中表示由yes联合构成的一个整数”。这两者之间的任何一致性都是巧合。


<2>
__declspec(dllexport):
 将一个函数声名为导出函数，就是说这个函数要被其他程序调用，即作为DLL的一个对外函数接口。
   通常它和extern    "C"   合用，形式如下：
extern "C"
{
__declspec(dllexport) RETURN_TYPE FUNCTION()

<3>
是c语言中的位运算符：取反.
0在内存中的存储方式是所有位为0,
0000000000000000
那么按位取反后位16个1（如果整形在你的机器上站16位）,那么表示的数为-1.


<4>
int *p;则p是一个指向int型的变量的地址， p是地址；  
*p指的是内容
而int **p；p指的是一个地址，p放的是*p的地址， *p指的是存放int 的地址.

<5>
 void关键字的使用规则：
1. 如果函数没有返回值，那么应声明为void类型；
2. 如果函数无参数，那么应声明其参数为void；
3. 如果函数的参数可以是任意类型指针，那么应声明其参数为void * ；
4. void不能代表一个真实的变量；

<6>
(int *)是强行转换
*(int *) 是强行转换后去指针指向变量的值


<7>
static全局变量与普通的全局变量有什么区别：static全局变量只初使化一次，防止在其他文件单元中被引用;
static局部变量和普通局部变量有什么区别：static局部变量只被初始化一次，下一次依据上一次结果值；
static函数与普通函数有什么区别：static函数在内存中只有一份，普通函数在每个被调用中维持一份拷贝；
static成员函数与普通成员函数的区别是:普通成员函数在参数传递时编译器会隐藏地传递一个this指针.通过this指针来确定调用类产生的哪个对象;但是静态成员函数没有this指针,不知道应该访问哪个对象中的数据,所以在程序中不可以用静态成员函数访问类中的普通变量.

<8>
memcpy-memmove-strcpy
memcpy() 用来复制内存，其原型为：
    void * memcpy ( void * dest, const void * src, size_t num );
memcpy() 会复制 src 所指的内存内容的前 num 个字节到 dest 所指的内存地址上。
memcpy() 并不关心被复制的数据类型，只是逐字节地进行复制，这给函数的使用带来了很大的灵活性，可以面向任何数据类型进行复制。
需要注意的是：
dest 指针要分配足够的空间，也即大于等于 num 字节的空间。如果没有分配空间，会出现断错误。
dest 和 src 所指的内存空间不能重叠（如果发生了重叠，使用 memmove() 会更加安全）。
与 strcpy() 不同的是，memcpy() 会完整的复制 num 个字节，不会因为遇到“\0”而结束。

<9>
define 中的# ## 一般是用来拼接字符串的，但是实际使用过程中，有哪些细微的差别呢，我们通过几个例子来看看。

#是字符串化的意思，出现在宏定义中的#是把跟在后面的参数转成一个字符串；
#define  strcpy__(dst, src)      strcpy(dst, #src)  
strcpy__(buff,abc)  相当于 strcpy__(buff,“abc”)

##是连接符号，把参数连接在一起

#define FUN(arg)     my##arg
则     FUN(ABC)
等价于  myABC

<10>
这句主要作用是提示编译器，对这个函数的调用需要像printf一样，用对应的format字符串来check可变参数的数据类型。
例如:
extern int my_printf (void *my_object, const char *my_format, ...)
__attribute__ ((format (printf, 2, 3)));
format (printf, 2, 3)告诉编译器，my_format相当于printf的format，而可变参数是从my_printf的第3个参数开始。
这样编译器就会在编译时用和printf一样的check法则来确认可变参数是否正确了

<11>
std模板函数min/max与windows中的 min/max宏冲突

<12>
bzero() 不是标准函数，没有在ANSI中定义，笔者在VC6.0和MinGW5下编译没通过；据称Linux下的GCC支持，不过笔者没有亲测。
鉴于此，还是使用 memset() 替代吧。

<13>
static inline 和 extern inline
引入内联函数的目的是为了解决程序中函数调用的效率问题。 
内联函数是浪费空间来节省时间的设置，因为函数的调用是很浪费时间的，写成内联函数可以在每次调用时用函数体内容代替函数调用，
有点类似一个宏定义。当函数体语句较少，且没有复杂的循环语句，且调用次数较多时，就可以用内联函数。
extern inline表示该函数是已声明过的了.由于函数本身可以声明多次,所以extern对函数的影响仅仅把函数的隐藏属性显式化了. 
extern 对于非函数的对象是有用的,因为对象声明时会带来内存的分配,而用 extern就表示该对象已经声明过了,不用再分配内存. 
static是以前C的用法.目的是让该关键字标识的函数只在本地文件可见,同一个程序的其它文件是不可见该函数的.换句话说,
就算你其它文件里包含了同名同参数表的函数定义的话,也是不会引起函数重复定义的错误的.因为static是仅在当前文件可见. 

<14>
typedef：
如果放在所有函数之外，它的作用域就是从它定义开始直到文件尾；
如果放在某个函数内，定义域就是从定义开始直到该函数结尾；
#define：
不管是在某个函数内，还是在所有函数之外，作用域都是从定义开始直到整个文件结尾。
如：
typedef …//此处开始到文件结尾
#define …//此处开始到文件结尾
（1）       不管是typedef还是define，都不能在定义之前使用；
（2）       typedef受函数范围影响，而define不受；
（3）      不管是typedef还是define，其作用域都不会扩展到别的文件，即使是同一个程序的不同文件，也不能互相使用。

<15>
在类中定义引用变量, 必须要在初始化列表中初始化该成员变量.
可以初始化 const 对象或引用类型的对象，但不能对它们赋值。
在开始执行构造函数的函数体之前，要完成初始化。初始化 const 或引用类型数据成员的唯一机会是构造函数初始化列表中.

<16>
extern有两个作用:
第一个,当它与"C"一起连用时，如: extern "C" void fun(int a, int b);
则告诉编译器在编译fun这个函数名时按着C的规则去翻译相应的函数名而不是C++的，C++的规则在翻译这个函数名时会把fun这个名字变得面目全非，
可能是fun@aBc_int_int#%$也可能是别的，这要看编译器的"脾气"了(不同的编译器采用的方法不一样)，为什么这么做呢，因为C++支持函数的重载啊，
在这里不去过多的论述这个问题，如果你有兴趣可以去网上搜索，相信你可以得到满意的解释!
    第二，当extern不与"C"在一起修饰变量或函数时，如在头文件中: extern int g_Int; 它的作用就是声明函数或全局变量的作用范围的关键字，
其声明的函数和变量可以在本模块活其他模块中使用，记住它是一个声明不是定义!也就是说B模块(编译单元)要是引用模块(编译单元)A中定义的全局变量或函数时，
它只要包含A模块的头文件即可,在编译阶段，模块B虽然找不到该函数或变量，但它不会报错，它会在连接时从模块A生成的目标代码中找到此函数。







    
    
    






