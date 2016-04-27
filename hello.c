#include <stdio.h>

int main(){
	int i;
	for(i = 0; i < 10; i++){
		printf("%d  Hello World \n",i);
		if (i % 2 == 0) printf("\n");
	}	
		return 0;
}
