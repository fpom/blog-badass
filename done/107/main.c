L'algorithme minimax
int fonction minimax (int profondeur)
{
if (game_over or profondeur = 0)
return evaluation();
int meilleur_score;
move meilleur_coup;
if (noeud == MAX) { //=Programme
meilleur_score = -INFINITY;
for (chaque coup possible m) {
jouer le coup m
int score = minimax (profondeur - 1)
annuler le coup m;
if (score > meilleur_score) {
meilleur_score = score;
meilleur_coup = m ; 4
}
}
}
else { //type MIN = adversaire
meilleur_coup = +INFINITY;
for (chaque coup possible m) {
jouer le coup m;
int score = minimax (depth – 1)
annuler le coup m;
if (score < meilleur_score) {
meilleur_score = score;
meilleur_coup = m ;
}
}
}
return meilleur_coup ;
}
