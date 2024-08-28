#include <stdio.h>

int main()
{
	int age;
	float height;
	char grade;
	char newline;

	printf("Enter your age: ");
	scanf("%d", &age);

	printf("Enter your height: ");
	scanf("%f", &height);

	scanf("%c", &newline);

	printf("Enter your grade: ");
	scanf("%c", &grade);

	printf("You entered - Age: %d, Height: %.2f, Grade: %c", age, height, grade);

	return 0;
}
