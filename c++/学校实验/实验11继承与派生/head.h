#pragma once
#include<iostream>
#include<string>
using namespace std;

//题目一
//class Student
//{
//public:
//	void get_value()
//	{
//		cin >> num >> name >> sex;
//	}
//	void display()
//	{
//		cout << "num:" << num << endl;
//		cout << "name:" << name << endl;
//		cout << "sex:" << sex << endl;
//	}
//private:
//	int num;
//	char name[10];
//	char sex;
//};
//class Student1 : public Student
//{
//private:
//	int age;
//	char addr[30];
//public:
//	void get_value()
//	{
//		Student::get_value();
//		cin >> age >> addr;
//	}
//	void display()
//	{
//		Student::display();
//		cout << "age:" << age << endl;
//		cout << "address:" << addr << endl;
//	}
//};

//题目二
//class Student
//{
//public:
//	void get_value()
//	{
//		cin >> num >> name >> sex;
//	}
//	void display()
//	{
//		cout << "num:" << num << endl;
//		cout << "name:" << name << endl;
//		cout << "sex:" << sex << endl;
//	}
//protected:
//	int num;
//	char name[10];
//	char sex;
//};
//class Student1 : protected Student
//{
//private:
//	int age;
//	char addr[30];
//public:
//	void get_value()
//	{
//		Student::get_value();
//		cin >> age >> addr;
//	}
//	void display()
//	{
//		cout << "num:" << num << endl;
//		cout << "name:" << name << endl;
//		cout << "sex:" << sex << endl;
//		cout << "age:" << age << endl;
//		cout << "address:" << addr << endl;
//	}
//};

//题目三
class Student
{
public:
	void get_value()
	{
		cin >> num >> name >> sex;
	}
	void display()
	{
		cout << "num:" << num << endl;
		cout << "name:" << name << endl;
		cout << "sex:" << sex << endl;
	}
protected:
	int num;
	char name[10];
	char sex;
};
class Student1 : public Student
{
private:
	int age;
	char addr[30];
public:
	void get_value()
	{
		Student::get_value();
		cin >> age >> addr;
	}
	void display()
	{
		cout << "num:" << num << endl;
		cout << "name:" << name << endl;
		cout << "sex:" << sex << endl;
		cout << "age:" << age << endl;
		cout << "address:" << addr << endl;
	}
};

class teacher
{
protected:
	string name;
	int age;
	string sex;
	string address;
	string telephone;

	//teacher特有的数据
	string title;


};

class cadre
{
protected:
	string name;
	int age;
	string sex;
	string address;
	string telephone;

	//cadre独有的数据类型
	string post;
};

class teacher_cadre : public teacher, public cadre
{
private:
	int wages;
};