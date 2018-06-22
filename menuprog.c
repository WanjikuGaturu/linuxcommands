#include<stdio.h>
#include<sys/stat.h>


int directory();
int createFile();
int readFile();

int main(){
//declare the variable that will hold the menu option chosen
int menu=0;

//menu output begins here
printf("1 - Create Directory\n");
printf("2 - Create File\n");
printf("3 - Read File\n");

scanf("%d",&menu);

//if else loop to run menu functions
if(menu==1){
	directory();
}else if(menu==2){
	createFile();
}else if(menu==3){
	readFile();
}else{
	printf("Your input is invalid! Enter 1, 2 or 3. :-)");
}
	
}//closing the main function



int directory(){
	//code for creating directory 
   int i;
        char dirname[50];

     printf("Enter the name of the new directory\n");
	scanf("%s", dirname);
               
                if((mkdir(dirname,00777))==-1) {
                fprintf(stdout,"Error!! A directory with the same name already exists\n");
                
        }
}

int createFile(){
	//code for creating and writing into a file 
char newfile[20];
	char name[25];
	int age=0;
	char food[20];
	char color[20];

	//prompt user to enter name of new file
	printf("Enter the name of your new file.\n");
	scanf("%s",newfile);

    // create a FILE typed pointer
    FILE *file_pointer;

    // open the file for writing
    file_pointer = fopen(newfile, "w");
     

    // Capture user data to input to the file
printf(" Enter your name: \n");
scanf("%s",name);

printf(" Enter your age: \n");
scanf("%d",&age);

printf(" Enter your favorite food: \n");
scanf("%s",food);

printf(" Enter your favorite color: \n");
scanf("%s",color);
	
//Write to the file
fprintf(file_pointer,"Name: %s\n", name);
fprintf(file_pointer,"Age: %d\n", age);
fprintf(file_pointer,"Food: %s\n", food);
fprintf(file_pointer,"Color: %s\n", color);

    // Close the file
    fclose(file_pointer);
    return 0;
}

/*
int readFile(){
	//code for reading the file goes here
  FILE *file_pointer;
    char c;
    file_pointer=fopen("new1.txt","rt");

    while((c=fgetc(f))!=EOF){
        printf("%c",c);
    }

    fclose(f);
    return 0;
}
*/
