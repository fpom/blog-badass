#include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

// NE CHANGEZ PAS CETTE DECLARATION
void* skyed (char* aside){
    int i = 0;
    while(aside[i] != 0){
        if(aside[i] >= 'a')
        {
        if(aside[i] == 'a' ||aside[i] == 'e' || aside[i] == 'i' || aside[i] == 'o' || aside[i] == 'u' || aside[i] == 'y') {
        aside[i] -= 32;
        }
        } 
        else 
        {
        if(aside[i] == 'A' ||aside[i] == 'E' || aside[i] == 'I' || aside[i] == 'O' || aside[i] == 'U' || aside[i] == 'Y') {
        aside[i] += 32;
        }
        }
    i++;
}
return aside;
}

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS
int main()
{
char circa[] = "exuberant UGUISU";
skyed(circa);
printf("%s\n",circa);
}