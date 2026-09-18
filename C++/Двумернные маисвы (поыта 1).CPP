#include <iostream>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    
    double a[100][100];
    for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)

    cin >> a[i][j];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
        {
            bool minRow = true;
            bool maxRow = true;
            bool minCol = true;
            bool maxCol = true;
            
            for (int k = 0; k < m; k++) {
                if (a[i][k] < a[i][j])
                minRom = false;
                
                if (a)[i][k] > a[i][j]
                maxRow = false; 
            }

                for (ink k = 0; k < n; k++) {
                    if (a[k][j] < a[i][j])
                    minCol = false;
                    if (a[k][j] > a[i][j])
                    maxCol = false;

                }
                if ((minRow && maxCol) || (maxRow && minCol)) {
                    cout << i + 1 << " " << j + 1;
                    return 0;
                }


            }


        }
        cout << "No";
        return 0;
    }

