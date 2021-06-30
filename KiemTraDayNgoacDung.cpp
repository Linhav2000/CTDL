#include<bits/stdc++.h>
using namespace std ;
int main(){
	int t ;
	cin >> t ;
	while(t--){
		string s ;
		cin >> s ;
		stack<char> linh ;
		bool ok=true ; // ban dau cho day ngoac luon dung 
		for(int i=0 ;i<s.size();i++){
			if(s[i]=='{' || s[i]=='[' || s[i]=='('){   // neu gap mot trong ba ngoac mo thi them vao stack
				linh.push(s[i]) ;
			}   else if (s[i]=='}'){                        // neu gap ngoac nhon dong
					if(linh.size()==0){                // set stack xem con ngoac mo nao khong
						ok=false ;                     // khong co thi tra ve sai
					}else if(linh.top()=='{') linh.pop() ;   // neu co thi kiem tra co phai ngoac mo nhon hay khong ( co thi vat di )
					
				}else if(s[i]==']'){
						if(linh.size()==0){
							ok=false ;
						}else if(linh.top()=='[') linh.pop() ;
						
				}else if(s[i]==')'){
						if(linh.size()==0){
							ok=false ;
						}else if(linh.top()=='(') linh.pop() ;
						
						
				}
			}
		
	
if (linh.size()>0) ok=false ;
if(ok) cout << "YES" ;
else cout << "NO";
}
}
