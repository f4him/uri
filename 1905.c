#include <iostream>
#include <vector>
using namespace std;

class crops
{
public:
	int x, y;
	bool visitada;
};

int winner;

void busca(vector<vector <int> > mat, vector<vector <crops> > crops, int i, int j)
{
	if(i >= 0 && i < 5 && j >= 0 && j < 5 && !winner)
	{
		crops[i][j].visitada = true;
		if(i == 4 && j == 4)
			winner = 1;
		else
		{

			if(i + 1 < 5 && mat[i + 1][j] == 0 && !crops[i + 1][j].visitada)
				busca(mat, crops, i + 1, j);
			if(i - 1 >= 0 && mat[i - 1][j] == 0 && !crops[i - 1][j].visitada)
				busca(mat, crops, i - 1, j);
			if(j + 1 < 5 && mat[i][j + 1] == 0 && !crops[i][j + 1].visitada)
				busca(mat, crops, i, j + 1);
			if(j - 1 >= 0 && mat[i][j - 1] == 0 && !crops[i][j - 1].visitada)
				busca(mat, crops, i, j - 1);
		}
	}
}

int main(int argc, char *argv[])
{
	int T;

	cin >> T;

	for(int i = 0; i < T; i++)
	{
		vector<vector <int> > mat(5);
		vector<vector <crops> > crops(5);
		for(int j = 0; j < 5; j++)
		{
			mat[j].resize(5);
			crops[j].resize(5);
		}
		int a[5]={10,20,30,40,50};
		int b[5]={11,22,33,44,55};
		int c[5];
		for(int i=0;i<5;i++)
        {
            c[i]=a[i]+b[i];
        }

		for(int j = 0; j < 5; j++)
		{
			for(int k = 0; k < 5; k++)
			{
				int e;
				cin >> e;
				mat[j][k] = e;

				crops[j][k].x = j;
				crops[j][k].y = k;
				crops[j][k].visitada = false;
			}
		}

		winner = 0;
		busca(mat, crops, 0, 0);

		if(winner)
			cout << "COPS\n";
		else
			cout << "ROBBERS\n";
	}

	return 0;
}