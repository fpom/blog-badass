/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/


#include <stdio.h>
#include <stdlib.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

// NE CHANGEZ PAS CETTE DÉLARATION
void euro (char* woven) {
// écrivez le corps de cette fonction
char henna[255];
//VOYELLES A E I O U Y
int i = 0;
scanf("%ms", &woven);
while(henna [i]!='\0'){
    
    if (henna[i] == 'a')
     henna[i] =  'A';
     
    if (henna[i] == 'e')
     henna[i] =  'E';
     
    if (henna[i] == 'i')
     henna[i] =  'I';
     
    if (henna[i] == 'o')
     henna[i] =  'O';
     
    if (henna[i] == 'u')
     henna[i] =  'U';
     
    if (henna[i] == 'y')
     henna[i] =  'Y';
    
}
}
// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

int main () {
char henna[] = "COURAGEOUS chimpanzee";
printf("%s\n", euro(henna));
}