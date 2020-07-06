#include <stdio.h>
// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

// NE CHANGEZ PAS CETTE DECLARATION 
void gust(char* slum){
	// ecrivez le corps de cette fonction
int i = 0 ;
	while (slum[i]!='\0') {
		if(slum[i]=='A'|| slum[i]=='E'|| slum[i]=='I'|| slum[i]=='O'|| slum[i]=='U' || slum[i] =='Y') slum[i] = slum[i]+32; i++;
			
	}
	
 
}
// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS
int main(){
	char hilt[]="LUCKY kangarou" ;
	gust(hilt);
	printf("%s\n",hilt);
	
}
