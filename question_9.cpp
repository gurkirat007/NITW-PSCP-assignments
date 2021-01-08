#include <iostream>
using namespace std;


int main(void){
	char position_code;
	float basic_pay;
	float gross_salary;
	float travelling_allowance;
	char gender;
	// cout<<"what is you gender?"<<endl;
	// cout<<"A. Male"<<endl;
	// cout<<"B. Female"<<endl;
	// cin>>gender;
	// gender=tolower(gender);
	// switch(gender){
	// 	default:
	// 		cout<<"enter valid input"<<endl;
	// 		return 1;
	// 	case 'a':
	// 		travelling_allowance=0;
	// 		break;
	// 	case 'b':
	// 		travelling_allowance=0.05*basic_pay;
	// 		break;
	// }
	cout<<"Enter your faculty position code."<<endl;
	cout<<"A. Professor"<<endl;													//position code=A
	cout<<"B. Associate Professor"<<endl;										//position code=B
	cout<<"C. Assistant Professor"<<endl;										//position code=C
	cin>>position_code;
	position_code=tolower(position_code);
	switch(position_code){
		default:
			cout<<"enter valid input"<<endl;
			return 1;
			
		case 'a':
			basic_pay=40000;
			cout<<"what is you gender?"<<endl;
	cout<<"A. Male"<<endl;
	cout<<"B. Female"<<endl;
	cin>>gender;
	gender=tolower(gender);
	switch(gender){
		default:
			cout<<"enter valid input"<<endl;
			return 1;
		case 'a':
			travelling_allowance=0;
			break;
		case 'b':
			travelling_allowance=0.05*basic_pay;
			break;
	}
			gross_salary=basic_pay+0.55*basic_pay+0.3*basic_pay+0.1*basic_pay+travelling_allowance;
			// cout<<"your gross salary is Rs "<<gross_salary<<endl;
			break;

		case 'b':
			basic_pay=30000;cout<<"what is you gender?"<<endl;
	cout<<"A. Male"<<endl;
	cout<<"B. Female"<<endl;
	cin>>gender;
	gender=tolower(gender);
	switch(gender){
		default:
			cout<<"enter valid input"<<endl;
			return 1;
		case 'a':
			travelling_allowance=0;
			break;
		case 'b':
			travelling_allowance=0.05*basic_pay;
			break;
	}
			gross_salary=basic_pay+0.5*basic_pay+0.25*basic_pay+0.1*basic_pay+travelling_allowance;
			// cout<<"your gross salary is Rs "<<gross_salary<<endl;
			break;

		case 'c':
			basic_pay=20000;
			cout<<"what is you gender?"<<endl;
	cout<<"A. Male"<<endl;
	cout<<"B. Female"<<endl;
	cin>>gender;
	gender=tolower(gender);
	switch(gender){
		default:
			cout<<"enter valid input"<<endl;
			return 1;
		case 'a':
			travelling_allowance=0;
			break;
		case 'b':
			travelling_allowance=0.05*basic_pay;
			break;
	}
			gross_salary=basic_pay+0.45*basic_pay+0.2*basic_pay+0.1*basic_pay+travelling_allowance;
			// cout<<"your gross salary is Rs "<<gross_salary<<endl;
			break;


	}
	cout<<"your gross salary is Rs "<<gross_salary<<endl;
return 0;

}