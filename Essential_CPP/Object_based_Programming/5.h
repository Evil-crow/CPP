#ifndef _5_H
#define _5_H
#include <vector>
class Matrix {
public:
    Matrix(float num1 = 0, float num2 = 0, float num3 = 0, float num4 = 0,
            float num5 = 0, float num6 = 0, float num7 = 0, float num8 = 0,
            float num9 = 0, float num10 = 0, float num11 = 0, float num12 = 0,
            float num13 = 0, float num14 = 0, float num15 = 0, float num16 = 0
            );
    Matrix(float data_array[]);
    Matrix &operator+ (Matrix &data);
    Matrix &operator* (Matrix &data);
    Matrix &operator+= (Matrix &data);
    float &operator() (int row, int colum);
    float operator() (int row, int colum) const;
    void printf(void);
private:
    float **matrix_array;
    const static int matrix_row = 4;
    const static int matrix_colum = 4;
};

#endif
