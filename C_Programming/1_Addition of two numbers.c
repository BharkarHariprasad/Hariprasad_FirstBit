// Addition of two numbers..

void main(){
	int no = 23; 
	int r1, r2, Res;
	
	r1 = no % 10;
	r2 = no / 10;
	Res = r1 + r2;
	printf("Additoion of %d and %d is =  %d", r1, r2, Res);
}