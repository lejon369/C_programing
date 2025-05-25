#include <stdio.h>

struct Address {
    char city[50];
    char state[50];
    char country[50];
};

struct Person {
    char name[50];
    struct Address addr;
};

int main() {
    struct Person p;

    printf("Enter your name: ");
    fgets(p.name, sizeof(p.name), stdin);

    printf("Enter city: ");
    fgets(p.addr.city, sizeof(p.addr.city), stdin);

    printf("Enter state: ");
    fgets(p.addr.state, sizeof(p.addr.state), stdin);

    printf("Enter country: ");
    fgets(p.addr.country, sizeof(p.addr.country), stdin);

    printf("\nName: %s", p.name);
    printf("City: %s", p.addr.city);
    printf("State: %s", p.addr.state);
    printf("Country: %s", p.addr.country);

    return 0;
}
/*
#include <stdio.h>

struct Address {
    char city[30];
};

struct Person {
    char name[30];
    struct Address addr;
};

int main() {
    struct Person p;

    printf("Enter your name: ");
    scanf("%s", p.name);

    printf("Enter your city: ");
    scanf("%s", p.addr.city);

    printf("Name: %s\n", p.name);
    printf("City: %s\n", p.addr.city);

    return 0;
}

*/