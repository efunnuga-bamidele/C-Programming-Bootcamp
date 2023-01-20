#include <stdio.h>
#include <stdlib.h>

#define SAMPLES_LEN 100
#define DOWN_SAMPLE_K 10

void program_failure(char str[])
{   
    perror(str);
    exit(EXIT_FAILURE);
}   

int main()
{
    printf("\n\n=== FILES I/O ===\n\n");
    
    double samples[SAMPLES_LEN];
    for (int i = 0; i < SAMPLES_LEN; i++)
    {
        samples[i] = (i + 1) / 10.0;
        printf("%.1f. ", samples[i]);
    }

    /* Write samples to file */
    FILE *fp = fopen("samples.bin", "wb");

    if (!fp)
    {
        program_failure("File opening error");
    }
    
    size_t witten_count = fwrite(samples, sizeof(samples[0]), SAMPLES_LEN, fp);
    if ( witten_count != SAMPLES_LEN)
    {
        program_failure("File writing failed");
    }
    fclose(fp);

    /* Read downsamplked samples from file */

    double samp_k[SAMPLES_LEN / DOWN_SAMPLE_K];
    fp = fopen("samples.bin", "rb");
    printf("\n- ============ \n");
    for (int i = 0; i < SAMPLES_LEN / DOWN_SAMPLE_K; i++)
    {
        int offset = (DOWN_SAMPLE_K - 1) * sizeof(samp_k[0]);
        if (fseek(fp, offset, SEEK_CUR) != 0)
        {
            program_failure("File seeking failed");
        }

        size_t count = fread(&samp_k[i], sizeof(samp_k[0]), 1, fp);

        if (count != 1)
        {
            if(feof(fp))
            {
                program_failure("Unexpected End Of File");
            }
            else
            {
                program_failure("Error reading the file");
            }
        }
        
        printf("%.1f, ", samp_k[i]);
    }
    

    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}