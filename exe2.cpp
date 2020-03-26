#include <iostream>
#include<cstring>
using namespace std;

//joao serrano RA 48813//

int main() {
	
	char palavra1[50], palavra2[50];
	
	int resultado;	
	
	cout<<"Digite a palavra1"<<endl;
	
	cin>>palavra1;
	
	cout<<"Digite a palavra2"<<endl;
	
	cin>>palavra2;
	
	cout<<strcmp(palavra1, palavra2)<<endl;
		
	
	
	
	return 0;
}
