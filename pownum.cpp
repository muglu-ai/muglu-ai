#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int x;
	int n;
	int pow=1;
	cin>>x;
	cin>>n;
	for(int i=1;i<=n;i++){
		pow=pow*x;
	}
	cout<<pow;
}

