#include <iostream>

using namespace std;

int recursivePower(int x,int n)
{
    if(n==0)
        return 1;
    return x*recursivePower(x,n-1);
}

int main(){
		cout<<recursivePower(5,2);
		return 0;
}