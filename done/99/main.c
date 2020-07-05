#include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

// NE CHANGEZ PAS CETTE DECLARATION
void* gybed (char* cilia){
    int i = 0;
    while(cilia[i] != 0){
        if(cilia[i] >= 'a'){
            if(cilia[i] == 'a' ||cilia[i] == 'e' || cilia[i] == 'i' || cilia[i] == 'o' || cilia[i] == 'u' || cilia[i] == 'y') {
                cilia[i] -= 32;
            }
        } else {
            if(cilia[i] == 'A' ||cilia[i] == 'E' || cilia[i] == 'I' || cilia[i] == 'O' || cilia[i] == 'U' || cilia[i] == 'Y') {
                cilia[i] += 32;
            }
        }
        i++;
    }
    return cilia;
}

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS
int main()
{
    char voted[] = "bright CAIMAN";
    printf("%s\n",gybed(voted));
}
