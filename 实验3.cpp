#include<iostream>
#include<cstdlib>
using namespace std;
//����ԭ�������� 
int pinjun(int a,int b,int c,int d) //��ƽ���֣� 
{
	int x;
	x=(a+b+c+d)/4;
	return x;
}

int sum(int a,int b,int c,int d)  //��ͣ� 
{
	int y;
	y=a+b+c+d;
	return y;
 } 

float jigelv(float a,float b,float c,float d)     //�󼰸��ʣ� 
{
	float z,e;
	if(a>=60) e+=1;
	if(b>=60) e+=1;
	if(c>=60) e+=1;
	if(d>=60) e+=1;
	z=e/4*100.0;
	return z;
}

//main����;

int main()
{
	int i,j,need;
	for(i=3;i>0;i--)
	{
		cout<<"�������������룺";
		cin>>j;
		if(j==123)
		{
			cout<<"��������λͬѧA��B��C��D�Ĵ��źͳɼ���";
			int score1,score2,score3,score4;
	            char grade1,grade2,grade3,grade4;
	            cin>>grade1>>score1>>grade2>>score2>>grade3>>score3>>grade4>>score4;
			
	cout<<"************************************************\n";
	cout<<"*    ��ӭʹ��ѧ���ɼ�����ϵͳ1.3               *\n";
	cout<<"*�߾�ͮ����ӱ�������� �����2003�� 2020.11.19*\n";
	cout<<"*     1������4��ͬѧ�Ĵ��źͳɼ�               *\n";
	cout<<"*        ��ʾ4��ͬѧ�Ĵ��źͳɼ��б�           *\n";
	cout<<"*     2����4��ƽ����                           *\n";
	cout<<"*     3����4���ܷ�                             *\n";
	cout<<"*     4����ѯĳͬѧ�ķ���                      *\n";
	cout<<"*     5��ͳ�Ƽ�����                            *\n";
	cout<<"*     6���˳�                                  *\n";
	cout<<"*   ������(1-6)ѡ��                          *\n"; 
	cout<<"*                                              *\n";
	cout<<"************************************************\n";
	cout<<"��������1-6��ѡ�����ķ�������(���������):";
	
			while(cin>>need)
			{
			if(need==6) break;
			else
			{
				switch(need)
		{
			case 1:cout<<"���ķ���������1����ʾ4��ͬѧ�Ĵ��źͳɼ��б�"<<'\n'<<"��������λͬѧ�Ĵ��źͳɼ�:"<<endl;
		int score1,score2,score3,score4;
	char grade1,grade2,grade3,grade4;
	cin>>grade1>>score1>>grade2>>score2>>grade3>>score3>>grade4>>score4;
	cout<<"���Ĵ���Ϊ:"<<grade1<<'\t'<<"���ĳɼ�Ϊ��"<<score1<<endl;
	cout<<"���Ĵ���Ϊ:"<<grade2<<'\t'<<"���ĳɼ�Ϊ��"<<score2<<endl;
	cout<<"���Ĵ���Ϊ:"<<grade3<<'\t'<<"���ĳɼ�Ϊ��"<<score3<<endl;
	cout<<"���Ĵ���Ϊ:"<<grade4<<'\t'<<"���ĳɼ�Ϊ��"<<score4<<endl;
	system ("pause");
	system ("cls");
	break;
	
	case 2:cout<<"���ķ���������2����4��ƽ���� "<<'\n'<<"��������λͬѧ�ĳɼ���";
	int x,a,b,c,d; 
	cin>>a>>b>>c>>d;
	x=pinjun(a,b,c,d);  //���ú����� 
	cout<<"4��ƽ����Ϊ��"<<x<<endl;
	system ("pause");
	system ("cls");
	break;
	
	case 3:cout<<"���ķ���������3:��4���ܷ�"<<'\n'<<"��������λͬѧ�ĳɼ���";
	int y,e,f,g,h;
	cin>>e>>f>>g>>h;
	y=sum(e,f,g,h);  //���ú����� 
	cout<<"4���ܷ�Ϊ��"<<y<<endl;
	system ("pause");
	system ("cls");
	break;
	
	case 4:cout<<"���ķ���������4����ѯĳͬѧ�ķ���"<<'\n'<<"���������Ĵ��ţ�";
	char grade;
	cin>>grade;
	switch(grade)
	{
		case'A':cout<<"���Ĵ���Ϊ:"<<grade<<'\t'<<"�ɼ�Ϊ��88"<<endl; break;
		case'B':cout<<"���Ĵ���Ϊ:"<<grade<<'\t'<<"�ɼ�Ϊ��99"<<endl; break;
		case'C':cout<<"���Ĵ���Ϊ:"<<grade<<'\t'<<"�ɼ�Ϊ��55"<<endl; break;
		case'D':cout<<"���Ĵ���Ϊ:"<<grade<<'\t'<<"�ɼ�Ϊ��66"<<endl; break;
	}
	system ("pause");
	system ("cls");
	break;
	
	case 5:cout<<"���ķ���������5:ͳ�Ƽ����� "<<'\n'<<"��������λͬѧ�ĳɼ���";
	int score5,score6,score7,score8;//Ĭ��60��Ϊ���������
	float z=0.0;
	cin>>score5>>score6>>score7>>score8; 
	z=jigelv(score5,score6,score7,score8);  //���ú����� 
	cout<<"����λͬѧ�ļ�����Ϊ��"<<z<<"%"<<endl;
	system ("pause");
	system ("cls");
	break;
	
		}
	cout<<"************************************************\n";
	cout<<"*    ��ӭʹ��ѧ���ɼ�����ϵͳ1.3               *\n";
	cout<<"*�߾�ͮ����ӱ�������� �����2003�� 2020.11.19*\n";
	cout<<"*     1������4��ͬѧ�Ĵ��źͳɼ�               *\n";
	cout<<"*        ��ʾ4��ͬѧ�Ĵ��źͳɼ��б�           *\n";
	cout<<"*     2����4��ƽ����                           *\n";
	cout<<"*     3����4���ܷ�                             *\n";
	cout<<"*     4����ѯĳͬѧ�ķ���                      *\n";
	cout<<"*     5��ͳ�Ƽ�����                            *\n";
	cout<<"*     6���˳�                                  *\n";
	cout<<"*   ������(1-6)ѡ��                          *\n"; 
	cout<<"*                                              *\n";
	cout<<"************************************************\n";
	cout<<"��������1-6��ѡ�����ķ�������(���������):";
			}
			}
	    break;
		}
	}
		system ("pause");
		return 0;
}
