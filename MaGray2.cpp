#include<iostream>
#include<string>
using namespace std ;
char flip(char c) { 
	if(c=='0') return '1';
	return '0';

	}

int main(){
	int t ;
	cin >> t ;
	while(t--){
		string s ,linh;
		cin >> s ;
		linh+=s[0] ;
	
    for (int i = 1; i < s.length(); i++) {
        // neu bit hien tai la 0If current bit is 0, concatenate
        // previous bit
        if (s[i] == '0') //// neu bit hien tai la 0
            linh += linh[i - 1];//noi voi bit truoc do 
        else //neu bit hien tai la 1
        	//chuyen thanh 1 va noi voi bit truoc do
            linh += flip(linh[i - 1]);
	}
		cout << linh << endl ;
		
		
		
		
	}
}
