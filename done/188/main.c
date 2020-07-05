#include <stdio.h>
// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS
// NE CHANGEZ PAS CETTE DÃ‰LARATION
void slink(char *geld)
{
    int i = 0;
    while (*(geld + i) != '\0')
    {
        i++;
        if (*(geld + i - 1) >= 'a' && *(geld + i - 1) <= 'z')
        {
            if (*(geld + i - 1) != 'a' && *(geld + i - 1) != 'e' && *(geld + i - 1) != 'i' && *(geld + i - 1) != 'o' && *(geld + i - 1) != 'u' && *(geld + i - 1) != 'y')
            {
                *(geld + i - 1) = *(geld + i - 1) - ('a' - 'A');
                continue;
            }
        }
        if (*(geld + i - 1) >= 'A' && *(geld + i - 1) <= 'Z')
        {
            if (*(geld + i - 1) != 'A' && *(geld + i - 1) != 'E' && *(geld + i - 1) != 'I' && *(geld + i - 1) != 'O' && *(geld + i - 1) != 'U' && *(geld + i - 1) != 'Y')
            {
                *(geld + i - 1) = *(geld + i - 1) + ('a' - 'A');
            }
        }
    }
}
// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS
int main()
{
    char load[] = "LONELY chipmunk";
    slink(load);
    printf("%s\n", load);
}