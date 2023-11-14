

#include <stdio.h>
#include <stdlib.h>



// int main() {
//     // String literal
//     //const char *literal = "Hello, World!";

//     // Allocate memory on the heap for the string
//     // +1 for the null terminator
//     // char (*heap_string)[50] = (char(*)[50])malloc(50);
//     // char (*heap_string)[50] = malloc(sizeof *heap_string);
//     char (*heap_string)[50] = malloc(50);

//     // Check if memory allocation was successful
//     if (heap_string == NULL) {
//         printf("Memory allocation failed\n");
//         return 1;
//     }

//     (*heap_string)[0] = 'a';
//     (*heap_string)[1] = 'b';
//     (*heap_string)[2] = '\0';
//     printf("The memory location of ptr is: %p\n", (void *)heap_string[0]);
//     printf("The memory location of ptr is: %p\n", (void *)heap_string[1]);
//     printf("The value is: %s\n", *heap_string);

//     printf("%X\n", *heap_string);
//     // // Copy the string literal into the allocated memory
//     // strcpy(heap_string, literal);

//     // // Use the string
//     // printf("%s\n", heap_string);

//     // // Free the allocated memory
//     // free(heap_string);
//     // //printf("%s\n", "End of Program!\0");

//     return 0;
// }


// 
//  x[i] ->   int
// *x    ->   int
//  x    ->   int*
//  x+1  ->   int* (offset by sizeof(int))
// &x    ->   int(*)[N]




//  x+3        -> int (*)[3]
//  *(x+3)     -> int *
//  *(x+2)+3)  -> int *
//  x          -> int (*)[3]
//  &x         -> int (*)[4][3]
//  *x         -> int *
//  **x        -> int
//


// // https://stackoverflow.com/questions/7844049/how-are-c-arrays-represented-in-memory
// #include <stdlib.h>
// #include <stdio.h>
// int main(){

//     printf("\n\n========= 1D Arrays =======\n\n");

//     int y[4] = {1, 2, 3, 4};
//     printf("%u\n", y);        // memory address of 1  - type = int *
//     printf("%u\n", &y);       // memory address of 1  - type = int (*)[4]
//     printf("%u\n", *y);       // the value 1          - type = int

//     printf("\n\n========= 2D Arrays =======\n\n");

//     int x[4][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
//     printf("%u\n", x + 3);    // memory address of 10 - type = int (*)[3]
//     printf("%u\n", *(x+3));   // memory address of 10 - type = int *
//     printf("%u\n", *(x+2)+3); // memory address of 10 - type = int *
//     printf("%u\n", **(x+3));  // the value 10
//     printf("%u\n", x);        // memory address of 1  - type = int (*)[3]
//     printf("%u\n", &x);       // memory address of 1  - type = int (*)[4][3]
//     printf("%u\n", *x);       // memory address of 1  - type = int *
//     return 0;
// }



void myfun( int x[]) {
    printf("x = %i\n", x[0]);
}

void myfun2( int * x) {
    printf("x = %i\n", x[0]);
}

int main () {
    int y[] = {2, 3};

    int *z = &(y[1]);
    
    int (*iar)[3] = malloc(sizeof(int) * 3);
    (*iar)[0] = 10;
    (*iar)[1] = 20;
    (*iar)[2] = 30;


    myfun(*iar);
    myfun2(*iar);
    
    free(iar);
    return 0;
}
