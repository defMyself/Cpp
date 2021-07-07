#include <iostream>
#include <typeinfo>
using namespace std;

template<typename T, typename Y>
void tfunc_1(T &t, Y &y) {
 	cout << "t:" << typeid(t).name() << " " << t << endl;
 	cout << "y:" << typeid(y).name() << " " << y << endl;
}

template<typename T>
T tfunc_2(T &t) {
 	t = t + 1;
 	return t;
 }
 
 int main()
 {
 	int n = 2;
 	double f = 3.5;
 	tfunc_1(n, f);
 	cout << tfunc_2(n) << endl;
 	return 0;
 }
