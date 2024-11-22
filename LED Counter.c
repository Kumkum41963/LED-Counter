#include <reg52.h>   // Include 8051 register definitions

// Define the LED pins for each row and column as per the matrix configuration
sbit LED1 = P1^1;  // Row 1, Column 1
sbit LED2 = P1^2;  // Row 1, Column 2
sbit LED3 = P1^3;  // Row 1, Column 3

sbit LED4 = P1^4;  // Row 2, Column 1
sbit LED5 = P1^5;  // Row 2, Column 2
sbit LED6 = P1^6;  // Row 2, Column 3

sbit LED7 = P1^7;  // Row 3, Column 1
sbit LED8 = P2^0;  // Row 3, Column 2
sbit LED9 = P2^1;  // Row 3, Column 3

sbit LED10 = P2^2; // Row 4, Column 1
sbit LED11 = P2^3; // Row 4, Column 2
sbit LED12 = P2^4; // Row 4, Column 3

// Function prototypes
void Delay(void);
void displayDigit0(void);
void displayDigit1(void);
void displayDigit2(void);
void displayDigit3(void);
void displayDigit4(void);
void displayDigit5(void);
void displayDigit6(void);
void displayDigit7(void);
void displayDigit8(void);
void displayDigit9(void);

void main(void) {
    while (1) {
        displayDigit0();  // Display digit 0
        Delay();
        
        displayDigit1();  // Display digit 1
        Delay();
        
        displayDigit2();  // Display digit 2
        Delay();
        
        displayDigit3();  // Display digit 3
        Delay();
        
        displayDigit4();  // Display digit 4
        Delay();
        
        displayDigit5();  // Display digit 5
        Delay();
        
        displayDigit6();  // Display digit 6
        Delay();
        
        displayDigit7();  // Display digit 7
        Delay();
        
        displayDigit8();  // Display digit 8
        Delay();
        
        displayDigit9();  // Display digit 9
        Delay();
    }
}

// Delay function to control time between digits
void Delay(void) {
    int i, j;
    for (i = 0; i < 1000; i++) {  // Outer loop for delay
        for (j = 0; j < 100; j++) {  // Inner loop for delay
            // Empty loop to waste time
        }
    }
}

// Function to display the digit '0'
void displayDigit0(void) {
    LED1 = 1; LED2 = 1; LED3 = 1;  // First row (Columns 1, 2, 3)
    LED4 = 1; LED5 = 0; LED6 = 1;  // Second row (Columns 1, 2, 3)
    LED7 = 1; LED8 = 0; LED9 = 1;  // Third row (Columns 1, 2, 3)
    LED10 = 1; LED11 = 1; LED12 = 1;  // Fourth row (Columns 1, 2, 3 for digit 0)
}

// Function to display the digit '1'
void displayDigit1(void) {
    LED1 = 0; LED2 = 1; LED3 = 0;  // First row
    LED4 = 1; LED5 = 1; LED6 = 0;  // Second row
    LED7 = 0; LED8 = 1; LED9 = 0;  // Third row
    LED10 = 1; LED11 = 1; LED12 = 1;  // Fourth row for digit 1
}

// Function to display the digit '2'
void displayDigit2(void) {
    LED1 = 0; LED2 = 1; LED3 = 0;  // First row
    LED4 = 1; LED5 = 0; LED6 = 1;  // Second row
    LED7 = 0; LED8 = 1; LED9 = 0;  // Third row
    LED10 = 1; LED11 = 1; LED12 = 1;  // Fourth row for digit 2
}

// Function to display the digit '3'
void displayDigit3(void) {
    LED1 = 1; LED2 = 1; LED3 = 1;  // First row
    LED4 = 0; LED5 = 1; LED6 = 0;  // Second row
    LED7 = 1; LED8 = 0; LED9 = 1;  // Third row
    LED10 = 0; LED11 = 1; LED12 = 0;  // Fourth row for digit 3
}

// Function to display the digit '4'
void displayDigit4(void) {
    LED1 = 1; LED2 = 0; LED3 = 1;  // First row
    LED4 = 1; LED5 = 1; LED6 = 1;  // Second row
    LED7 = 0; LED8 = 0; LED9 = 1;  // Third row
    LED10 = 0; LED11 = 0; LED12 = 1;  // Fourth row for digit 4
}

// Function to display the digit '5'
void displayDigit5(void) {
    LED1 = 1; LED2 = 1; LED3 = 1;  // First row
    LED4 = 1; LED5 = 1; LED6 = 1;  // Second row
    LED7 = 0; LED8 = 0; LED9 = 1;  // Third row
    LED10 = 1; LED11 = 1; LED12 = 1;  // Fourth row for digit 5
}

// Function to display the digit '6'
void displayDigit6(void) {
    LED1 = 1; LED2 = 1; LED3 = 1;  // First row
    LED4 = 1; LED5 = 0; LED6 = 0;  // Second row
    LED7 = 1; LED8 = 1; LED9 = 1;  // Third row
    LED10 = 1; LED11 = 1; LED12 = 1;  // Fourth row for digit 6
}

// Function to display the digit '7'
void displayDigit7(void) {
    LED1 = 1; LED2 = 1; LED3 = 1;  // First row
    LED4 = 0; LED5 = 0; LED6 = 0;  // Second row
    LED7 = 0; LED8 = 1; LED9 = 0;  // Third row
    LED10 = 1; LED11 = 0; LED12 = 0;  // Fourth row for digit 7
}

// Function to display the digit '8'
void displayDigit8(void) {
    LED1 = 1; LED2 = 1; LED3 = 1;  // First row
    LED4 = 1; LED5 = 1; LED6 = 1;  // Second row
    LED7 = 1; LED8 = 0; LED9 = 1;  // Third row
    LED10 = 1; LED11 = 1; LED12 = 1;  // Fourth row for digit 8
}

// Function to display the digit '9'
void displayDigit9(void) {
    LED1 = 1; LED2 = 1; LED3 = 1;  // First row
    LED4 = 1; LED5 = 1; LED6 = 1;  // Second row
    LED7 = 0; LED8 = 0; LED9 = 1;  // Third row
    LED10 = 1; LED11 = 1; LED12 = 1;  // Fourth row for digit 9
}