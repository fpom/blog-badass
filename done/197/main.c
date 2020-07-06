# include <stdio.h>


// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

// NE CHANGEZ PAS CETTE DÉLARATION
 void ocher (char* adept) {
 // écrivez le corps de cette fonction
int i,z;
i=0;
z='A';
 while(adept[i] !='\0')
 {
 z='A';
 
 
 if(adept [i] != 'A' && adept [i] != 'E'&& adept [i] != 'I'&& adept [i] != 'O'&& adept [i] != 'U'&&adept [i] != 'Y'&&adept[i]>z&&adept[i]<=z+25)
 {
 	adept[i]=adept[i]-z+'a';
 	
 	
 }
 i=i+1;
}
 }
// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

int main () {
	
char glove[] = "MOTIONLESS ladybug";
ocher(glove);

printf("%s \n", glove);

 }
