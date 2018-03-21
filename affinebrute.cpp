#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	cin>>str;

	for(int i=10;i<20;i++){
		for(int k=0;k<26;k++){
			for(int l=0;l<str.length();l++){
				printf("%c",(str[l]*i+k)%26+'A');
			}
			cout<<endl;
		}

	}



return 0;}



