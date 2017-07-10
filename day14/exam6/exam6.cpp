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

	//s1.m_pszName = (char *)malloc(sizeof("seodongwook")+1);
	//strcpy(s1.m_pszName, "seodongwook");

	/*
	s1.m_pszName = "seo dongwook";
	s1.m_nNum = 2;
	s1.m_fGrade = 3.14;
	*/

	printf("%s %d %lf \n", s1.m_pszName, s1.m_nNum, s1.m_fGrade);

	//free(s1.m_pszName);

    return 0;
}

