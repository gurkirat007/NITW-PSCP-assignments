#include <iostream>
using namespace std;


int main(void){
	float distance_start, distance_end, distance_travelled, fuel_consumed, fuel_start, fuel_end, mileage;
	cout<<"enter odometer reading in km at start"<<endl;
	cin>>distance_start;
	cout<<"enter odometer reading in km at end"<<endl;
	cin>>distance_end;
	cout<<"enter fuel meter reading in liter at start"<<endl;
	cin>>fuel_start;
	cout<<"enter fuel meter reading in liter at end"<<endl;
	cin>>fuel_end;
	//calculating distance travelled
	distance_travelled=distance_end-distance_start;
	//calculating fuel consumption
	fuel_consumed=fuel_start-fuel_end;
	//calculating mileage
	mileage=distance_travelled/fuel_consumed;
	cout<<"fuel used in liter="<<fuel_consumed<<endl;
	cout<<"distance travelled in km="<<distance_travelled<<endl;
	cout<<"mileage in km/l="<<mileage<<endl;
	return 0;

}