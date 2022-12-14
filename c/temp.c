#include <stdio.h>

int main() 
{
	float f, c;

	printf("input temperature: ");
	scanf("%f", &f);

	c = (5.0/9.0) * (f -32.0);

	printf("Convert to celcius: %.1f\n", c);	
	
	return 0;
}

