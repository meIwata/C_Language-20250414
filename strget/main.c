#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char str[20];
//	scanf("%s", &str);
	gets(str);
	int i;
	for(i = 0; i < strlen(str); i++){
		printf("%c\n", str[i]);
	}
	return 0;
}
