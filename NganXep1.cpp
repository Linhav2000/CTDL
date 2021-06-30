#include<bits/stdc++.h>
using namespace std ;

int main(){
	stack<int> linh ;
        int t ;
        cin >> t ;
        
		
		
		while( t-- ){
		string s ;
		cin >> s ;
		if(s == "PUSH"){
			int  n ;
			cin >> n ;
			linh.push(n) ;
			
		}
		else if(s=="PRINT"){
			if (linh.size() == 0){
				cout << "NONE" ;
				cout << endl ;
			}
			else {
				cout << linh.top() ;
			cout << endl ;
			}
		}
		else if(s=="POP")
		{   
		    if(linh.size()== 0) continue ;
		    else {
		
			linh.pop()  ;}
			}
			
		}
		}
		 	


	
	

