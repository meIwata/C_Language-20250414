#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num[10];
	int i;
	for(i=0;i<10;i++){
		scanf("%d", &num[i]);
	}
	for(i=0;i<10;i++){
		printf("%d\n", num[i]);
	}
	return 0;
}
