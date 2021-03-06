
#include<stdio.h>
void setswitchbits(unsigned int uint,unsigned int fbit,unsigned sbit)
{
      int s=32768, i;
    unsigned int temp1, temp2, r;
    temp1= uint;
    temp1 |= 1UL << fbit ;//   temp1 = temp1 & ~(1 << (fbit))
    temp2=temp1;
    temp2=temp1 ^= 1UL <<(sbit);
    printf("After setting and switching: ");
     for(i=0;i<16;i++)
    {
        r=(temp2&s)>>(15-i);
        printf("%u",r&1);
        s>>=1;
    }
}
int main()
{
    unsigned int uint, fbit, sbit;
    int i,s;
    unsigned int r;
    s=32768;
    scanf("%u",&uint);
     scanf("%u", &fbit);
    scanf("%u", &sbit);

    printf("The binary representation is: ");
    for(i=0;i<16;i++)
    {
        r=(uint&s)>>(15-i);
        printf("%u",r&1);
        s>>=1;
    }
    printf("\n");
    setswitchbits(uint,fbit,sbit);
        printf("\n");
    return 0;
}
