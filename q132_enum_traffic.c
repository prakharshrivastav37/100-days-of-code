#include <stdio.h>

enum TrafficLight {RED, YELLOW, GREEN};

int main() {
    enum TrafficLight signal;
    
    // Simulating inputs
    signal = RED;
    if (signal == RED) printf("Stop\n");
    
    signal = YELLOW;
    if (signal == YELLOW) printf("Wait\n");
    
    signal = GREEN;
    if (signal == GREEN) printf("Go\n");
    
    return 0;
}
