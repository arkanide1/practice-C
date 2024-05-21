#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct date{
	int d;
	int m;
	int y;
}date;

typedef struct Voiture
{
	char nomVoiture[15];
	char marque[15];
	char couleur[7];
	int nbplaces;
	int idVoiture;
	int prixJour;
	char EnLocation[4];
} voiture;

typedef struct contratLocation
{
	float numContrat;
	int idVoiture;
	int idClient;
	date debut;
	date fin;
	int cout;
} contrat;

typedef struct Client
{
	char nom[20];
	char prenom[20];
	int idClient;
	int cin;
	char adresse[100];
	int telephone;
}client;
/* -----------MENUS-------------*/
void menuPrincipale();
void menuGestionLocations();
void menuGestionVoitures();
void menuGestionClients();
/* -----------menuGestionVoitures-------------*/

void ListeVoitures();
void AjouterVoiture();
void ModifierVoiture();
void SupprimerVoiture();

/*-----------menuGestionLocations-------------*/

void VisualierContrat();
void LouerVoiture();
void RetournerVoiture();
void ModifieContrat();
void SupprimerContrat();

/* -----------menuGestionClients-------------*/
void ListeClients();
void AjouterClient();
void ModifierClient();
void SupprimerClient();

int main(){
	menuPrincipale();
	return 0;
}

void menuPrincipale(){
	do {
		printf("\n\n\tMenu principal\n");
		printf("Localisation.................1\n");
		printf("Gestion Voitures.............2\n");
		printf("Gestion Clients..............3\n");
		printf("Quitter......................4\n");
		printf("Votre Choix :");
		int n ;
		scanf("%d", &n);
		while(getchar() != '\n');
		
		if ( n == 1){
			menuGestionLocations();
		}
		if ( n== 2 ){
			menuGestionVoitures();
		}
		if (n == 3){
			menuGestionClients();
		}
		if ( n ==4 ){
			exit(0);
		}
	}while(1);
}
void menuGestionVoitures(){
	do{
		printf("\n\n\tGestions des Voitures\n");
		printf("Liste des Voitures.................1\n");
		printf("Ajouter Voiture....................2\n");
		printf("Modifier Voiture...................3\n");
		printf("Supprimer Voiture..................4\n");
		printf("Retour.............................5\n");
		printf("Votre Choix :");
		int n ;
		scanf("%d", &n);
		while(getchar() != '\n');
		
		if ( n == 1){
			ListeVoitures();
		}
		if ( n== 2 ){
			AjouterVoiture();
		}
		if (n == 3){
			ModifierVoiture();
		}
		if ( n== 4 ){
			SupprimerVoiture();
		}
		if (n == 5 ){
			menuPrincipale();
		}
	}while(1);
}
void menuGestionLocations(){
	do {
		printf("\n\n\tLocalisation d'une Voitures\n");
		printf("Visualiser Contrat................1\n");
		printf("Louer Voiture.....................2\n");
		printf("Retourner Voiture.................3\n");
		printf("Modifier Contrat..................4\n");
		printf("Supprimer Contrat.................5\n");
		printf("Retour............................6\n");
		printf("Votre Choix :");
		int n ;
		scanf("%d", &n);
		while(getchar() != '\n');
		
		if ( n == 1){
			VisualierContrat();
		}
		if ( n== 2 ){
			LouerVoiture();
		}
		if (n == 3){
			RetournerVoiture();
		}
		if ( n== 4 ){
			ModifieContrat();
		}
		if (n == 5 ){
			SupprimerContrat();
		}
		if ( n ==6 ){
			menuPrincipale();
		}
	}while(1);
	
}

void menuGestionClients(){
	do {
		printf("\n\n\tGestions des Clients\n");
		printf("Liste des Clients.................1\n");
		printf("Ajouter Client....................2\n");
		printf("Modifier Client...................3\n");
		printf("Supprimer Client..................4\n");
		printf("Retour............................5\n");
		printf("Votre Choix :");
		int n ;
		scanf("%d", &n);
		while(getchar() != '\n');
		
		if ( n == 1){
			ListeClients();
		}
		if ( n== 2 ){
			AjouterClient();
		}
		if (n == 3){
			ModifierClient();
		}
		if ( n== 4 ){
			SupprimerClient();
		}
		if (n == 5 ){
			menuPrincipale();
		}
	}while(1);
}

