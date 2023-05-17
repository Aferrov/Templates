#include <iostream>
#include "TemplatesDynamic.h"
#include "Point.h"
using namespace std;
int main()
{
	DynamicTemplate<int> a;
	a.pushback(2);
	a.insertar(4,1);
	a.pushback(5);
	a.print();

	DynamicTemplate<char> b;
	b.pushback('a');
	b.insertar('b',1);
	b.pushback('c');
	b.print();

	DynamicTemplate<Point> c;
	Point c1(2,2);
	Point c2(0,5);
	Point c3(3,7);
	c.pushback(c1);
	c.insertar(c2,1);
	c.pushback(c3);
	c.print();
	return 0;
}