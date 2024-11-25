#include <stdio.h>;
int main(){
	int n;
	int i=10;
	printf("Moi ban nhap so nguyen ");
	scanf("%d", &n);
	while(n!=i){
		printf("Moi ban nhap so nguyen ");
		scanf("%d", &n);
	}
}