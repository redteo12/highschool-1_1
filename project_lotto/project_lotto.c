// project_lotto.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdlib.h>
#include <stdio.h>
#include <time.h> 

//#define 이름 상수값 : 이름을 정의(기호 상수)

int main()
{
	srand(time(NULL));
	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", rand());
	}
	//rand: 랜덤값을 리턴해주는 함수
	return 0;
}