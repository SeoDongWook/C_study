// exam1.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"


int main()
{

	char word[50];
	word[0] = 'L';
	word[1] = 'O';
	word[2] = 'V';
	word[3] = 'E';
	word[4] = 'WO'; //0x00, NULL

	printf("%s", word);

	//word[0] = '��';
	//word[1] = '��';

	TCHAR word2[50];
	word2[0] = L'��';
	word2[1] = L'��';
	word2[2] = L'a';
	word2[3] = L'\0';

	printf("char size :%d  TCHAR size: %d\n", sizeof(char), sizeof(TCHAR));

    return 0;
}

