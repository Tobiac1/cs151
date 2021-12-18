#include <iostream>
#include <string>
#include <cctype>
using namespace std;

/**************************************************************************************************
 * Fundamentals
 **************************************************************************************************
 * a.
 * cout << "BCDEFGHIJKLMNPQRSTUVWXYZ";
 * 
 * b.
 * float *ptr = new float[100];
 * delete[] ptr;
 * 
 * c.
 * void S(int *a, int *b)
 * {
 *    if(*a < *b)
 *    {
 *      int temp = *a;
 *      *a = *b;
 *      *b = temp;
 *    }
 * }
 * 
 * d.
 * while (m %5 != 0)
 * {
 *   cin >> m;
 * }
 * 
 * e.
 * for(int i = 0; i< n.length(); i++ )
 * {
 *   n[i] = toupper(n[i]);
 * }
 * 
 *************************************************************************************************/

/**************************************************************************************************
 * Problem Solving solution should be written between below this comment and 
 * before the main function
 **************************************************************************************************/ 

void Operation(int* set1, int* set2, int size)
{
  cout << "{";
  for (int i = 0; i < size; i++)
  {
    cout << set1[i] << ", ";
  }

  bool flag = true;
  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < size; j++)
    {
      if(set2[i] == set1[j])
      {
        flag = false;
      }
    }
    if(flag && i == size - 1)
    {
      cout << set2[i] << "}\n";
    }
    else if (flag)
    {
      cout << set2[i] << ", ";
    }
    flag = true;
  }
}


int main()
{
  int a[] = {1,2,3,6};
  int b[] = {1,2,4,5};
  Operation(a, b, 4);
  return 0;
}


/**************************************************************************************************
 * Tracing
 **************************************************************************************************
 * let A := i < p, let B := a[i] <= a[p]
 * 
 * (step, a, s, e, p, j, i, return)
 * 01. a := [72, 53, 81, 70, 65]
 * 02. s := 0
 * 03. e := 4
 * 04. p := 4
 * 05. j := -1
 * 06. i := 0
 * 07. A := true
 * 08. B := false
 * 09. i := 1
 * 10. A := true
 * 11. B := true
 * 12. j := 0
 * 13. a := [72, 125, 81, 70, 65]
 * 14. a := [53, 125, 81, 70, 65]
 * 15. a := [53, 72, 81, 70, 65]
 * 16. i := 2
 * 17. A := true
 * 18. B := false
 * 19. i := 3
 * 20. A := true
 * 21. B := false
 * 22. i := 4
 * 23. A := false
 * 24. a := [53, 72, 81, 70, 137]
 * 25. a := [53, 65, 81, 70, 137]
 * 26. a := [53, 65, 81, 70, 72]
 * 27. return := 1
 *
 *************************************************************************************************/


/**************************************************************************************************
 * Debugging
 **************************************************************************************************
 * a.
 * 07. a[i] = a[i] * -1;
 *
 * b.
 * 03. int sm = m*m, sn = n*n;
 * 08. r = sm % sn;
 * 
 * c.
 * 03. char t;
 * 09. v[n-i] = t;
 * 
 * d.
 * 03. for(int i=1, i<t; i += 1)
 * 09. }
 * 
 * e.
 * 01. void S(int a[], int n)
 * 07. a[j] = a[j-1] + (j + 1);
 *************************************************************************************************/
