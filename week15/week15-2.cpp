//使用Java的考生請注意，最外層的類別(class)需命名為 main 。
//請務必關閉【防毒軟體】的【即時防毒】，症狀為【TLE】或【NO-OUTPUT】。
//如果遇到超乎想像的狀況，請更改編譯器試看看!! 各編譯器特性不同!!
//預設測資、隨機測資、固定測資是用來幫助除錯用的。批改時，只看暗中測資是否通過!!
//使用Python的考生請注意，請移除所有中文註解後才批改繳交。
//如果遇到上傳失敗，有可能是遇到貴校檢查網路內容【貴校網路臨檢】，可將 java.util 斷開成 java .util(即在java與.util中間加空白) 即可上傳。
#include <iostream> 
#include <string>
using namespace std;
int main()
{
	string hellow;
	int t=1;
	while(cin>>hellow){
		if(hellow=="#") break;
		cout<<"Case "<<t<<": ";
		if(hellow=="HELLO") cout<<"ENGLISH\n";
		else if(hellow=="HOLA") cout<<"SPANISH\n";
		else if(hellow=="HALLO") cout<<"GERMAN\n";
		else if(hellow=="BONJOUR") cout<<"FRENCH\n";
		else if(hellow=="CIAO") cout<<"ITALIAN\n";
		else if(hellow=="ZDRAVSTVUJTE") cout<<"RUSSIAN\n";
		else cout<<"UNKNOWN\n";
		t++;
	}

}