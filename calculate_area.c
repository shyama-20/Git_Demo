
#include <stdio.h>

int main(){
	int r;
	float area, circumference;

	printf("Enter radius: ");
	scanf("%d", &r);

	area = 3.14 * r * r;
	printf("Area calculated = %0.3f \n", area);

	circumference = 2 * 3.14 * r;
        printf("Circumference calculated = %0.3f \n", circumference);

	return 0;
}
