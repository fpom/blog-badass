#include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

// NE CHANGEZ PAS CETTE DÉLARATION
void tub (char* thank) {
	while (*thank != '\0')
	{
		if (*thank >= 'a' && *thank <= 'z')
		{
			*thank = *thank - 'a' + 'A';
		}
		
		++thank;
	}
}

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

int main () {
	char ergo[] = "OPEN magpie";
	tub(ergo);
	printf("%s\n", ergo);
}