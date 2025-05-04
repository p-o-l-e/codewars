// https://www.codewars.com/kata/5959ec605595565f5c00002b/train/cpp

unsigned reverse_bits(unsigned n)
{
    unsigned r = 0;
    do r = r << 1 | n & 1;
    while(n>>=1);
    return r;
}
