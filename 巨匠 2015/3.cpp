#include<stdio.h>
#include<stdlib.h>
#include <math.h>
int main()
{
 
  int a,b;
  printf("�п�J��ӼƦr\n");
  scanf("%d %d",&a,&b);
  printf("�A��J����ӼƦr�� %d �M %d \n",a,b); 
  
  printf("��Ƭۥ[����%d \n",a+b);
  printf("��Ƭ۴��%d \n",a-b);
  printf("��Ƭۭ�����%d \n",a*b);
  printf("��Ƭ۰�����%d \n",a/b);
  
  system("pause");
  
  int c;
  printf("�п�J�A�n�p�⪺���ū�\n");
  scanf("%d",&c);

  printf("�A��J�����ū׬� %d ��\n",c);
  printf("�g�ഫ�᪺�ؤ�ū׬� %d F\n",c*9/5+32);
  
  system("pause");
  int x,y;
  printf("���]���@���������ѤF 1 ���B 5 ���M 10 ���T�صw��,\n");
  printf("��z��J�n�I�������B��,�{���N�|���z��X����I���ֵ̤w����,\n");
 
  scanf("%d",&x);
  y=x/10+(x/10)/5+x%5;
  printf("����I���ֵ̤w���Ȭ�%d\n",y);
  printf("�I�������B�A10��%d�T�A5��%d�T�A1��%d�T�A\n",x/10,(x%10)/5,x%5);

  system("pause");
  
  int  r,s,t,z,m,n;
  printf("���@�ӦѪ��ϡA�䤤���Ŧa���o�D�`�a�x���C�H�۪��|���i�B�A�H�̷Q�n�\���Фl�V�ӶV�j�A���O�V�j���g�a�N�V��\n���o�A�]���A�V�j���g�a����]�V���C\n�Ѫ��Ϫ��g�a����K�O�H�g�a���n������ӭp�⪺�C\n���Ϥ����@���T���Ϊ��g�a�A���A�����g�a������A�o�Q�ЧA���o��⨺���g�a���Ȧh�ֿ��H\n");
  printf("�п�J�T���(����)\n");
  scanf("%d %d %d",&r,&s,&t);
  z=(r+s+t)/2;
  m=z*(z-r)*(z-s)*(z-t);
  n=sqrt(m);
  printf("�Ӥg�a�����Ȭ�%d(�@�W10�U���p��)",n*100000);
  
  return 0;
}
