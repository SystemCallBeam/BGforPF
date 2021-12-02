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
                cout << "~ "; //*/
        }
        cout << "\n"; //\n
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


    71
    6
    0 0 22 #
    56 18 6 #
    42 36 3 %
    28 54 3 #
    14 72 6 #
    70 90 22 $









*/
