#include <iostream>
using namespace std;


int main(void){
	int i;
	//using loop to calculate number of eggs
	for(i=51; i<100; i++){
		if(i%2==0 && i%3==0 && i%5==3){							
			cout<<i<<endl;
			break;
		}
	}
	//calculating costs
	cout<<"the number of eggs were "<<i<<endl;
	cout<<"mahesh paid Rs."<<0.5*i<<endl;
	return 0;
}