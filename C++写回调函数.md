# C++回调函数

**为什么要用回调函数呢**

答：回调函数可是把调用者与被调用者分开。

回调可用于通知机制

回调函数出自C语言

在C++中应该使用虚拟方法或函数符，而不是回调函数





```c++
class base {
    static int func1();
    int func2();
}
```



```c++
int (*pf1)()=&base::func1;
in (base::*pf2)()=&base::func2;
```



## C语言回调函数

```c
int Callback()
{
    return 0;
}

int main() 
{
    Library(Callback);
    return;
}
```



在回调函数中，主程序把回调函数像参数一样传入库函数。这样可以通过改变传进库函数的参数就可以实现不同的功能。

主函数和回调函数是一层的，库函数在另外一层。

```c
#include <stdio.h>
int Callback_1(){
    printf("Hello, Callback_1");
    return 0;
}

int Callback_2(){
    printf("Hello, Callback_2");
    return 0;
}

int Callback_3(){
    printf("Hello, Callback_3");
    return 0;
}

int Handle(int (*Callback)())
{
    printf("Enter handle Function.");
    Callback();
    printf("Leaving Handle Function.");
}

int main(){
    printf("Entering Main Function. ");
    Handle(Callback_1);
    Handle(Callback_2);
    Handle(Callback_3);
    printf("Leaving Main Function. ");
    return 0;
}
```



静态成员函数的地址可用普通函数指针存储

普通成员的函数地址需要用类成员函数指针来存储

静态成员函数不可以调用类的非静态成员。静态成员函数不含this指针，普通成员函数默认携带this指针参数

```c++
#include <iostream>

class Interface {
public:
    virtual void do_something() = 0;
    virtual ~Interface(){}
};

class Impl : public Interface {
public:
    virtual ~Imp(){}
    virtual void do_something(){
        std::cout << "Imp::dosomething" << std::endl;
    }
};

int main() {
	Interface *f = new Impl();
    f->do_something();
    return 0;
}
```



