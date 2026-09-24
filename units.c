#include <stdio.h>

int temperature_conversion(float user_celsius) {
    float fahrenheit;
    fahrenheit = (9.0/5.0)*user_celsius + 32.0;
    printf("%.2f C is equal to %.2f F\n", user_celsius, fahrenheit);
    return 0;
}

int currency_conversion(float user_usd) {
    float eur;
    eur = user_usd * 0.85; 
    printf("%.2f USD is equal to %.2f EUR\n", user_usd, eur);
    return 0;
}


int main() {
    int choice;
    printf("Unit Convertor\n");
    printf("1. Temperature (C to F)\n");
    printf("2. Currency (USD to EUR)\n");
    printf("3. Exit\n");
    printf("Enter your choice (1-3): ");

    scanf("%d", &choice);

    printf("You selected option %d\n", choice);

    switch (choice) {
        case 1:
            float user_celsius;
            printf("Enter temperature in Celsius: ");
            scanf("%f", &user_celsius);
            temperature_conversion(user_celsius);
            break;
        case 2:
            float user_usd;
            printf("Enter amount in USD: ");
            scanf("%f", &user_usd);
            currency_conversion(user_usd);
            break;
        case 3:
            printf("Exiting the program.\n");
            break;
        default:
            printf("Invalid choice. Please select a valid option.\n");
    }

    return 0;
}
