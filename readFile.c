#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE *file_pointer;
    char c;
    file_pointer=fopen("new1.txt","rt");

    while((c=fgetc(f))!=EOF){
        printf("%c",c);
    }

    fclose(f);
    return 0;
}
