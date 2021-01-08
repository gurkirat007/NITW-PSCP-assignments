#include <iostream>
using namespace std;


int main(void)
{
	int a, b, c, d, lcm, i;
	char e;
	cout<<"Enter first fraction in the form of a/b."<<endl;
	cin>>a>>e>>b;
	cout<<"Enter second fraction in the form of a/b."<<endl;
	cin>>c>>e>>d;

	for(i=1; i<=b*d; i++){
		if(i%b==0 && i%d==0){
			lcm=i;									
			break;
		}
	}
	int numerator=(a*lcm/b+c*lcm/d);

	
	int common_factor;
	for(int i=2; i<=lcm;i++){
		while(numerator%i==0 && lcm%i==0){				
			numerator=numerator/i;						
		}
	}
	cout<<"sum="<<numerator<<"/"<<lcm<<endl;
	return 0;
}