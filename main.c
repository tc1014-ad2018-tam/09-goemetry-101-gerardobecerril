/*
 * This program allows the user to obtain the perimeter or surface of any equilateral triangle, square or regular
 * polygon, as well as the volume of any equilateral triangular, square or regular polygon prism, through a series
 * of menus.
 *
 * Author: Gerardo González Becerril.
 * Date: September 13th, 2018.
 * E-mail: a01411981@itesm.mx
 */

 // Libraries.
#include <stdio.h>
#include <stdlib.h> // Includes the function 'exit'.

// This function calculates and returns the perimeter of a triangle by multiplying the side (input) by 3.
double trianglePerimeter(double side) {
    return side * 3;
}

// This function calculates and returns the perimeter of a square by multiplying the side (input) by 4.
double squarePerimeter(double side) {
    return side * 4;
}

// This function calculates and returns the perimeter of a pentagon by multiplying the side (input) by 5.
double pentagonPerimeter(double side) {
    return side * 5;
}

// This function asks the user for the length of a side, scans the input and returns it.
double perimeterRequest() {
    double side;
    printf("What's the length of the side?\n");
    scanf("%lf", &side);
    return side;
}

// This function displays the 'A' menu.
int aMenu() {

    char selection; // This variable stores the user input for the menu selection.

    // A while loop that's always working.
    while (1) {

        // Asks the user for a menu and scans the input.
        printf("Select one of the options from the menu:\nA. Equilateral triangle.\nB. Square.\nC. Regular pentagon.\nX. Exit.\n");
        scanf(" %c", &selection);

        // Switch statement to check the user input.
        switch(selection) {
            case 'A':
                // Calls the 'perimeterRequest' function to get the perimeter, then uses it as an input for the
                // 'trianglePerimeter' function, then prints the output.
                printf("The perimeter is equal to %lf\n\n", trianglePerimeter(perimeterRequest()));
                break;
            case 'B':
                // Calls the 'perimeterRequest' function to get the perimeter, then uses it as an input for the
                // 'squarePerimeter' function, then prints the output.
                printf("The perimeter is equal to %lf\n\n", squarePerimeter(perimeterRequest()));
                break;
            case 'C':
                // Calls the 'perimeterRequest' function to get the perimeter, then uses it as an input for the
                // 'pentagonPerimeter' function, then prints the output.
                printf("The perimeter is equal to %lf\n\n", pentagonPerimeter(perimeterRequest()));
                break;
            case 'X':
                // Stops the menu.
                return 0;
                break;
            default:
                printf("That's not a valid option.\n\n");
        }
    }

}

// This function calculates and returns the surface of a triangle by multiplying the side (input) squared by 0.5.
double triangleSurface(double side) {
    return side * side * 0.5;
}

// This function calculates and returns the surface of a square by multiplying the side (input) by itself.
double squareSurface(double side) {
    return side * side;
}

// This function calculates and returns the surface of a pentagon by multiplying the side (input 1) and
// apothem (input 2) by 2.5.
double pentagonSurface(double side, double apothem) {
    return side * 2.5 * apothem;
}

// This function asks the user for the length of an apothem, scans the input and returns it.
double apothemRequest() {
    double apothem;
    printf("What's the length of the apothem?\n");
    scanf("%lf", &apothem);
    return apothem;
}

