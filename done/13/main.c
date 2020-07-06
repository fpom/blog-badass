# include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

// NE CHANGEZ PAS CETTE DÉLARATION

void exam (char* label) {
int	i;

i = 0;
while (label[i]) {
	if (label[i] >= 'a' && label[i] <= 'z')
		label[i] -= 32;
	else if (label[i] >= 'A' && label[i] <= 'Z')
		label[i] += 32;
	i++;
}
}

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

int main () {
char rifer[] = "doubtful PHEASANT";
exam(rifer);
printf("%s\n", rifer);
}
