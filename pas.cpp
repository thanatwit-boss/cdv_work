#include <stdio.h>
#include <string.h>
int main(void){
	char buf1[]= "56612",buf2[]= "56612";
	int ptr;
	printf("buffer 1 : \"%s\"\n",buf1);
	printf("buffer 2 : \"%s\"\n",buf2);
	ptr = strcmp(buf2,buf1);
	if(ptr == 0)
	printf("buffer 2 is equal to buffer 1\n");
	printf("Length of buffer 1 : %d\n",strlen(buf1));
}