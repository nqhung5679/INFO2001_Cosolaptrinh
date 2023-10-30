#include<stdio.h>

int main(){
	int a, b;
	printf("Enter a and b (b != 0, -10^18 <= a, b <= 10^18): ");
	scanf("%d %d", &a, &b);
	
	int c = a / b;
	int d = a % b;
	printf("Phan Nguyen: %d\n", c);
	printf("Phan du: %d\n", d);
	
	return 0;
}
