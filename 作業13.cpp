#include <iostream>
using namespace std;
int main(void)
{
	int marry;
	int gender;

		printf("�ڰ���k�b����100�~�H�e�A�W�w�k�k���B�̧C���ת��~�֫h���O�� 18 ���� 16 ���C���ڭ̧�ɥ��˦^�L�h�A�мg�@�q�{�����ϥΪ̿�J�ʧO�M�~�֡A�P�_�b�תk�H�e�L/�o�ण�൲�B\n");
		printf("�k�Ϳ�J1;�k�Ϳ�J0");
		printf("�п�J�ʧO�M�~��\n");
		scanf("%d",&gender);
		scanf("%d",&marry);

	if( gender==1 && marry>=18)
	{
		printf("�A�i�H���B\n");
	}
	if( gender==1 && marry<18)
	{
		printf("�A�L�k���B\n"); 
	}
	if( gender==0 && marry>=16)
	{
		printf("�p�i�H���B\n");
	}
	if( gender==0 && marry<16)
	{
		printf("�p�L�k���B\n");
	}
		return 0; 
}
