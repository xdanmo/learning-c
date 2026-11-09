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
    int maximum = list[0];
    for(int i = 1; i < size; i++){
        if(list[i] > maximum){
            maximum = list[i];
        }
    }
    return maximum;
}
int min(int list[], int size){
    int minimum = list[0];
    for(int i = 1; i < size; i++){
        if(list[i] < minimum){
            minimum = list[i];
        }
    }
    return minimum;
}
int main(){
    int n[5] = {23, 233, 53, 32, 33};
    printf("%d\n", max(n, 5));
    printf("%d\n", min(n, 5));
}