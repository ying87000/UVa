//UVA100 The 3n+1 problem 
#include<iostream>
using namespace std;

int f(int n){
	int cys=1;
	while(n>1){
		if(n%2==0)
			n/=2;
		else
			n=3*n+1;
		cys++;
	}
	return cys;
}

int main(){
	int i, j, ans, max;
	while(cin>>i>>j){
		cout<<i<<" "<<j<<" ";
		if(i>j){		//¦pªG i>j«hi,j¤¬´« 
			int tmp=i;
			i=j;
			j=tmp;
		}
		max=0;
		for(int x=i; x<=j; x++){
			ans=f(x);
			if(ans>max){
				max=ans;
			}
		}
		cout<<max<<endl;
	}
	return 0;
}
