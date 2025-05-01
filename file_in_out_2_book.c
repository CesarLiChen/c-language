#include <stdio.h>

void main(void)
{
    FILE *fp;
    int value;

    /*
    rb+ -- read existing file and to overwrite it
    wb+ -- create a new file and be able to read back what you've written
    ab+ -- open file to append and read from it    
    */
    fp = fopen("./output.txt", "wb"); // wb - write binary

    if (fp)
    {
        // fputc is not the most convenient
        // use fprintf()
        // for (value = 48; value < 58; value++)
        // {
        //     fputc(value, fp);
        // }

        fprintf(fp, "Some text to be put into output.txt\n");
        fclose(fp);
    }
}