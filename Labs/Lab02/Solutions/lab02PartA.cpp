#include <iostream>
#include <string>
using namespace std;

int main()
{
	int a, b;
	char c;
	bool r;
	
	cout << boolalpha;
	cout << "Enter an integer: ";
	cin >> a;
	cout << "Enter another integer: ";
	cin >> b;

	r = (a * b > 0 && a > 0 && a % 2 == 1 && ((a - b) == 2 || (a - b) == -2));

	cout << "\nResult: " << r << "\n\n";

	cout << "Enter a letter: ";
	cin >> c;

	r = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

	cout << "\nResult: " << r << "\n";
	return 0;
}
