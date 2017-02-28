#include <iostream>
#include <stdlib.h>
#include<stdio.h>
#include <map>
using namespace std;

int main()
{
    int a = 4;
    //a += (a++);
    //a += (++a);
    //(a++)+=a;
    (++a) += (a++);
    std::cout << a << std::endl;


    char str[] ="hello world!";
    std::cout << sizeof(str) <<std::endl;

    const char* str1 = "hello world!";
    std::cout << sizeof(str1) <<std::endl;

    int n = 10;
    std::cout << sizeof(n) <<std::endl;

    void *p = malloc(100);
    std::cout << sizeof(p) <<std::endl;
    
    
    char str2[][10]={"china", "beijing"},*p1=str2[0];
    printf("%s\n", p1 + 10);
    
    
    //(int *)是强行转换
    //*(int *) 是强行转换后去指针指向变量的值
    int  a=100;
    void *p = (void *)(&a);
    int  b;
    b=*(int*)p;
    printf("a=b=%d\n",b);
    return 0;
}                   
