#include <stdio.h>

void main(void)
{
    FILE *fp;
    int value;

    /*
    r -- read/write file DOESN'T delete content of file
        and DOESN'T create file if doesn't exists.
    w -- read/write file but DELETES content of file
        and CREATES file if doesn't exists.
    a -- append to file without deleting old content.  
    */
    fp = fopen("./output.txt", "wb"); // wb - write binary

    if (fp)
    {
        /*
        for (value = 48; value < 58; value++)
        {
            fputc(value, fp);
        }
        */

        /* fputc is useful for writing bytes to a file,
        but for writing text it is inconvenient.
        Use fprintf (file print formatted) instead.*/
        fprintf(fp, "Some text to be put into output.txt\n");
        fclose(fp);
    }
}