#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
	int Number;
	char Name[50];
	char Surname[50];
};
int prime(int a)
{
	int maxMultiply=0,i,nu;
	for(i=2;i<=nu;i++){
		if(nu%i==0){
	maxMultiply=i;	
		nu=nu/i;
		}
	}
	return maxMultiply;
}
void cipherCaesar ( char *ptr, int key  ) 
{
	while( *ptr !='\0' )
	{
		*ptr = (*ptr +key ) ; 
		ptr++; 		
	}
}
void caesarDecrypt( char *ptr, int key)
{ 

	while( *ptr!='\0' )
	{
		*ptr = *ptr - key  ; 
		ptr++; 		
	}
}
int main()
{
	struct Student student_information;

	printf("Student Name:");
	scanf("%s",student_information.Name);
	printf("Student Surname:");
	scanf("%s",student_information.Surname);
	printf("Encrypted text=%s %s\n\n",student_information.Name,student_information.Surname);
	
	char *txt; 
	char encryptedText[40];
	int key=4,i=0;
	char c;
	int password1;
	int d;
    int nu,a,Ac;
	printf("Enter your student number:"); scanf("%d",&nu);
	
    password1=70001;
	
    printf("\t\n\n**PASSWORD\n\n");
    d:
	printf("Enter the largest prime factor of your student number:"); scanf("%d",&Ac);
	
	if(Ac!=password1)
	{
		printf("You entered an incorrect password! Please try again..\n");
		goto d;
		
	}
	else{
	
		printf("Password confirmed.\n\n");	}

	FILE *file,*file2;

  if ((file = fopen ("encryptedText.txt", "w")) == NULL) {
      printf("The file could not be opened!");
      exit(1);
  }
    
    txt=strcat(student_information.Name,student_information.Surname);
	printf("Encrypted text:%s\n",txt);
	
	while(i<strlen(txt)){
		c=txt[i];
	encryptedText[i]=(char)(((int)c)+key);
		i++;
	} 
	
	printf("Encrypted text:%s\n\n",encryptedText);
	fprintf(file,"%s\n",encryptedText);
	fclose(file);

    file2=	fopen("encryptedText.txt","r+");
	
	printf("Student Number:212803040");

	cipherCaesar(txt, key); 
	fscanf(file2,"%s",txt);
	printf("  \n\nReading in progress\n\n") ;
	printf("Encrypted text:%s",txt);
	
	caesarDecrypt(txt,key);  
	
	printf("\nDecoded text : %s \n", txt ) ; 
fclose(file2);
}
