//#include<iostream>
//#include<stack>
//#include<algorithm>
#include<bits/stdc++.h>
using namespace std ;
int main(){
	int t ;
	cin >> t ;
	while (t--){
		string s;
		cin >> s ;
		stack<int> linh ; 
		int res=0 ;
	//	linh.push(-1) ;
		for (int i=0 ;i< s.size();i++){
			if (s[i]=='('){
				linh.push(i) ;
			}else {
				if (!linh.empty()){
				
					linh.pop() ;
					res++ ;
				}
				//if (linh.empty()){
				//	linh.push(i) ;
				//}
				}
				
			}
			cout  << 2*res << endl ;
		}
		
	}

