// exam7.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"


void assign(int *test)
{
	*test = 100;
}

void getSum(int a, int b, int *nSum)
{
	*nSum = a + b;

}

void exchange(int *a, int *b)
{
	int temp;

	temp = *a;  //그냥 a 를 쓰게되면 주소값이 넘어가기 때문에 참조 연산자(*)를 붙여서 그 주소안의 값을 넘긴다.
	*a = *b;   // 아래도 마찬가지.
	*b = temp;

}


int main()
{
	int test = 0;

	assign(&test);

	printf("%d \n",test);

	getSum(5, 6, &test);
	printf("%d \n", test);

	int a = 7;
	int b = 8;

	printf("교환 전: %d, %d\n", a, b);

	exchange(&a, &b);
	printf("교환 후: %d, %d\n", a, b);



    return 0;
}

