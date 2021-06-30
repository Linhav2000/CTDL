#include<iostream>
using namespace std ;
int n ,k ;
int a[100];
int main()
{

int t ;
cin >> t;
while (t--)
{
	cin >> n ;
	cin >> k ;
	// cho mang dau tien bang khon
	for(int i=1 ;i<=n ;i++)
	{
		a[i]=0 ;
	}
	//  in ra sau tiep theo 
	int stop =1 ;

	while(stop==1){
		int dem=0 ;
	  for (int i=1 ;i<=n ;i++)
	  {
	  	if(a[i]==1) dem++ ;}
	  	if (dem==k)
	  	{
	  		for (int i=1 ;i<=n ;i++)
	  		{
	  			cout << a[i] ;
	  			
			  }
			cout << endl ;
		  }
	  
	// sinh xau nhi phan
	int i=n ;
	while(i>0&&a[i]!=0)
	{
		i-- ;
	}
	if(i>0)
	{
		a[i]=1 ;
		for (int j=i+1 ;j<=n ;j++)
		{
			a[j]=0 ;
		}
	} else stop=0 ;
}

}
}
