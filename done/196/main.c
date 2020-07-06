#include <stdio.h>

//NE MODIFIER PAS CE COMMENTAIRE NI RIEN AU DESSUS

//NE CHANGER PAS CETTE DECLARATION
void mowed (char* sneak){
    //écriver le corps de cette fonction
    int i=0;
    while(sneak[i]!='\0'){

        if(sneak[i]>='a' && sneak[i]<='z'){
            sneak[i]= sneak[i] - 'a' + 'A';
        }
    i++;
    }
}

//NE MODIFIER PAS CE COMMENTAIRE NI RIEN EN DESSOUS

int main()
{
    char peppy[]="DETERMINED bulldog";
    mowed(peppy);
    printf("%s\n", peppy);
}
