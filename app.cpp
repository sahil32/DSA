#include <bits/stdc++.h>
using namespace std;
 
vector<int> spiralOrder(vector<vector<int> >& matrix)
{
    vector<int> ans;
    if(matrix.size()==0)
    {
		return ans;
	}
	int dr[] = {0, 1, 0, -1};
	int dc[] = {1, 0, -1, 0};
	int r = 0, c = 0, di = 0, cc, cr;
	int R = matrix.size();
	int C = matrix[0].size();
	vector<vector<bool>> seen(R , vector<bool>(C , false));
	for(int i= 0; i< R*C; i++)
	{
		ans.push_back(matrix[r][c]);
		seen[r][c] = true;
		cr = r + dr[di];
		cc = c + dc[di];
		if(cr >= 0 && cr < R && cc >= 0 && cc< C && !seen[cr][cc])
		{
			r = cr;
			c = cc;
		} 
		else {
			di = (di+1) % 4;
			r = r + dr[di];
			c = c + dc[di];  
		} 
	}
	return ans;
}
 
// Driver code
int main()
{
    vector<vector<int> > a{ { 1, 2, 3, 4 },
                            { 5, 6, 7, 8 },
                            { 9, 10, 11, 12 },
                            { 13, 14, 15, 16 } };
 
    for (int x : spiralOrder(a)) {
        cout << x << " ";
    }
    return 0;
}
