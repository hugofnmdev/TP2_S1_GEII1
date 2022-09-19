#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <stdbool.h>  

// Niveau 1

int ex1()
{
    srand(time(NULL));
    int tirage = (rand()%9) + 1;
    
    if (tirage >= 5)
        printf("Gagné !");
    else
        printf("Perdu !");
}

int ex2()
{
    srand(time(NULL));
    int tirage = (rand()%2);

    if (tirage == 1)
        printf("ON");
    else
        printf("OFF");
}

int ex3()
{
    srand(time(NULL));
    int tirage;
    double PI = 3.14159;

    tirage = (rand()%360);

    double angleEnRadian = tirage * (PI/180);

    printf("%d\n", tirage);
    printf("%lf\n", cos(angleEnRadian));
}

int ex4()
{
    double argent = 20.0;
    argent = argent - (3 * 3.99);

    srand(time(NULL));
    int tirage = (rand()%11);

    if (tirage * 2.99 <= argent)
    {
        argent = argent - (tirage * 2.99);
        printf("%lf\n", argent);
    }
    else
        printf("Opération imposssible !");
} 

// Niveau 2

int loto()
{
    srand(time(NULL));
    int tirage = (rand()%9) + 1;
    int gain;

    if (tirage > 7)
    {
        gain = 5 * (tirage - 7);
        printf("Gagné %d", gain);
    }
    else
    {
        gain = 0;
        printf("Perdu !");
    }
}

int resistance()
{
    srand(time(NULL));
    int res1 = (rand()%10) + 1;
    int res2 = (rand()%10) + 1;

    int resEnSerie = res1 + res2;
    int resEnParallele = (res1 * res2) / resEnSerie;

    if (resEnSerie >= 5 && resEnSerie <= 10 && resEnParallele < 2)
        printf("OK");
    else
        printf("KO");
}

int calcul()
{
    srand(time(NULL));
    int tirage = (rand()%11);

    if (tirage % 2 == 0 && tirage >= 4)
    {
        printf("%lf\n", exp(1/((2 * tirage) - 4)));
    }
    else
    {
        printf("%lf\n", log(1/((2 * tirage) - 4)));
    }
}

// Niveau 3

int affichages()
{
    srand(time(NULL));
    int tirage = (rand()%10) + 1;

    if (tirage < 5)
    {
        if (tirage % 2 != 0)
            printf("C'est inférieur à 5 et impair");
        else
            printf("C'est inférieur à 5 et pair");
    }
    else if (tirage == 5)
        printf("C'est égal à 5");
    else if (tirage >= 6 && tirage <= 10)
        printf("C'est compris entre 6 et 10");
}

int heure(int secondes)
{
    int heure;
    int heureuk = 12;
    bool isAfternoon = false;
    int minute;
    int seconde;

    heure = secondes / 3600;
    minute = (secondes / 60) - (heure * 60);
    seconde = secondes - (heure * 3600) - (minute * 60);

    if (heure > 12)
    {
        heureuk = heure - 12;
        isAfternoon = true;
    }

    printf("Format Français %d", heure);
    printf(":%d", minute);
    printf(":%d\n", seconde);

    printf("Format Anglais %d", heureuk);
    printf(":%d", minute);
    printf(":%d", seconde);

    if (isAfternoon)
        printf("pm");
    else
        printf("am");
}

int main()
{    
    heure(51773);
}