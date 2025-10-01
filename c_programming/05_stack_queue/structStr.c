#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    char* name;
    char phone[30];
} PhoneBookEntry;

int main(void)
{
    PhoneBookEntry entry;
    const char* name = "Ivan Ivanov";
    entry.name = malloc(sizeof(char) * (strlen(name) + 1));
    if (entry.name == NULL) {
        return 1;
    }
    strcpy(entry.name, name);
    strcpy(entry.phone, "+7 (911) 123-45-67");
    printf("%s - %s", entry.name, entry.phone);
    free(entry.name);
    return 0;
}
