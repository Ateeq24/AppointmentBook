#ifndef _ONETIME_H
#define _ONETIME_H

#include"Appointment.h"
#include<string>
#include<vector>
#include<iostream>
class OneTime: public Appointment{

public:
	OneTime(string description, int day, int month, int yr, int hr, int min);
	void print() const;
	bool occurs_on(int day, int month, int year);
};
#endif