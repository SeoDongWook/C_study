// exam4.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <string.h>

int main()
{
	//���ڿ� ����.
	char *pTest = "apple";
	char szBuf[64];

	strcpy(szBuf, pTest); //#include <string.h> �ȿ� �������.
	printf("%s \n", szBuf);

	strcpy(szBuf, pTest + 1);
	printf("%s \n", szBuf);

	//�����ڵ� ���� ���� ����.
	TCHAR *pwTest = L"�Դٺ������";
	TCHAR szwBuf[64];

	//wprintf(L"%s \n",pwTest);
	wcscpy(szwBuf, pwTest);
	wcscpy(szwBuf, pwTest + 4);

	//���ڿ� ũ�� ���ϱ�.
	printf("%d \n", strlen(pTest));
	printf("%d \n", wcslen((char *)pwTest));



    return 0;
}

