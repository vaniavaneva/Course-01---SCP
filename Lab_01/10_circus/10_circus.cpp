#include <iostream>

int main()
{
    double math, bel, ae, phy, budget, ticket;
	printf("Math cost: ");
	scanf_s("%lf", &math);
	printf("BeL cost: ");
	scanf_s("%lf", &bel);
	printf("AE cost: ");
	scanf_s("%lf", &ae);
	printf("Phy cost: ");
	scanf_s("%lf", &phy);
	printf("Ticket for circus: ");
	scanf_s("%lf", &ticket);
	printf("Budget: ");
	scanf_s("%lf", &budget);
	double cost = math + bel + ae + phy + ticket;
	if (budget >= cost){
		printf("Lilly can go. %.2f lv. left", budget - cost);
	}
	else {
		printf("Lilly can't go. She needs %.2f lv. more", cost - budget);
	}
}