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
    int list[number];//list array
    char test_case[100];

 //code block for while loop   
int j = 1; //while loop counter initialized to 1
//while loop to loop through the lines of text provided
while(fgets(test_case, 100, fp)){

    // To remove the number of test cases read initially
    test_case[strcspn(test_case, "\r\n")] = '\0';

    //if-else condition to make sure we start looping from the second line
    if(j >= 2){
        int steps = 0;
        
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
        // code block to add steps value to the list array created above
        list[i] = steps;

        //print function to print the number of steps taken
        printf("The number of steps taken in this instance is: %i\n", steps);
        printf("\n");

        //code to increment i variable in for loop.ie to go to the next character in the string
        i++;
    }

    //code to increment j variable in while loop.ie to go to the next line in the text
    j++;
}

//function to close the file opened initially
fclose(fp);
return 0;

// close of int main
}