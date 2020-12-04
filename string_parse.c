/*
TO-DO:

-parse declarations: >>
-parse values for variables
-parse everything else

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

//parse function
int main()
{
    char *buffer, *functionSub;
    int count = 0;

    
    //open file and parse for function declaration
    FILE *m1k2 = fopen("input.m1k2", "r");
    
    if(m1k2 == NULL)
    {
        printf("file opening unsuccessful.");
    }

    //get size of file and load into buffer
    fseek(m1k2, 0L, SEEK_END);
    long int fileLen = ftell(m1k2);
    buffer = malloc(fileLen * sizeof(char));
    fseek(m1k2, 0L, SEEK_SET);


    //assign value from file to buffer
    fread(buffer, fileLen, 1, m1k2);
    fclose(m1k2);



    //function start and end pointers
    char *functionStart = strstr(buffer, ">>f");
    char *functionEnd = strstr(functionStart, "f<<") + 3;

    //copies function substring into functionSub
    ptrdiff_t len = functionEnd - functionStart;
    functionSub = malloc((len + 1) * sizeof(char));
    strncpy(functionSub, functionStart, len);
    functionSub[len] = '\0';


    printf("%s\n", functionSub);

    return 0;
}