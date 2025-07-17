// Convert the time entered in hh, min and sec into total seconds..

#include<stdio.h>
void main() {
	int hour, min, sec, total_sec;
	printf("Enter a hour: ");
	scanf("%d", &hour);
	printf("Enter a min: ");
	scanf("%d", &min);
	printf("Enter a sec: ");
	scanf("%d", &sec);
	
	total_sec = (hour * 60 * 60) + (min * 60) + (sec);
	printf("Total seconds is: %d", total_sec);
}