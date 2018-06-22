#include<stdio.h>
#include<sys/stat.h>

int main() {
        
        char dirname[50];

     printf("Enter the name of the new directory\n");
	scanf("%s", dirname);
               
                if((mkdir(dirname,00777))==-1) {
                fprintf(stdout,"Error!! A directory with the same name already exists\n");
                
        }
}
