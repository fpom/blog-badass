/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

// NE CHANGEZ PAS CETTE DÉLARATION
void corn (char* byway) {
    int i=0;
    
    for(i=0; byway[i]!= '\0'; i++){
        byway[i]= toupper(byway[i]);
    }
    
}

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

int main () {
    char roved[] = "RICH crocodile";
    corn(roved);
    printf("%s\n", roved);
}