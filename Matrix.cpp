// Matrix.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

//// Lower triangle matrix 
//class LTMatrix {
//private:
//    int n;
//    int* A;
//public:
//    LTMatrix(int n) {
//        this->n = n;
//        A = new int[n * (n + 1) / 2];
//    }
//    ~LTMatrix() { delete[] A; }
//    void Display(bool row = true);
//    void setRowMajor(int i, int j, int x);
//    void setColMajor(int i, int j, int x);
//    int getRowMajor(int i, int j);
//    int getColMajor(int i, int j);
//    int getN() { return n; }
//
//};
//
//void LTMatrix::setRowMajor(int i, int j, int x) {
//    if (i >= j) {
//        int index = ((i * (i - 1)) / 2) + j - 1;
//        A[index] = x;
//    }
//}
//
//void LTMatrix::setColMajor(int i, int j, int x) {
//    if (i >= j) {
//        int index = (n * (j - 1) - (((j - 2) * (j - 1)) / 2)) + (i - j);
//        A[index] = x;
//    }
//}
//
//int LTMatrix::getRowMajor(int i, int j) {
//    if (i >= j) {
//        int index = ((i * (i - 1)) / 2) + j - 1;
//        return A[index];
//    }
//    else {
//        return 0;
//    }
//}
//
//int LTMatrix::getColMajor(int i, int j) {
//    if (i >= j) {
//        int index = (n * (j - 1) - (((j - 2) * (j - 1)) / 2)) + (i - j);
//        return A[index];
//    }
//    else {
//        return 0;
//    }
//}
//
//void LTMatrix::Display(bool row) {
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= n; j++) {
//            if (i >= j) {
//                if (row) {
//                    cout << getRowMajor(i, j) << " ";
//                }
//                else {
//                    cout << getColMajor(i, j) << " ";
//                }
//            }
//            else {
//                cout << 0 << " ";
//            }
//        }
//        cout << endl;
//    }
//}

//-----------------------------------------------------------------------------------------------------------------------------------

// diagonal matrix

//class Diagonal
//{
//private:
//	int* A;
//	int n;
//public:
//	Diagonal()
//	{
//		n = 2;
//		A = new int[2];
//	}
//	Diagonal(int n)
//	{
//		this->n = n;
//		A = new int[n];
//	}
//	~Diagonal()
//	{
//		delete[]A;
//	}
//	void Set(int i, int j, int x);
//	int Get(int i, int j);
//	void Display();
//	int GetDimension() { return n; }
//};
//void Diagonal::Set(int i, int j, int x)
//{
//	if (i == j)
//		A[i - 1] = x;
//}
//int Diagonal::Get(int i, int j)
//{
//	if (i == j)
//		return A[i - 1];
//	return 0;
//}
//void Diagonal::Display()
//{
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			if (i == j)
//				cout << A[i - 1]<< " ";
//			else
//				cout << "0 ";
//		}
//		cout << endl;
//	}
//}

//-----------------------------------------------------------------------------------------------------------------------------------

//// C++ program to check whether given matrix
//// is a Toeplitz matrix or not
//#include <iostream>
//using namespace std;
//#define N 5
//#define M 4
//
//// Function to check if all elements present in
//// descending diagonal starting from position
//// (i, j) in the matrix are all same or not
//bool checkDiagonal(int mat[N][M], int i, int j)
//{
//	int res = mat[i][j];
//	while (++i < N && ++j < M)
//	{
//		// mismatch found
//		if (mat[i][j] != res)
//			return false;
//	}
//
//	// we only reach here when all elements
//	// in given diagonal are same
//	return true;
//}
//
//// Function to check whether given matrix is a
//// Toeplitz matrix or not
//bool isToeplitz(int mat[N][M])
//{
//	// do for each element in first row
//	for (int i = 0; i < M; i++)
//	{
//		// check descending diagonal starting from
//		// position (0, j) in the matrix
//		if (!checkDiagonal(mat, 0, i))
//			return false;
//	}
//
//	// do for each element in first column
//	for (int i = 1; i < N; i++)
//	{
//		// check descending diagonal starting from
//		// position (i, 0) in the matrix
//		if (!checkDiagonal(mat, i, 0))
//			return false;
//	}
//
//	// we only reach here when each descending
//	// diagonal from left to right is same
//	return true;
//}



int main()
{

    // lower triangle matrix
    /*LTMatrix rm(4);
    rm.setRowMajor(1, 1, 1);
    rm.setRowMajor(2, 1, 2);
    rm.setRowMajor(2, 2, 3);
    rm.setRowMajor(3, 1, 4);
    rm.setRowMajor(3, 2, 5);
    rm.setRowMajor(3, 3, 6);
    rm.setRowMajor(4, 1, 7);
    rm.setRowMajor(4, 2, 8);
    rm.setRowMajor(4, 3, 9);
    rm.setRowMajor(4, 4, 10);

    rm.Display();
    cout << endl;

    LTMatrix cm(4);
    cm.setColMajor(1, 1, 1);
    cm.setColMajor(2, 1, 2);
    cm.setColMajor(2, 2, 3);
    cm.setColMajor(3, 1, 4);
    cm.setColMajor(3, 2, 5);
    cm.setColMajor(3, 3, 6);
    cm.setColMajor(4, 1, 7);
    cm.setColMajor(4, 2, 8);
    cm.setColMajor(4, 3, 9);
    cm.setColMajor(4, 4, 10);

    cm.Display(false);*/

	//-----------------------------------------------------------------------------------------------------------------------------------

    //diagonal matrix

	/*int d;
	cout << "Enter Dimensions";
	cin >> d;

	Diagonal dm(d);

	int x;
	cout << "Enter All Elements";
	for (int i = 1; i <= d; i++)
	{
		for (int j = 1; j <= d; j++)
		{
			cin >> x;
			dm.Set(i, j, x);
		}
	}

	dm.Display();*/

	//-----------------------------------------------------------------------------------------------------------------------------------

	// Toeplitz matrix 

	//int mat[N][M] = { { 6, 7, 8, 9 },
	//				{ 4, 6, 7, 8 },
	//				{ 1, 4, 6, 7 },
	//				{ 0, 1, 4, 6 },
	//				{ 2, 0, 1, 4 } };

	//// Function call
	//if (isToeplitz(mat))
	//	cout << "Matrix is a Toeplitz ";
	//else
	//	cout << "Matrix is not a Toeplitz ";

	
	return 0;
}