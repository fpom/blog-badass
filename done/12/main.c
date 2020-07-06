#include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSOUS

// NE CHANGEZ PAS CETTE DECLARATION
void* give (char* rigor){
    int i = 0;
    while(rigor[i] != 0){
        if(rigor[i] >= 'a'){
            if(rigor[i] == 'a' ||rigor[i] == 'e' || rigor[i] == 'i' || rigor[i] == 'o' || rigor[i] == 'u' || rigor[i] == 'y') {
                rigor[i] -= 32;
            }
        } else {
            if(rigor[i] == 'A' ||rigor[i] == 'E' || rigor[i] == 'I' || rigor[i] == 'O' || rigor[i] == 'U' || rigor[i] == 'Y') {
                rigor[i] += 32;
            }
        }
        i++;
    }
    return rigor;
}

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSOUS

int main () {
char rigor[] = "bad DUNKER";
printf("%s\n", give(rigor));
}