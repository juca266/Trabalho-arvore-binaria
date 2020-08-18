#include <stdio.h>
#include <string.h>

typedef struct no s_no;
struct no {
	char valor[15];
	s_no* pai;
	s_no* filhoesq;
	s_no* filhodir;
};

void mostraNo(s_no* no);

int main(void) {
	s_no noA[10];
	
	strcpy (noA[0].valor,"Junior");
	strcpy (noA[1].valor,"Edizio");
	strcpy (noA[2].valor,"Rita");	
	strcpy (noA[3].valor,"Egidio");
	strcpy (noA[4].valor,"Neli");
	strcpy (noA[5].valor,"Hiroshi");
	strcpy (noA[6].valor,"Maria");

	noA[0].pai = NULL;
	noA[1].pai = &noA[0];
	noA[2].pai = &noA[0];
	noA[3].pai = &noA[1];
	noA[4].pai = &noA[1];
	noA[5].pai = &noA[2];
	noA[6].pai = &noA[2];
	
	noA[0].filhoesq = &noA[1];
	noA[0].filhodir = &noA[2];
	
	noA[1].filhoesq = &noA[3];
	noA[1].filhodir = &noA[4];

	noA[2].filhoesq = &noA[5];
	noA[2].filhodir = &noA[6];

	noA[3].filhoesq = NULL;
	noA[3].filhodir = NULL;
	
	noA[4].filhoesq = NULL;
	noA[4].filhodir = NULL;

	noA[5].filhoesq = NULL;
	noA[5].filhodir = NULL;

	noA[6].filhoesq = NULL;
	noA[6].filhodir = NULL;

	mostraNo(&noA[0]);	
	int i = 0;
		printf("\n %s", noA[i].valor);
	
		for (i=0; i<=15; i++){
		printf ("Pai: %s\n Mae:%s\n",noA[i].filhodir,noA[i].filhodir);

	
}

void mostraNo(s_no* no) {

	}
	
}
