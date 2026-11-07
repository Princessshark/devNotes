#include<stdio.h>


int main() {

	int x = 0;
	int y = 0;

	for(x = 0; x < 4; x = x + 1) {
		for (y = 0; y < 3; y = y + 1) {
			printf("Hello World\n");
		}
	}	
		int *ma = &x;
		int *mb = &y;
			printf("Memory address x axis = %p \n", ma);
			printf("Memory address Y axis = %p \n", mb); 
return 0;
}	
