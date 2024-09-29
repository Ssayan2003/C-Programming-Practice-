/*Write a C program to read an amount (integer value) and break the amount into the smallest possible 
number of bank notes.
Note: The possible banknotes are 100, 50, 20, 10, 5, 2 and 1.*/
#include<stdio.h>
void possible_notes(int value)
{
    int amount,total;
    total=value/100;
    printf("%d number of 100 nnotes are required\n ",total);
    amount=value-(total*100);
    total=amount/50;
    printf("%d number of 50 nnotes are required\n ",total);
    amount=amount-(total*50);
    total=amount/10;
    printf("%d number of 10 nnotes are required\n ",total);
    amount=amount-(total*10);
    total=amount/5;
    printf("%d number of 5 nnotes are required\n ",total);
    amount=amount-(total*5);
    total=amount/2;
    printf("%d number of 2 nnotes are required\n ",total);
    amount=amount-(total*2);
    total=amount/1;
    printf("%d number of 1 nnotes are required\n ",total);
    amount=amount-(total*1);
}
int main()
{
    int n;
    printf("Enter amount");
    scanf("%d",&n);
    possible_notes(n);
}
