#include <stdio.h>

void main(void)
{
    FILE *fp;
    int value;

    fp = fopen("./input.txt", "rb");
    if (fp)
    {
        // Moves file pointer 10 bytes ahead of current position.
        // Cursor starts at beginning.
        // So it will only print everything after first 10 bytes.
        // Also accepts negative values.
        // SEEK_CUR - current position could be anywhere
        // SEEK_SET - position from start of file
        // SEEK_END - position from end of file
        fseek(fp, 10, SEEK_CUR);
        while (1)
        {
            value = fgetc(fp);
            if (value == EOF) break;
            else printf("%c", value);
        }
        fclose(fp);
    }

    /* Other methods to explore 
    
    fread, fwrite, fscanf, fputs, fgets
    */
}