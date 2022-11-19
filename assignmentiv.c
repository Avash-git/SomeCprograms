#include <stdio.h>
//#include <stdlib.h>

int main()
{
    FILE * file;

    char ch;
    int characters=0, lines=0;
    
    file = fopen("test.txt", "r");

    /* Check if file opened successfully */
    if (file == NULL)
    {
        printf("\nUnable to open file.\n");
        printf("Please check if file exists and you have read privilege.\n");

       
    }

    /*
     * Logic to count characters, words and lines.
     */
    
    while ((ch = fgetc(file)) != EOF)
    {
        characters++;

        /* Check new line */
        if (ch == '\n' || ch == '\0')
            lines++;

        /* Check words */
        
        
    }

    /* Increment words and lines for last word */
    if (characters > 0)
    {
    
        lines++;
    }

    /* Print file statistics */
    printf("\n");
    printf("Total characters = %d\n", characters-1);

    printf("Total lines      = %d\n", lines-1);


    /* Close files to release resources */
    fclose(file);

    return 0;
}