#ifndef _MONTHLY_H
#define _MONTHLY_H
#include<iostream>
#include<string>
#include"Appointment.h"
class Monthly: public Appointment{

public:
	Monthly(string description, int day, int month, int yr, int hr, int min);
	void print() const;
	bool occurs_on(int day, int month, int year);
};
#endif