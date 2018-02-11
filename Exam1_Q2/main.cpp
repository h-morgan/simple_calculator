/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: haley
 *
 * Created on February 11, 2018, 3:04 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
   
    int firstInt;
    int secondInt;
    int sumInts;
    int diffInts;
    int productInts;
    double avgInts;
    
    // Get input values from user for 2 integers
    cout << "Please enter the first integer: ";
    cin >> firstInt;
    
    cout << "Please enter the second integer: ";
    cin >> secondInt;
    
    // Calculate the sum of the integers
    sumInts = firstInt + secondInt;
    
    // Calculate the difference between the integers
    diffInts = firstInt - secondInt;
    
    // Calculate the product of the two integers
    productInts = firstInt * secondInt;
    
    // Calculate the average between the two integers
    avgInts = (firstInt + secondInt) / 2.0;
    
    cout << "The sum of " << firstInt << " and " << secondInt << " is " << sumInts << "." << endl;
    cout << "The difference of " << firstInt << " and " << secondInt << " is " << diffInts << "." << endl;
    cout << "The product of " << firstInt << " and " << secondInt << " is " << productInts << "." << endl;
    cout << "The average of " << firstInt << " and " << secondInt << " is " << avgInts << "." << endl;

    return 0;
}

