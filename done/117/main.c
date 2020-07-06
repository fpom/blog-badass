/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
# include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

// NE CHANGEZ PAS CETTE DÉLARATION
void miser (char* issue)
{
    int maj = ("B, C, D, F, G, H, J, K, L, M, N, P, Q, R, S, T, V, W, X, Z");
    if (maj >= 'A' && maj <= 'Z') 
    {
        maj= maj+32;
    }
}

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

int main () {
    char vinyl[] = "PRICKLY kangaroo";
    miser(vinyl);
    printf("%s\n", vinyl);
    
}
