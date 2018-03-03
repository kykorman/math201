#include <iostream>
using namespace std;

int main(){
	int prime;
	cout<<"Enter prime: ";
	cin>>prime;

	for(int i=1;i<prime;i++)
		for(int k=1;prime>=i*i+k*k;k++)
			if(prime==k*k+i*i){
				cout<<"x = "<<i<<", y = "<<k<<endl;
				cout<<"Prime factorization found: "<<i*i<<" + "<<k*k<<" = "<<prime<<endl;
				return 0;
			}
	
	cout<<"No factorization found\n";

return 0;}
