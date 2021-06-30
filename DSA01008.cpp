//xau nhi phan co k bit 1
#include<iostream>

using namespace std;

int n,k;
int A[100];

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		cin >> k;
			//khoi tao xau dau tien_000				00000-00010-....-11111
		for(int i=1; i<=n; i++){
			A[i]=0;
		}
		int stop = 1;
		while(stop == 1){
			//in xau tiep theo 
			int dem = 0;
			for(int i=1; i<=n; i++){
				if(A[i]==1) dem ++;
			}
			
			if(dem == k){
				for(int i=1; i<=n; i++) cout << A[i];
				cout << endl;
			}
			
			
			//sinh xau tiep theo
			int i=n;						//tro i den vi tri cuoi cung
			while(i>0&&A[i]!=0){			//tim vi tri so 0 dau tien khi duyet tu cuoi den dau
				i--;
			}
			if(i>0){
				A[i]=1;						//doi i tai vi tri do thanh 1
				for(int j=i+1; j<=n; j++){	//doi cac vi tri sau i thanh 0(tu i+1 den cuoi)
				A[j]=0;
				}
			}else stop = 0;
		}
		cout << endl;
	}
	return 0;
}
