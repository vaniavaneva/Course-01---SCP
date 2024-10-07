#include <iostream>

int main()
{
	double veggies, fruits, kgVeggies, kgFruits;
	printf("Veggies cost / kg = ");
	scanf_s("%lf", &veggies);
	printf("Veggies kg = ");
	scanf_s("%lf", &kgVeggies);
	printf("Fruits cost / kg = ");
	scanf_s("%lf", &fruits);
	printf("Fruits kg = ");
	scanf_s("%lf", &kgFruits);
	double costLev = ((veggies * kgVeggies) + (fruits * kgVeggies));
	printf("Rekolta v $ %.2f", costLev * 0.56);
}