#include<iostream>
#include<bits/stdc++.h>
#include<string>//while using string operation define string header file
using namespace std;
string multiplyStrings(string a ,string b)
//It is a string function,so It is necessary to return as string only.
{
	int m1,m2;
	m1=stoi(a);//string to interger ::stoi.
	m2=stoi(b);//string to integer ::stoi.
	int mul;
	mul=m1*m2;
	string multiply;
	multiply=to_string(mul);//Integer to String::to_string
	return multiply;//return as string.
}
int main(){
	string a;
	string b;
	int mult;
	int m1,m2;
	cin>>a>>b;
	m1=stoi(a);//string to integer.
	m2=stoi(b);//string to integer.
	mult=m1*m2;
	string multi;
	multi=to_string(mult);//Integer to string.
      	multi=multiplyStrings(a,b);
	cout<<multi;	
      	return 0;
}
