#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "task1.h"

#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Rus");

	char gender = 0;
	float height = 0;
	float weight = 0;

	printf("������� ��� ��� (� ��� �): ");
	scanf("%c", &gender);
	printf("������� ��� ���� � ��: ");
	scanf("%f", &height);
	printf("������� ��� ��� � ��: ");
	scanf("%f", &weight);

	int result = getRecommendation(gender, height, weight);
	if (result == 1)
		printf("��� ����� �������� ���!\n");
	else if (result == 0)
		printf("��� ��� ����������!\n");
	else if (result == -1)
		printf("��� ����� ������� ����!\n");
	return 0;
}