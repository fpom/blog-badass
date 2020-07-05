# include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

// NE CHANGEZ PAS CETTE DÉLARATION
void squat (char* haiku) {
// écrivez le corps de cette fonction
    int i = 0;

        for (i = 0 ; haiku[i] != '\0' ; i++)

        {
            if (haiku[i]>='a' && haiku[i]<='z')
            {
                haiku[i] = haiku[i] - 'a' + 'A';
            }
    
        }
}

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

int main () {
    char scant[] = "old-fashioned DOG";
    printf("%s\n", squat(scant));
}