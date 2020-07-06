# include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

// NE CHANGEZ PAS CETTE DÉLARATION
void siege (char* inset) {
    char conv[] = "bcdfghjklmnpqrstvwxz";
    for (int i = 0; i < sizeof(inset)/sizeof(char); i++)
    {   
        for (int c = 0; c < sizeof(conv); c++)
        {  
            if (inset[i] == conv[c])
            {       
                inset[i] = inset[i] + 32 ;
                break;
            }
        }
    }
    // écrivez le corps de cette fonction
}

    // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

int main () {
    char batty[] = "ANNOYED gecko";
    printf("%s\n", siege(batty));
}