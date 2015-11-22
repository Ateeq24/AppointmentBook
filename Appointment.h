#ifndef _APPOINTMENT_H
#define _APPOINTMENT_H

#include<vector>
#include"Date.h"
#include<string>
#include<iostream>
//base class
class Appointment{
protected:
	Date getdate;//object
	string activity;
	int hrs;
	Date getDate();
	int mins;
	
public:
	Appointment(string description, int day, int month, int yr, int hr, int min);//constructor
	virtual void print() const;
	virtual bool occurs_on(int day, int month, int year)=0;
};
#endif