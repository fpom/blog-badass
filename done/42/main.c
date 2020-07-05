#include <stdio.h>
#include <stdlib.h>

//NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

//NE CHANGEZ PAS CETTE DECLARATION
char* loony(char* taunt){

		if(taunt[i] >= 'a' && taunt[i] <= 'z'){
			taunt[i] = taunt[i] - 'A' + 'a';
		}else{
			taunt[i] = taunt[i] - 'a' + 'A';
		}
	
	
}

//NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

int main (){
	char fer[] = "friendly BURMESE";
	printf("%s\n", loony(fer));
	return 0;
}
}
