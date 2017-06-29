// exam3.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int ary[] = { 2,8,15,1,8,5,19,19,3,5,6,6,2,8,2,12 };

	int nNum;
	int count=0;

	printf("원하는 숫자를 입력:"); scanf("%d", &nNum);

	for (int i = 0; i < sizeof(ary) / sizeof(ary[0]); i++) {
		if (nNum == ary[i])
			count++;
	}
	printf("입력한 숫자%d의 갯수는 %d 개 입니다.\n", nNum,count); 

    return 0;
}

