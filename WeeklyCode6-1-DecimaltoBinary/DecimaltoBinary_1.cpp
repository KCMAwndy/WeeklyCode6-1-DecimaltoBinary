#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int remainder = 0, decimal = 0, binary[32] = { 0 }, i = 0, j;
	printf("Input decimal : ");
	scanf("%d", &decimal);
	while (decimal > 0) {
		binary[i] = decimal % 2;
		decimal /= 2;
		i++;
	}
	for (j = i-1; j >= 0; j--) {
		printf("%d", binary[j]);
	}
	return 0;
}