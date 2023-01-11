#include <stdio.h>


int fibb(int a, int b, int c, int counter){
    if (c == b) return counter;
    else if( b > c) return -1;
    else return fibb(b, b+a, c, counter+1);
}

int main(){
    printf("%d", fibb(0, 1, 89, 2));
    return 0;
}

// 0 1 1 2 3 5 8 13 21 34 55 89
// 0 , 1 --> 89 fibbonaci ke berapa?
// Fibbonaci ngaak ada, returrn -1.s


// 3!
3 1 2
3 2 1

2 1 3
2 3 1

1 2 3
1 3 2

// 4!
4 1 2 3
4 1 3 2
4 2 1 3
4 2 3 1
4 3 1 2
4 3 2 1