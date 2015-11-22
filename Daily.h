#ifndef _DAILY_H
#define _DAILY_H
#include<string>
#include"Appointment.h"
#include<vector>
#include<iostream>

using namespace std;
class Daily: public Appointment{
	
public:
	 Daily(string description, int d, int m, int y, int hr, int min);//constructor gives value to the base class constr too
	 void  print() const;
     bool  occurs_on(int day, int month, int year);
};
#endif
