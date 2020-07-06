#include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

// NE CHANGEZ PAS CETTE DÉCLARATION
void theta (char* ruing) {
    
    int gap = 'a' - 'A';
    size_t i = 0;
    while(ruing[i] != '\0')
    {
        if(ruing[i] >= 'a' && ruing[i] <= 'z') ruing[i] -= gap; 
        else if(ruing[i] >= 'A' && ruing[i] <= 'Z') ruing[i] += gap;         
        i++;
    }
}

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

int main () {
    char berg[] = "DRAB peacock";
    theta(berg);
    printf("%s\n", berg);
}