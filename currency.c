#include <stdio.h>
#include <string.h>

int main(void) {

    // Variable declaration
    float value, exchange_rate, converted_value; // Value variables
    char currency; // Currency type variable
    char orig_currency[20] = "Real"; // String variable
    char dest_currency[20] = "Dollar"; // String variable
    char aux[20] = "Real"; // Auxiliary variable

    // Data input
    printf("Enter the value to be converted: "); // Request value from user
    scanf("%f", &value);
    printf("\nEnter the currency of the value (R for Real or D for Dollar): "); // Request currency from user
    scanf(" %c", &currency);
    printf("\nEnter the current exchange rate: "); // Request exchange rate from user
    scanf("%f", &exchange_rate);
  
    // Processing
    if (currency == 'R' || currency == 'r') { // Convert to Dollar
        converted_value = value / exchange_rate;
    } else if (currency == 'D' || currency == 'd') { // Convert to Real
        converted_value = value * exchange_rate;
        strcpy(orig_currency, dest_currency);
        strcpy(dest_currency, aux);
    } else { // Cancel the program if the currency entered is not Real or Dollar
        printf("\nUnrecognized currency. Please try again. ");
        return 0;
    }

    // Data output
    printf("\nThe value of %.2f %s is equivalent to %.2f %s. ", value, orig_currency, converted_value, dest_currency);
    
    return 0;
}
