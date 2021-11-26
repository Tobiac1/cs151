#include <iostream>
#include <string>
using namespace std;

void Print(double data[],int size)
{
	for(int i = 0;i < size;i += 1)
	{
		cout << data[i] << " ";
	}
	cout << "\n";
}

void Swap(double& a,double& b)
{
	double t = a;
	a = b;
	b = t;
}

void SwapIfDifferent(double data[],int i,int j)
{
	if(i != j)
	{
		Swap(data[i],data[j]);
	}
}

int MaximumIndex(double data[],int size,int idx)
{
	for(int i = idx + 1;i < size;i += 1)
	{
		if(data[idx] < data[i])
		{
			idx = i;
		}
	}
	return idx;
}

void SelectionSort(double data[],int size)
{
	for(int i = 1;i < size;i += 1)
	{
		SwapIfDifferent(data,i-1,MaximumIndex(data,size,i-1));
	}
}

int main()
{
	double a[5] = {1,5,9,2,8};
	Print(a,5);
	SelectionSort(a,5);
	Print(a,5);
	return 0;
}

/**********************************************************
 * let L := i < size
 * 01. data := array, size := 5
 * 02. i := 1
 * 03. L := true
 * 04. data := array
 * 05. i := 2
 * 06. L := true
 * 07. data := array
 * 08. i := 3
 * 09. L := true
 * 10. data := array
 * 11. i := 4
 * 12. L := true
 * 13. i := 5
 * 14. L := false
 *
 * array
 * 01. [0] := 1, [1] := 5, [2] := 9, [3] := 2, [4] := 8
 * 02. [0] := 9, [2] := 1
 * 03. [1] := 8, [4] := 5
 * 04. [2] := 5, [4] := 1
 *********************************************************/
