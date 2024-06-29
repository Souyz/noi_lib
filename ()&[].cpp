#include<bits/stdc++.h>
using namespace std;
stack<char> bar1,bar2;
string alp;


int main() {
	getline(cin,alp);

	for(int i=0; i<alp.size(); i++) {
		if((!bar1.empty())&&alp[i]==')') {
			if(bar1.top()=='(') {
				bar1.pop();
			} else {
				cout<<"wwrong";
				return 0;
			}
		} else if((!bar1.empty())&&alp[i]==']') {
			if(bar1.top()=='[') {
				bar1.pop();
			} else {
				cout<<"wwrong";
				return 0;
			}
		} else {
			bar1.push(alp[i]);
		}

	}
	if(!bar1.empty()) {
		cout<<"wwrong";
		return 0;
	}
	cout<<"ok";
	return 0;
}
