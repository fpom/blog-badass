#include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

char convertir(int c) {
    return c;
}

void urge (char* pared) {
    for (int i=0; i<17; i++) {
        if (pared[i] - 'a' <= 26 && pared[i] - 'a' >= 0) {
            pared[i] = convertir(pared[i] - 'a' + 'A');
        } else if (pared[i] == ' ') {
            pared[i] = pared[i];
        } else {
            pared[i] = convertir(pared[i] - 'A' + 'a');
        }
    }
}

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

int main () {
    char dingy[] = "GORGEOUS lionfish";
    urge(dingy);
    printf("%s\n", dingy);
}