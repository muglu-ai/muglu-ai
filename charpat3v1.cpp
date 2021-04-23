#include<iostream>
#include<bits/stdc++.h>
int main()
{
	int p,n,i,j;
	std::cout<<"Enter a number:\n";
	std::cin>>n;
	for(i=1,p=1;i<=n;i++,p++){
		for(j=1;j<=n;j++){
			std::cout<<" ";
		}
		for(j=1;j<i;j++){
			std::cout<<"* ";
		}
		for(j=1;j<=i;j++){
			std::cout<<"* ";
		}
		std::cout<<"\n";
	}
}
