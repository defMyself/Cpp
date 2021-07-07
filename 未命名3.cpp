#include <iostream>
#include <typeinfo>
using namespace std;

struct Node
{
	int val;
	Node *next;
	Node(int x) : val(x), next(NULL) {
	}
};

template <typename T>
void tfunc(T &t)
{
	cout << "tT:" << t << endl;
}

template<>
void tfunc(Node &node)
{
	cout << "tNode val:" << node.val << endl;
}

void tfunc(int &a)
{
	cout << "tfunc():" << a << endl;
}

int main() {
	double a = 2.1;
	tfunc(a);
	int b = 1;
	tfunc(b);
	Node node(2);
	tfunc(node);
	return 0;
}
