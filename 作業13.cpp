#include <iostream>
using namespace std;
int main(void)
{
	int marry;
	int gender;

		printf("我國民法在民國100年以前，規定男女結婚最低限度的年齡則分別為 18 歲及 16 歲。讓我們把時光倒回過去，請寫一段程式讓使用者輸入性別和年齡，判斷在修法以前他/她能不能結婚\n");
		printf("男生輸入1;女生輸入0");
		printf("請輸入性別和年齡\n");
		scanf("%d",&gender);
		scanf("%d",&marry);

	if( gender==1 && marry>=18)
	{
		printf("你可以結婚\n");
	}
	if( gender==1 && marry<18)
	{
		printf("你無法結婚\n"); 
	}
	if( gender==0 && marry>=16)
	{
		printf("妳可以結婚\n");
	}
	if( gender==0 && marry<16)
	{
		printf("妳無法結婚\n");
	}
		return 0; 
}
