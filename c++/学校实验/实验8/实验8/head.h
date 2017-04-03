#pragma once
#include<iostream>
using namespace std;
class time
{
public:
	time(int a, int b, int c);
	void out();

private:
	int hour;
	int minute;
	int sec;
};
class students
{
public:
	void set_vale();
	void display();

private:
	int num;
	char name[20];
	char sex;
};
class changfangzhu
{
public:
	changfangzhu(int _length, int _width, int _height);
	void set_vilue();
	void show_tiji();
private:
	int length;
	int width;
	int height;
};






