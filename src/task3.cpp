#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
const float PI = 3.14159;

char * convert(char buf[], double angle, char type)
{
	if (type == 'D')
	{
		sprintf(buf, "���� � %lf%c ����� ���� %lfR", angle, type, angle * PI / 180);
	}
	else
	{
		sprintf(buf, "���� � %lf%c ����� ���� %lfD", angle, type, angle * 180 / PI);
	}

	return buf;
}