// program to check if a number is palindrome or not.

/*
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
*/

// program using a function to find both the largest and smallest numbers in an array of integers.

#include <stdio.h>
int max(int list[], int size){
    for(int i = 1; i < size; i++){
        if(list[i] > list[0]){
            list[0] = list[i];
        }
    }
    return list[0];
}
int main(){
    int n[5] = {1, 2, 3, 4, 5};
    printf("%d\n", max(n, 5));
}