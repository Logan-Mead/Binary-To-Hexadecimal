/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: logan Mead
 * ECE141-SPRING 2020
 *
 * Created on February 15, 2020, 7:37 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * 
 */
int main(int argc, char** argv) {
    char bits[33];                              //set bits and hex to character strings at a desired length
    char hex[9];
    int decimal=0;                             //set integers to zero for a starting value
    int i=0;
    int count=0;
    int sum=0;
    int binaryCounter=31;                      //binary counter starts at 31 as binary places we will use is 32
    
         printf("Enter a number(IN BASE 10): ");       //asks user to enter a number in base ten
         scanf("%d", &decimal);                        // scans users number and holds in under the integer decimal
         printf("Binary number is: ");                 // prints binary number is: (no calculations yet) 
         
         for(i=0;i<32;i++){                             //set all place values from zero to 31 as 0
             bits[i] ='0';
         }
         bits[32] = '\0';                              //places a null operator at the bit place 32 so our number cant be larger than 32 bits
         
             while (decimal != 0){                      //runs if users number isn't zero
                if(decimal%2 == 0){                     // checks if there is not a remainder 
                   bits[binaryCounter] = '0';           // places a 0 at current bits place
            }
                     else{
                       bits[binaryCounter] = '1';       //places a 1 at current bit place if there is a remainder
                     }
              decimal= decimal/2;                       //divides users number by two
              binaryCounter--;                          // subtracts 1 from binary counter 
            }
         
         
         for(i=0;i<32;i++){                             //prints all place values for the bit string
             printf("%c", bits[i]);
         }
         
         printf("\n");
         
         //End decimal to bit conversion
         //--------------------------------------------------------------------------------
         //Start binary to hexadecimal conversion
         
         for(i=0;i<8;i++){                          //sets all place values of hex to zero
             hex[i] = '0';
         }
         hex[8] = '\0';                             //sets a null operator at the 8th place for the hex string to end the amount of places the string can go
         
         printf("hex is:0x");                       //prints hex is:0x
         
         for(int i= 31; i>= 0; i=i-4){              //checks each bits places 4 at a time to see if there is a 1 at a place for a divisable by a power of 2
             if(bits[i] == '1'){
                 sum = sum + pow(2,0);
             }
             if (bits[i-1] == '1'){
                 sum = sum + pow(2,1);
             }
             if (bits[i-2] == '1'){
                 sum = sum + pow(2,2);
             }
             if (bits[i-3] == '1'){
                 sum = sum + pow(2,3);
             }
         
         
         if(sum == 0){                              //checks and places a corresponding hex value for its corresponding decimal value
             hex[count] = '0';
         }
         else if (sum == 1){
             hex[count] = '1';
         }
         else if (sum == 2){
             hex[count] = '2';
         }
         else if (sum == 3){
             hex[count] = '3';
         }
         else if (sum == 4){
             hex[count] = '4';
         }
         else if (sum == 5){
             hex[count] = '5';
         }
         else if (sum == 6){
             hex[count] = '6';
         }
         else if (sum == 7){
             hex[count] = '7';
         }
         else if (sum == 8){
             hex[count] = '8';
         }
         else if (sum == 9){
             hex[count] = '9';
         }
         else if (sum == 10){
             hex[count] = 'A';
         }
         else if (sum == 11){
             hex[count] = 'B';
         }
         else if (sum == 12){
             hex[count] = 'C';
         }
         else if (sum == 13){
             hex[count] = 'D';
         }
         else if (sum == 14){
             hex[count] = 'E';
         }
         else if (sum == 15){
             hex[count] = 'F';
         }
         sum = 0;
         count ++;
}
for(int i=8; i>=0; i--){                                //prints hex value
    printf("%c", hex[i]);
}
    return (EXIT_SUCCESS);
}

