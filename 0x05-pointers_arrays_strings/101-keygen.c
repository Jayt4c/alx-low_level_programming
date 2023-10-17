#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));
    
    int password_length;
    char password[13];
    int has_uppercase = 0, has_lowercase = 0, has_number = 0;

    do {
        password_length = rand() % 7 + 6; 

        for (int i = 0; i < password_length; i++) {
            char character = rand() % 94 + 33;

            password[i] = character;
            has_uppercase |= (character >= 'A' && character <= 'Z');
            has_lowercase |= (character >= 'a' && character <= 'z');
            has_number |= (character >= '0' && character <= '9');
        }
    } while (!(has_uppercase && has_lowercase && has_number));

    password[password_length] = '\0';
    
    printf("%s\n", password);

    return 0;
}

