// exam3.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"

#include <stdlib.h>
int main()
{
	char szInputBuf[] = "23,45,67,100,45";
	
	char szTemp[16]; // (���� 23,45,67 ������ ��ū�̶���) ��ū ���� ����
	int nTempIndex = 0;
	
	// , �������� �����

	int nSum = 0;
	for (int i = 0; i < sizeof(szInputBuf) / sizeof(char); i++) { // sizeof(char) �� sizeof(szInputBuf[0]) �� ������.
		if (szInputBuf[i] == ',' || szInputBuf[i] == 0) {
			//break; 
			szTemp[nTempIndex] = NULL;

			printf("%s \n", szTemp);

			int nNum = atoi(szTemp); //atoi()�� ���ڿ��� ���ڷ� �ν����ִ� �Լ�. ����ϱ� ���ؼ� <stdlib.h>�� �����ؾ��Ѵ�.
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

