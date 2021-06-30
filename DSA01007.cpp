#include<iostream>

using namespace std;

int n;
int A[100];

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
			
		for(int i=1; i<=n; i++){
			A[i]=0;
		}
		int s = 1;
		while(s== 1){
			
			}
			
			cout << " ";

			int i=n;					
			while(i>=0&&A[i]==1){	
				A[i]=0;		
				i--;
			}
			if(i>=0){
				A[i]=1;
				
			}else s = 0;
			for(int i=1; i<=n; i++){
				if(A[i]==0) cout << "A";
				else cout << "B";
		}
		cout << endl;
	}
	
}
