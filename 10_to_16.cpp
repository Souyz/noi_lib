#include<bits/stdc++.h>
using namespace std;



int n,i;
char a[999];
int main() {
	cin>>n;
	while(n) {
		if(n%16>=10){
			a[i++]='A'-10+n%16;
		}else{
			a[i++]='0'+n%16;
		}
		n=n/16;
	}
	i--;
	for(i; i>=0; i--) {
		cout<<a[i];
	}

	return 0;

}
