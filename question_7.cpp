#include <iostream>
using namespace std;


int main(void){
	//putting in data
	float boiling_water=100;
	float boiling_gold=2660;
	float boiling_mercury=357;
	float boiling_copper=1187;
	float boiling_silver=2193;
	float boiling_point;
	cout<<"Enter the observed boiling point in °C"<<endl;
	//user input
	cin>>boiling_point;
	//water
	if(0.95*boiling_water<=boiling_point && 1.05*boiling_water>=boiling_point){
		cout<<"The substance is Water"<<endl;
	}
	//mercury
	else if(0.95*boiling_mercury<=boiling_point && 1.05*boiling_mercury>=boiling_point){
		cout<<"The substance is Mercury"<<endl;
	}
	//gold
	else if(0.95*boiling_gold<=boiling_point && 1.05*boiling_gold>=boiling_point){
		cout<<"The substance is Gold"<<endl;
	}
	//copper
	else if(0.95*boiling_copper<=boiling_point && 1.05*boiling_copper>=boiling_point){
		cout<<"The substance is Copper"<<endl;
	}
	//silver
		else if(0.95*boiling_silver<=boiling_point && 1.05*boiling_silver>=boiling_point){
		cout<<"The substance is Silver"<<endl;
	}
	else{
		cout<<"Unknown substance"
	}
	return 0;
}