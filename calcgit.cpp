#include<bits/stdc++.h>

using namespace std;

int main(){
	int a,b, res;

	cout<<"enter input variables";
	cin>>a;
	cin>>b;
	cout<<"Menu\n";
	cout<<"1.addition\n";
	cout<<"2.Subtraction\n";
	cout<<"3.Multiplication\n";
	cout<<"enter your choice(numbers only)\n";
	int ch;
	cin>>ch;

	switch(ch){

	case 1: cout<<"sum of digits is\n";
				res = a+b;
				cout<<res;
				break;

	/*case 2: cout<<"subtraction is";
				if(a>b)
				res = a-b;
					else
					res = b-a;

					cout<<res;
					break;
*/
	case 3: cout<<"MUltiplication is\n";
				res = a*b;
				cout<<res;
				break;

	case 4: cout<<"Division is\n";
			if(a>b)
			res = a/b;
				else
				res = b/a;

				cout<<res;
				break;

	default: cout<<"invalid choice entered";
				break;

	}
	return 0;
}										