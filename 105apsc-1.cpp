#include <cstdio>
#include <algorithm>
using namespace std;


int main()
{
	int score[20];	//�̦h20�����Z 
	int num; 		//�X�ӤH 
	int max=0,min=0;		//�洫�Ȧs���H 
	scanf("%d",&num);
	
	//��J�}�C 
	for(int i=0;i<num;i++)
	{
		scanf("%d",&score[i]);
	}
	//�i��Ƨ�  �ϥ�algorithm��sort 
	sort(score,score+num);
	//�����̰��γ̧C�� 
	for(int i=0;i<num;i++)
	{
		if(score[i]<60)
			max=i;
		if(score[i]>60)
		{
			min=i;
			break;
		}
	}
	
	
	//��X�D�ةһݮ榡 
	for(int i=0;i<num;i++)
	{
		printf("%d ",score[i]);
	}
	
	if(max==0 && score[0]>=60)
	{
		printf("\nbest case");
	}
	else
	{
		printf("\n%d",score[max]);
	}
	
	if(min==0 && score[0]<=60)
	{
		printf("\nworst case");
	}
	else
	{
		printf("\n%d",score[min]);
	}	
	
	return 0;
}
