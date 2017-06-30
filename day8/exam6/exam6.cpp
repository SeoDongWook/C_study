// exam6.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int test1 = 100;
	int *pTest1;

	pTest1 = &test1;

	printf("%d \n", *pTest1);

	test1 = 200;
	//*pTest = 200;

	//* 참조 연산ㅅ자
	//& 주소연산자
	printf("%d \n", *pTest1);

	printf("%d  %d \n", pTest1, &test1);
	printf(" %d \n", sizeof(pTest1));

	int a;
	int *ap = &a;
	// int *ap;     -----두줄로 쓸걸 한줄로 쓴거나 마찬가집니다.
	// ap = &a
	
	a = 100;

	printf("%d, %d \n", a, *ap);

	*ap = 500;
	printf("%d, %d \n", a, *ap);

	int b1;
	int b2;

	b1 = 1;
	b2 = b1;
	printf("%d, %d \n", b1, b2);

	b2 = 2;
	printf("%d, %d \n", b1, b2);

    return 0;
}

