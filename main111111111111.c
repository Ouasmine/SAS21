#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
//Déclaré le compte de notre clients --------------------------------
int n = 3;
//Déclaré de type structure compte------------------------------------------
typedef struct { 
		char cin[15];
		char nom[35];
		char prenom[35];
		float montant;
	} compte;
//Déclaration et initialisation de variable de type structure compte ----------
compte cpte[50]={{"HH4487","aziz","benani",9000},{"B43256","alaa","bentaher",3000},{"H43329","amina","benchakroun",7000}};//variable d'une structure//
//fonctions de gestion des comptes bancaires -----------------------------------
void introduire(){
 	int i=n;
 	char autre;
 	do {
        	system("cls");
        	printf("\t\tCreation d'un ou plusieurs comptes bancaires \n\n\n");  	 
        	printf ("CIN : ");
        	scanf("%s",cpte[i].cin);
        	printf ("Nom : ");
        	scanf("%s",cpte[i].nom);
        	printf ("Prenom : ");
        	scanf("%s",cpte[i].prenom);
        	printf ("Montant : ");
        	scanf("%f",&cpte[i].montant); 
        	n++;
        	for(i=0;i<n;i++)
        	{
			}
        	printf("Autre compte (o/n)? ");
        	autre=getch(); //attendre la reponse//
    } while(autre!='n');
}
//fonctions des opérations bancaires -------------------------------------------
void depot()
{
    int i,a;
    char cin[15];
    float montant;
	system("cls");
	printf("\t\tDepot\n\n\n");
	printf("Entrer CIN : ");
	scanf("%s",cin);
	for(i=0;i<n;i++) 
	{
		if (strcmp(cpte[i].cin,cin)==0)  
        {
           a=0;          
           break;  //sortir de la boucle//                   
        }
        
	}
    if (a==0)
    {	
 printf("Entrer le montant desire : ");
	    scanf("%f",&montant);
	    cpte[i].montant+=montant;
	    printf("\t\tVotre operation effectuee ...\n\n\n");
     }
	else
	    printf("ce cin n'existe pas.\n");
	system("pause");    
}
void retrait()
{
int i,b;
    char cin[15];
    float mt;
	system("cls");
	printf("\t\tRetrait\n\n\n");
	printf("Entrer CIN : ");
	scanf("%s",cin);
	for(i=0;i<n;i++)
	{
		if (strcmp(cpte[i].cin,cin)==0) //declaration//
        {
           b=0;          
           break;                     
        }
        
	}
    if (b==0)
    {	
	    printf("Entrer le montant souhaite : ");
	    scanf("%f",&mt);
	    cpte[i].montant-=mt;
	    printf("\t\tVotre operation est effectuee ...\n\n\n");
     }
	else
	    printf("ce cin n'existe pas.\n");
	system("pause");   
}
//fonctions d'affichage des comptes bancaires ----------------------------------
void afficher1()	{
	int i,j;
	compte tmp;
	system("cls");
	printf("\t\tAffichage des montants par ordre ascendant\n\n\n");
    for(i=0;i<n;i++)
    {
       for(j=i+1;j<n;j++)
       {
          if(cpte[j].montant<cpte[i].montant)
          {
               tmp=cpte[i];
               cpte[i]=cpte[j];
               cpte[j]=tmp;                              
          }               
       }
    }

	for(i=0;i<n;i++)
	{
		printf(" \t%s\t%s\t%s\t%.2f\n",cpte[i].cin,cpte[i].nom,cpte[i].prenom,cpte[i].montant);
	}
	system("pause");
}
void afficher2()	{
	int i,j;
	compte tmp;
	system("cls");
	printf("\t\tAffichage des montants par ordre descendant\n\n\n");
    for(i=0;i<n;i++)
    {
       for(j=i+1;j<n;j++)
       {
          if(cpte[j].montant>cpte[i].montant)
          {
               tmp=cpte[i];
               cpte[i]=cpte[j];
               cpte[j]=tmp;                              
          }               
       }
    }

	for(i=0;i<n;i++)
	{
		printf(" \t%s\t%s\t%s\t%.2f\n",cpte[i].cin,cpte[i].nom,cpte[i].prenom,cpte[i].montant);
	}
	system("pause");
	
}
void afficher3()	{
	int i,j;
	compte tmp;
	float x;
	system("cls");
	printf("\t\tAffichage ordre ascendant des comptes ayants un montant>un chiffre saisi\n\n\n");
	printf("Donnez un chiffre : ");
	scanf("%f",&x);
    for(i=0;i<n;i++)
    {
       for(j=i+1;j<n;j++)
       {
          if(cpte[j].montant<cpte[i].montant)
          {
               tmp=cpte[i];
               cpte[i]=cpte[j];
               cpte[j]=tmp;                              
          }               
       }
    }

	for(i=0;i<n;i++)
	{
		if (cpte[i].montant>x)
        printf(" \t%s\t%s\t%s\t%.2f\n",cpte[i].cin,cpte[i].nom,cpte[i].prenom,cpte[i].montant);
	}
	system("pause");
	
}
void afficher4()	{
	int i,j;
	compte tmp;
	float x;
	system("cls");
	printf("\t\tAffichage ordre descendant des comptes ayants un montant>un chiffre saisi\n\n\n");
	printf("Donnez un chiffre : ");
	scanf("%f",&x);
    for(i=0;i<n;i++) //
    {
       for(j=i+1;j<n;j++) //
       {
          if(cpte[j].montant>cpte[i].montant) //
          {
               tmp=cpte[i];
               cpte[i]=cpte[j];
               cpte[j]=tmp;                              
          }               
       }
    }

	for(i=0;i<n;i++)
	{
		if (cpte[i].montant>x)
        printf(" \t%s\t%s\t%s\t%.2f\n",cpte[i].cin,cpte[i].nom,cpte[i].prenom,cpte[i].montant);
	}
	system("pause");
	
}
void rechercher()	{
    int i,c;
    char cin[10];
	system("cls");
	printf("\t\tRecherche\n\n\n");
	printf("Veuillez entrer le CIN : ");
	scanf("%s",cin);
	for(i=0;i<n;i++)
	{
		if (strcmp(cpte[i].cin,cin)==0)
        {
           c=0;
           break;                     
        }
	}
    if (c==0)	
	    printf(" \t%s\t%s\t%s\t%.2f\n",cpte[i].cin,cpte[i].nom,cpte[i].prenom,cpte[i].montant);
	else
	    printf("Ce CIN n'existe pas.\n");
	system("pause");    
}
// fonction de fidélisation ----------------------------------------------------
void fideliser()	{
     int i,j;
	compte tmp; //valeur temporaire//
	system("cls");
    for(i=0;i<n;i++)
    {
       for(j=i+1;j<n;j++)
       {
          if(cpte[j].montant>cpte[i].montant)
          {
               tmp=cpte[i];
               cpte[i]=cpte[j];
               cpte[j]=tmp;                              
          }               
       }
    }

	for(i=0;i<3;i++)
	{
		cpte[i].montant+=cpte[i].montant*0.013;
	}
	printf("\t\tOpération effectuée ...\n\n\n");
	system("pause");
	
}
// Menu des opérations bancaires -----------------------------------------------
void menuoperation()
{		
              int choix;
              do {             
				system("cls");
                printf("\t\tMenu - Operations\n");
				printf("\t\t--------------\n\n\n");
				printf("\t1. Depot \n\n");
				printf("\t2. Retrait \n\n");
				printf("\t3. Retour \n\n");
			    printf("\t\tVeuillez entrer votre selection  : ");
			    scanf("%d",&choix);
			  switch(choix)
			    {
                             case 1 : depot();break;
                             case 2 : retrait();break;
                           
                }
           } while(choix!=3);
}
// ---------------------Menu d'affichage des comptes bancaires ---------------------------
void menuaffichage()
{		
              int choix;
             do {             
				system("cls");
                printf("\t\tMenu - Affichage\n");
				printf("\t\t--------------\n\n\n");
				printf("\t1. Affichage par ordre ascendant\n\n");
				printf("\t2. Affichage par ordre descendant\n\n");
				printf("\t3. Affichage par ordre ascendant les comptes ayant un montant superieur un chiffre saisi\n\n");
				printf("\t4. Affichage par ordre descendant les comptes ayant un montant superieur un chiffre saisi\n\n");
				printf("\t5. Recherche par CIN \n\n");
				printf("\t6. Retour\n\n");
			    printf("\t\t veuillez entrer votre selection : ");
			    scanf("%d",&choix);
			  switch(choix)
			    {
                             case 1:afficher1();break;
                             case 2:afficher2();break;
                             case 3:afficher3();break;
                             case 4:afficher4();break;
                             case 5:rechercher();break;             
                          
                }
             } while(choix!=6);
}
// ----------------------- Menu principal -------------------------
int main()
{
 int choix;
             do {             
				system("cls");
                printf("\t \t\t\t\t\t\tMENU PRINCIPAL\n\n\n");
				printf("\t\t\t\t\t1. Introduire un ou plusieurs comptes bancaires\n\n\n");
				printf("\t\t\t\t\t2. Operations \n\n\n");
				printf("\t\t\t\t\t3. Affichage \n\n\n");
				printf("\t\t\t\t\t4. Fidelisation\n\n\n");
				printf("\t\t\t\t\t5. Quitter l'application\n\n\n");
			    printf("\t\tVeuillez entrer votre selection  : ");
			    scanf("%d",&choix);
			  switch(choix)
			    {
                             case 1:introduire();break;
                             case 2:menuoperation();break;
                             case 3:menuaffichage();break;
                             case 4:fideliser();break;
                }
             } while(choix!=5);
   return 0;
}
