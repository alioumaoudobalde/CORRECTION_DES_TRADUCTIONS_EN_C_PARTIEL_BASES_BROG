// JE VAIS TRADUIRE CE ALGORITHME EN C

#include <stdio.h>
#include <string.h>

int main()
{
    int age, h, m, temps;

    typedef char string[1024];

    string sexe;

    printf("Combiend'heures tu avais fait pendant ton meilleur temps officiel de l'année? ");
    scanf("%d", &h);
    printf("Combien de minutes tu avais fait pendant ton meilleur temps officiel de l'année? ");
    scanf("%d", &m);

    temps = 3600 * h + 60 * m; // temps en secondes

    printf("Saisir homme si vous êtes Homme, saisir femme si vous êtes Femme ? ");
    scanf("%s", sexe);

    printf("Vous avez quel âge? ");
    scanf("%d", &age);

    if (age > 27)
    {
        if (strcmp(sexe, "homme") == 0)
        {
            if (age >= 27 && age <= 43)
            {
                if (temps <= 9900)
                {
                    printf("QUALIFIÉ! Félicitations.\n");
                }
                else
                {
                    printf("NON QUALIFIÉ! Du courage.\n");
                }
            }
            else if (age >= 44 && age <= 53)
            {
                if (temps <= 11100)
                {
                    printf("QUALIFIÉ! Félicitations.\\n");
                }
                else
                {
                    printf("NON QUALIFIÉ! Du courage.\\n");
                }
            }
            else if (age >= 54 && age <= 63)
            {
                if (temps <= 12000)
                {
                    printf("QUALIFIÉ! Félicitations.\\n");
                }
                else
                {
                    printf("NON QUALIFIÉ! Du courage.\\n");
                }
            }
            else if (age > 63)
            {
                if (temps <= 13500)
                {
                    printf("QUALIFIÉ! Félicitations.\\n");
                }
                else
                {
                    printf("NON QUALIFIÉ! Du courage.\\n");
                }
            }
            else
            {
                printf("Ton tranche âge n'est pas include.\n");
            }
        }
        else if (strcmp(sexe, "femme") == 0)
        {
            if (age >= 27 && age <= 43)
            {
                if (temps <= 12600)
                {
                    printf("QUALIFIÉE! Félicitations.\n");
                }
                else
                {
                    printf("NON QUALIFIÉE! Du courage.\n");
                }
            }
            else if (age >= 44 && age <= 53)
            {
                if (temps <= 13500)

                {
                    printf("QUALIFIÉE! Félicitations.\n");
                }
                else
                {
                    printf("NON QUALIFIÉE! Du courage.\n");
                }
            }
            else if (age >= 54 && age <= 63)
            {
                if (temps <= 13920)

                {
                    printf("QUALIFIÉE! Félicitations.\n");
                }
                else
                {
                    printf("NON QUALIFIÉE! Du courage.\n");
                }
            }

            else if (age > 63)
            {
                if (temps <= 14400)
                {
                    printf("QUALIFIÉE! Félicitations.\n");
                }
                else
                {
                    printf("NON QUALIFIÉE! Du courage.\n");
                }
            }
            else
            {
                printf("Ton tranche âge n'est pas include.\n");
            }
        }
        else
        {
            printf("ERREUR! Vous devez saisir homme ou femme en minuscules.\n");
        }
    }
    else
    {
        printf("NON QUALIFIÉ(E)! Du courage.\n");
    }
}
