#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void arvaaKirjain(void);
void piirraHirsipuu(int);

char arvattava[100];
char naytettava[100];
int pituus;
int vaarat;

int main()
{
    char tiedosto[] = "sanat.txt";

    FILE * ptr;

    char * muuttuja;

    char rivi[100];

    int maara = 0, arvottava, i;

    srand(time(NULL));

    //avaa tiedoston

    if((ptr = fopen(tiedosto, "r")) == NULL)
    {
        printf("Virhe tiedoston avaamisessa.");

        return 0;
    }


    //laskee tiedoston sanat

    for (muuttuja = fgets(rivi, 100, ptr); muuttuja != NULL; muuttuja = fgets(rivi, 100, ptr))
    {
        maara++;
    }

    fclose(ptr);
    ptr = NULL;

    if((ptr = fopen(tiedosto, "r")) == NULL)
    {
        printf("Virhe tiedoston avaamisessa.");

        return 0;
    }

    //arpoo arvattavan sanan ja tallentaa muuttujaan arvattava

    arvottava = rand() % (maara + 1);

    for (i = 1; i <= maara; i++)
    {
        fgets(rivi, 100, ptr);

        if (i == arvottava)
        {
            strcpy(arvattava, rivi);
            break;
        }
    }



    if (arvattava[strlen(arvattava) - 1] == '\r' || arvattava[strlen(arvattava) - 1] == '\n')
            arvattava[strlen(arvattava) - 1] = '\0';


    pituus = strlen(arvattava);

    for(i = 0; i < pituus - 1; i++)
    {
        naytettava[i] = '_';
    }

    naytettava[i] = '\0';

    fclose(ptr);
    ptr = NULL;

    // pelaa

    while (vaarat < 8)
    {
        arvaaKirjain();
    }

    if (vaarat >= 8)
        printf("\nArvattava sana oli: %s", arvattava);

 return 0;

}

void arvaaKirjain(void)
{
    char arvaus, verrattava;

    int i, loytyi = 0;

    printf("\n\nArvaa kirjain: > ");
    scanf("%c", &arvaus);
    while (getc(stdin) != '\n');

    for(i = 0; i < pituus; i++)
    {
        verrattava = arvattava[i];

        if (arvaus == verrattava)
        {
            naytettava[i] = arvaus;
            loytyi++;
        }
    }

    if (loytyi > 0)
    {

        printf("\n%s", naytettava);

        if (strcmp(naytettava, arvattava) == 0)
        {
            printf("\n\nHienoa, arvasit oikein!");
            exit(0);
        }
    }

    if (loytyi == 0)
    {
        vaarat++;
        piirraHirsipuu(vaarat);
    }


    return;
}

void piirraHirsipuu(int vaihe)
{
    switch(vaihe)
    {
        case 1:
            printf("\n\n    -------");
            break;

        case 2:
            printf("\n");
            printf("\n       |");
            printf("\n       |");
            printf("\n       |");
            printf("\n       |");
            printf("\n       |");
            printf("\n    -------");
            break;

        case 3:
            printf("\n");
            printf("\n       ____");
            printf("\n       |");
            printf("\n       |");
            printf("\n       |");
            printf("\n       |");
            printf("\n       |");
            printf("\n    -------");
            break;

        case 4:
            printf("\n");
            printf("\n       ______");
            printf("\n       |    |");
            printf("\n       |");
            printf("\n       |");
            printf("\n       |");
            printf("\n       |");
            printf("\n    -------");
            break;

         case 5:
            printf("\n");
            printf("\n       ______");
            printf("\n       |    |");
            printf("\n       |    O");
            printf("\n       |");
            printf("\n       |");
            printf("\n       |");
            printf("\n    -------");
            break;

        case 6:
            printf("\n");
            printf("\n       ______");
            printf("\n       |    |");
            printf("\n       |    O");
            printf("\n       |    |");
            printf("\n       |");
            printf("\n       |");
            printf("\n    -------");
            break;

         case 7:
            printf("\n");
            printf("\n       ______");
            printf("\n       |    |");
            printf("\n       |    O");
            printf("\n       |   /|\\ ");
            printf("\n       |");
            printf("\n       |");
            printf("\n    -------");
            break;

        case 8:
            printf("\n");
            printf("\n       ______");
            printf("\n       |    |");
            printf("\n       |    O");
            printf("\n       |   /|\\ ");
            printf("\n       |   / \\");
            printf("\n       |");
            printf("\n    -------");
            break;

    }

    return;
}

