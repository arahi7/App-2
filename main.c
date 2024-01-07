#include <stdio.h>
#include <string.h>
#include "userProfile.h"

int main() {
    char firstname[MAX_NAME_LENGTH];
    char lastname[MAX_LASTNAME_LENGTH]; 
    char age[MAX_AGE_LENGTH];
    char hobbies[MAX_HOBBIES][MAX_HOBBY_LENGTH];

    printf("\nPlease enter your first name: ");
    fgets(firstname, 10, stdin);
    firstname[strcspn(firstname, "\n")] = 0;

    printf("\nPlease enter your last name: ");
    fgets(lastname, 10, stdin);
    lastname[strcspn(lastname, "\n")] = 0;

    printf("\nPlease enter your age: ");
    fgets(age, 5, stdin);
    age[strcspn(age, "\n")] = 0;

    printf("\nEnter up to %d hobbies, one per line:\n", MAX_HOBBIES);
    for (int i = 0; i < MAX_HOBBIES; i++) {
         printf("Hobby %d: ", i + 1);
        fgets(hobbies[i], sizeof(hobbies[i]), stdin);
        hobbies[i][strcspn(hobbies[i], "\n")] = 0;
        int c;
    }
    
    createProfile(firstname, lastname, age, hobbies);
    return 0;
}

