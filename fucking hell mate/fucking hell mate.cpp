#include <stdio.h>
#define PI 3.141592
//PI 기호상수

int main()
{
	printf("%f\n", PI);
	//ctrl+F7 : compile
	//ctrl+b:build
	//ctrl+f5:실행
	//alt와 화살표:코드 위치 이동

	int r = 5; //radius
	printf("원의 면적: %f\n", PI * r * r);
	printf("원의 둘레: %f\n", PI * 2 * r);
	printf("구의 부피: %f\n", (4.0 / 3.0) * PI * r * r * r);
	printf("구의 부피: %.2f\n", (4.0 / 3.0) * PI * r * r * r);
	//.2는 소수점 밑 2번쨰 자리까지 계산

	//c언어는 4/3이라고 하면 정수 계산을 통해 1이라고 출력을 한다.

	return 0;
}