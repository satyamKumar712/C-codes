#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void getper(vector<int> &num, int index, vector<vector<int> > &ans)
{
    if(index == num.size())
    {
        ans.push_back(num);
        return;
    }

    for(int i = index; i < num.size(); i++)
    {
        swap(num[index], num[i]);

        getper(num, index + 1, ans);

        // Backtracking
        swap(num[index], num[i]);
    }
}

int main()
{
    vector<int> num;
    num.push_back(1);
    num.push_back(2);
    num.push_back(3);

    vector<vector<int> > ans;

    getper(num, 0, ans);

    // Print permutations
    for(int i = 0; i < ans.size(); i++)
    {
        for(int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
