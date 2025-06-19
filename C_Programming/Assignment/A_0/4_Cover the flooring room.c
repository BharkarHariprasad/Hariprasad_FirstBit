// How many tiles to cover the flooring room..

void main(){
	
	// 1 m square = 10,000 cm square
	int msq = 144, cmsq = 10000;
	printf("144 meter square is = %d centimeter square\n", msq * cmsq);
	
	// Area of one tile is..
	// 12 * 12 = 144 centimeter square. 
	
	int room_area = 1440000;
	int one_tile = 144;
	int total_tile = room_area / one_tile;
	printf("Total number of tile to flooring the room area is = %d", total_tile);
}