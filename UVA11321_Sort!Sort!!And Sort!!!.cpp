//UVA11321 Sort!Sort!!And Sort!!! https://onlinejudge.org/external/113/11321.pdf
#include<iostream>
#include<algorithm>
using namespace std;

int n, m, N[10005];
bool cmp(int a, int b){
	int aOdd=abs(a%2), bOdd=abs(b%2);
	if(a%m != b%m) return a%m < b%m;
	else if(aOdd != bOdd) return aOdd>bOdd;
	else if(aOdd) return a>b;
	else return a<b;
}

int main(){	
	while(cin>>n>>m){
		if(n==0 && m==0)
			break;
		cout<<n<<" "<<m<<endl;
		for(int i=0;i<n;i++)
			cin>>N[i];
		sort(N,N+n,cmp);
		for(int i=0;i<n;i++)
			cout<<N[i]<<endl;
	}
	return 0;
}
