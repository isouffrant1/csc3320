#include <stdio.h>

struct dial {
    char *country;
    int code;
}; //use the struct to store country name and dial code

int
main (int argc, char* argv[]) {
    int intl_code, i;
    const struct dial countries[] = {
        {"Argentina", 54}, {"Bangladesh",        880},
        {"Brazil",     55}, {"Burma (Myanmar)",    95},
        {"China",      86}, {"Colombia",           57},
        {"Czech Rep.",420}, {"Egypt",              20},
        {"Estonia",  372}, {"France",             33},
        {"Germany",    49}, {"Iceland",           354},
        {"Indonesia", 62}, {"Iran",               98},
        {"Italy",      39}, {"Japan",              81},
        {"Mexico",     52}, {"Norway",           47},
        {"Pakistan",   92}, {"Philippines",        63},
        {"Poland",     48}, {"Russia",              7}
        }; //array that consist of 20 countries with dial codes

int list  = sizeof(countries) / sizeof(*countries); //records the list of how much we enter in

    do {
        int error = 0;

        printf("Type in code for a country: ");
        scanf("%d", &intl_code); //User type in code number to see if its in the array and it scans the user input into a variable
        if (intl_code == -1)
            break; //user types -1 to stop the program

        for (i = 0; i < list; i++) {
            if (countries[i].code == intl_code) {
                printf("The country is: %s\n", countries[i].country);
                error = 1;
            }
        } //for loop will print this if the code the user input match with a code in array
        if (!error)
           printf("Sorry code for country is not found\n"); //if the code the user input does not match with one of the code in array it will print this
    } while(1);

    return 0; //returns
