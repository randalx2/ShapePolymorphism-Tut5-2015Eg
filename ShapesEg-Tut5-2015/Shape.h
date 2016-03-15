#pragma once
#ifndef SHAPE_H
#define SHAPE_H
#include <string>
#include <cmath>
#include <ctime>

using namespace std;

const float  PI_F = 3.14159265358979f;  //Constant PI for calculating circle area and perimenter

//Creating an ABSTRACT CLASS with one or more PURE virtual functions to create a template class for other shapes
//Help demonstrate Polymorphism

class Shape {
protected: int sides; //to identify the shape get the number of sides
		   //string nameOfShape;
		  
public: virtual float perimeter() = 0; //PURE VIRTUAL FUNCTION FOR ABSTRACT CLASS--since we can't define it here
		virtual float area() = 0;     // NB YOU CANNOT OVERLOAD PURE VIRTUAL FUNCTIONS IN DERIVED CLASSES
		                              //YOU CAN ONLY OVERRIDE AND OVERLOAD NORMAL VIRTUAL FUNCTIONS

		string name(); //get name of shape
		void draw();   //draw the shape -- Check how to draw shapes in C++
		                  //For now it just displays the name of the current shape
};

class Circle :public Shape{  //Derived class of abstract class Shape. Has concrete methods to override abstract class methods
private: float d; //diameter of circle
		 
public: float perimeter();
		float area();

		Circle();
		Circle(float); //Overloading Constructor
		~Circle();

};

class Triangle : public Shape{
private:float a, b, c; // 3 sides of triangle
public: float perimeter();
		float area();
		Triangle();
		Triangle(float, float, float); //Overloading constructor
		~Triangle();
};

class Rectangle : public Shape{
private: float length, breadth;  //Sides of Rectangle
public: float perimeter();
		float area();
		Rectangle();
		Rectangle(float, float); //Overloading constructor
		~Rectangle();
};

#endif