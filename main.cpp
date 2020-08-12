// FileName: Virtual Function Demonstration with Vehicle classes.
// Project: CS288T Unit 4 Submission 2 - Polymorphism and Operator Overloading in C++ cont.
// Author: Adam Greenwood (225799036)

#include <iostream>
#include <string>

using namespace std;

class Vehicle
{
public:

	virtual void features() { cout << "There are different benefits to each type of vehicle." << endl; }
};

class Truck : public Vehicle
{
public:
	void features()
	{
		this->Vehicle::features();
		cout << " The truck is a utility vehicle appropriate for rugged terain and heavy load transport. " << endl;
	}
};

class Car : public Vehicle
{
public:
	void features()
	{
		this->Vehicle::features();
		cout << " The car has a wide variety of types, which come in different sizes and styles to suit ones lifestyle. " << endl;
	}
};

class Van : public Vehicle
{
public:
	void features()
	{
		this->Vehicle::features();
		cout << " The van has the ability to carry large amounts of people or cargo and is a great work vehicle. " << endl;
	}
};

class vehicleSelect
{
public:
	void getInfo(Vehicle* vehicle)
	{
		vehicle->features();
	}
};

int main()
{
	vehicleSelect* s = new vehicleSelect;
	Vehicle* v;
	Truck one;
	Van two;
	Car three;

	v = &one;
	s -> getInfo(v);

	v = &two;
	s-> getInfo(v);

	v = &three;
	s-> getInfo(v);
};
