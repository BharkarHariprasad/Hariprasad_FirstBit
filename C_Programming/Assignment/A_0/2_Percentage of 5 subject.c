// percentage of a student based on marks of any 5 subjects..

void main(){
	float subject_1 = 78;
	float subject_2 = 85;
	float subject_3 = 92;
	float subject_4 = 74;
	float subject_5 = 80;
	
	// Obtain total Marks..
	float ObtainMark = subject_1 +  subject_2 +  subject_3 +  subject_4 +  subject_5;
	
	// Maximum marks..
	float MaxMarks = 500;
	
	float percentage = ( ObtainMark / MaxMarks ) * 100;
	printf("Percentage of 5 subject is = %f", percentage);
}