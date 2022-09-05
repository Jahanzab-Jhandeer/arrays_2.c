#include<stdio.h>

int main () {
    
    float price[3];
    printf("Enter you first price :");
    scanf("%f" , &price[0]);

    printf("Enter you second price :");
    scanf("%f" , &price[1]);
    
    printf("Enter you third price :");
    scanf("%f" , &price[2]);
    
    printf("total price of first : %f\n" , price[0]+(0.18*price[0]));
    printf("total price of second : %f\n" , price[1]+(0.18*price[1]));
    printf("total price of third : %f\n" , price[2]+(0.18*price[2]));
}