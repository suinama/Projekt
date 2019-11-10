#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include "time.h"

using namespace std;
// szukanie wartoœci min max w kolumnie
    for (int column = 0; column < 6; column++) {
        int min = matrix[0][column];
        int max = matrix[0][column];
        for (int row = 0; row < 6; row++) {
            // je¿eli aktualna komórka jest mniejsza ni¿ min to zaktualizuj min
            if (matrix[row][column] < min) {
                min = matrix[row][column];
            }
            if (matrix[row][column] > max) {
                max = matrix[row][column];
            }
            cout << "min in column " << column << " equals " << min << endl;
            cout << "max in column " << column << " equals " << max << endl;
        }
    }
}
    int main() {
        // wywo³anie zawartoœci metody
        ex18();
        return 0;
    }


