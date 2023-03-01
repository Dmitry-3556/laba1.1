#include <iostream> 

#include <math.h> 

#include <tchar.h> 



int _tmain(int argc, _TCHAR* argv[2])

{

	int X, a, b;

	float Z;

	printf_s("input X:");

	scanf_s("%d", &X);
	a = (X + 2);

	b = pow(a, 2) + 3;

	Z = (a * b) / (pow(a, 4) + b);