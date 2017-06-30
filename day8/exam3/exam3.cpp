// exam3.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"

#include <stdlib.h>
int main()
{
	char szInputBuf[] = "23,45,67,100,45";
	
	char szTemp[16]; // (위의 23,45,67 같은걸 토큰이라함) 토큰 저장 버퍼
	int nTempIndex = 0;
	
	// , 기준으로 끊어내기

	int nSum = 0;
	for (int i = 0; i < sizeof(szInputBuf) / sizeof(char); i++) { // sizeof(char) 는 sizeof(szInputBuf[0]) 과 같은뜻.
		if (szInputBuf[i] == ',' || szInputBuf[i] == 0) {
			//break; 
			szTemp[nTempIndex] = NULL;

			printf("%s \n", szTemp);

			int nNum = atoi(szTemp); //atoi()는 문자열을 숫자로 인식해주는 함수. 사용하기 위해선 <stdlib.h>를 참조해야한다.
			nSum += nNum;
			nTempIndex = 0;
		}
		else {
			szTemp[nTempIndex++] = szInputBuf[i];
		}
	}
	printf("sum %d\n", nSum);


    return 0;
}

