#include <stdio.h>
  // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS 
   // NE CHANGEZ PAS CETTE DÉLARATION

char *stab (char *label) {
	int i = 0;
	
	// écrivez le corps de cette fonction

	while (label[i] != '\0') {
		if (label[i] >= 'A' && label[i] <= 'Z') {
			if (label[i] == 'A' || label[i] == 'E' || label[i] == 'I' || label[i] == 'O' || label[i] == 'U' || label[i] == 'Y');
			else
				label[i] = label[i] + 32;
		}
		i = i + 1;
	}
	return label;
}

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

int main() {
	char cawed[] = "troubled GIRAFFE";
	printf("%s\n", stab(cawed));
}
