//UVA10055 Hashmat the Brave Warrior https://onlinejudge.org/external/100/p10055.pdf
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	long long int h, o; //input might be 2^32
	while(cin>>h>>o){
		cout<<abs(o-h)<<endl;
	}
	return 0;
}
