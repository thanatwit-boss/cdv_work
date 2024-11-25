#include <stdio.h>

int main() {
    char menu;
    
    printf("--------- Food Menu -----------\n");
    printf("1. Pepsi \t 20 baht\n");
    printf("2. Fanta \t 15 baht\n");
    printf("3. KFC \t 299 baht\n");
    printf("Please select a menu (1, 2, or 3): ");
    
    scanf(" %c", &menu); 

    switch (menu) {
        case '1':
            printf("You selected: Pepsi\n");
            break;
        case '2':
            printf("You selected: Fanta\n");
            break;
        case '3':
            printf("You selected: KFC\n");
            break;
        default:
            printf("Invalid selection\n");
    }

}