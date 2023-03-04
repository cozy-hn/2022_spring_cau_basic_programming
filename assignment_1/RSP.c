#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main(void) 
{
    int user, computer;
    printf("Rock-paper-scissors game \n");
    printf("Select one of the following (Rock-0, Scissors-1, Paper-2): ");
    scanf("%d", &user);		

    srand(time(NULL));
    computer = rand() % 3;
    printf("User=%d \n", user);
    printf("Computer=%d \n", computer);

    if (computer == user) 
        printf("draw. \n");
    else if ((computer-user+1)%3==0) 
        printf("computer win \n");
    else printf("user win \n");
    return 0;

}