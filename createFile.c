    #include <stdio.h>
	#include <sys/stat.h>
     
    int main() {
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
