#include<iostream>
using namespace std;
#define PO(a) (a)*(a)
//#define n 61

void makePicture(int N, int d, char C, int H[], int K[], int R[]){
    
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            //printf("(%d, %d) ", i, j);
            int tic = 0;
            for (int k = 0; k < d; k++)
            {
                if (tic) continue;
                if (abs(i-H[k]) + abs(j-K[k]) <= R[k])
                {
                    cout << C << " ";
                    tic = 1;
                }
            }
            if(!tic)
                cout << "~ ";//*/
        }
        cout << "\n"; //\n
    }
}

void inputData(int d, int H[], int K[], int R[]){
    for (int i = 0; i < d; i++)
    {
        cout << "\ncoordinates (h) (k) (r) (" << i+1 << ") : ";
        cin >> H[i] >> K[i] >> R[i];
    }
    
}

int main(){
    char C = '#';
    int n = 61, d = 1;
    cout << "canva size : "; cin >> n;
    cout << "\ndimond count : "; cin >> d;
    cout << "\nstyle : "; cin >> C;
    int M = n/2, B = 1, N = B*n;
    int H[d] = {}, K[d] = {}, R[d] = {};

    inputData(d, H, K, R);
    makePicture(N, d, C, H, K, R);

    return 0;
}

/*

    //printf("(%d, %d) ", i, j);
    if (PO(i-M)+PO(j-M)<=PO(M-2))
    {
        cout << ". ";
    }
    else
    if (PO(i-M)+PO(j-M)<=PO(M-1))
    {
        cout << "o ";//PO(i-4);
    }
    else
    {
        cout << ". ";
    } 

    if (((i/B)%2==0&&(j/B)%2==0)||((i/B)%2==1&&(j/B)%2==1))
    {
        cout << "* ";
    }
    else{
        cout << "- ";
    }















*/
