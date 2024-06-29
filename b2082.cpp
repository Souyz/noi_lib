#include<iostream>
using namespace std;
int main(){
	int l,r,ct=0;
	cin>>l>>r;
	for(int i=l;i<=r;i++){
		int f=i;
		while(f!=0){
			int tmp=f%10;
			f=f/10;
			if(tmp==2){
				ct++;
			}
		}
	}
	cout<<ct<<endl;
	return 0;
}
