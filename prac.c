#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int a;
    int b;
}st, *st_p;

int main(){
    st_p stp= (st_p) malloc(sizeof(st));
    st st = *stp;
    

    printf("st.a : %d", st.a);
}
