// Input two time (hr, minutes and sec) convert into total sec and find difference..

#include<stdio.h>
void main() {
	// first input... 
	int hour1, minute1, sec1, total_sec1;
	printf("Enter Hour, Minute and Second: ");
	scanf("%d  %d  %d", &hour1, &minute1, &sec1);
	
	total_sec1 = hour1 * 60 * 60 + minute1 * 60 + sec1;
	
	
	// second input...
	int hour2, minute2, sec2, total_sec2;
	printf("Enter Hour, Minute and Second: ");
	scanf("%d  %d  %d", &hour2, &minute2, &sec2);
	
	total_sec2 = hour2 * 60 * 60 + minute2 * 60 + sec2;
	
	int rem_sec;
	if (total_sec1 > total_sec2){
		rem_sec = total_sec1 - total_sec2;
	}
	else {
		rem_sec = total_sec2 - total_sec1;
	}
	
	// difference...
	int rem_h, rem_m, rem_s;
	rem_h = rem_sec / 3600;
	rem_sec = rem_sec % 3600;
	
	rem_m = rem_sec / 60;
	rem_sec = rem_sec % 60;
	
	rem_s = rem_sec;
	
	printf("Time Difference is: %d Hour %d Minute %d Second", rem_h, rem_m, rem_s); 
}