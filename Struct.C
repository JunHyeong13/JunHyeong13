#include<stdio.h>
#include<string.h> // 'strcpy' function in this header file
#include<stdlib.h> // 'malloc', 'free' function in this header file

// When using 'Struct' Method, You should declare the Members 
struct info
{
    char name[7];
    int score;

} Person;

// How to initialize the members in main method
int main()
{
    struct info *p1 = (info *)malloc(sizeof(struct info));


    // Method 1, Input the each values in struct method.
    // struct info H1 = {"john", 12};
    // struct info H2 = {"Bob", 20};
    // struct info H3 = {"Amy", 32};

    // Method 2, Using Array struct method.
    strcpy(p1->name, "john");
    p1->score = 12;
    
    printf("%s, %d\n", p1->name, p1->score);
    free(p1); // release the malloc memory 

    return 0;
}