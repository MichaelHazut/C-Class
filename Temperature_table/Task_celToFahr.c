#include <stdio.h>

int main()
{
	printf("This program will convert celsius to fahrenheit:\n");
	float cel, fahr;
	int lower, upper, step;
	
	lower = -20;
	upper = 150;
	step = 10;

	cel = lower;
	while(cel <= upper)
	{
		fahr = ((cel * 9.0) / 5.0) + 32;
		printf("%3.0f %6.1f\n",cel ,fahr);
		cel = cel + step;
	}
		
}

