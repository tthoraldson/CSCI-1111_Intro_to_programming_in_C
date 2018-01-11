// Assignment #2 - CSCI-1111
// Theresa Thoraldson 1/11/2018

#include <stdio.h>
int main()
{
    // Variables
    char name[] = "Theresa Thoraldson";
    char email[] = "theresa.thoraldson@gmail.com";
    char highSchool[] = "Perpich Center for Arts Education";
    char homeTown[] = "Bloomington, MN";
    char currentCollege[] = "Normandale";
    char currentYearInSchool[] = "College Freshman";
    int age = 22;

    // Print Statements
    printf("                   Name : %s\n", name);
    printf("                 E-mail : %s\n", email);
    printf("            High School : %s\n", highSchool);
    printf("              Home town : %s\n", homeTown);
    printf("        Current College : %s\n", currentCollege);
    printf(" Current year in school : %s\n", currentYearInSchool);
    printf("                    Age : %i\n", age);
    printf("           Age in octal : %o\n", age);
    printf("     Age in hexadecimal : %X\n", age);

    // Return Statement
    return 0;
}

/* OUTPUT: assignment2.c
                   Name : Theresa Thoraldson
                 E-mail : theresa.thoraldson@gmail.com
            High School : Perpich Center for Arts Education
              Home town : Bloomington, MN
        Current College : Normandale
 Current year in school : College Freshman
                    Age : 22
           Age in octal : 26
     Age in hexadecimal : 16
*/