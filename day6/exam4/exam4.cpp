// exam4.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int nIndex = 0;
	int result = 0;
	while (nIndex <= 100) {

		if ((nIndex % 2) != 0) {
			printf_s("%d\n", nIndex);
			result += nIndex;
		}
	
		nIndex++;
	}
	printf_s("1~100 중 홀수들의 총 합은  %d  입니다.",result);

    return 0;
}

