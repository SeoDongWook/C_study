// exam5.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <string.h>

int main()
{
	char *pTest = "apple";
	char szBuf[32];

	//���ڿ� ��.

	strcpy(szBuf, pTest);

	printf(" %d \n", strcmp(szBuf, pTest)); // ������ 0, �ٸ��� 1
	printf(" %d \n", strcmp(szBuf + 1, pTest)); // ������ 0, �ٸ��� 1

	szBuf[1] = 'f';
	printf("%s %d \n",szBuf, strcmp(szBuf, pTest)); // ������ 0, �ٸ��� 1

	TCHAR *wpTest = L"�Դٹ������";
	TCHAR wszBuf[32];

	wcscpy(wszBuf, wpTest);

	printf("%d\n", wcscmp(wszBuf, wpTest));
	printf("%d\n", wcscmp(L"��", L"��"));
	printf("%d\n", wcscmp(L"��", L"��"));

    return 0;
}

