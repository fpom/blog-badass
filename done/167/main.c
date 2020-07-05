# include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

// NE CHANGEZ PAS CETTE DÉLARATION
 void equip (char* dusty) {
    int i = 0;
    while(dusty[i] != '\0') {
        if(dusty[i] == 97 || 101 || 105 || 111 || 117 || 121) {
            dusty[i] = dusty[i] - 32;
        }
        if(dusty[i] == 65 || 69 || 73 || 79 || 85 || 89) {
            dusty[i] = dusty[i] + 32;
        }
        i++;
    }

}

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

int main () {
    char snort[] = "ENCOURAGING bullfrog";
    equip(snort);
    printf("%s\n", snort);
}
