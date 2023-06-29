#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    std::vector<std::vector<int>> grid = {{3, 1, 2,2}, {1, 4, 4,5}, {2, 4, 2,2},{2,4,2,2}};
    std::vector<std::vector<int>> arr;
   
    int globalcount=0;
    for (int i = 0; i < grid[0].size(); i++) {
        std::vector<int> x;
        for (int j = 0; j < grid.size(); j++) {
            x.push_back(grid[j][i]);
        }
        arr.push_back(x);
    }

    for(auto it:arr){
        for(auto i:it){
            cout<<i;
        }
        cout<<endl;
    }

    for(int i=0;i<grid.size();i++){
        for(int j=0;j<grid[0].size();j++){
            int k=0;
            while(k<grid.size())
            {
                if(grid[i][j]==arr[i][k]){
                    
                }
            }
        }

    }
    cout<<globalcount;
}
