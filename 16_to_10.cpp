#include<bits/stdc++.h>
using namespace std;

int vid;


int main() {

	string a;
	cin>>a;
	int l=a.size();
	for(int i=0; i<l; i++) {
		//vid+=(a[l-i]-'0')*pow(2,i-1);
		//OR
		if(a[i]>='A') {
			vid=vid*16+a[i]-'A'+10;
		} else {
			vid=vid*16+a[i]-'0';
		}
	}
	cout<<vid;
	return 0;
}
