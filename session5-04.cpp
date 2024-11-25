#include <stdio.h>
int main(){
	int n;
	printf("Moi ban nhap mot so nguyen trong khoang tu 1 den 10");
	scanf("%d", &n);
	if(n>=1 && n<=10){
		for(int i=1; i<=10; i++){
			printf("%dx%d=%d\n", n, i, n*i);
		}
	}
	return 0;
}