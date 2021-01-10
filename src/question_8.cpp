#include <iostream>
using namespace std;


int main(void){
	char vehicle_type;
	float hours_in_parking;
	cout<<"Enter your vehicle type"<<endl;
	cout<<"B. bus"<<endl;
	cout<<"C. car"<<endl;
	cout<<"M. motorbike"<<endl;
	cin>>vehicle_type;
	//to accept both upper and lower case letters
	vehicle_type=tolower(vehicle_type);
	cout<<"Enter hours spent in parking lot"<<endl;
	cin>>hours_in_parking;
	//to calculate price based on vehicle type
	switch(vehicle_type)
	{
		case 'c':
			cout<<"your parking charges are Rs "<<10*hours_in_parking<<endl;
			break;

		case 'm':
			cout<<"your parking charges are Rs "<<5*hours_in_parking<<endl;
			break;

		case 'b':
			cout<<"your parking charges are Rs "<<50*hours_in_parking<<endl;
		    break;

	}



return 0;
}