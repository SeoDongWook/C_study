// exam5.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int ary[] = { 1,2,3,4,5,6,7,8,9,10,11 };
	int temp;

	for (int i = 0; i < sizeof(ary) / sizeof(ary[0])/2; i++) {

		temp = ary[i];
		ary[i] = ary[(sizeof(ary) / sizeof(ary[0])) - (i + 1) ];
		ary[(sizeof(ary) / sizeof(ary[0])) - (i + 1)] = temp;

	}

	for (int i = 0; i < sizeof(ary) / sizeof(ary[0]); i++) {
		printf("%d ", ary[i]);
	}
	printf("\n");

    return 0;
}

