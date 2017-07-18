// exam6.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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
	temp = s1; // 복사되는것이다.
	s1.m_fGrade = 0; // 원본을 바꾸더라도..

	printf("%s %d %lf \n", s1.m_pszName, s1.m_nNum, s1.m_fGrade);
	printf("%s %d %lf \n", temp.m_pszName, temp.m_nNum, temp.m_fGrade); // temp는 바뀌지 않는다.

	//free(s1.m_pszName); ------ // ex1

    return 0;
}

