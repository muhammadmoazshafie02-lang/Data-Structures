#include<iostream>
using namespace std;
void doubleValue(int *ptr);
void outerFunction();
int* findLarger(int *a, int *b);
void swapValues(int *a, int*b);
int main()
{
	int a;
	int *ptr;
	ptr = &a;
	cout << "Enter Value of a: ";
	cin >> a;
	cout << "Address of Variable a: " << &a << endl;
	cout << "Address stored in the pointer ptr: " << ptr << endl;
	*ptr = 2;
	cout << "Value of pointer ptr using the method of deferencing: " << *ptr << endl;
	cout << "Value Before Function Call: " << *ptr << endl;
	doubleValue(ptr);
	cout << "Value After Function Call: " << *ptr << endl;
	outerFunction();
	int c = 35;
	int d = 20;
	cout << "Value of c: " << c << endl;
	cout << "Value of d: " << d << endl;
	int e = *findLarger(&c, &d);
	cout << "Larger Value between two integers is: " << e << endl;
	int f = 10;
	int g = 25;
	cout << "Before Swap: " << endl << "First Value: " << f << endl << "Second Value: " << g << endl;
	swapValues(&f, &g);
	system("pause");
	return 0;
}

void doubleValue(int *ptr)
{
	*ptr = *ptr * 2;
}
void outerFunction()
{
	int b = 39;
	int*ptr1;
	ptr1 = &b;
	cout << "Value Before Function Call in func(): " << *ptr1 << endl;
	doubleValue(ptr1);
	cout << "Value After Function Call in func(): " << *ptr1 << endl;
}
int* findLarger(int *a, int *b)
{
	if (*a > *b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
void swapValues(int *a, int*b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
	cout << "After Swap: " << endl << "First Value: " << *a << endl << "Second Value: " << *b << endl;
}