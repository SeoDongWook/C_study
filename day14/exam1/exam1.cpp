// exam1.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <stdlib.h>

int main()
{
	int *pA;

	//int a;
	//pA = &a;  -- 이런거 없이

	pA = (int *)malloc(4);  //직접 메모리 공간을 할당해서 포인터를 받아오는거. 괄호안에 숫자가 메모리 바이트.
	*pA = 7;

	printf("%u \n", pA);

	free(pA); // 사용했던 메모리공간을 다시 돌려줘야 한다.

    return 0;
}

