//minimo
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

int variable1(void){
    int x;
    printf("ingrese la variable x: ");
    scanf("%d", &x);
    return x;
}
int variable2(void){
    int y;
    printf("ingrese la variable y: ");
    scanf("%d", &y);
    return y;
}
void tabique (int a, int b){
    if(a>b){
        printf("el minimo entre ambos es: %d\n", b);
        assert(a>b);
    }
    else if (b>a){
        printf("el minimo entre ambos es: %d\n", a);
        assert(b>a);
    }
}
int main()
{
    int x,y;
    x = variable1();
    y = variable2();
    assert(x!=y);
    tabique (x, y);
    
return 0;
}