#include <stdio.h>

int isPalindrome(int num) {
    int reversedNum = 0, originalNum = num;
    
    // Reverse the number
    while (num > 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }
    
    // Check if the reversed number is equal to the original number
    if (reversedNum == originalNum)
        return 1; // palindrome
    else
        return 0; // not a palindrome
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    if (isPalindrome(n))
        printf("%d is a palindrome.\n", n);
    else
        printf("%d is not a palindrome.\n", n);
    
    return 0;
}