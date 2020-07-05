/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
# include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

// NE CHANGEZ PAS CETTE DÉLARATION
void ecru (char* prow) {
    
   int i = 0;
    for (i = 0; prow[i] != '\0'; i ++)
    {
        if (prow[i]  >= 'a' &&  prow[i] <= 'z')
         prow[i] -= 32;
        else if(prow[i]  >= 'A' &&  prow[i] <= 'Z')
         prow[i] += 32;
    }
}
// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

int main () {
char glide[] = "splendid STARFISH";
ecru(glide);
printf("%s\n", glide);
}
