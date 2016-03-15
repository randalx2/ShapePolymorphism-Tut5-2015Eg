#include <string>
#include <cmath>
#include <ctime>
#include<iostream>

#include "Shape.h"

using namespace std;

string Shape::name(){  //Function determines name of shape based on number of sides
	string temp = "no shape";
	if (sides == 3)
	{
		temp = "Triangle";
		return temp;
	}
	if (sides == 4)
	{
		temp = "Rectangle";
		return temp;
	}
	if (sides == 1)
	{
		temp = "Circle";
		return temp;
	}

	return temp;
}

void Shape::draw(){
	cout << "Shape is a " << name() << endl;
}


float Circle::perimeter(){
	float temp = PI_F*d;
	return temp;
}

float Circle::area(){
	float temp = PI_F*pow(d,2);
	return temp;
}

//Defining constructor for Circle
Circle::Circle(){
	sides = 1;
	d = 0.00;
}

Circle::Circle(float idiameter){
	sides = 1;
	d = idiameter;
}

Circle::~Circle(){ //Default Destructor for circle

}

Triangle::Triangle(){
	sides = 3;
	a = 0.00; b = 0.00; c = 0.00;
}

Triangle::Triangle(float ia, float ib, float ic){
	sides = 3;
	a = ia;
	b = ib;
	c = ic;
}

Triangle::~Triangle(){

}

float Triangle::perimeter(){
	float temp = a + b + c;
	return temp;
}

float Triangle::area(){
	float s = (a + b + c) / 2;
	float temp = sqrt(s*(s - a)*(s - b)*(s - c));
	return temp;
}

Rectangle::Rectangle(){
	sides = 4;
	length = 0.00;
	breadth = 0.00;
}

Rectangle::Rectangle(float ilength, float ibreadth){
	sides = 4;
	length = ilength;
	breadth = ibreadth;
}

Rectangle::~Rectangle(){

}

float Rectangle::perimeter(){
	float temp = 2 * length + 2 * breadth;
	return temp;
}

float Rectangle::area(){
	float temp = length*breadth;
	return temp;
}