#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){

    FILE *file;
    // file = fopen("adam.txt", "r");
    file = fopen("adam.in", "r");
    int num;
    int i=0;
    
    // read the first line of the file 
    fscanf(file, "%i", &num);
    int list[num];
    char testcase[100];
    int counter = 1;

while(fgets(testcase, 100, file)){

    // To remove the newline chararcter that fgets retains
    testcase[strcspn(testcase, "\r\n")] = '\0';
    if(counter >=2){
        int steps =0;
        
        for(int count=0; count<strlen(testcase); count++){
             // If else iteration to check for U
            if(testcase[count] == 'U'){
                steps++;
            }
            else{
                break;
            }
        }
        // Append steps value to the array
        list[i] = steps;
        printf("%i\n", steps);
        i++;
    }
    counter++;
}
fclose(file);
return 0;

// close of int function
}