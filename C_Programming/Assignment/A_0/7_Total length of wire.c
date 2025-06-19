// Finf total length of wire required for n fences around rectangular box..

void main(){
	int length, width, peri, n_fences, total;
	// find perimeter of rectangle
	length = 10;
	width = 5;
	peri = 2 * (length + width);
	printf("Perimeter of rectangle %d\n", peri);
	n_fences = 4;
	total = n_fences * peri;
	printf("%d fences length of wire is = %d meter", n_fences, total);
}