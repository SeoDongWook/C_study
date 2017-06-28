// exam10.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"


void printSum(int a, int b)
{
	int sum = a + b;
	printf_s("printSum : %d \n", sum);
}


int getSum(int a, int b)
{
	return a + b;
}

int main() // int 함수는 return 값을 가져야한다.
{
	int a, b;
	int sum;

	scanf("%d %d", &a, &b);
	printSum(a, b); //함수 호출

	sum = getSum(a, b);

	printf_s("getSum: %d \n", sum);

    return 0;
}

