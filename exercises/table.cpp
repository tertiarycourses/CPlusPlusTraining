#include <iostream>
using namespace std;

#define NUM_ROWS 2
#define NUM_COLS 3

//Prototype definitions
void printTable(int table[][NUM_COLS]);

int main(void) {
    // Initialize the two dimensional array
    int table[NUM_ROWS][NUM_COLS] = {
        {132,142, 23},
        {  0, 76,872}
    };
    
    //Simple test and demonstration of accessing a table element
    printf("Row 1 Column 2 contains %d\n", table[1][2]);
    
    printTable(table);
    
    return EXIT_SUCCESS;
}

void printTable(int table[][NUM_COLS]){
    printf("\n The table:\n");
    for(int i=0; i<NUM_ROWS; i++){		//Loop to print all rows
        for(int j=0; j<NUM_COLS; j++){   //Loop to print all columns in one row
            printf("%4d",table[i][j]);
        }
        printf("\n"); 					//Go to next line after printing one row
    }
}
