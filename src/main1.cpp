#include <stdio.h>
#include "task1.h"

int main()
{
	char gender = 0;
	float height = 0;
	float weight = 0;

		printf("Enter your gender 'm' or 'w':");
		scanf("%c", &gender);

		printf("Enter your height:");
		scanf("%f", &height);

		printf("Enter your weight:");
		scanf("%f", &weight);

	int result = getRecommendation(gender, height, weight);

		if (result == 0)
		printf("Weight good\n");
		if (result == 1)
		printf("Weight bad\n");
		if (result == -1)
		printf("Weight small\n");
		return 0;
	} 