/*-------------voiture--------------*/
void ListeVoitures(){
    voiture V;
    FILE *file = fopen("Voitures", "r");
    if (file == NULL) {
        perror("Error opening file");
        return;
    }
	while(fscanf(file , "%s %s %s %s %d %d %d", V.nomVoiture,V.marque,V.couleur,V.EnLocation,
										  &V.idVoiture,&V.nbplaces, &V.prixJour) == 7 ){
		printf("%s %s %s %s %d %d %d\n", V.nomVoiture,V.marque,V.couleur,V.EnLocation,
										  V.idVoiture,V.nbplaces, V.prixJour );
	}
	fclose(file);
}
void AjouterVoiture(){
	voiture V;
    FILE *file = fopen("Voitures", "a");
    if (file == NULL) {
        perror("Error opening file");
        return;
    }
	scanf("%s %s %s %s %d %d %d", V.nomVoiture,V.marque,V.couleur,V.EnLocation,
										  &V.idVoiture,&V.nbplaces, &V.prixJour);
	fprintf(file , "%s %s %s %s %d %d %d\n", V.nomVoiture,V.marque,V.couleur,V.EnLocation,
										  V.idVoiture,V.nbplaces, V.prixJour );
	fclose(file);
}

void ModifierVoiture(){
    voiture V;
    FILE *file = fopen("Voitures", "r+");
    if (file == NULL) {
        perror("Error opening file");
        return;
    }
    int idV;
    printf("enter l'id de voiture a modifier\n");
    scanf("%d", &idV);
	while(fscanf(file , "%s %s %s %s %d %d %d", V.nomVoiture,V.marque,V.couleur,V.EnLocation,
										  &V.idVoiture,&V.nbplaces, &V.prixJour) == 7 ){
		if (V.idVoiture == idV);
		break;
	}
	printf("enter les nouvelle informations:\n");
	scanf("%s %s %s %s %d %d %d", V.nomVoiture,V.marque,V.couleur,V.EnLocation,
										  &V.idVoiture,&V.nbplaces, &V.prixJour);
	
	
	fprintf(file ,"%s %s %s %s %d %d %d\n", V.nomVoiture,V.marque,V.couleur,V.EnLocation,
										  V.idVoiture,V.nbplaces, V.prixJour );
	fclose(file);
}
void SupprimerVoiture(){
	voiture V;
    FILE *file = fopen("Voitures", "r");
    FILE *tmpfile = fopen("temp", "w");
    if (file == NULL) {
        perror("Error opening file");
        return;
    }
    if (tmpfile == NULL) {
        perror("Error opening file");
        return;
    }
    
    int idV;
    printf("enter l'id de voiture a supprimer\n");
    scanf("%d", &idV);
	while(fscanf(file , "%s %s %s %s %d %d %d", V.nomVoiture,V.marque,V.couleur,V.EnLocation,
										  &V.idVoiture,&V.nbplaces, &V.prixJour) == 7 ){
		if (V.idVoiture != idV){
			fprintf(file ,"%s %s %s %s %d %d %d\n", V.nomVoiture,V.marque,V.couleur,V.EnLocation,
										  V.idVoiture,V.nbplaces, V.prixJour );
		}
	}
	fclose(file);
	fclose(tmpfile);
	remove("Voitures");
	rename("temp.txt", "Voitures");
}


