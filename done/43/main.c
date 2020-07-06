#include <stdio.h>
// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS
// NE CHANGEZ PAS CETTE DÉLARATION
void canoe(char *pasta)
{
    int i = 0;
    while (*(pasta + i) != '\0')
    {
        i++;
        if (*(pasta + i - 1) >= 'a' && *(pasta + i - 1) <= 'z')
        {
            *(pasta + i - 1) = *(pasta + i - 1) - ('a' - 'A');
            continue;
        }
    }
}
// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS
int main()
{
    char silier[] = "black NIGHTINGALE";
    canoe(silier);
    printf("%s\n", silier);
}