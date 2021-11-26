#include<iostream>
using namespace std;
#define PO(a) (a)*(a)
//#define n 61

int main(){
    int n; cin >> n;
    int M = n/2, B = 1, N = B*n;
    int h = 0, k = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            //printf("(%d, %d) ", i, j);
            if (abs(i-M) + abs(j-M) <= M-2)
            {
                cout << "# ";
            }
            else
            {
                cout << "~ ";
            }//*/
        }
        cout << "\n"; //\n
    }
    
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