// This function displays the 'B' menu.
int bMenu() {

    char selection; // This variable stores the user input for the menu selection.

    // A while loop that's always working.
    while (1) {

        // Asks the user for a menu and scans the input.
        printf("Select one of the options from the menu:\nA. Equilateral triangle.\nB. Square.\nC. Regular pentagon.\nX. Exit.\n");
        scanf(" %c", &selection);

        // Switch statement to check the user input.
        switch(selection) {
            case 'A':
                // Calls the 'perimeterRequest' function to get the perimeter, then uses it as an input for the
                // 'triangleSurface' function, then prints the output.
                printf("The surface is equal to %lf\n\n", triangleSurface(perimeterRequest()));
                break;
            case 'B':
                // Calls the 'perimeterRequest' function to get the perimeter, then uses it as an input for the
                // 'squareSurface' function, then prints the output.
                printf("The surface is equal to %lf\n\n", squareSurface(perimeterRequest()));
                break;
            case 'C':
                // Calls the 'perimeterRequest' and 'apothemRequest' functions to get the perimeter and apothem,
                // then uses them as inputs for the 'pentagonSurface' function, then prints the output.
                printf("The surface is equal to %lf\n\n", pentagonSurface(perimeterRequest(), apothemRequest()));
                break;
            case 'X':
                // Stops the menu.
                return 0;
                break;
            default:
                printf("That's not a valid option.\n\n");
        }
    }

}

// This function calculates and returns the volume of most bodies by multiplying the surface (input 1) by the
// length (input 2).
double volumeCalculator(double surface, double length) {
    return surface * length;
}

// This function asks the user for the length of a body, scans the input and returns it.
double lengthRequest() {
    double bodyLength;
    printf("What's the length of the body?\n");
    scanf("%lf", &bodyLength);
    return bodyLength;
}

// This function displays the 'C' menu.
int cMenu() {

    char selection; // This variable stores the user input for the menu selection.

    // A while loop that's always working.
    while (1) {

        // Asks the user for a menu and scans the input.
        printf("Select one of the options from the menu:\nA. Equilateral triangular prism.\nB. Square Prism.\nC. Regular pentagonal prism.\nX. Exit.\n");
        scanf(" %c", &selection);

        // Switch statement to check the user input.
        switch(selection) {
            case 'A':
                // Calls the 'perimeterRequest' and 'lengthRequest' functions to get the perimeter and length of the
                // body, then uses them as inputs for the 'triangleSurface' function, which is in itself used as an
                // input for the 'volumeCalculator' function, then prints the output.
                printf("The volume is equal to %lf\n\n", volumeCalculator(triangleSurface(perimeterRequest()), lengthRequest()));
                break;
            case 'B':
                // Calls the 'perimeterRequest' and 'lengthRequest' functions to get the perimeter and length of the
                // body, then uses them as inputs for the 'squareSurface' function, which is in itself used as an
                // input for the 'volumeCalculator' function, then prints the output.
                printf("The volume is equal to %lf\n\n", volumeCalculator(squareSurface(perimeterRequest()), lengthRequest()));
                break;
            case 'C':
                // Calls the 'perimeterRequest', 'apothemRequest' and 'lengthRequest' functions to get the perimeter,
                // apothem and length of the body, then uses them as inputs for the 'pentagonSurface' function, which
                // is in itself used as an input for the 'volumeCalculator' function, then prints the output.
                printf("The volume is equal to %lf\n\n", volumeCalculator(pentagonSurface(perimeterRequest(), apothemRequest()), lengthRequest()));
                break;
            case 'X':
                // Stops the menu.
                return 0;
                break;
            default:
                printf("That's not a valid option.\n\n");
        }
    }

}

// Displays the main menu.
int mainMenu() {

    char selection; // This variable stores the user input for the menu selection.

    // A while loop that's always working.
    while (1) {

        // Asks the user for a menu and scans the input.
        printf("Select one of the options from the menu:\nA. Perimeter.\nB. Surface.\nC. Volume.\nX. Exit.\n");
        scanf(" %c", &selection);

        // Switch statement to check the user input.
        switch(selection) {
            case 'A':
                // Calls the 'aMenu' function.
                aMenu();
                break;
            case 'B':
                // Calls the 'bMenu' function.
                bMenu();
                break;
            case 'C':
                // Calls the 'cMenu' function.
                cMenu();
                break;
            case 'X':
                // Terminates the program.
                printf("The end.");
                exit(0);
                break;
            default:
                printf("That's not a valid option.\n\n");
        }
    }

}

// Main function. It calls the 'mainMenu' function.
int main() {
    mainMenu();
    return 0;
}