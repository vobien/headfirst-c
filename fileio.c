#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{

    if (argc != 6)
    {
        fprintf(stderr, "Usage: %s <key1> <output1> <key2> <output2> <output3>\n", argv[0]);
        return 1;
    }

    // read main parameters
    char *key1 = argv[1];
    char *output1 = argv[2];
    char *key2 = argv[3];
    char *output2 = argv[4];
    char *output3 = argv[5];

    FILE *inFile = fopen("ufo_data.csv", "r");
    if (inFile == NULL)
    {
        fprintf(stderr, "Error: Could not open input file.\n");
        return 1;
    }

    FILE *out1File = fopen(output1, "w");
    FILE *out2File = fopen(output2, "w");
    FILE *out3File = fopen(output3, "w");

    if (out1File == NULL || out2File == NULL || out3File == NULL) {
        fprintf(stderr, "Error: Could not open output files.\n");
        fclose(inFile);

        if(out1File) fclose(out1File);
        if(out2File) fclose(out2File);
        if(out3File) fclose(out3File);
        return 1;
    }

    char line[100];

    while (fscanf(inFile, "%99[^\n]\n", line) == 1)
    {
        if (strstr(line, key1))
        {
            fprintf(out1File, "%s\n", line);
        }
        else if (strstr(line, key2))
        {
            fprintf(out2File, "%s\n", line);
        }
        else
        {
            fprintf(out3File, "%s\n", line);
        }
    }

    fclose(inFile);
    fclose(out1File);
    fclose(out2File);
    fclose(out3File);
}