#include"Daily.h"
using namespace std;

Daily::Daily(string description, int day, int month, int yr, int hr, int min):Appointment(description,day,month,yr,hr,min){


}

   void Daily:: print() const{
   Appointment::print();
   cout<<" (Daily)\n";
}

   bool Daily:: occurs_on(int day, int month, int year){
		int d,y,m;
		
Date dobj=Appointment:: getDate();

	d=dobj.getDay();
    y=dobj.getYear();
	m=dobj.getMonth();

	if((month>m && year>=y) || (day==d && month==m && year==y))
		return true;
	else
		return false;

}
