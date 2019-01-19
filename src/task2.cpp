/*
	"����"  - � 00:00 �� 06:00
	"����"  - � 06:00 �� 11:00
	"����"  - � 11:00 �� 18:00
	"�����" - � 18:00 �� 00:00
*/

const char* greet(int hour, int min)														//� ����� � �� ������� ����������� ������ ���� � ������
{
	int Time = 0;

	if ((hour > 24) || (hour < 0) || (min >= 60) || (min < 0)) return "Uncorrect time!";	//�������� ������������ ����� ����� � ������
	Time = min * 60 + hour * 60 * 60;														//��������� ����� � �������

	//����������� ����� ����� � ������� �����. �����������
	if ((Time >= 0 * 60 * 60) && (Time < 6 * 60 * 60)) return "Good night!";
	if ((Time >= 6 * 60 * 60) && (Time < 11 * 60 * 60)) return "Good morning!";
	if ((Time >= 11 * 60 * 60) && (Time < 18 * 60 * 60)) return "Good day!";
	if ((Time >= 18 * 60 * 60) && (Time < 24 * 60 * 60)) return "Good evening!";
}