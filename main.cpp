#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	char temp_prenom[99];
	float temp_note = 0, moyenne = 0, notes_sum = 0;
	int compteur = 0;
	
	float note_max = 0, note_min = 999;
	char meilleur[50] = "";
	char pire[50] = "";
	
	int i = 0;
	
	while(true){
		printf("Prenom de l eleve : ");
		scanf("%s", &temp_prenom);
		
		printf("Note de l eleve : ");
		scanf("%f", &temp_note);
		
		compteur++;
		
		notes_sum = notes_sum + temp_note;
		moyenne = notes_sum / compteur;
		printf("La moyenne est de : %f \n", moyenne);
		
		if(temp_note > note_max){
			note_max = temp_note;
			while(i < 49){
				meilleur[i] = temp_prenom[i];
				i++;
			}
			i = 0;
		}
		
		if(temp_note < note_min){
			note_min = temp_note;
			while(i < 49){
				pire[i] = temp_prenom[i];
				i++;
			}
			i = 0;
		}
		
		printf("Le meilleur eleve est : %s", meilleur);
		printf(" avec la note de : %f \n", note_max);
		
		printf("Le pire eleve est : %s", pire);
		printf(" avec la note de : %f \n", note_min);
	}
	
	return 0;
}
