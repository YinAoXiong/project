#pragma once
#include<iostream>
using namespace std;

class Student
{
public:
	Student(int n, float s) :num(n), score(s) {}
	void change(int n, float s) { num = n; score = s; }
	void display()
	{
		cout << num << ' ' << score << endl;
	}
private:
	int num;
	float score;
};

class Data;
class Time
{
public:
	Time(int, int, int);
	void display(Data&);
private:
	int hour;
	int minute;
	int sec;
};
class Data
{
public:
	Data(int m, int d, int y);
	friend void Time::display(Data&);
private:
	int mouth;
	int day;
	int year;
};

template<typename numtype>
class Compare
{
public:
	Compare(numtype a, numtype b) :x(a), y(b) {}
	numtype max()
	{
		return (x > y) ? x : y;
	}
	numtype min()
	{
		return(x < y) ? x : y;
	}
private:
	numtype x, y;
};