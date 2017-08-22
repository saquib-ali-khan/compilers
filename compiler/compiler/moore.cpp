#include<bits/stdc++.h>

using namespace std;

int main()
{
	int init,mat[10][10],op[10];
	FILE *fp;
	fp = fopen("machine2.txt","r");
	fscanf(fp,"%d",&init);
	string s;
	cout<<"Enter input string: ";
	cin>>s;
	int i=0,j=0;
	char ch;
	do
	{
		fscanf(fp,"%d%c",&op[i++],&ch);
	}while(ch!='\n');
	i=0;
	while(1)
	{
		fscanf(fp,"%d%c",&mat[i][j],&ch);
		j++;
		if(feof(fp))
			break;
		if(ch=='\n')
		{	
			i++;
			j=0;
		}
	}
	int p=init;
	for(int i=0; i<s.size(); i++)
	{
		int ip=s[i]-'0';
		cout<<op[p];
		if(mat[p][ip]>=0)
		{
			p=ip;
		}
		else
		{
			cout<<"Invalid string.\n";
			break;
		}
	}
	cout<<op[p]<<endl;
	fclose(fp);
	return 0;
}
