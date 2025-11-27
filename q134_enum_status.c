#include <stdio.h>

enum Status {SUCCESS, FAILURE, TIMEOUT};

void checkStatus(enum Status s) {
    if (s == SUCCESS) printf("Operation Successful\n");
    else if (s == FAILURE) printf("Operation Failed\n");
    else printf("Operation Timed Out\n");
}

int main() {
    checkStatus(SUCCESS);
    checkStatus(FAILURE);
    checkStatus(TIMEOUT);
    return 0;
}
