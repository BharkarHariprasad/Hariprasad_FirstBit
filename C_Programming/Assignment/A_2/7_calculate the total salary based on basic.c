// Calculate the total salary based on basic..

void main(){
	float basic = 5000;
	float da, ta, hra, total;
	
	if(basic <= 5000){
		da = basic * 0.10; // 0.10 mean 10 / 100
		ta = basic * 0.20;
		hra = basic * 0.25;
	}
	else{
		da = basic * 0.15;
		ta = basic * 0.25;
		hra = basic * 0.30;
	}
	
	total = basic + da + ta + hra;
	printf("Toatal salary is = %f", total);
}