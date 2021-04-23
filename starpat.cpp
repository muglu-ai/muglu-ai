#include<iostream>
#include<bits/stdc++.h>
int main()
{
	int n;
	std::cin>>n;
	int i=1;
	while(i<=n){
		int j=1;
		while(j<=n){
			std::cout<<"*";
			j++;
		}
		std::cout<<std::endl;
		i++;
	}
}
