// exam12.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	//char strTemp[5] = "Hani";
	char strTemp[5];
	//strTemp = "Hani"; 이렇듯 C언어는 도중에 문자열에 못넣는다.

	strTemp[0] = 'H';
	strTemp[1] = 'a';
	strTemp[2] = 'n';
	strTemp[3] = 'i';
	strTemp[4] = '\0'; //또는 0x00

	printf("%s", strTemp);

	char szBuf[256];
	printf("당신의 이름은 무엇입니까?");
	scanf_s("%s", szBuf,sizeof(szBuf));//뒤에 size를 붙여줘야한다.(szBuf의 크기가 256이니 256도 괜찮다)

	printf("안녕하세요 %s 님!",szBuf);

    return 0;
}

