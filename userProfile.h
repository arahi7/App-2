#ifndef USERPROFILE_H
#define USERPROFILE_H

#define MAX_NAME_LENGTH 10
#define MAX_LASTNAME_LENGTH 10
#define MAX_AGE_LENGTH 5
#define MAX_HOBBIES 3
#define MAX_HOBBY_LENGTH 40

void createProfile(char *name, char *lastName, char *age, char hobbies[MAX_HOBBIES][MAX_HOBBY_LENGTH]);

#endif
