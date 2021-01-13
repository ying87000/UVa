// UVA10929 You can say 11 https://onlinejudge.org/external/109/10929.pdf
#include<iostream>
using namespace std;

int main(){
	int n;
	while(cin>>n){
		if(n==0)
			break;
		else if(n%11==0)
			cout<<n<<" is a multiple of 11."<<endl;
		else
			cout<<n<<" is not a multiple of 11."<<endl;
	}
	return 0;
}
