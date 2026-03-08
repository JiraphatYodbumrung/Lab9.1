#include <stdio.h>
#include <string.h>
#include <ctype.h>

int checkLogin(char *login, char *passwd);
int checkValidPass(char *ps);

int main() {
    char login[64], password[64];
    printf("Enter login : "); gets(login);
    printf("Enter password : "); gets(password);
    
    if( checkLogin(login, password) == 1) {
        printf("Welcome\n");
    } else {
        printf("Incorrect login or password\n");
    }
    
    if (checkValidPass(password)) {
        printf("Accepted\n");
    } else {
        printf("Reject\n");
    }
    
    return 0;
}

int checkValidPass(char *ps) {
    int accepted = 0;
    int len = strlen(ps);
    if (len >= 5 && len <= 8) {
        int upperCount = 0;
        int digitCount = 0;
        int seenUpper[26] = {0};
        int isRepeat = 0;    
        
        for (int i = 0; i < len; i++) {
            if (isdigit(ps[i])) {
                digitCount++;
            }
            else if (isupper(ps[i])) {
                upperCount++;
                int index = ps[i] - 'A';
                
                if (seenUpper[index] == 1) {
                    isRepeat = 1;
                }
                seenUpper[index] = 1;
            }
        }
        if (upperCount >= 2 && digitCount >= 2 && isRepeat == 0) {
            accepted = 1;
        }
    }
    
    return accepted;
}
int checkLogin(char *login, char *passwd) {
    if (!strcmp(login, "student1") && !strcmp(passwd, "mypass"))
        return 1;
    else
        return 0;
}
