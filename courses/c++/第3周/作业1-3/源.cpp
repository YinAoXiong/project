#include <iostream>
using namespace std;
class A {
public:
	int val;
	A(int n = 0) { val = n; }
	A& GetObj() {
		return *this;
	}
	operator int()
	{
		return val;
	}

};
class Sample {
public:
	int v;
	Sample(int n) :v(n) { }
	Sample(Sample&a) {
		v = a.v + 5;
	}

};
class Base {
public:
	int k;
	Base(int n) :k(n) { }
};
class Big {
public:
	int v; Base b;
	Big(int n) :b(n),v(n) {}
	Big(Big&a) :b(a.b),v(a.v) {}
};
void zuoy1()
{
	A a;
cout << a.val << endl;
a.GetObj() = 5;
cout << a.val << endl;
}
void zuoy2()
{
	Sample a(5);
	Sample b = a;                   //在此处使用了复制构造函数
	cout << b.v<<endl;
}
void zuoy3()
{
	Big a1(5); Big a2 = a1;            //构造函数和复制构造函数
	cout << a1.v << "," << a1.b.k << endl;
	cout << a2.v << "," << a2.b.k << endl;
}

int main() {
	zuoy1();
	zuoy2();
	zuoy3();
}