//UVA10035 Primary Arithmetic https://onlinejudge.org/external/100/p10035.pdf
#include<iostream>
using namespace std;

int main(){
	int a, b, ans;
	while(cin>>a>>b){
		if(a==0 && b==0)
			break;
		ans=0;
		while(a>0 || b>0){
			if((a%10 + b%10)>=10){
				ans++;
				a=a/10+1;
				b/=10;
			}
			else{
				a/=10;
				b/=10;
			}
		}
		if(ans==0)
			cout<<"No carry opperation."<<endl;
		else if(ans==1)
			cout<<"1 carry operation"<<endl;
		else
			cout<<ans<<" carry operations"<<endl;
	}
	return 0;
}
