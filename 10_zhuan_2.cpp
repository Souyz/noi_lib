#include<bits/stdc++.h>
using namespace std;
int n,jkl[9990];
int zhuan10_2(int n,int i){
	if(n/2==0){
		jkl[i]++;
	return 1;
	}
	jkl[i]=(n%2);
	return zhuan10_2(n/2,i+1)+1;
}

int main(){
	cin>>n;
	int t=zhuan10_2(n,0);
	
	for(int i=0;i<=t;i++){
		cout<<jkl[i];
	}
	
	
	return 0;
}
