#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void swap(int *a, int *b)
	{
	int temp;
	
	temp=*a;//temp�� a�ֱ� 
	*a=*b;//a�� b�ֱ� 
	*b=temp;//b�� temp �ֱ�
	
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
