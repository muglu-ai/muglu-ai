#include<iostream>
#include<bits/stdc++.h>
int main()
{
	int n,i,j,p;
	std::cout<<"Enter a number:\n";
	std::cin>>n;
	for(i=1,p=1;i<=n;i++,p++){
		for(j=i;j<=n;j++){
			std::cout<<p<<" ";
		}
		std::cout<<"\n";
	}
}

