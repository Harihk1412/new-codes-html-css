#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of rows : ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        int a = 1;
        for (int j = 1; j <= i; j++) {
            
            if (n % 2 != 0) {  // Corrected condition to check if n is odd
                int d = a + 64;
                char ch = (char)d;
                printf("%c ", ch);  // Print characters for odd n
                a++;
                
            } else {
                printf("%d ", j);  // Print numbers for even n
            }
        }
        printf("\n");  // Move to the next line after each row
    }
    
    return 0;
}
