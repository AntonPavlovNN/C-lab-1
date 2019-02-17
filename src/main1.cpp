#include "pch.h"
#include <stdio.h>
#include <stdlib.h>
#include "task1.h"

int main()
{
	char gender;
	float height, weight;

	printf("Enter your gender m or w: ");
	scanf("%c", &gender);
	printf("Enter your height in cm: ");
	scanf("%f", &height);
	printf("Enter your weight in kg: ");
	scanf("%f", &weight);
	
	int result = getRecommendation(gender, height, weight);
	if (result == 0)
		printf("Weight ideal");
	else if (result == -1)
		printf("Little weight");
	else if (result == 1)
		printf("Big weight");

	return 0;
}