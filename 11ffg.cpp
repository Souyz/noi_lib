#include<bits/stdc++.h>
using namespace std;

int n,k,num[1000009],t;
deque <int> a;

int main() {
	cin>>n>>k;
	for(int i=0; i<n; i++)
		cin>>num[i];
	t=0;
//	a.push_back(0);
	for(int i=0; i<n; i++) {
		while(!a.empty()&&a.back()<=num[i]) a.pop_front();
		a.push_back(num[i]);
		if(i-t>k&&num[t]==a.front()) {
			t++;
			a.pop_front();
		}
		if(i-t>k&&num[t]!=a.front()) t++;
		if(i>=k-1)
			cout<<a.back()<<' ';
	}
	return 0;
}
