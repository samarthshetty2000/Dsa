
#include <bits/stdc++.h>
using namespace std;

//array of Vector
vector<int> adjList[10000];

int main()
{
    int n;
    cin >> n;
    //                   size of v       size of 2nd dimension and initialize with zero
    vector<vector<int>> v(n + 1, vector<int>(n + 1, 0));

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v[x][y] = 1;
        v[y][x] = 1;
    }
    cout << "adjacency  matrix";
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    cout << "adjacency list";

    if (v[1][2] == 1)
        " edge exist";

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        adjList[x].push_back(y);
        adjList[y].push_back(x);
    }

    cout << "adjacency list" << endl;

    for (int i = 1; i < n + 1; i++)
    {
        cout << i << "->";
        vector<int>::iterator it;
        for (it = adjList[i].begin(); it != adjList[i].end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }
}