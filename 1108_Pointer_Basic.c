#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int grade[5] = {10, 20, 30, 40, 50};
	int ave;
	int *ptr;
	int i;
	
	ptr=grade;//ptr=배열 첫 주소 
	
	for(i=0; i<5; i++)
	{
	ave += ptr[i]/5; 
	}
	 
	printf("average : %i", ave);
	
	return 0;
}