/*-------------client--------------*/
void ListeClients(){
    client C;
    FILE *file = fopen("Clients", "r");
    if (file == NULL) {
        perror("Error opening file");
        return;
    }

	while(fscanf(file , "%s %s %s %d %d %d", C.nom,C.prenom,C.adresse, &C.idClient, &C.cin,&C.telephone) == 6 ){
		printf("%s %s %s %d %d %d\n", C.nom,C.prenom,C.adresse, C.idClient, C.cin,C.telephone );
	}
	fclose(file);
}
void AjouterClient(){
	client C;
    FILE *file = fopen("Clients", "a");
    if (file == NULL) {
        perror("Error opening file");
        return;
    }
	scanf("%s %s %s %d %d %d", C.nom,C.prenom,C.adresse,&C.idClient, &C.cin,&C.telephone);
	fprintf(file ,"%s %s %s %d %d %d\n", C.nom,C.prenom,C.adresse,C.idClient, C.cin,C.telephone);
	fclose(file);
}
void ModifierClient(){
    client C;
    FILE *file = fopen("Clients", "r+");
    if (file == NULL) {
        perror("Error opening file");
        return;
    }
    int idC;
    printf("enter l'id de client a modifier\n");
    scanf("%d", &idC);
	while(fscanf(file , "%s %s %s %d %d %d", C.nom,C.prenom,C.adresse,&C.idClient, &C.cin,&C.telephone) ==6 ){
		if (C.idClient == idC);
		break;
	}
	printf("enter les nouvelle informations:\n");
	scanf("%s %s %s %d %d %d", C.nom,C.prenom,C.adresse,&C.idClient, &C.cin,&C.telephone);
	
	
	fprintf(file ,"%s %s %s %d %d %d\n", C.nom,C.prenom,C.adresse,C.idClient, C.cin,C.telephone);
	fclose(file);
}
void SupprimerClient(){
	client C;
    FILE *file = fopen("Clients", "r");
    FILE *tmpfile = fopen("temp", "w");
    if (file == NULL) {
        perror("Error opening file");
        return;
    }
    if (tmpfile == NULL) {
        perror("Error opening file");
        return;
    }
    
    int idC;
    printf("enter l'id de client a supprimer\n");
    scanf("%d", &idC);
	while(fscanf(file , "%s %s %s %d %d %d", C.nom,C.prenom,C.adresse,&C.idClient, &C.cin,&C.telephone) == 7 ){
		if (C.idClient != idC){
			fprintf(file ,"%s %s %s %d %d %d\n", C.nom,C.prenom,C.adresse,C.idClient, C.cin,C.telephone );
		}
	}
	fclose(file);
	fclose(tmpfile);
	remove("Clients");
	rename("temp.txt", "Clients");
}

