/*write functiom to calculate area of a sqare, a circle, and a rectangle.*/
//sol.

#include <stdio.h>
#include <math.h>
 
 int main(){
 float side=4;
 float radius=2;
 float lenght=2;
 float width=5;
 printf("area of square is %f\n", side);
 printf("area of circle is %f\n", radius);
 printf("area of rectangle is %f\n", (lenght*width));

 return 0;
 }
// function to calculate area of a square
float square_area(float side) {
    return side * side;
}

// function to calculate area of a circle
float circle_area(float radius) {
    return  3.14* radius * radius;
}

// function to calculate area of a rectangle
float rectangle_area(float length, float width) {
    return length * width;
}
