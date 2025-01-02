#include <iostream>
#include <string>
using namespace std;
int main()
{	
	string a,b;
	cin>>a>>b;//c.strlen()    c++ string.length()
	int N1=a.length(),N2=b.length();
	if(N1>N2) cout<<1;
	else if(N2>N1) cout<<-1;
	else{//c:strcmp c++:compare
		cout<<a.compare(b);
	}
}
