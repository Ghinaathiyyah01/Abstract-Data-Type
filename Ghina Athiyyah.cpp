#include <stdio.h>
#include <conio.h>

struct {
float sisi1;
float sisi2;
float luas;
} persegi; 

void luasPersegi(){ 
persegi.luas = persegi.sisi1 * persegi.sisi2;
printf("Luas persegi = %f",persegi.luas);
}

int main(){
printf("sisi1 = ");scanf("%f", &persegi.sisi1);
printf("sisi2 = ");scanf("%f", &persegi.sisi2);
luasPersegi();
return 0;
}
