#include<stdio.h>

int main(int argc, char const *argv[])
{
	int a[10];
	for(int i=0;i<10;i++){
		a[i] = i+100;
		printf("a[%d] = %d\n",i,a[i] );
	}
	return 0;
}