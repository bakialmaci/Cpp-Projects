#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function  
    *a = *a+*b;
    int c = *a-2*(*b);
    if(c<0) c *= -1;
    *b = c;

}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

