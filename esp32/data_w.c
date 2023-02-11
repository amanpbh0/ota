/*
#include<stdio.h>
int main(){
	FILE *fp;
	fp = fopen("aman.txt","w");
	fprintf(fp,"123aman");
	fputc('A',fp);
	fputs("khan",fp);
	fclose(fp);
	return 0;
}
*/
/*
#include<stdio.h>
int main(){
	int roll,marks,name;
	FILE *fp;
	fp = fopen("aman.txt","w");
	printf("Enter rooll no : ");
	scanf("%d",&roll);
	fprintf(fp,"Roll = %d\n",roll);
	printf("Enter Name: ");
	scanf("%d",&name);
	fprintf(fp,"name = %d\n",name);
	
	fclose(fp);
	return 0;
}
*/
/*
#include<stdio.h>
int main(){
	FILE *fp;
	char c;
	fp = fopen("aman.txt","r");
	while((c=fgetc(fp))!=EOF){
		printf("%c",c);
		}
	fclose(fp);
	return 0;
	}
*/
#include<stdio.h>
int main(){
	FILE *fp;
	char buff[100];
	fp = fopen("aman.txt","r");
	while(fscanf(fp,"%s",buff)!=EOF){
	printf("%s",buff);
	}
		
	fclose(fp);
	return 0;
	}
