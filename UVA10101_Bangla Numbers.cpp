//UVA10101 Bangla Numbers
#include<iostream>
using namespace std;

int main(){
	long long int n, i=1;
	while(cin>>n){
		cout<<i<<". ";
		i++;
		if(n/10000000!=0){
			cout<<(n/10000000)<<" kuti ";
			n=n%10000000;
		}
		if(n/100000!=0){
			cout<<(n/100000)<<" lakh ";
			n=n%100000;
		}
		if(n/1000!=0){
			cout<<(n/1000)<<" hajar ";
			n=n%1000;
		}
		if(n/100!=0){
			cout<<(n/100)<<" shata ";
			n=n%100;
		}
		cout<<n<<endl;
	}
	return 0;
}
