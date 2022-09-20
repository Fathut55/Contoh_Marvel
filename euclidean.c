#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main(){
	
	double x1 = 0, y1 = 0;
	double x2 = 0, y2 = 0;
	double d;
	
	printf("- Titik P1(x,y) - \n");
	printf("Masukkan x1: ");
	scanf("%lf", &x1); getchar();
	printf("Masukkan y1: ");
	scanf("%lf", &y1); getchar();
	
	printf("\n- Titik P2(x,y) - \n");
	printf("Masukkan x2: ");
	scanf("%lf", &x2); getchar();
	printf("Masukkan y2: ");
	scanf("%lf", &y2); getchar();
	double x, y;
	x = pow((x1-x2), 2);
	y = pow((y1-y2), 2);
	x = x + y;
	x = sqrt(x);
	
	printf("\nJarak Euclidean antara titik P1 dan P2 = %.10lf", x);
		
	return 0;
}
