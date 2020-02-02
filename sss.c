#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define GF 256  //Galois field 256
#define SIZE 32 //size of the array
#define N 4     //No of shares 
#define K 2     //The Threshold 

typedef struct share
{
    struct share *next;
    uint8_t x; // x axis 
    uint8_t y; // y axis
}share;

share *ROOT = NULL:

/*function to add two numbers in GF(2^8) */
static uint8_t add_GF(uint8_t x , uint8_t y)
{
    return sum;
}

/*function to multiply two numbers in GF(2^8) */
static uint8_t product_GF(uint8_t x; uint8_t y)
{
    return product;
}
 
static uint8_t secret_arr()  //Dummy Secret generation function.
{
/* Step 1 : Choose a random Prime no(P) in the Galois field which must be greater than the
            threshold(K) and no of shares (N).
            0<K<=N<P
*/

uint8_t Prime = 251;
}

static void shareMaker(int *arr)
{
       
/* We need to generate only 4 shares and Threshold(K) is 2.
   So we need k-1 random numbers(Ri) to complete the polynomial equation. 

   p(x)=secret_byte +R1x
   now we have to construct 4 points Dx-1=(x,p(x))
*/

srand(time(0)); //Use current time as seed for random no generation.
randomNumber=rand();

for(x=1;x<=N;x++)
{   
    
    /* y=secretByte+randomNumber*x; */
    y=product_GF(randomNumber,x);
    y=add_GF(secretByte,y);
    
    share *node=(share *)malloc(sizeof(share));
    node->x=x;
    node->y=y;
    node->next=NULL;

    if(ROOT==NULL)
        ROOT=node;
    else
    {
        share *flag=ROOT;
        while(flag->next!=NULL)
            flag=flag->next;
        flag->next=node;
    }


}



}





staic void applet(

int main()
{



return 0;
}

