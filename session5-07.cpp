#include <stdio.h>
int main(){
	int a,b;
	printf("Moi ban nhap 2 so: ");
	scanf("%d%d", &a, &b);
	int min=a<b?b:a;
	for(int i=min; i>=1; i--){
		if(a%i==0 && b%i==0){
			printf("Uoc chung lon nhat cua %d va %d la %d", a, b, i);
			break;
		}
	}
	return 0;
	
}