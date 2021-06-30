#include<iostream>
#include<string>
using namespace std ;

int main(){
	int t ;
	cin >> t ;
	while(t--){
	string a ;
	cin >> a ;
	
	int i=a.size();
	while (i>=0&&a[i]!='1'){
		i-- ;
	}
	if (i>=0)
	{
		a[i]='0';
		for (int j=i+1 ;j<a.size();j++)
		{
	            a[j]='1';
		}
	}
	else {
	for (int j=0 ;j<a.size() ;j++)
	{
		a[j]='1';
	} }
	cout << a ;
	cout << endl ;
	}
}
