#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function
    *a += *b;
    if(*a -*b >= *b){
        *b = (*a - *b) - *b;
    } else{
        *b -= (*a - *b);
    }
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
