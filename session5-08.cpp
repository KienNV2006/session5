#include <stdio.h>
int main(){
	int a,b;
	printf("Moi ban nhap 2 so: ");
	scanf("%d%d", &a, &b);
	for(int i=1; i>=1; i++){
		if(i%a==0 && i%b==0){
			printf("Boi chung nho nhat cua %d va %d la %d", a, b, i);
			break;
		}
	}
	return 0;
	
}