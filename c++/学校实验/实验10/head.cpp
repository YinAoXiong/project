#include "head.h"

Complex::Complex(double _t, double _v)
{
	t = _t;
	v = _v;
}

Complex::Complex(Complex & source)
{
	t = source.t;
	v = source.v;
}

const Complex Complex::operator=(const Complex & source)
{
	t = source.t;
	v = source.v;
	return Complex();
}

const Complex Complex::operator+(const Complex & source)
{
	t += source.t;
	v += source.v;
	return Complex();
}

const Complex Complex::operator-(const Complex & source)
{
	t -= source.t;
	v -= source.v;
	return Complex();
}

const Complex Complex::operator*(const Complex & source)
{
	t = t*source.t - v*source.v;
	v = t*source.v + v*source.t;
	return Complex();
}

const Complex Complex::operator/(const Complex & source)
{
	

	return Complex();
}
