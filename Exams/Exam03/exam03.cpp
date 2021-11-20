#include <iostream>
#include <string>
#include <cctype>
using namespace std;

/**************************************************************************************************
 * Fundamentals
 **************************************************************************************************
 * a.
 * double M(double a, double b, double c, double d)
 * {
 *    return (a + b + c + d)/4.0;
 * }
 * 
 * 
 * b.
 * bool array[] = {false, true, true};
 * 
 * 
 * c.
 * double* array = new double[512];
 * 
 * 
 * d.
 * for(int i=0; i<20; i++)
 *    t[i] = 0;
 * 
 * e.
 * bool S(double a, double b, double& c)
 * {
 *    if(a < b)
 *    {
 *      c = a;
 *      return true;
 *    }
 *    else
 *    {
 *      c = b;
 *      return false;
 *    }
 * }
 *************************************************************************************************/

/**************************************************************************************************
 * Problem Solving solution should be written between below this comment and 
 * before the main function
 **************************************************************************************************/ 

double SequenceData(double array[], int size)
{
  double minimun = 100000.0;
  double carrySum = 0.0;

  for(int i=0; i<size; i++)
  {
    carrySum += array[i];
    array[i] = carrySum;

    if(array[i] < minimun)
    {
      minimun = array[i];
    }
  }
  return minimun;
}


int main()
{
	return 0;
}


/**************************************************************************************************
 * Tracing
 **************************************************************************************************
 * Let A := str[i] != 0
 *     B := isalpha(str[i])
 * 
 * (step, str, a, b, i, return)
 * 01. str := "mOV3S"
 * 02. a := ""
 * 03. b := ""
 * 04. i := 0
 * 05. A := true
 * 06. B := true
 * 07. a := "m"
 * 08. i := 1
 * 09. A := true
 * 10. B := true
 * 11. a := "mo"
 * 12. i := 2
 * 13. A := true
 * 14. B := true
 * 15. a := "mov"
 * 16. i := 3
 * 17. A := true
 * 18. B := false
 * 19. b := "3"
 * 20. i := 4
 * 21. A := true
 * 22. B := true
 * 23. a := "movs"
 * 24. A := false
 * 25. return := "movs3"
 * 
 *************************************************************************************************/


/**************************************************************************************************
 * Debugging
 **************************************************************************************************
 *
 * a.
 * 01. void I(int a[], int n)
 * 03. for(int i-0; i<n; i+=1)
 * 07. }
 *
 * 
 * b.
 * 03. if(n > 0)
 * 07. else if(n < 0)
 * 
 * 
 * c.
 * 05. for(int i=0; i<x; i+=1)
 * 07. cin >> t;
 * 
 * 
 * d.
 * 03. bool A = (a!=b && a!=c && b!=c);
 * 
 *************************************************************************************************/