#include<stdio.h>


int main() {

	for (int i = 0; i < 10; i = i + 1) {
		for (int j = 0; i < 10; i = i + 1) {
			printf("Hello World\n");
		int *ma = &i;
		int *mb = &j;
			printf("Memory address x axis = %p \n", ma);
			printf("Memory address Y axis = %p \n", mb); 
		}
	}
return 0;
}	
