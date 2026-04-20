  #include <iostream>

    int main() {
        int n, m;
		int i, j;
		bool isDuplicate;

		std::cout << "Enter size of matrix, n & m: "<<std::endl;
        std::cin>>n>>m;

        int matrix[10][10];

        if (n > 10 || m > 10) {
            std::cout << "Error. It's too big matrix" << std::endl;
        }
        else if (n <= 0 || m <= 0) {
            std::cout << "Error" << std::endl;
        }
        else if(n == 1 && m == 1) {
            std::cout << "Error. Matrix is too small." << std::endl;
        }
        else {

            for (i = 0; i < n; i++) {
                for (j = 0; j < m; j++) {

                    do {
                        isDuplicate = false;

                        std::cout << "Enter element of matrix: " << std::endl;
                        std::cin >> matrix[i][j];

                        for (int a = 0; a <= i; a++) {
                            for (int b = 0; b < (a == i ? j : m); b++) {

                                if (matrix[i][j] == matrix[a][b]) {

                                    isDuplicate = true;
                                    std::cout << "This element already exists. Please enter another digit" << std::endl;
                                    break;
                                }

                            }
                        }

                    } while (isDuplicate);
				} //breket for 'for'
			} // breket for 'for'

		std::cout << "Matrix:" << std::endl;

        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j++) {
                std::cout << matrix[i][j] << " \t";
            }
            std::cout << std::endl;
        }

        int maxOfmin = 0;
        int i_Index = 0, j_Index = 0;

        for (i = 0; i < n; i++) {

            int min = matrix[i][0];
            int minCol = 0;  
            for (j = 0; j < m; j++) {

                if (matrix[i][j] < min) {
                    min = matrix[i][j];
                    minCol = j;
                }

            }

            std::cout << "Minimum element of row " << i + 1 << " is: " << min << std::endl;

                if (i == 0 || min > maxOfmin) {
                maxOfmin = min;
				i_Index = i;
				j_Index = minCol;
            }

        }

        std::cout << "Maximum of minimums is: " << maxOfmin << std::endl;
        std::cout << "Index: [" << i_Index << "][" << j_Index << "]" << std::endl;

            } // breket for 'else'

    return 0;
}