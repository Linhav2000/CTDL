#include<iostream>
using namespace std ;
int a[100] ;
int main()
{
	int t ;
	cin >> t ;
	
		while (t--){
			int n ,k ;
		cin >> n >> k ;
		for (int i=1 ; i<=k ;i++){
			cin >> a[i] ;
		}
// sinh to hop 
 		int i=k ;	// xuat phat tu cuoi phan tu minh nhap vao
 		while (i>0&&a[i]==n-k+i){
 			i--;
		 }
		 if (i>0){
		 	a[i]++ ;
		 	for (int j=i+1 ;j<=k ;j++){
		 		a[j]=a[i]+j-i ;
				 }
		 		for (int h=1 ;h<=k ;h++){
		 		cout << a[h] << " ";
		 		 }
		 
		 }else{
		 	for (int i=1 ;i<=k ;i++){
		 		cout << i<<" " ;
			 }
		 }
		 cout << endl ;
 
		}
	
}

