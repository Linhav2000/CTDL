#include<stdio.h>
int So(int n){
	int sd,sc;
	sc = n%10;
	while(n>=10){
		n = n/10;
	   
    } sd = n;
    if(sd == sc){
		printf("YES");
	}else{
		printf("NO");
	}

   printf("\n") ;
} 

int main(){
	int t;
	 scanf("%d",&t);
	while(t--){
		int  n;
		scanf("%d",&n);
		So(n);
	} 
	
   return 0;	
}
