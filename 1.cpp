#include <iostream>
#include <string>
#include <math.h>

using namespace std;

long long *b;

long long int factorial(int n)
{
	return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}

long long int *producingTheFactorialFractions()
{
    long long b[10];

	for (int i = 10; i >= 0; i--)
	{
		b[i] += (int)pow(factorial(10), 2.0) / (i + 1);
	}
	cout << b[i];
	return b;
}

void checkZeros(long long *a)
{
	for (int i = 9; i >= 0; i--)
	{
		if (a[i] = 0)
			cout << "Zero Found" << endl;
	}
}

int main()
{

	long long int *a;
	a = producingTheFactorialFractions();
	checkZeros(a);
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << endl;
	}
	delete a;

	cout<<"hello";
	cout<<"Bye";


}