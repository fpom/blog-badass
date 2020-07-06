	#include <stdio.h>
	#include <string.h>

	// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

	// NE CHANGEZ PAS CETTE DÉLARATION
	 void faked (char* pink) {
	     
	 int i;
	        for (i =0; i<strlen(pink);i++){
	            if (pink[i]>60 && pink[i]<90)
	            pink[i] = pink[i]+32;
	 		}
	 }

	 // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

	int main () {
	char nadir[] = "FRIENDLY labradoodle";
	faked(nadir);
	printf("%s\n", nadir);
	}
