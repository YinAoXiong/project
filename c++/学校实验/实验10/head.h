#pragma once
#include<iostream>
using namespace std;
class Complex
{
private:
	double t;
	double v;
public:
	Complex(double _t = 0, double _v = 0);
	Complex(Complex &source);
	const Complex operator =(const Complex &source);
	const Complex operator +(const Complex &source);
	const Complex operator -(const Complex &source);
	const Complex operator *(const Complex &source);
	const Complex operator /(const Complex &source);
};