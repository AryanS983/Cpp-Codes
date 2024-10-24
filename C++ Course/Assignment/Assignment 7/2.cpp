#include <iostream>

class ArrayMixer {
public:
    void MIX(int A[], int M, int B[], int N, int C[]) {
        int idxC = 0;
        
        // Copy even numbers of A from left to right
        for (int i = 0; i < M; ++i) {
            if (A[i] % 2 == 0) {
                C[idxC++] = A[i];
            }
        }
        
        // Copy odd numbers of A from left to right
        for (int i = 0; i < M; ++i) {
            if (A[i] % 2 != 0) {
                for (int j = idxC; j > 0; --j) {
                    C[j] = C[j - 1];
                }
                C[0] = A[i];
                ++idxC;
            }
        }
        
        // Copy even numbers of B from left to right
        for (int i = 0; i < N; ++i) {
            if (B[i] % 2 == 0) {
                C[idxC++] = B[i];
            }
        }
        
        // Copy odd numbers of B from left to right
        for (int i = 0; i < N; ++i) {
            if (B[i] % 2 != 0) {
                for (int j = idxC; j > 0; --j) {
                    C[j] = C[j - 1];
                }
                C[0] = B[i];
                ++idxC;
            }
        }
    }
};

int main() {
    ArrayMixer mixer;
    
    int A[] = {3, 2, 1, 7, 6, 3};
    int M = sizeof(A) / sizeof(A[0]);
    
    int B[] = {9, 3, 5, 6, 2, 8, 10};
    int N = sizeof(B) / sizeof(B[0]);
    
    int C[M + N];  // Resultant array size
    
    mixer.MIX(A, M, B, N, C);
    
    // Print the resultant array C
    std::cout << "Resultant array C: ";
    for (int i = 0; i < M + N; ++i) {
        std::cout << C[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
