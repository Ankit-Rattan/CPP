#include <iostream>
#include <vector>

using namespace std;

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
    if(matrix.empty()) return false;    
    int c =matrix[0].size();    
    int curr_c = c-1;
    int curr_r =0;
    while(curr_r>=0 and curr_c<=c-1){
        if(matrix[curr_r][curr_c] == target){
            return true;         
            break;   
        }
        else if(matrix[curr_r][curr_c] >target){
            curr_c--;
        }
        else{
            curr_r++;
        }
    }
    return false;
    }

int main()
{

    vector < vector <int> > v2d;

    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 5; y++)
        {
            v2d.push_back(vector <int> ());
            v2d[x].push_back(y);
        }
    }
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 5; y++)
        {
            cout<<v2d[x][y];
        }
        cout<<endl;
    }

    bool f = searchMatrix(v2d, 8);
    cout<<f<<endl;    


    return 0;
}