#include<iostream>
#include"head.h"
using namespace std;
time::time(int a = 0, int b = 0, int c = 0) :hour(a), minute(b), sec(c) {}
void time::out()
{
	cout << hour << ':' << minute << ':' << sec;
}void students::display()
{
	cout << "num:" << num << endl;
	cout << "name:" << name << endl;
	cout << "sex:" << sex << endl;
}

void students::set_vale()
{
	cin >> num;
	cin.getline>>name;
	cin >> sex;
}
changfangzhu::changfangzhu(int _length = 0, int _width = 0, int _height = 0)
{
	length = _length;
	width = _width;
	height = _height;
}
void changfangzhu::set_vilue()
{
	cin >> length >> width >> height;
}
void changfangzhu::show_tiji()
{
	cout << length*width*height;
}