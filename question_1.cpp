#include <iostream>
using namespace std;

int main(void){
	int expected_date, expected_month, expected_year;
	int actual_date,actual_month, actual_year;
	cout<<"enter expected date month and year as space separated integers in the format DD MM YYYY"<<endl;
	cin>>expected_date>>expected_month>>expected_year;
	//to check if number entered is valid
	if(expected_month>12 || expected_date>31){
		cout<<"please enter valid date"<<endl;	
		return 1;
	}
	cout<<"enter actual date month and year as space separated integers in the format DD MM YYYY"<<endl;
	cin>>actual_date>>actual_month>>actual_year;
	if(actual_month>12 || expected_date>31){
		cout<<"please enter valid date"<<endl;
		return 1;
	}
	//fine of rs 1000 if year is different
	if(expected_year!=actual_year){
		cout<<"your fine is Rs.1000"<<endl;	
	}
	//fine of 50rs per month if months is diff
	else if(expected_month!=actual_month && expected_year==actual_year){
		cout<<"your fine is Rs."<<50*(actual_month-expected_month)<<endl;
	}
	//fine of rs 15 per day
	else if(expected_date!=actual_date && expected_month==actual_month && expected_year==actual_year){
		cout<<"your fine is Rs."<<15*(actual_date-expected_date)<<endl;
	}
	//no fine
	else if(expected_date==actual_date && expected_month==actual_month && expected_year==actual_year){
		cout<<"no fine due."<<endl;
	}
	return 0;
}
