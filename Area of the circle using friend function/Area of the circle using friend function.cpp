#include<iostream>
using namespace std;
class circle
{
	double radious;
public:
	circle(double a)
	{
		radious = a;
	}
	friend void print_area(circle c);
};
void print_area(circle c)
{
	double area;
	area = 3.1416 * c.radious * c.radious;
	cout << "Area (Friend function) = " << area << endl;
}
int main()
{
	circle a(5);
	print_area(a);
	return 0;
}