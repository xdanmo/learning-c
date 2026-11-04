// program to check if a number is palindrome or not.

#include <stdio.h>
int main(){
    int n, m, o = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    m = n;

    while(m > 0){
        o = (o * 10) + (m % 10);
        m = m / 10;
    }

    if(n == o){
        printf("yes, %d is palindrome.\n", n);
    }
    else{
        printf("No, %d is not palindrome.\n", n);
    }

    return 0;
}

//program to compute LCM and GCD of two integers