#include <stdio.h>
#include <stdlib.h>


int main()
{

    /**
     * Strings [Declaration and uses]
    */

   char str[10] = {'H', 'e', 'l', 'l', 'o', '!'}; //method one
   char str_1[] = {'H', 'e', 'l', 'l', 'o', '!', '\0'}; //method two
   char str_2[] = "Hello!"; //method three
   char str_3[] = "This course is interesting";

   printf("string: %s\n", str);
   printf("%s\n", &str_3[15]); //print from the 15th character
   printf("%.4s\n", str_3); //Print only first four characters

//    Constant string declaration method


    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}