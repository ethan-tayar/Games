#include <stdio.h>
#include <string.h>
readline(char *str[], int n);
int main(int argc, char *argv[])
{
    int level = 1;
    int life = 5;
    int power = 0;
    char choice1[] = "Samehada";
    char choice2[] = "Damocles";
    char weapon[20];
    printf("--------------------------------------------------------------\n");
    printf("--------------------------------------------------------------\n");
    printf("--------------------------------------------------------------\n");
    printf("            WELCOME TO THE GAME OF THE DEATH                  \n");
    printf("--------------------------------------------------------------\n");
    printf("--------------------------------------------------------------\n");
    printf("--------------------------------------------------------------\n\n");
    printf("In this game you will need to confront huge enemy stronger than one another\n");
    printf("But firs choose your sword you can choose: Samehada Damocles ");
    printf("Level : %d Here is your first choice:", level);
    readline(weapon, 20);
    reajustpow(weapon, power);
    printf("%d", power);
    printf("Who you want to confront? press 1 Artemis the goddes of the wild or press 2 for Kratos the god of war\n");
}
int reajustpow(char str[20], int power)
{
    char *choice1[20];
    if (str == choice1)
    {
        power = 100;
    }
    else
    {
        power = 150;
    }
}
void read_line(char *buf, int size)
{
    fgets(buf, size, stdin);
    int len = strlen(buf);
    buf[len - 1] = 0;
}
