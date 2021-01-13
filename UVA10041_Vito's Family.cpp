//UVA 10041 Vito's Family https://onlinejudge.org/external/100/p10041.pdf
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n, r, vito, sum;
	int s[500];
	cin>>n;
	while(n--){
		cin>>r;
		for(int i=0; i<r; i++){
			cin>>s[i];
		}
		sort(s, s+r);
		vito=s[r/2];
		sum=0;
		for(int i=0; i<r; i++){
			sum=sum+abs(vito-s[i]);
		}
		cout<<sum<<endl;
	}
	return 0;
}

