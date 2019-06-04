#include <iostream>
using namespace std;

int main()
{
    std::cout << "Hello World!\n";
	for(int i=1; i<10; i++){
		for(int j=1; j<=i; j++){
			cout<<i<<"*"<<j<<"="<<i*j<<"\t";
		}
		
		cout<<endl;
	}
    return 0;
}