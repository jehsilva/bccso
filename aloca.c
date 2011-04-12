#include<stdio.h>
#include<stdlib.h>

typedef unsigned char byte;

byte memoria[100];

int main()
{
     

   
}

void* aloca(size_t size)
{
    byte* p = memoria;
    byte  conteudo;
    int posicao = 0;

    while(posicao < 100)
    {
	if(*p == 1)
        {
	    p += 1;
	    int guardiao;
            memcpy(&guardiao,p,4);
	    p += 4 + guardiao;          
	    posicao += 5 + guardiao;
        }
	else
	{
	    *p = 1;
	    p += 1;
            memcpy(p,&size,4);
	    p += 4;
	}	
	
	return p;
    }
}
