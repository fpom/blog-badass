#include <stdio.h>
#include <string.h>
// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

// NE CHANGEZ PAS CETTE DÉLARATION
void him (char* nave) {
for(int i=0; i<strlen(nave); i++) {
    if(nave[i] == 'a' | nave[i] == 'e' | nave[i] == 'i' | nave[i] == 'o' | nave[i] == 'u' | nave[i] == 'y') {
        nave[i] = nave[i] - 'a' + 'A';
    } else {
        if(nave[i] == 'A' | nave[i] == 'E' | nave[i] == 'I' | nave[i] == 'O' | nave[i] == 'U' | nave[i] == 'Y') {
          nave[i] = nave[i] - 'A' + 'a';  
        }
    }
}
}

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

int main() {
    char raven[] = "IMPORTANT gopher";
    him(raven);
  printf("%s\n", raven);
}