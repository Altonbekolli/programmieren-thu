#include "Analyze.h"

int analyze(string s)
{		
	return s.length();
}

int analyze(const char* c)
{
	return strlen(c);
}

int analyze(int x)
{
	int digits = 0;
	if (x < 0)
	{
		digits++;
		x *= -1;
	}
	do
	{
		x /= 10;
		digits++;

	} while (x > 0);
	
	return digits;
}
