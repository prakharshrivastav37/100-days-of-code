#include <stdio.h>

enum Role {ADMIN, USER, GUEST};

int main() {
    enum Role userRole = ADMIN;
    
    if (userRole == ADMIN)
        printf("Welcome Admin! You have full access.\n");
    else if (userRole == USER)
        printf("Welcome User! You have limited access.\n");
    else
        printf("Welcome Guest! You have read-only access.\n");
        
    return 0;
}
