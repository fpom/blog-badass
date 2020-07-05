# include <stdio.h>
// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

// NE CHANGEZ PAS CETTE DÉLARATION
void file (char* loaf) {
// écrivez le corps de cette fonction
    int i = 0;
    
	while (loaf[i] != '\0')
	{
    	if (loaf[i] >= 97 && loaf[i] <= 122)
    	    loaf[i] = loaf[i] - 32;
    	i++;
	}

	while (loaf[i] != '\0')
	{
    	if (loaf[i] >= 65 && loaf[i] <= 90)
      	  	loaf[i] = loaf[i] +32;
    	i++;
	}

}
// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

int main () {
char trot[] = "busy CATERPILLAR";
printf("%s\n", file(trot));
}