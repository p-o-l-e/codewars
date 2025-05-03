// https://www.codewars.com/kata/51fc12de24a9d8cb0e000001/c

#include <stdbool.h>
#include <string.h>

bool is_valid_ISBN_10 (const char *ISBN)
{
    int length = strlen(ISBN);
    if(length != 10) return false;
    --length;

    int checksum = 0;
    for(int i = 0; i < length; ++i)
    {
        int v = ISBN[i] - '0';
        if(v > 9) return false;
        checksum += v * (i + 1);
    }
  
    if(ISBN[9] == 'X') checksum += 100;
    else
    {
        int v = ISBN[9] - '0';
        if(v > 9) return false;
        checksum += v * 10;
    }

    return checksum % 11? false : true;
}
