#include<iostream>
#include<string>

using namespace std;




int main(){
	int t;
	cin >> t;
	while(t--){	
	string A;
	cin >> A;
	//sinh xau truoc do
	int i=A.size();							//tro i den vi tri cuoi cung
	while(i>=0&&A[i]!='1'){					//tim vi tri so 1 dau tien khi duyet tu cuoi den dau
		i--;
	}
	if(i>=0){
		A[i]='0';							//doi i tai vi tri do thanh 0
		for(int j=i+1; j<A.size(); j++){	//doi cac vi tri sau i thanh 1(tu i+1 den cuoi)
			A[j]='1';
			}
		}else{
		for(int j=0; j<A.size(); j++){		//doi cac vi tri sau i thanh 1(tu i+1 den cuoi) TH 00000
			A[j]='1';
			}
	}
		
		cout << A;
		cout << endl;
	}
}
