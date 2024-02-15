#include <stdio.h>
#include <malloc.h>
#define size 2
void fff(char *,char *);
// ���� ���ᨢ� ��ப,
// ᮧ����� ���ᨢ� 㪠��⥫�� �� ᫮�� ��� ������ ��ப�
// �᪫�祭�� �� ������ ��ப� c���� � ���ᨬ��쭮� �������
void main()
{ char *st[size][10],*mst,*pst;
  int i,j,n=0,k=0,kk=0;
  n=0;
  do
  { st[n][0]=(char *)malloc(20);
    gets(st[n][0]);                   // ���� ��ப�
  } while(*st[n++][0]);
  n--;

  for(i=0;i<n;i++)
  { k=0;
    for(j=0; *(st[i][0]+j); j++)
    if(*(st[i][0]+j)==' ')     // ����� ᫮�� � ��ப�
      st[i][++k]=st[i][0]+j+1; // ���� ��砫� ᫮��
    st[i][++k]=st[i][0]+j+1;   // ���� \0 (��� ��᫥����� ᫮��)
    for(; k<9; )
    st[i][++k]=NULL;           // ��⠫�� ���� ��� ᫮� � ��ப�
  }
  for(i=0; i<n; i++)             // ��ॡ�� ��ப
  for(j=0; st[i][j]; j++)        // ��ॡ�� ᫮� � ��ப�
  fff(st[i][j],st[i][j+1]);    // �ࠢ����� 2 ᫮� ��� ���᪠ max

  for(i=0; i<n; i++)
  puts(st[i][0]);
}

// void fff(char st1[],char st2[]) �������筮 ��।����� ����
void fff(char *st1,char *st2)
{  int i;
   static j;
   static char *k;
   j=(st2-st1>j) ? k=st1,j=st2-st1 : j;
	      // j - ����� ���ᨬ��쭮�� ᫮��
	      // k - 㪠��⥫� �� ��砫� �⮣� ᫮��
   if (!st2)          // ��।��� �� ���� ᫮��
   { for(; j>0; j--)
     { for(i=0; *(k+i+1); i++)
       *(k+i)=*(k+i+1);     // ᤢ�� ��ப� �� ������ max ᫮��
       *(k+i)='\0';
      }
    }
}

