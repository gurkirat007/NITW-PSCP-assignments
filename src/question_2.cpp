#include <iostream>
using namespace std;

int main(void){
	char mode_of_travel;
	cout<<"how do you want to travel home sir!!"<<endl;
	cout<<"A. Car"<<endl;
	cout<<"B. Bus"<<endl;
	cout<<"C. Train"<<endl;
	cin>>mode_of_travel;
	mode_of_travel=tolower(mode_of_travel);
	switch(mode_of_travel)
	{
		case 'a':
			cout<<"you will directly reach your house"<<endl;
			break;

		case 'c':
			cout<<"you have 3 choices now\n A.cab\n B.bike\n C.auto"<<endl;
			cin>>mode_of_travel;
			mode_of_travel=tolower(mode_of_travel);
			switch(mode_of_travel)
			{
				case 'a':
					cout<<"you need to use bike again"<<endl;
					char mode;
					cout<<"press B to use bike"<<endl;
					cin>>mode;
					if(mode=='b' || mode=='B'){
						cout<<"you reached your home!!enjoy!!"<<endl;
					}
					break;

				case 'b':
					cout<<"you reached your home!!enjoy!!"<<endl;
					break;

				case 'c':
					cout<<"you reached your home!!enjoy!!"<<endl;
					break;
			}
		break;

		case 'b':
			cout<<"you need to get down at Uppal and choose from\nA.auto\nB.bike\n";
			cin>>mode_of_travel;
			mode_of_travel=tolower(mode_of_travel);
			switch(mode_of_travel)
			{
				case 'a':
					cout<<"you reached your home!!enjoy!!"<<endl;
					break;

				case 'b':
					cout<<"you reached your home!!enjoy!!"<<endl;
					break;
			}
	}
return 0;
}