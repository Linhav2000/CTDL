#include<iostream>
using namespace std ;
int a[100] ;

int main()
{
	int t ;
	cin >> t ;
	while (t--)
	{
		int n, k  ;
		cin >> n >> k ;
		for (int i=1 ;i<=n ;i++){
			 a[i]= i ;
		}
		
	// in ra tap con ke tiep 
    int stop=1 ;
    while (stop==1){
    	for(int i=1;i<=k;i++){
		cout << a[i] ;
		}
	int i=k ;
	while (i>0&&a[i]==n-k+i){
		i-- ;
	}
	if(i>0){
		a[i]++ ;
		for(int j=i+1 ;j<=k;j++){
			a[j]=a[i]+j-i ;
		}
	 	}else {
		stop=0 ;
		//for(int i=1 ;i<=k ;i++){
		//	cout << i <<" " ;
		}
		
		cout << " " ;
	
	}
	cout << endl ;

}
	
}
