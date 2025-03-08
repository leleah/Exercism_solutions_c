#include "rna_transcription.h"
char *to_rna(const char *dna)
{
    char *rna='0';
    switch (*dna)
    {
        case 'G': (*rna++)='C';break;
        case 'C': (*rna++)='G';break;
        case 'T': (*rna++)='A';break;
        case 'A': (*rna++)='U';break;
            
    }
    return rna;
    
}