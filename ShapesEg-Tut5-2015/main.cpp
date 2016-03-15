#include <iostream>
#include <cmath>
#include <ctime>
#include <string>

#include "Shape.h"

using namespace std;

void getallShapes(Shape &p);  //Prototype conversion function for displaying objects

int main()
{
	//Demonstrating Shape object Creation by using the constructors
	//NB WHEN USING ABSTRACT BASE CLASSES WE CANNOT CREATE OBJECTS OF THAT ABSTRACT CLASS
	//HAVE TO MAKE DERIVED CLASSES AND CREATE OBJECTS FROM THEM INSTEAD

	Shape *arrShapes[10]; //Can create pointers to abstract class. Created array pointer

	Circle c1(10.00);
	c1.draw();
	cout << "Area is " << c1.area() << endl;
	cout << "Perimeter is " << c1.perimeter() << endl;
	cout << endl;

	Triangle t1(10.00, 20.00, 15.00);
	t1.draw();
	cout << "Area is " << t1.area() << endl;
	cout << "Perimeter is " << t1.perimeter() << endl;
	cout << endl;

	Rectangle r1(10.00, 20.00);
	r1.draw();
	cout << "Area is " << r1.area() << endl;
	cout << "Perimeter is " << r1.perimeter() << endl;
	cout << endl;

	cout << "Testing shape conversion function now.." << endl;
	getallShapes(c1); //Sent a circle to test
	getallShapes(t1);
	getallShapes(r1);

	//Testing the array of Shapes
	cout << endl;
	cout << "Now Testing the Array of Different Shapes " << endl;

	//Filling in with circles
	for (int i = 0; i < 4; i++)
	{
		arrShapes[i] = &c1;   //ALWAYS PASS BY REFERENCE WHEN USING SUB CLASSES AND POLYMORPHISM
	}

	//Filling in with triangles
	for (int i = 4; i < 8; i++)
	{
		arrShapes[i] = &t1;
	}

	//Filling in with Rectangles
	for (int i = 8; i < 10; i++)
	{
		arrShapes[i] = &r1;
	}

	//Print out the name of the objects in each array element

	for (int i = 0; i < 10; i++)
	{
		getallShapes(*arrShapes[i]);  //Check what's in there!!--Send the pointer of each element
	}

	system("PAUSE");
	return 0;
}

void getallShapes(Shape &p){ //Testing conversion function
	p.name();                //Demos Polymorphism
	p.draw();                //Must send a shape by reference for sub classes and polymorphism
}