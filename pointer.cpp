#include <stdio.h>

void update(int *a,int *b) {
    int p,q;
    p = *a+*b;
    q = *a-*b;
    if(q<0){
        q*=-1;
    } 
    *a=p;
    *b=q;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
