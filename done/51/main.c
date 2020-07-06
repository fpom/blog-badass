#include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

// NE CHANGEZ PAS CETTE DÉCLARATION
void daft (char* bride){
    int i=0;
    for (i=0; bride[i] !='\0'; i++)
    {
    //On transforme les consonnes en minuscules        
        if (bride[i]=='b')
            bride[i]='B';
 
        if (bride[i]=='c')
            bride[i]='C';
 
        if (bride[i]=='d')
            bride[i]='D';
            
        if (bride[i]=='f')
            bride[i]='F';
        
        if (bride[i]=='g')
            bride[i]='G';
            
        if (bride[i]=='h')
            bride[i]='H';
		
		if (bride[i]=='j')
            bride[i]='J';
		
		if (bride[i]=='k')
            bride[i]='K';
		
		if (bride[i]=='l')
            bride[i]='L';
		
		if (bride[i]=='m')
            bride[i]='M';
		
		if (bride[i]=='n')
            bride[i]='N';
		
		if (bride[i]=='p')
            bride[i]='P';
		
		if (bride[i]=='q')
            bride[i]='Q';
		
		if (bride[i]=='r')
            bride[i]='R';
		
		if (bride[i]=='s')
            bride[i]='S';
		
		if (bride[i]=='t')
            bride[i]='T';
		
		if (bride[i]=='v')
            bride[i]='V';
		
		if (bride[i]=='w')
            bride[i]='W';
		
		if (bride[i]=='x')
            bride[i]='X';
		
		if (bride[i]=='z')
            bride[i]='Z';
    }
}

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

int main()
{
    char tor[] = "UNINTERESTED cheetah";
    daft(tor);
    printf("%s\n", tor);
}