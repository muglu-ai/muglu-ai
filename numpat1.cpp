#include<iostream>
#include<bits/stdc++.h>
int main()
{	int n,i,p,j;
	std::cout<<"Enter a number:\n";
	std::cin>>n;
	p=1;
	for(i=1,p=1;i<=n;i++,p++){
		for(j=1;j<=i;j++){
			std::cout<<p<<" ";
		}
		std::cout<<"\n";
	}
}
