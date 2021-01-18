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
//taking inputs
//now taking lcm
	for(i=1; i<=b*d; i++){
		if(i%b==0 && i%d==0){
			lcm=i;									
			break;
		}
	}
//calculating initial numerator
	int numerator=(a*lcm/b+c*lcm/d);

	
//reducing to lowest form
	for(int i=2; i<=lcm;i++){
		while(numerator%i==0 && lcm%i==0){				
			numerator=numerator/i;
			lcm=lcm/i;						
		}
	}
	cout<<"sum="<<numerator<<"/"<<lcm<<endl;
	return 0;
}