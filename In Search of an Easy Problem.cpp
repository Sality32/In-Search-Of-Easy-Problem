#include<stdio.h>
int main(){
	int n,i,x=0;
	scanf("%d",&n);
	while(n>0){
		scanf("%d",&i);
		x=x+i;
		n--;
	}
	if(x>0)
	printf("HARD");
	else printf("EASY");
}
