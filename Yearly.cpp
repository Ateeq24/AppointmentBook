#include"Yearly.h"
using namespace std;

Yearly::Yearly(string description, int day, int month, int yr, int hr, int min):Appointment(description,day,month,yr,hr,min){


}

void Yearly:: print() const{
 Appointment::print();

  cout<<"(Yearly)\n";
}


bool Yearly:: occurs_on(int day, int month, int year){
	int d,y,m;
		Date dobj=Appointment:: getDate();

	d=dobj.getDay();
    y=dobj.getYear();
	m=dobj.getMonth();

	if((d==day && m==month && y<year) || (day==d && month==m && year==y))
		return true;
	else
		return false;

}
