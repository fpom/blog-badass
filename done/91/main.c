# include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU

// NE CHANGEZ PAS CETTE DÉLARATION  
void kilo (char* shop) {
    char CONSTCONS[] = "bcdfghjklmnpqrstvwxz";
    for (int i = 0; i < sizeof(shop)/sizeof(char); i++)
    {   
        for (int c = 0; c < sizeof(CONSTCONS); c++)
        {  
            if (shop[i] == CONSTCONS[c])
            {       
                shop[i] = shop[i] - 32 ;
                break;
            }
        }
    }
}

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

int main () {
char gnarl[] = "long AVOCET";
kilo(gnarl);
printf("%s\n", gnarl);
}