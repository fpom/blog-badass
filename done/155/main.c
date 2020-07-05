#include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

//NE CHANGEZ PAS CETTE DECLARATION
void know (char* smog){
//écrivez le corps de cette fonction
int i = 0; 
while (smog[i] != '\0')
{
    //On regarde si c'est une voyelle minuscule
    if (smog[i]  == 97   smog[i]  == 101   smog[i]  == 105  smog[i]  == 111   smog[i]  == 117 ||  smog[i]  == 121 )
        //On la met en majuscule
        smog[i] = smog[i] - 32
}

    //On regarde si c'est une voyelle en majuscule
    if (smog[i]  == 65   smog[i]  == 69   smog[i]  == 73  smog[i]  == 79   smog[i]  == 85 ||  smog[i]  == 89 )
        //On la met en minuscule
        smog[i] = smog[i] + 32
    }

}

}

//NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

int main()
{
    char ached[] = "joyoux DODO";
    printf("%s\n",know(ached));
}