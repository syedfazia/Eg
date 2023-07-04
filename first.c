
#include "second.c"
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int sum(int a,int b);
int main(int argc, char *argv[]) {
	int a=4,b=5;
	int ans=sum(a,b);
	printf("%d",ans);
	return 0;
}
