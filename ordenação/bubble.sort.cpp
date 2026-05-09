#include <iostream>
using namespace std;
int main(void){
    int n = 7;
    int A[n] = {2, 5, 20, 200, 4, 60, 22};
    for(int j = 0; j < n-1; j++){
        for(int i = 0; i < n-j; i++){
            if(A[i] > A[i+1]){
            int V = A[i];
             A[i] = A[i+1];
             A[i+1] = V;  
            }
        }
    }
    for (int i = 0;i < n; i++){
        cout << A[i] << "  ";
    }
    
 
    return 0;
}
