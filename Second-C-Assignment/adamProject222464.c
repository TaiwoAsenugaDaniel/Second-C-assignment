#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){

    // code block to open the file for reading
    FILE *fp = fopen("adam.in", "r");

    // code block to read the first line of the file 
    int number;
    int i = 0;

    fscanf(fp, "%i", &number);
    int list[number];
    char test_case[100];
    int j = 1; //counter initialized to 1

//while loop to loop through the lines of text provided
while(fgets(test_case, 100, fp)){

    // To remove the number of test cases read initially
    test_case[strcspn(test_case, "\r\n")] = '\0';
    if(j >=2){
        int steps =0;
        
        //for loop to loop through each character in each string
        for(int count = 0; strlen(test_case) > count; count++){
             // If else iteration to check for U
            if(test_case[count] == 'U'){
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
    j++;
}

//function to close the file opened initially
fclose(fp);
return 0;

// close of int main
}