#include <iostream>
int main()
{
	double t, t1, t2, t3, t4;
	double x1, x2, x3, x4, y1, y2, y3, y4, x, y;
	float f1, f2, f3, f4;
	int n = 0;
	using namespace std;
	t = 0.00;
	x = y = 0.00;
	cout <<  x << endl;
	for (t; t < 40; t = t + 0.04)
	{
		t1 = t;
		t2 = t3 = t + 0.02;
		t4 = t + 0.04;
		x1 = x;
		y1 = y;
		f1 = 1 - 0.5*y1 - x1 ;
		x2 = x + 0.02*y1;
		y2 = y + 0.02*f1;
		f2 = 1 - 0.5*y2 - x2 ;
		x3 = x + 0.02*y2;
		y3 = y + 0.02*f2;
		f3 = 1- 0.5*y3 - x3 ;
		x4 = x + 0.04*y3;
		y4 = y + 0.04*f3;
		f4 = 1 - 0.5*y4 - x4 ;
		x = x + 0.00667*(y1 + 2 * y2 + 2 * y3 + y4);
		y = y + 0.00667*(f1 + 2 * f2 + 2 * f3 + f4);
		cout <<  x  << endl;
	}
}
