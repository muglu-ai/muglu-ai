#include<iostream>
using namespace std;


int main(){
	int n;
    cin>>n;
    int i=1;
       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
  
}

