#include <stdio.h>

int setbits(int num) {
    int count = 0;
    while (num > 0) {

        count += num & 1;
        num >>= 1;
    }
    
    return count;
}

int main() {
    int num;
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    int setBits_Count = setbits(num);
    
    printf("Count of Set bits: %d\n", setBits_Count);
    
    return 0;
}
