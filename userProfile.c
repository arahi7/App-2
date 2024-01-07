#include "userProfile.h"
#include <stdio.h>
#include <string.h>


void createProfile(char *name, char *lastName, char *age, char hobbies[MAX_HOBBIES][MAX_HOBBY_LENGTH]) {

    char inputName[MAX_NAME_LENGTH];
    char inputLastname[MAX_LASTNAME_LENGTH];
    char inputAge[MAX_AGE_LENGTH];
    char inputHobbies[MAX_HOBBIES][MAX_HOBBY_LENGTH];

    strcpy(inputName, name);
    strcpy(inputLastname, lastName);
    strcpy(inputAge, age);

    for (int i = 0; i < MAX_HOBBIES; i++) {
        strcpy(inputHobbies[i], hobbies[i]);
    }

    printf("Profile Created!\n");
    printf("Hi, my name is %s %s. I am %s years old and my hobbies are: ", inputName, inputLastname, inputAge);
    for (int i = 0; i < MAX_HOBBIES; i++) {
        printf("%s ", inputHobbies[i]);
    }
    
    printf("\n");
}