#include<iostream>
	using namespace std;
	void trinadeset();
	int main()
	{
		trinadeset();
		int n,m;
		cin>>n;
		cin>>m;
		double mat[100][100];
		
		for(int r=0;r<n;r++)
		{
					for(int s=0;s<n;s++)
					{
						cin>>mat[r][s];
					}
		}
		double c;
		cin>>c;
				for(int r=0;r<n;r++)
		{
					for(int s=0;s<n;s++)
					{
						mat[r][s]=c*(mat[r][s]);
					}
		}
		for(int r=0;r<n;r++)
		{
					for(int s=0;s<n;s++)
					{
						cout<<mat[r][s]<<" ";
					}
			  cout<<endl;
		}

		return 0;
	}

		void trinadeset()
	{
		int n;
		cin>>n;
		char mat[10][10];
		int b=1,br=1,bro=1,broi=1,co,cot;
		for(int r=0;r<n;r++)
		{
					for(int s=0;s<n;s++)
					{
						cin>>mat[r][s];
					}
		}
		co= mat[0][0];
		for(int r=0;r<n;r++)
		{
					for(int s=0;s<n;s++)
					{
						if(co==mat[r][s])b++;
						if(co!=mat[r][s])cot=mat[r][s];
						if(cot==mat[r][s])broi++;
						if(cot!=mat[r][s])
						{

							cot=mat[r][s];
							if(broi>=b)
							{
								b=broi;
								broi=0;
							}
						}
					}
		}
				co= mat[0][0];

				for(int r=0;r<n;r++)
		{
					for(int s=0;s<n;s++)
					{
						if(co==mat[s][r])br++;
						if(co!=mat[s][r])cot=mat[s][r];
						if(cot==mat[s][r])broi++;
						if(cot!=mat[s][r])
						{

							cot=mat[s][r];
							if(broi>=br)
							{
								br=broi;
								broi=0;
							}
						}
					}

		}
						co= mat[0][0];

				for(int r=0;r<n;r++)
		{
					for(int s=0;s<n;s++)
					{
						if(co==mat[r][r])bro++;
						if(co!=mat[r][r])cot=mat[r][r];
						if(cot==mat[r][r])broi++;
						if(cot!=mat[r][r])
						{

							cot=mat[r][r];
							if(broi>=bro)
							{
								bro=broi;
								broi=0;
							}
						}
					}
		}
		if(b>br && b>bro)cout<<b;
		if(br>b && br>bro)cout<<br;
		if(bro>b && bro>br)cout<<bro;
		}

