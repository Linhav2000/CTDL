#include<iostream>
using namespace std ;
int a[100] ;
int main(){
	int n ;
	cin >> n ;
	
	int tong = n ;
	int tich= 1 ;
	while(tong != 0 ){
		tich=tich*(tong%10);
		tong=tong/10;
	}
	cout << tich ;	

}
