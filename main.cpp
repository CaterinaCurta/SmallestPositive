#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int solution(vector<int> &A)
{
    int n = A.size();
    if(n == 1)
    {
        if(A[0] == 1) return 2;
        else return 1;
    }

    sort(A.begin(), A.end());

    if(A[n-1] <= 0)
    {
        return 1;
    }

    int result = 1;
    for(int i = 0; i < n; i++)
    {
        if(result == A[i])
        {
            result++;
        } else if (result < A[i])
        {
            return result;
        }
    }
    return result;
}
int main() {
    vector<int> A{4, 8, 1, -3, -5};

    int a = solution(A);
    cout<<a<<"\n";

    vector<int> A2{4};
    int b = solution(A2);
    cout<<b<<"\n";

    vector<int> A3{0};
    int c = solution(A3);
    cout<<c<<"\n";

    vector<int> A4{-1};
    int d = solution(A4);
    cout<<d<<"\n";

    vector<int> A5{1};
    int e = solution(A5);
    cout<<e<<"\n";

    vector<int> A6{-4, -8, -1, -3, -5};

    int f = solution(A6);
    cout<<f<<"\n";
    return 0;
}
