#include "task4.h"
float convert(int feet, int inches)
{
	float sm = 0;
	sm = ((12 *feet) + inches) * 2.54;
	return sm;
}
