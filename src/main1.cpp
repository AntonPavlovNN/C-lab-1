//��������� ����������� � ������������ ���, ���� � ���, � ����� ����� ������������ � ���������� ��������� (��������, ����������, �����)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task1.h"

int main()
{
	char gender = 'm';											//��� ������������
	float height = 0, weight = 0;								//���� � ��� ������������
	int Recom;

	printf("Enter pol (w or m): ");
	scanf("%c", &gender);
	printf("Enter height and weight: ");
	scanf("%f%f", &height, &weight);
	Recom = getRecommendation(gender, height, weight);
	//printf("Recom = %d \n", Recom);
	if (Recom == -1) printf("Tolstej.");
	if (Recom == 1) printf("Hudej.");
	if (Recom == 0) printf("Norma.");
	return 0;
}