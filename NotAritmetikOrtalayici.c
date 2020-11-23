#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
int main()
{
    void sleep(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}
    int a;
    int b;
    int c = 0;
    int d = 0;
    int e;
    printf("Write 1 to execute the program\n Write 0 to end the program.\n");
    scanf("%d" , &a);
    if (a != 0 && a != 1) {
        printf("You entered a wrong number.");
        sleep(2000);
    }
    else if (a== 0) {
        printf("Thank you for using");
        sleep(2000);
    }
    else {
    while (a == 1) {
        printf("Enter the exam score of the student : ");
        scanf("%d" , &b);
        printf("Write 1 to continue\n Write 0 to end the program.\n");
        scanf("%d" , &a);
        if (a != 0 && a != 1) {
        printf("You entered a wrong number.\n");
        sleep(2000);
        }
        d++;
        c = (c + b);
        e = c/d;
    }
    printf("Average score is %d" , e);
    sleep(2000);
    }
    return 0;
}
