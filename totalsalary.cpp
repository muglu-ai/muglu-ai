#include<math.h>
#include<iostream>
using namespace std;

int main() {
    int ts,basic,hra,da,allow,pf;
    char grade;
	// Write your code here
	std::cout<<"Enter Basic Salary:"<<std::endl;
    std::cin>>basic;
    std::cout<<"Enter Employee Grade:"<<std::endl;
    std::cin>>grade;
    if(grade=='A'){
        allow=1700;
    }
    else if(grade=='B'){
        allow=1500;
    }
    else {
        allow=1300;
    }
    std::cout<<allow<<std::endl;
    hra=0.2*basic;
    std::cout<<hra<<std::endl;
    da=0.5*basic;
    std::cout<<da<<std::endl;
    pf=0.11*basic;
    std::cout<<pf<<std::endl;
    ts=basic+hra+da+allow-pf;
    std::cout<<"TOtal Salary:"<<ts<<std::endl;
}

