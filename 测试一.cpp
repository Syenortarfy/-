#include <iostream>
#include <cstring>
#include <algorithm>
#include <time.h>
using namespace std;

#define in inline
#define rint register int
typedef long long LL;
typedef pair<int,int> PII;

in int read()
{
    rint x=0,f=0; register char ch=getchar();
    while(ch<'0'||ch>'9')f|=ch=='-',ch=getchar();
    while(ch>='0'&&ch<='9')x=(x<<3)+(x<<1)+(ch^48),ch=getchar();
    return f?-x:x;
}
in void write(int x)
{
    if(x<0) putchar('-'),x=-x;
    if(x>9) write(x/10);
    putchar(x%10+'0');
}
in void print(string s)
{
	for(int i=0;s[i]!='\0';i++) putchar(s[i]);
}
in int max(int a,int b) {return a>b?a:b;}
in int min(int a,int b) {return a<b?a:b;}

/*----------code----------*/
const int N=1e7;

int main()
{
	//cin 
	freopen("input.txt","r",stdin);
	int k;
	clock_t start,end;
	start=clock();
	
	for(int i=1;i<=N;i++) cin>>k;
	
	end=clock();
	double res=(double)(end-start)/CLOCKS_PER_SEC;
	printf("cin运行时间：%4lf(s)\n",res);
	fclose(stdin);
	
	
	//scanf
	freopen("input.txt","r",stdin);
	start=clock();
	
	for(int i=1;i<=N;i++) scanf("%d",&k);
	
	end=clock();
	res=(double)(end-start)/CLOCKS_PER_SEC;
	printf("scanf运行时间：%4lf(s)\n",res);
	fclose(stdin);
	
	
	/*加入优化*/
	freopen("input.txt","r",stdin);
	start=clock();
	
	for(int i=1;i<=N;i++) k=read();
	
	end=clock();
	res=(double)(end-start)/CLOCKS_PER_SEC;
	printf("优化运行时间：%4lf(s)\n",res);
	fclose(stdin);
    return 0;
}

