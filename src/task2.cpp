const char* greet(int hour, int min)
{
	if (hour >= 0 && min >= 0 && hour < 6 && min < 60)	return "Good night!";
	else if (hour >= 6 && min >= 0 && hour < 11 && min < 60) return "Good morning!";
	else if (hour >= 11 && min >= 0 && hour < 18 && min < 60) return "Good day!";
	else if (hour >= 18 && min >= 0 && hour < 24 && min < 60) return "Good evening!";
	else return "Uncorrect time!";

}

/*"Good night!"
"Good morning!"
"Good day!"
"Good evening!"
"Uncorrect time!"

"����" - � 00:00 �� 06 : 00
"����" - � 06 : 00 �� 11 : 00
"����" - � 11 : 00 �� 18 : 00
"�����" - � 18 : 00 �� 00 : 00
*/