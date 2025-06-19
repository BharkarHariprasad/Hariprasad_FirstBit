// Convert the time entered in hr, min and sec into sec..

void main(){
	int hr, min, sec, total_sec;
	hr = 2 * 60 * 60;
	min = 45 * 60;
	sec = 25;
	
	total_sec = hr + min + sec;
	printf("Total sec is = %d", total_sec);
}
