#include<bits/stdc++.h>
using namespace std ;

int main (){
	int t ;
	cin >> t ;
	while (t--){
	 string s ;
	 cin >> s;
	 stack <char> linh ;
	 for (int i=0 ;i<s.size();i++){
	 	if(s[i]=='(' || s[i]==')' && linh.size()==0) linh.push(s[i]) ;
	 	else if (s[i]==')'){
	 		if (linh.top()=='(' && linh.size()> 0) linh.pop() ;
	 		else linh.push(s[i]) ;
		 }
	 }
	 int a=0 , b=0 ;
	 while(linh.size()>0){
	 if (linh.top()=='(') a++ ;
	 else b++;
	 linh.pop() ;
	}
	 int c=a/2+b/2+a%2+b%2 ;

	 cout << c << endl ;
	}
}
