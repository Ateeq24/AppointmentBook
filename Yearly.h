#ifndef _YEARLY_H
#define _YEARLY_H
#include"Appointment.h"
#include<iostream>
#include<string>
class Yearly: public Appointment{

public:
	Yearly(string description, int day, int month, int yr, int hr, int min);
	void print() const;
	bool occurs_on(int day, int month, int year);
};
#endif