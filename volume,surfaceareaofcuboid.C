#include <stdio.h>

int main(void) {
	// your code goes here
	float l,b,h,surfacearea,volume;
	scanf("%f %f %f",&l,&b,&h);
	volume=l*b*h;
	printf("%f=volume",volume);
	surfacearea= 2*(l*b+b*h+h*l);
	printf("%f=surfacearea",surfacearea);
	return 0;
}