/*-------------contrat--------------*/
void VisualierContrat(){
	/*
	float numContrat;
	int idVoiture;
	int idClient;
	int cout;
	date debut;
	date fin;
	*/
	contrat C;
    FILE *file = fopen("ContactsLocations", "r");
    if (file == NULL) {
        perror("Error opening file");
        return;
    }
    float num ;
    printf("enter le numero de  contrat a visualiser :");
    scanf("%f", &num);
	while(fscanf(file , "%f %d %d %d %d %d %d %d %d %d",&C.numContrat, &C.idVoiture , &C.idClient ,&C.cout,
												&C.debut.d , &C.debut.m , &C.debut.y,
												&C.fin.d , &C.fin.m , &C.fin.y) == 10 ){
		if (num == C.numContrat)break;
	}
	printf("%f %d %d %d %d %d %d %d %d %d\n",C.numContrat, C.idVoiture , C.idClient ,C.cout,
												C.debut.d , C.debut.m , C.debut.y,
												C.fin.d , C.fin.m , C.fin.y );
	fclose(file);
	
}
void LouerVoiture(){
	voiture V;
	voiture Vl;
	client C;
	client Cl;
	int Client_exist = 0;
	int Voiture_exist = 0;
	FILE *Cont = fopen("ContactsLocations" , "a");
	FILE *fileC = fopen("Clients", "r");
	FILE *fileV = fopen("Voitures" , "r+");
	if (fileC == NULL) {
        perror("Error opening file");
        return;
    }
	if (fileV == NULL) {
        perror("Error opening file");
        return;
    }
	if (Cont == NULL) {
		perror("Error opening file");
		return;
	}
	
	printf("entez votre nom prenom: ");
	scanf("%s %s", Cl.nom , Cl.prenom);
	printf("entez les information sur la voiture que vous souhaite a louer:\n");
	printf("nom marque couleur nbplaces prixJour");
	scanf("%s %s %s %d %d", Vl.nomVoiture,Vl.marque,Vl.couleur,&Vl.nbplaces, &Vl.prixJour);
    
	while (fscanf(fileC ,"%s %s %s %d %d %d", C.nom,C.prenom,C.adresse,&C.idClient, &C.cin,&C.telephone) == 6  ){
		if (strcmp(C.nom , Cl.nom)==0 && strcmp(C.prenom , Cl.prenom)==0 ){
			Client_exist=1;
			break;
		}
	}
	if(!Client_exist){
		puts("enregistrer votre informations à travers le menu « Gestion clients »");
	}
	while(fscanf(fileV , "%s %s %s %s %d %d %d", V.nomVoiture,V.marque,V.couleur,V.EnLocation,
										  &V.idVoiture,&V.nbplaces, &V.prixJour) == 7 ){
		if (strcmp(Vl.nomVoiture , V.nomVoiture) == 0 &&
			strcmp(Vl.marque , V.marque) == 0 &&
			strcmp(Vl.couleur , V.couleur) == 0 &&
			Vl.nbplaces == V.nbplaces &&  Vl.prixJour == V.prixJour){
				Voiture_exist =1 ;					
				break;
		}
	}
	if(!Voiture_exist){
		puts("la voiture demandée n’existe pas");
		if (strcmp(V.EnLocation , "Oui") == 0){
			puts("la voiture n'est pas disponible");
		}else{
			strcpy(V.EnLocation, "Oui");
			fprintf(fileV , "%s %s %s %s %d %d %d", V.nomVoiture,V.marque,V.couleur,V.EnLocation,
										  V.idVoiture,V.nbplaces, V.prixJour);
			
			printf("créer un nouveau contrat\n");
			contrat CN;
			scanf("%f %d %d %d %d %d %d %d",&CN.numContrat,&CN.cout,
												&CN.debut.d , &CN.debut.m , &CN.debut.y,
												&CN.fin.d , &CN.fin.m , &CN.fin.y);
			fprintf(Cont , "%f %d %d %d %d %d %d %d %d %d\n",CN.numContrat, V.idVoiture , C.idClient ,CN.cout,
												CN.debut.d , CN.debut.m , CN.debut.y,
												CN.fin.d , CN.fin.m , CN.fin.y );
		}
	}
	fclose(fileC);
	fclose(fileV);
	fclose(Cont);
}
void SupprimerContrat(){
	contrat CN;
    FILE *Cont = fopen("ContactsLocations", "r");
    FILE *tmpfile = fopen("temp", "w");
    if (Cont == NULL) {
        perror("Error opening file");
        return;
    }
    if (tmpfile == NULL) {
        perror("Error opening file");
        return;
    }
    
    float numCont;
    printf("enter le numero de contrat a supprimer\n");
    scanf("%f", &numCont);
	while(fscanf(Cont ,"%f %d %d %d %d %d %d %d %d %d\n",&CN.numContrat, &CN.idVoiture , &CN.idClient ,&CN.cout,
												&CN.debut.d , &CN.debut.m , &CN.debut.y,
												&CN.fin.d , &CN.fin.m , &CN.fin.y )){
		if (CN.numContrat != numCont){
			fprintf(tmpfile ,"%f %d %d %d %d %d %d %d %d %d\n",CN.numContrat, CN.idVoiture , CN.idClient ,CN.cout,
												CN.debut.d , CN.debut.m , CN.debut.y,
												CN.fin.d , CN.fin.m , CN.fin.y);
		}
	}
	fclose(Cont);
	fclose(tmpfile);
	remove("ContactsLocations");
	rename("temp.txt", "ContactsLocations");	
}
void ModifieContrat(){
    contrat CN;
    FILE *Cont = fopen("ContactsLocations", "r+");
    if (Cont == NULL) {
        perror("Error opening file");
        return;
    }
    float numCont;
    printf("enter le numero de contrat a modifier\n");
    scanf("%f", &numCont);
	while(fscanf(Cont ,"%f %d %d %d %d %d %d %d %d %d\n",&CN.numContrat, &CN.idVoiture , &CN.idClient ,&CN.cout,
												&CN.debut.d , &CN.debut.m , &CN.debut.y,
												&CN.fin.d , &CN.fin.m , &CN.fin.y  )){
		if (CN.numContrat == numCont);
		break;
	}
	printf("enter les nouvelles informations:\n");
	scanf("%f %d %d %d %d %d %d %d %d %d\n",&CN.numContrat, &CN.idVoiture , &CN.idClient ,&CN.cout,
												&CN.debut.d , &CN.debut.m , &CN.debut.y,
												&CN.fin.d , &CN.fin.m , &CN.fin.y  );
	
	
	fprintf(Cont ,"%f %d %d %d %d %d %d %d %d %d\n",CN.numContrat, CN.idVoiture , CN.idClient ,CN.cout,
												CN.debut.d , CN.debut.m , CN.debut.y,
												CN.fin.d , CN.fin.m , CN.fin.y);
	fclose(Cont);
}
void RetournerVoiture(){
	// delete cont + enlocation to non
	ModifierVoiture();
	SupprimerContrat();	
}
// modification functions ba9ii 5ass it improvaw

