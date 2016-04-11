#include <stdio.h>
 
 struct adres_bajtowy {
  __uint8_t a;
  __uint8_t b;
  __uint8_t c;
  __uint8_t d;
  };
 
 union adres {
   __uint32_t ip;
   struct adres_bajtowy badres;
   };
 
 int main ()
 {
    union adres addr;
    addr.badres.a = 192;
    addr.badres.b = 168;
    addr.badres.c = 1;
    addr.badres.d = 1;
    printf ("Adres IP w postaci 32-bitowej zmiennej: %08x\n",addr.ip);
    return 0;
 for(a;b;++c)
 to = malloc(sizeof(int**))
 
 t = zombie.find(1)
  zombie.find_by_name.order(name)
 
 return 0;
 }
