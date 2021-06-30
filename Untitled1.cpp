#include<iostream>
#include<stack>
using namespace std ;
int uT (char a){
	if(a=='(') return 0 ;
	if(a=='+' || a=='-') return 1 ;
	if(a=='*' || a=='/' || a=='%') return 3 ;
	if(a=='^') return 3 ;
}

int main(){
	int t ;
	cin >> t ;
	while (t--) {
		stack<char> linh ;
		string str ,str1 ;
		cin >> str ;
		int i=0 ;
		while(i<str.length()){
			char x=str[i] ;
			if (x -'0' >=0 && x-'0'<=9 || isalpha(x))
			{
				str1+=x ;
			}
			else {
				cout << str1 ;
				str1="" ;
				if (x=='('){
					linh.push(x);
				}
				else {
					if (x==')'){
						while(linh.top()!='('){
							cout << linh.top() ;
							linh.pop() ;
						}
						if (linh.top()=='(') linh.pop();
					}
					else {
						if (!linh.empty() && uT(x) <= uT(linh.top())){
							cout << linh.top() ;
							linh.pop() ;
							
						}
						linh.push(x) ;
					}
				}
			}
			i++ ;
		}
		if(str1!="") cout << str1 ;
		while (!linh.empty()){
			if (linh.top()!='(')
			cout << linh.top() ;
			linh.pop() ;
		}
	}
}
