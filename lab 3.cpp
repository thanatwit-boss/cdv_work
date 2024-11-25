#include <stdio.h>
#include <string.h>
int main(void) {
    char username[30],password[30];  
    //char password[30];  
    const char correct_username[] = "boss";  
    const char correct_password[] = "1234";  

    printf("Username: ");
    scanf("%s", username);  
    printf("Password: ");
    scanf("%s", password);  
    if (strcmp(username, correct_username) == 0 && strcmp(password, correct_password) == 0) {
        printf("pass\n");
    } else {
        printf("Error\n");
    }

    return 0;
}

	