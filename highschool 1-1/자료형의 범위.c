#include <stdio.h>

//#define CHAR_MIN -128
//#define CHAR_MAX 127
#include <limits.h>

//int main()
//{
//	float a;
//	double b;
//
//	a = 3.14159;
//	b = 1.79e+308;
//
//	printf("%f\n", a);
//	printf("%e\n", b);
//}

// %f �Ǽ�, %lf
/*
%c ����
*/

#include <stdlib.h>

int main()
{
	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", rand());
	}
	//rand: �������� �������ִ� �Լ�
	return 0;
}