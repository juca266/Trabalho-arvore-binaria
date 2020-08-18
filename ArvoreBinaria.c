#include <stdio.h>
#include <string.h>

typedef struct no s_no;
struct no {
	char valor[10];
	s_no* pai;
	s_no* filhoesq;
	s_no* filhodir;
};

void mostraNo(s_no* no);

int main(void) {
	s_no noA, noB, noC, noD, noE, noF, noG;
	
	strcpy (noA.valor,"Junior");
	strcpy (noB.valor,"Edizio");
	strcpy (noC.valor,"Rita");	
	strcpy (noD.valor,"Egidio");
	strcpy (noE.valor,"Neli");
	strcpy (noF.valor,"Hiroshi");
	strcpy (noG.valor,"Maria");

	noA.pai = NULL;
	noB.pai = &noA;
	noC.pai = &noA;
	noD.pai = &noB;
	noE.pai = &noB;
	noF.pai = &noC;
	noG.pai = &noC;
	
	noA.filhoesq = &noB;
	noA.filhodir = &noC;
	
	noB.filhoesq = &noD;
	noB.filhodir = &noE;

	noC.filhoesq = &noF;
	noC.filhodir = &noG;

	noD.filhoesq = NULL;
	noD.filhodir = NULL;
	
	noE.filhoesq = NULL;
	noE.filhodir = NULL;

	noF.filhoesq = NULL;
	noF.filhodir = NULL;

	noG.filhoesq = NULL;
	noG.filhodir = NULL;

	mostraNo(&noA);	

}

void mostraNo(s_no* no) {
	printf("\n %s", no->valor);
	
	if (no->filhoesq != NULL && no->filhodir != NULL) {
		printf("\nPai:");
		mostraNo(no->filhoesq);
	}
	
	if (no->filhodir != NULL) {
		printf("\nMae:");
		mostraNo(no->filhodir);
	}	
}
