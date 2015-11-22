#include "Monthly.h"
using namespace std;

Monthly::Monthly(string description, int day, int month, int yr, int hr, int min):Appointment(description,day,month,yr,hr,min){}//constructor

void Monthly:: print() const{
 Appointment::print();
  cout<<"(Monthly)\n";
}
bool Monthly:: occurs_on(int day, int month, int year){
	
	int d,y,m;
		
Date dobj=Appointment:: getDate();

	d=dobj.getDay();
    y=dobj.getYear();
	m=dobj.getMonth();

	if((d==day && m<month) || (day==d && month==m && year==y) )
		return true;
		
	else
		return false;
}


