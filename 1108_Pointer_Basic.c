#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void swap(int *a, int *b)
	{
	int temp;
	
	temp=*a;//temp에 a넣기 
	*a=*b;//a에 b넣기 
	*b=temp;//b에 temp 넣기
	
	return;
	}
	
int main(int argc, char *argv[]) {
	
	int x=19;
	int y=29;
	
	printf("x = %i, y = %i\n", x, y);

	swap(&x, &y);
	
	printf("x = %i, y = %i\n", x, y);
	
	return 0;
}
