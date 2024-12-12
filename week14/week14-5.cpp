#include <iostream>
using namespace std;
int main()
{
	int a,b;//step1 input
	while(cin>>a>>b){
		while(a>0){
			cout<<a<<" ";
			a=a/b;
		}
		cout<<"Boring!\n";
	}

}