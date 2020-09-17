#include "libmx.h"

char* mx_nbr_to_hex(unsigned long nbr) {
    unsigned long dec_nbr = nbr;
    unsigned long rest;
    int strlen = 0;

    /*Create new string array for hex_nbr*/
    while (dec_nbr != 0) {
        strlen++;
        dec_nbr /= 16;
    }

    char *hex_nbr = mx_strnew(strlen - 1);
    
    /* hexadecimal digits */        
    char hex[] = "0123456789abcdef";

    /* Hex magic loop */  
    while (nbr > 0) {
        rest = nbr % 16;
        hex_nbr[strlen - 1] = hex[rest];
        nbr /= 16;
        strlen--;
    }
    return hex_nbr;
}

