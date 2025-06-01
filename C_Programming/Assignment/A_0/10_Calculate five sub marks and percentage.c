// Input marks of five subject, find the total marks and calculate their percentage..

void main(){
	float sub1, sub2, sub3, sub4, sub5;
	float sum, percentage;
	
	sub1 = 80;
	sub2 = 75;
	sub3 = 90;
	sub4 = 85;
	sub5 = 70;
	
	sum = sub1 + sub2 + sub3 + sub4 + sub5;
	
	// Maximum marks of 500.
	percentage = (sum / 500) * 100;
	
	printf("Total mark out of 500 is = %f\n Percentage is = %f", sum, percentage);
}