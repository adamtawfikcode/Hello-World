// Include standard input output file
#include <stdio.h>

// Main function declaration
int main(void)
{
    // printf text to the screen without using format specifiers
    printf("Hello, World!\n");

    // Print text to the screen using the format specifiers
    /*
        Most common format specifiers: 
            %s -> String - Any combination of letters, numbers or special characters
            %c -> Character - a Character...
            %d -> Digit - any number from -2,147,483,648 to 2,147,483,647 if signed
                                           0 to 4,294,967,295 if unsigned
    */

    printf("%s %c %d\n", "This is", 'a', 0);
    
    // Exit the program and return a return code
    /*
        Most common return codes:
            0 -> Successful execution, no errors
            1 -> Error occured during exection
    */
    return 0;
}
