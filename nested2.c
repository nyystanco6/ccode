#include <stdio.h>

int main(){
	char asc = '0';
	int r,c;
	int v = 32;
	for (r = 0; r < 16; r++){
		for (c = 0; c < 6; c++){
			asc = (char)v;
			printf (" %c ", asc);
			v++;
			count++;
		}
		printf("\n");
	}
	printf("\n\n v = %d \n",v);
	return 0;
}
