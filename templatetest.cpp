#include <iostream>
#include <type_traits>
#include <typeinfo>

using namespace std;

int main() 
{
    typedef std::conditional<true,int,float>::type A;               // int
    typedef std::conditional<false,int,float>::type B;              // float

    typedef std::conditional<(sizeof(long long) >sizeof(long double)),
    long long, long double>::type max_size_t;

    cout<<typeid(max_size_t).name()<<endl;  //long double
}
