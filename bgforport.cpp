#include <iostream>
using namespace std;
#define PO(a) (a) * (a)
// #define n 71 // canva (7)

void makePicture(int N, int d, char C[], int H[], int K[], int R[], char F[])
{

    for (int i = 0; i < N + 20; i++)
    {
        for (int j = 0; j < N; j++)
        {
            // printf("(%d, %d) ", i, j);
            int tic = 0;
            for (int k = 0; k < d; k++)
            {
                if (tic)continue;
                // (PO(i-K[k])+PO(j-H[k])<=PO(R[k]))  --------  (abs(j - H[k]) + abs(i - K[k]) <= R[k])
                if (abs(j - H[k]) + abs(i - K[k]) <= R[k] && F[k] == 'D')
                {
                    cout << C[k] << " ";
                    tic = 1;
                }
                if (PO(i - K[k]) + PO(j - H[k]) <= PO(R[k]) && F[k] == 'C')
                {
                    cout << C[k] << " ";
                    tic = 1;
                }
            }
            if (!tic)
                cout << "~ "; 
        }
        cout << "\n"; 
    }
}

void inputData(int d, int H[], int K[], int R[], char C[], char F[])
{
    for (int i = 0; i < d; i++)
    {
        cout << "\ncoordinates (x) (y) (r) (style) (" << i + 1 << ") (form): ";
        cin >> H[i] >> K[i] >> R[i] >> C[i] >> F[i];
    }
}

int main()
{
    int n, d = 1;
    cout << "canva size : ";
    cin >> n;
    cout << "\ndimond count : ";
    cin >> d;
    char C[d], F[d];
    int M = n / 2, B = 1, N = B * n;
    int H[d] = {}, K[d] = {}, R[d] = {};

    inputData(d, H, K, R, C, F);
    makePicture(N, d, C, H, K, R, F);

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

    71
    7
    13 13 6 # C
    58 13 6 # C
    35 45 10 # D
    35 45 20 ~ C
    35 45 30 # D
    13 78 6 # C
    58 78 6 # C

    71
    7
    6 8 5 # D
    65 13 3 # C
    13 32 4 # C
    52 42 2 # C
    62 59 3 # C
    13 71 6 # D
    62 78 8 # D

    71
    6
    8 3 8 # C
    62 11 5 # C
    5 39 7 # C
    41 49 4 # C
    13 76 6 # C
    66 88 8 # C

*/
