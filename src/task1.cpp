int getRecommendation(char gender, float height, float weight)
{

	int idealWeight = 0;

	if (gender == '�')
		idealWeight = height - 100;
	if (gender == '�')
		idealWeight = height - 110;

	if (weight > idealWeight)
		return 1;
	else if (weight == idealWeight)
		return 0;
	else if (weight < idealWeight)
		return -1;
}