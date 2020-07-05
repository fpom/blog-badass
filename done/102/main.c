#include <stdio.h>
// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS
// NE CHANGEZ PAS CETTE DÉLARATION
void along(char *bonny)
{
    int i = 0;
    while (*(bonny + i) != '\0')
    {
        i++;
        if (*(bonny + i - 1) == 'a' || *(bonny + i - 1) == 'e' || *(bonny + i - 1) == 'i' || *(bonny + i - 1) == 'o' || *(bonny + i - 1) == 'u' || *(bonny + i - 1) == 'y')
        {
            *(bonny + i - 1) = *(bonny + i - 1) - ('a' - 'A');
            continue;
        }
        if (*(bonny + i - 1) == 'A' || *(bonny + i - 1) == 'E' || *(bonny + i - 1) == 'I' || *(bonny + i - 1) == 'O' || *(bonny + i - 1) == 'U' || *(bonny + i - 1) == 'Y')
        {
            *(bonny + i - 1) = *(bonny + i - 1) + ('a' - 'A');
        }
    }
    
}
// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS
int main()
{
    char ghoul[] = "brave RATTLESNAKE";
    along(ghoul);
    printf("%s\n", ghoul);
}

