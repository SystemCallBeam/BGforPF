#include <iostream>
using namespace std;
#define PO(a) (a) * (a)
//#define n 61

void makePicture(int N, int d, char C[], int H[], int K[], int R[])
{

    for (int i = 0; i < N + 15; i++)
    {
        for (int j = 0; j < N; j++)
        {
            // printf("(%d, %d) ", i, j);
            int tic = 0;
            for (int k = 0; k < d; k++)
            {
                if (tic)
                    continue;
                // (PO(i-K[k])+PO(j-H[k])<=PO(R[k]))  --------  (abs(j - H[k]) + abs(i - K[k]) <= R[k])
                if (PO(i - K[k]) + PO(j - H[k]) <= PO(R[k]))
                {
                    cout << C[k] << " ";
                    tic = 1;
                }
            }
            if (!tic)
                cout << "~ "; //*/
        }
        cout << "\n"; //\n
    }
}

void inputData(int d, int H[], int K[], int R[], char C[])
{
    for (int i = 0; i < d; i++)
    {
        cout << "\ncoordinates (x) (y) (r) (style) (" << i + 1 << ") : ";
        cin >> H[i] >> K[i] >> R[i] >> C[i];
    }
}

int main()
{
    int n = 61, d = 1;
    cout << "canva size : ";
    cin >> n;
    cout << "\ndimond count : ";
    cin >> d;
    char C[d];
    int M = n / 2, B = 1, N = B * n;
    int H[d] = {}, K[d] = {}, R[d] = {};

    inputData(d, H, K, R, C);
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



    71
    10
    10 14 5 #
    61 14 5 #
    10 33 3 #
    61 33 3 #
    35 43 14 ~
    35 43 19 #
    10 52 3 #
    61 52 3 #
    10 71 5 #
    61 71 5 #











*/
