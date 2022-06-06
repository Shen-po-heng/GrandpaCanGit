#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int main() {
    char pathname[100];
    int option=0;

    printf("This is a program for you to manage your files and folders in Github easily. \n");
    printf("Please enter the path of file folder (absolute path name):");
    scanf("%s", &pathname);    
    printf("file folder name: %s \n",pathname);
    
    printf("The options are as follows:\n");
    printf("\t1. check directory\t");
    printf("2. add\t");
    printf("3. update\t");
    
    printf("\nPlease enter the number of options: ");
    scanf("%d", &option);
    printf("The function of option %d is executing....\n",option);
    //sleep(10); 
    
    switch(option){
        case 1:
            {   
                char command[100]="checkdir.sh ";
                strcat(command,pathname);
                system(command);
            }
        default:
            printf("Fail!");
    }
    

   

   return 0;
}