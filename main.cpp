#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include "time.h"

using namespace std;
// szukanie warto�ci min max w kolumnie
    for (int column = 0; column < 5; column++) {
        int min = matrix[0][column];
        int max = matrix[0][column];
        for (int row = 0; row < 5; row++) {
            // je�eli aktualna kom�rka jest mniejsza ni� min to zaktualizuj min
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
        // wywo�anie zawarto�ci metody
        ex18();
        return 0;
    }


