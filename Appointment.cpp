#include"Appointment.h"
using namespace std;

Appointment::Appointment(string description, int day, int month, int yr, int hr, int min):  getdate(day,month,yr){
            
             hrs=hr;
			 mins=min;
			 activity=description;
          
}
//print function has to be defined
void Appointment :: print() const{
	if(mins!=0)
	{
		cout<<hrs<<":"<<mins<<" ->"<<" "<<activity;
	}
	
	if(mins==0){
	cout<<hrs<<":"<<mins<<"0"<<" ->"<<" "<<activity;
	}
	
}
Date Appointment:: getDate(){

   return getdate;
}
