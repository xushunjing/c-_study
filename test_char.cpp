#include <iostream>

using namespace std;

int main()
{
	char c1[] = "ab";

	cout << c1 << endl;

	char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
 
   	cout << "Greeting message: ";
   	cout << greeting << endl;

	return 0;
}