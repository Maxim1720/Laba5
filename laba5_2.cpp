#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>
#include<string.h>

void input(int n, int *ptr) {
	for (int i = 0;i < n;i++) {
		ptr[i] = rand() % 70 -25;
	}
}
int  sum(int n, int* ptr) {
	int sum = 0;
	for (int i = 0;i < n;i++) {
		if (ptr[i] > 0) {
			sum += ptr[i];
		}
	}
	return sum;
}
int amount(int n, int* ptr) {
	int k = 0;
	for (int i = 0;i < n;i++) {
		if (ptr[i] > 0) {
			k++;
		}
	}
	return k;
}
void output(int n, int* ptr) {
	for (int i = 0;i < n;i++) {
		printf("|%+03d| ",ptr[i]);
		if (i>0 && i % 5 == 0)printf("\n");
	}
}
int main()
{
	system("color A");
	srand(time(NULL));
	setlocale(0, "");
	int A[75], B[60];
	int S1, S2, K1, K2;
	float Z;

	input(75, A);
	output(75, A);
	printf("\n\n");
	input(60, B);
	output(60, B);
	S1=sum(75, A);
	S2=sum(60, B);
	printf("\nСумма положительных элементов массивов 1) %d  ,  2) %d\n", S1, S2);
	K1=amount(75, A);
	K2=amount(60, B);
	printf("\nКоличество положительных элементов массивов 1) %d  ,  2) %d\n\n", K1, K2);

	Z = float(S1 + S2) /(K1 + K2);

	printf("\nZ = %.3f\n\n", Z);
	return 0;
}
