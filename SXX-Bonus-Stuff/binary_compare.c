

#include <stdio.h>

int myfun(int x) {
    return x + 1;
}

struct TwoInts {
    int first;
    int second;
};



int main() {
    struct TwoInts z;
    z.first = 4;
    z.second = 10;
    int y = myfun(z.second);
    printf("Hello, World  %i!\n", y);
    return 0;
}




