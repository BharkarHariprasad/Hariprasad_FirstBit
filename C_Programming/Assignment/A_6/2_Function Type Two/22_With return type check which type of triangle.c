// To check triangle are equilateral, isosceles or scalene..

# include<stdio.h>
int istriangle();

void main() {
	int res = istriangle();
	if (res == 0) {
		printf("Triangle is Equilateral");
	}
	else if (res == 1) {
		printf("Triangle is Isosceles");
	}
	else if (res == 2) {
		printf("Triangle is Scalene");
	}
	else {
		printf("Triangle is not valid\n");
	}
}

int istriangle() {
	int side1, side2, side3;
	printf("Enter three side of Triangle: ");
	scanf("%d %d %d", &side1, &side2, &side3);

	if (side1 + side2 > side3 && side2 + side3 > side1 && side3 + side1 > side2) {
		printf("Triangle is valid\n");
	
		
		if (side1 == side2 && side2 == side3) {
			return 0;
		} 
		else if (side1 == side2 || side2 == side3 || side3 == side1) {
			return 1;
		}  
		else {
			return 2;
		}
	}
	
	else {
		return -1;
	}
}