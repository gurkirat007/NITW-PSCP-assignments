#include <iostream>
using namespace std;


int main(void){
	float boiling_water=100;
	float boiling_gold=2660;
	float boiling_mercury=357;
	float boiling_copper=1187;
	float boiling_silver=2193;
	float boiling_point;
	cout<<"Enter the observed boiling point in °C"<<endl;
	cin>>boiling_point;
	if(0.95*boiling_water<=boiling_point && 1.05*boiling_water>=boiling_point){
		cout<<"The substance is Water"<<endl;
	}
	else if(0.95*boiling_mercury<=boiling_point && 1.05*boiling_mercury>=boiling_point){
		cout<<"The substance is Mercury"<<endl;
	}
	else if(0.95*boiling_gold<=boiling_point && 1.05*boiling_gold>=boiling_point){
		cout<<"The substance is Gold"<<endl;
	}
	else if(0.95*boiling_copper<=boiling_point && 1.05*boiling_copper>=boiling_point){
		cout<<"The substance is Copper"<<endl;
	}
		else if(0.95*boiling_silver<=boiling_point && 1.05*boiling_silver>=boiling_point){
		cout<<"The substance is Silver"<<endl;
	}
	else{
		cout<<"Unknown substance"
	}
	return 0;
}