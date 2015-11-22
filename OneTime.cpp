

#include"OneTime.h"
OneTime:: OneTime(string description, int d, int m, int y, int hr, int min): Appointment(description,d,m,y,hr,min){



}

void OneTime:: print() const{
	Appointment::print();
    cout<<" (One Time)\n";
}

bool OneTime:: occurs_on(int day, int month, int year){
	{

		int d,y,m;
		
Date dobj=Appointment:: getDate();

	d=dobj.getDay();
    y=dobj.getYear();
	m=dobj.getMonth();
    if(day==d && month==m && y==year)
		return 1;
	else 
		return 0;
}
	}