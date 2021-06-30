#include<iostream>
using namespace std ;

int main(){
	int t ;
	cin >>t ;
	while(t--){
		string s ,linh ;
		cin >> s ;
		for (int i=s.size()-1 ;i>=1;i--){
			if(s[i]=='1') {
				if(s[i-1]=='1') linh='0'+linh ;
				else linh='1'+linh;
			}
			else linh=s[i-1]+linh;
		}
		linh=s[0]+linh ;
		cout << linh ;
	}
}
