/********************************************************************
 * Fundamentals
 ********************************************************************
 * a.
 * 	double t;
 * 	cout << "Enter a temperature: ";
 * 	cin >> t;
 * b.
 * 	cout << "*******\n*******\n*******\n*******\n*******\n";
 * 	cout << "*******\n*******\n";
 * c.
 * 	an identifier starts with either a letter or underscore and
 * 	can be followed by 0 or more letters, underscores and/or 
 * 	digits
 * d.
 * 	int n = (9 * (s - 8)) % 4;
 * e.
 * 	bool a = false;
 * 	string b = "one";
 * 	char c = 'y';
 * 	double d = 87.9;
 ********************************************************************/

/********************************************************************
 * Problem Solving
 *******************************************************************/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	double x, f, g, fg, gf;

	cout << "Enter a real number: ";
	cin >> x;

	f = -2 * x * x + 9 * x - 3;
	g = 4 * x * x - 6 * x + 5;
	fg = -2 * g * g + 9 * g - 3;
	gf = 4 * f * f - 6 * f + 5;

	cout << "g(f(" << x << ")) = " << gf << "\n";
	cout << "f(g(" << x << ")) = " << fg << "\n";
	return 0;
}

/********************************************************************
 * Tracing
 ********************************************************************
 * 01. a1 := 20
 * 02. a2 := 15
 * 03. a3 := 5
 * 04. e := -5
 * 05. e := 26
 * 06. a1 := 20
 * 07. a2 := 15
 * 08. a3 := 5
 * 09. output := out
 * 10. return := 0
 *
 * out:
 * (20,15,5)
 *******************************************************************/

/********************************************************************
 * Debugging
 ********************************************************************
 * a.
 * 	01 int main()
 * 	05 cout << "Enter first name: ";
 * 	08 cin >> last;
 * 	10 return 0;
 * b.
 * 	02 {
 * 	06 int x;
 * 	12 }
 * c.
 * 	05 cin >> val;
 * 	06 cout << val * 2;
 * 	08 }
 *******************************************************************/	


