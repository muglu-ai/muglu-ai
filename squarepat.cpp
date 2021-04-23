#include <iostream>
//#include <bits/stdc++.h>
int main()
{
	int i,n;
	std::cin>>n;
	while(i<=n){
		int j;
		while(j<=n){
			std::cout<<"*";
			j++;
		}
		std::cout<<std::endl;
		i++;		
	}
	return 0;
}