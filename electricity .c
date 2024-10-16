#include <stdio.h>

#define MAX_CUSTOMERS 5  // Define the maximum number of customers

// Function to determine the charge per unit based on units consumed
float get_charge_per_unit(float units) {
    if (units <= 199) {
        return 1.20;
    } else if (units <= 399) {
        return 1.50;
    } else if (units <= 599) {
        return 1.80;
    } else {
        return 2.00;
    }
}

// Function to calculate the total bill
float calculate_total_bill(float units, float charge_per_unit) {
    float total_bill = units * charge_per_unit;

    // Apply surcharge if total bill exceeds 400 Ksh
    if (total_bill > 400) {
        total_bill += total_bill * 0.15; // Add 15% surcharge
    }

    // Ensure minimum bill is 100 Ksh
    if (total_bill < 100) {
        total_bill = 100;
    }

    return total_bill;
}

// Function to get the user inputs for multiple customers
void get_customer_details(char customer_id[][20], char customer_name[][50], float units_consumed[], int num_customers) {
    for (int i = 0; i < num_customers; i++) {
        printf("Enter Customer ID for Customer %d: ", i+1);
        scanf("%s", customer_id[i]);

        printf("Enter Customer Name for Customer %d: ", i+1);
        scanf("%s", customer_name[i]);

        printf("Enter Units Consumed for Customer %d: ", i+1);
        scanf("%f", &units_consumed[i]);
    }
}

// Function to display the bill for multiple customers
void display_bills(char customer_id[][20], char customer_name[][50], float units_consumed[], float charge_per_unit[], float total_amount_to_pay[], int num_customers) {
    printf("\nElectricity Bill Summary\n");
    for (int i = 0; i < num_customers; i++) {
        printf("\nCustomer %d\n", i + 1);
        printf("Customer ID: %s\n", customer_id[i]);
        printf("Customer Name: %s\n", customer_name[i]);
        printf("Units Consumed: %.2f\n", units_consumed[i]);
        printf("Charges per Unit: %.2f Ksh\n", charge_per_unit[i]);
        printf("Total Amount to Pay: %.2f Ksh\n", total_amount_to_pay[i]);
    }
}

int main() {
    char customer_id[MAX_CUSTOMERS][20], customer_name[MAX_CUSTOMERS][50];
    float units_consumed[MAX_CUSTOMERS], charge_per_unit[MAX_CUSTOMERS], total_amount_to_pay[MAX_CUSTOMERS];
    int num_customers, i;

    // Get the number of customers
    printf("Enter the number of customers (up to %d): ", MAX_CUSTOMERS);
    scanf("%d", &num_customers);

    if (num_customers > MAX_CUSTOMERS) {
        printf("Maximum number of customers is %d\n", MAX_CUSTOMERS);
        return 1;
    }

    // Get customer details
    get_customer_details(customer_id, customer_name, units_consumed, num_customers);

    // Calculate bill for each customer
    for (i = 0; i < num_customers; i++) {
        charge_per_unit[i] = get_charge_per_unit(units_consumed[i]);
        total_amount_to_pay[i] = calculate_total_bill(units_consumed[i], charge_per_unit[i]);
    }

    // Display the bills for all customers
    display_bills(customer_id, customer_name, units_consumed, charge_per_unit, total_amount_to_pay, num_customers);

    return 0;
}