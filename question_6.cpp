#include <iostream>
using namespace std;

int main(void){
	float age, distance_to_travel;
	cout<<"enter your age"<<endl;
	cin>>age;
	if(age<5){
		cout<<"no fare for you!!enjoy your ride"<<endl;
		return 0;
	}
	cout<<"enter distance to be travelled"<<endl;
	cin>>distance_to_travel;
	if(age>=60){
		cout<<"your fare is Rs "<<0.6*0.5*distance_to_travel<<" Enjoy your ride!!"<<endl;
	}
	else if(age<60 && age>=5){
		cout<<"your fare is Rs "<<0.5*distance_to_travel<<" Enjoy your ride!!"<<endl;
	}
	return 0;
}