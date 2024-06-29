#include<bits/stdc++.h>
using namespace std;

int vid;
int main() {
	string a;
	cin>>a;
	int l=a.size();
	for(int i=l;i>0;i--){
		//vid+=(a[l-i]-'0')*pow(2,i-1);
		//OR
		vid=vid*8+a[l-i]-'0';
	}
	cout<<vid;
	return 0;
}
