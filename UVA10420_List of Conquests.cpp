//UVA10420 List of Conquests  https://onlinejudge.org/external/104/p10420.pdf
#include<iostream>
#include<map>
using namespace std;

int main(){
	map<string, int> count;
	map<string, int>::iterator iter;
	string first_s;
	char others[76]={0};
	int n;
	
	cin>>n;
	cin.ignore();
	while(n--){
		cin>>first_s;
		count[first_s]++;
		cin.getline(others,76);
	}
	for(iter=count.begin();iter!=count.end();iter++){
		cout<<iter->first<<" ";
		cout<<iter->second<<endl;
	}
	return 0;
}
