#include <stdio.h>
#include <string.h>
void abc(void);
void square(int W, int L);
float circle(int r);
main(){
	st:
	int r;
	//abc();
	//square(5,20);
	//square(50,100);
	printf("enter radius");scanf("%d",&r);
	printf("Circle %.3f",circle(r));
	goto st;
}

void abc(void){
	printf("hello world\n");
}

void square(int W,int L){
int ANS = W*L;
printf("Answer = %d\n", ANS);
}

float circle(int r){
	float c=3.14*r*r;
	return c;
}