#include<iostream>
#include<string>
#include<vector>
#include "Appointment.h"
#include "OneTime.h"
#include "Daily.h"
#include "Monthly.h"
#include "Yearly.h"
using namespace std;

void checkAppointments(vector<Appointment*>& apptbook){
	int d=0;
	int m=0;
	int y=0;
	cout<<"Enter date (dd mm yyyy): ";
	cin>>d;
	cin>>m;
	cin>>y;
	cout<<"Appointments on "<<d<<"/";
	cout<<m<<"/";
	cout<<y<<"\n";

	for(int i=0;i<apptbook.size();i++){
      if(apptbook[i]->occurs_on(d,m,y)==true){
          apptbook[i]->print();
}	
	}
}
//ask the user for input
vector<int> userinput(){
	vector<int> user;
	int d=0;
	int y=0;
	int m=0;
	int hour=0;
	int minutes=0;

	cout<<"Enter date and time (dd mm yyyy hr min): ";
	cin>>d>>m>>y>>hour>>minutes;
	cin.ignore();
	user.push_back(d);
	user.push_back(m);
	user.push_back(y);
	user.push_back(hour);
	user.push_back(minutes);

	return user;
}

void addAppointment(vector<Appointment*>& apptbook){
	vector<int> input;//store the input from the user
	string  activity;
	int activityType;
	input=userinput();//ask the user input and returns vector

	cout<<"Enter description:\n";
	getline(cin,activity);

	cout<<"Enter appointment type: (1) for one-time, (2) for daily, (3) for monthly, (4) for yearly: ";
	cin>>activityType;
	cin.ignore();

	if(activityType== 1){
		OneTime* oT=new OneTime(activity,input[0],input[1],input[2],input[3],input[4]);
		apptbook.push_back(oT);
	}
	else if(activityType== 2){
		Daily* daIly=new Daily(activity,input[0],input[1],input[2],input[3],input[4]);
		apptbook.push_back(daIly);
	}
	else if(activityType== 3){
		Monthly* mnthly=new Monthly(activity,input[0],input[1],input[2],input[3],input[4]);
		apptbook.push_back(mnthly);
	}
	else if(activityType== 4){
		Yearly* yerly=new Yearly(activity,input[0],input[1],input[2],input[3],input[4]);
		apptbook.push_back(yerly);
	}
	else
		cout<<"sorry wrong input\n";

}

int main(){

	vector<Appointment*> apptbook;

	char option;

	do {
		cout << "********** Appointment Book Application ************" << endl<< endl;
		cout << "(a) See all appointments on a given day." << endl;
		cout << "(b) Add an appointment." << endl << endl;
		cout << "Enter an option or 'q' to quit: ";

		cin >> option;
		switch(option){
		case 'a': 
			checkAppointments(apptbook);
			break;
		case 'b':
			addAppointment(apptbook);
			break;
		case 'q':
			break;
		default:
			cout << "You entered an invalid option.  Try again!";    
		}
		cout << endl;
	}
	while(option != 'q');

	// Cleaning up 

	for(int i = 0; i < apptbook.size(); i++){
		delete apptbook[i];
	}
	apptbook.clear();


	return 0;
}