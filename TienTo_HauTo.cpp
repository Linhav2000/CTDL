#include<iostream>
#include<string>
#include<stack>
using namespace std ;

int UT(char a) {
	if (a=='(') return 0 ;
	if (a=='+' || a=='-') return 1 ;
	if (a=='*' || a== '/' || a=='%')  return 2 ;
	if (a=='^') return 3 ;
}
int main(){
	int t ;
	cin >> t;
	while (t--){
		string s ;
		getline(cin , s) ;
		string log ;
		stack<char> linh ;
		int i =0 ;
		
		while (i< s.length() ){
			char str = s.at(i) ;
			
			if ( str != ' '){
				if (str =='('){
					linh.push(str) ;
					cout << str ;
					}
				else if (str -'0'>=0 && str -'0' <= 9 || isalpha(str) ){
					log +=str ;
					}
				else if (str == ')'){
					while (linh.top() !='('){
					log+=linh.top() ;
					linh.pop() ;
				   }
				  // linh.pop() ;
					}
				else {
					if(UT(str) <= UT(linh.top())){
						log+=linh.top() ;
						linh.pop() ;
					}
					linh.push(str) ;
				}   
				
	}
			
			i++ ;
		}
		for (int i=0 ;i < log.size();i++){
			 cout << log[i] ;
		}
		
	
	}
}



