#include "head.h"

Time::Time(int h, int m, int s)
{
	hour = h;
	minute = m;
	sec = s;
}

void Time::display(Data &d)
{
	cout << d.mouth << '/' << d.day << '/' << d.year << endl;
	cout << hour << ':' << minute << ':' << sec << endl;
}

Data::Data(int m, int d, int y)
{
	mouth = m;
	day = d;
	year = y;
}
