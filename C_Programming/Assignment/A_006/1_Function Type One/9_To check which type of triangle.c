// To check triangle are equilateral, isosceles or scalene..

# include<stdio.h>
void istriangle();

void main() {
	istriangle();
}

void istriangle() {
	int side1, side2, side3;
	printf("Enter three side of Triangle\n: ");
	scanf("%d %d %d", &side1, &side2, &side3);

	if (side1 + side2 > side3 && side2 + side3 > side1 && side3 + side1 > side2) {
		printf("Triangle is valid");
		if (side1 == side2 && side2 == side3) {
			printf("Triangle is Equilateral");
		} else if (side1 == side2 || side2 == side3 || side3 == side1) {
			printf("Triangle is Isosceles");
		} else {
			printf("Triangle is Scalene");
		}
	}
	else {
		printf("Triangle is not valid");
	}
}