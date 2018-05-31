/*
 * @filename:    5.cpp
 * @author:      Crow
 * @date:        05/31/2018 23:21:46
 * @description:
 */

#include <iostream>
#include <vector>
#include "5.h"

Matrix::Matrix(float num1, float num2, float num3, float num4,
        float num5, float num6, float num7, float num8,
        float num9, float num10, float num11, float num12,
        float num13, float num14, float num15, float num16
        )
{
    matrix_array = new float*[4];
    for (int i = 0; i < 4; ++i)
        matrix_array[i] = new float[4];

    for (int i = 0; i < 4; ++i)
        for (int j = 0; i < 4; ++j)
            matrix_array = ...;
}

Matrix::Matrix(float data_array[])
{
    matrix_array = new float*[4];
    for (int i = 0; i < 4; ++i)
        matrix_array[i] = new float[4];
    
    int k = 16;
    for (int i = 0; i < 4; ++i)
        for (int j = 0; j < 4; ++j)
           matrix_array[i][j] = data_array[k--];
}

Matrix &Matrix::operator+(Matrix &data)
{
    Matrix temp;

    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; ++j)
            temp[i][j] = this->matrix_array[i][j] + data.matrix_array[i][j];

    return temp;
}

Matrix &Matrix::operator*(Matrix &data)
{

}
