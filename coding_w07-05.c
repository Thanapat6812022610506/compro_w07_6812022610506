#include <stdio.h>              

int main() {                           //Main function
    int age;                                     //ประกาศ int variable age
    int VIP_level;                               //ประกาศ int variable VIP_level
    float purchase_amount;                        //ประกาศ float variable purchase_amount

    printf("Enter age: ");                             //แสดงผล user to enter age
    scanf("%d", &age);                                  //เก็บ age from user input
    printf("Enter your VIP level (1-5): ");              //แสดงผล user to enter VIP level
    scanf("%d", &VIP_level);                             //เก็บ VIP level from user input
    printf("Enter your purchase amount: \n");             //แสดงผล user to enter purchase amount
    scanf("%f", &purchase_amount);                        //เก็บ purchase amount from user input

    printf("--- Customer Info ---\n");                                    //แสดงผล customer info header
    printf("Age: %d | VIP level: %d | Amount: %.2f\n", age, VIP_level, purchase_amount);          //แสดงผล customer info

     // Check for discounts based on age, VIP level, and purchase amount

    if ((age >= 60) || ((VIP_level == 3) || (VIP_level == 4))) {                      //ถ้า age is 60 or older or VIP level is 3 or 4
        printf("Discount received: 20%%!\n");                                         //แสดงผล discount received 20%

    } 
    else if (((age >= 30) && (age <= 40)) && (purchase_amount > 2000)) {               //ถ้า age is between 30 and 40 and purchase amount is greater than 2000
        printf("Discount received: 15%%!\n");                                          //แสดงผล discount received 15%
        
    } 
    else if (((age >= 18) && (age <= 25)) && (purchase_amount > 1000)) {              //ถ้า age is between 18 and 25 and purchase amount is greater than 1000
        printf("Discount received: 10%%!\n");                                         //แสดงผล discount received 10%
    } 
    else if ((VIP_level == 5) || (purchase_amount > 50000)) {                         //ถ้า VIP level is 5 or purchase amount is greater than 50000
        printf("Discount received: 25%%!\n");                                         //แสดงผล discount received 25%
    } 
    else {                                                                    //ถ้า none of the above conditions 
        printf("No Discount applied.\n");                                    //แสดงผล no discount applied
    } 

    printf("Thank you for shopping with us!\n");                          //แสดงผล thank you message
    return 0;                                   
}