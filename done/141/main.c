# include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

// NE CHANGEZ PAS CETTE DÉLARATION
void stomp (char* fop) {

// écrivez le corps de cette fonction 
    int i=0
    while(fop[i] !='\0')
    {
        if (fop[i] >= 97 && fop[i]<= 122)
           fop[i] = fop[i] -32;
        i++;
        
    }


    
}

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS
int main () {
    char piked[] = "SHINY tang";
    stomp(piked)
    printf("%s\n", piked);
    
}