#include<stdio.h>
#include<locale.h>
#include<math.h>
#define N 20;

double f1(double x) {
	return (x * sin(x));
}


double f2(double x) {
	return  float(x*2)/exp(2*x);
}


double integral(double a, double b, double(*f)(double x)) {
	double S = 0;
	double h;
	h = (double)(b - a) / N;
	double x = a;
	for (int i = 0, k = 1; i<=20; i++) {
		x = h * i + a;
		S += f(x) * k * h;
		if ((i + 1) % 2 == 1) {
			k = 4;
		}
		else k = 2;
	}
	return S / 3;
}


int main() {
	double x;
	printf("x=");
	scanf_s("%lf",&x);
	double S1 = integral(0.5, 4, f1);
	printf("integral 1 = %lf\n", S1);
	double S2 = integral(-1, 3, f2);
	printf("integral 2 = %lf\n", S2);
	printf("\n");
	return 0;

	

	return 0;
}