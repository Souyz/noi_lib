
#include<bits/stdc++.h>
using namespace std;



int n,i;
int a[999];
int main() {
	cin>>n;
	while(n) {
		a[i++]=n%2;
		n=n/2;
	}
	i--;
	for(i; i>=0; i--) {
		cout<<a[i];
	}

	return 0;

}
