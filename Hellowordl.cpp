#include<stdio.h>
/*int kiemtra(int a,int b)
{
	if(a>=1000||b>=1000)
	{
		return 0;
	}
	return 1;
}*/
int main()
{
	 int a,b;
	 float chia;
	scanf("%d ",&a);
	scanf("%d",&b);
	if(a>0&&a<1000&&b>0&&b<1000){
			printf("%d ",a+b);
			printf("%d ",a-b);
			printf("%d ",a*b);
			chia=1.0*(a/b);
			printf("%0.2f ",chia);
			printf("%d",a%b);
			}else printf ("0") ; 
			        
	}
