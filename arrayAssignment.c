#include <stdio.h>
//1D array assignment

int main() {
    while (1) { //keep going :)
        int arr[10]; //declares a size 10 array 
        double numSum = 0; //declaring int for sum
        double numAverage = 0;//declaring int for mean

        for (int i = 0; i < 10; i++) {//loop for adding the numbers in the (i) indexes
            scanf("%d", &arr[i]); //reads 10 numbers
            numSum += arr[i];//sum = sum + index (i) in array
        }
        numAverage = numSum / 10; //mean = the sum of arr[i] / array size
        printf("mean: %.2f\n", numAverage); //prints the mean

        int count = 0; //count starts from 0
        for (int i = 0; i < 10; i++) {//loop
            if (arr[i] > numAverage) {//check if number at index i is bigger than mean
                count += 1; //add 1 everytime we loop
            }
        }
        printf("above mean: %d\n", count);

        int index = -1;//used for declaring false statement
        for (int i = 0; i < 10; i++) {//loop for finding the index equal to the mean
            if (arr[i] == numAverage) {//comparing the number to the average
                index = i;
            }
        }
        printf("index of equal to mean: %d\n", index);

    }
}