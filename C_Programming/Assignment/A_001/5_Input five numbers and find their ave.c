// Input five numbers and find their average..

void main(){
	int a1 = 5, a2 = 15, a3 = 25, a4 = 35, a5 = 45;
	float average;
	
	int sum = a1 + a2 + a3 + a4 + a5;
	average = sum / 5.0;
	
	printf("Average of %d, %d, %d, %d and %d is = %f", a1, a2, a3, a4, a5, average);
}