// exam6.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <stdlib.h>
#include <string.h>

struct Student {
	char *m_pszName;
	int m_nNum;
	double m_fGrade;
};

int main()
{
	Student s1 = {
		"seodongwook",
		2,
		3.14
	};

	Student s2 = {
		"honggildong",
		3,
		6.28
	};

	//s1.m_pszName = (char *)malloc(sizeof("seodongwook")+1); ------ // ex1
	//strcpy(s1.m_pszName, "seodongwook");

	/*
	s1.m_pszName = "seo dongwook"; -----  // ex2
	s1.m_nNum = 2;
	s1.m_fGrade = 3.14;
	*/

	printf("%s %d %lf \n", s1.m_pszName, s1.m_nNum, s1.m_fGrade);

	Student temp;
	temp = s1; // ����Ǵ°��̴�.
	s1.m_fGrade = 0; // ������ �ٲٴ���..

	printf("%s %d %lf \n", s1.m_pszName, s1.m_nNum, s1.m_fGrade);
	printf("%s %d %lf \n", temp.m_pszName, temp.m_nNum, temp.m_fGrade); // temp�� �ٲ��� �ʴ´�.

	//free(s1.m_pszName); ------ // ex1

    return 0;
}

