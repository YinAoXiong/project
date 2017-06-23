#include<iostream>
#include"head.h"
using namespace std;
void fun(Student &source,int new_num,int new_score)
{
	source.change(new_num,new_score);
	source.display();
}
int main()
{
	Student stud(101, 78.5);
	stud.display();
	stud.change(101, 80.5);
	stud.display();
	fun(stud, 101, 100);
	Time t1(10, 13, 56);
	Data d1(12, 25, 2004);
	t1.display(d1);
	Compare<int>cmp1(3, 7);
	cout << cmp1.max() << endl;
	cout << cmp1.min() << endl;
	Compare<float>cmp2(45.78, 93.6);
	return 0;
}