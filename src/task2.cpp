const char* greet(int thour, int tmin)

{
	if (thour >= 0 && thour < 6)
		return "������ ����!";
	else if (thour >= 6 && thour < 12)
		return "������ ����!";
	else if (thour >= 12 && thour < 18)
		return "������ ����!";
	else if (thour >= 18 && thour < 24)
		return "������ �����!";
	else
		return "������������ �����!";
}