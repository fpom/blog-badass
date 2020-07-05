# include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

// NE CHANGEZ PAS CETTE DÉLARATION
void rusty(char* fiber) {
	// écrivez le corps de cette fonction
    int i = 0;
    while (fiber[i] != '\0') {
        if (fiber[i] <= 'Z' && fiber[i] >= 'A') {
            fiber[i] = fiber[i] - 'A' + 'a';
        }
        i++;
    }
}

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

int main() {
	char tiara[] = "POWERFUL kingfisher";
    rusty(tiara);
	printf("%s\n",tiara);

}