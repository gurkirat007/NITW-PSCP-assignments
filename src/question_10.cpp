#include <iostream>
using namespace std;

int main(void){
	float richter_scale;
	cout<<"Enter the Richter Scale Reading"<<endl;
	cin>>richter_scale;
	if(richter_scale<5){
		cout<<"Little or no damage"<<endl;
	}
	else if(richter_scale>=5 && richter_scale<5.5){
		cout<<"Some damage"<<endl;
	}
	else if(richter_scale>=5.5 && richter_scale<6.5){
		cout<<"Serious damage: walls may crack or fall"<<endl;
	}
	else if(richter_scale>=6.5 && richter_scale<7.5){
		cout<<"Disaster; houses and buildings may collapse"<<endl;
	}
	else if(richter_scale>=5){
		cout<<"Catastrophe: most buildings destroyed"<<endl;
	}
	return 0;
}



/* it could have been handled with switch statement if the ranges of richter
scale given in this question were integer */