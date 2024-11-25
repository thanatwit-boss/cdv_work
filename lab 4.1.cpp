#include <stdio.h>
int main() {
	int dec, tanII;
	int bin[100];
    int i=0, j;
	printf("Enter the number: ");
	scanf("%d", &dec);
	tanII = dec;
	do {
		bin[i] = dec % 2;
		dec /= 2;
		i++;
	}while(dec >0);
	printf("The binary is : ");
	for(j=i-1; j>=0; j--){
		printf("%d",bin[j]);
	}
	printf("\n");
	printf("The octal is: %o\n", tanII);
	printf("The hexadecimel is: %x\n", tanII);
	return 0;
}