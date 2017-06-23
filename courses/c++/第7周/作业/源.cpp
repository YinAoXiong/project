//#include <iostream>
//using namespace std;
//class A {
//private:
//	int nVal;
//public:
//	void Fun()
//	{
//		cout << "A::Fun" << endl;
//	}
//	virtual void Do()
//	{
//		cout << "A::Do" << endl;
//	}
//};
//class B :public A {
//public:
//	virtual void Do()
//	{
//		cout << "B::Do" << endl;
//	}
//};
//class C :public B {
//public:
//	void Do()
//	{
//		cout << "C::Do" << endl;
//	}
//	void Fun()
//	{
//		cout << "C::Fun" << endl;
//	}
//};
//void Call(
//	A&p
//) {
//	p.Fun(); p.Do();
//}
//class D {
//public:
//	virtual ~D() { cout << "destructor D" << endl; }
//};
//class E :public D{
//public:
//	~E() { cout << "destructor E" << endl; }
//};
//int main() {
//	C c; Call(c);
//	D * pa;
//	pa = new E;
//	delete pa;
//	return 0;
//}

#include <iostream>
using namespace std;
class A {
private:
	int nVal;
public:
	void Fun()
	{
		cout << "A::Fun" << endl;
	}
	virtual void Do()
	{
		cout << "A::Do" << endl;
	}
};
class B :public A {
public:
	virtual void Do()
	{
		cout << "B::Do" << endl;
	}
};
class C :public B {
public:
	void Do()
	{
		cout << "C::Do" << endl;
	}
	void Fun()
	{
		cout << "C::Fun" << endl;
	}
};
void Call(
	A* p
) {
	p->Fun(); p->Do();
}
int main() {
	Call(new A());
	Call(new C());
	return 0;
}