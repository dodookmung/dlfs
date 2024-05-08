#include <iostream>
using namespace std;

float* multiply(float arr1[],int arr1_len, float arr2[],int arr2_len) 
{
    float muls[arr1_len];

    for (int i = 0; i < arr1_len; i++) {
        muls[i] = arr1[i] * arr2[i];
    }
    static float result[arr1_len] = muls;
    return result;
}


int main() 
{
    float x[2] = {0, 1};
    float w[2] = {0.5, 0.5};
    float b = -0.7;

    
    float* muls = multiply(x, sizeof(x)/sizeof(int), w, sizeof(w)/sizeof(int));
}