#include<iostream>
#include<cstdlib>
using namespace std;
//函数原型声明； 
int pinjun(int a,int b,int c,int d) //求平均分； 
{
	int x;
	x=(a+b+c+d)/4;
	return x;
}

int sum(int a,int b,int c,int d)  //求和； 
{
	int y;
	y=a+b+c+d;
	return y;
 } 

float jigelv(float a,float b,float c,float d)     //求及格率； 
{
	float z,e;
	if(a>=60) e+=1;
	if(b>=60) e+=1;
	if(c>=60) e+=1;
	if(d>=60) e+=1;
	z=e/4*100.0;
	return z;
}

//main函数;

int main()
{
	int i,j,need;
	for(i=3;i>0;i--)
	{
		cout<<"请输入您的密码：";
		cin>>j;
		if(j==123)
		{
			cout<<"请输入四位同学A、B、C、D的代号和成绩：";
			int score1,score2,score3,score4;
	            char grade1,grade2,grade3,grade4;
	            cin>>grade1>>score1>>grade2>>score2>>grade3>>score3>>grade4>>score4;
			
	cout<<"************************************************\n";
	cout<<"*    欢迎使用学生成绩管理系统1.3               *\n";
	cout<<"*高静彤、陈颖茵、王振宇 计算机2003班 2020.11.19*\n";
	cout<<"*     1、输入4个同学的代号和成绩               *\n";
	cout<<"*        显示4个同学的代号和成绩列表           *\n";
	cout<<"*     2、求4人平均分                           *\n";
	cout<<"*     3、求4人总分                             *\n";
	cout<<"*     4、查询某同学的分数                      *\n";
	cout<<"*     5、统计及格率                            *\n";
	cout<<"*     6、退出                                  *\n";
	cout<<"*   请输入(1-6)选择：                          *\n"; 
	cout<<"*                                              *\n";
	cout<<"************************************************\n";
	cout<<"请从上面的1-6中选择您的服务需求(即输入序号):";
	
			while(cin>>need)
			{
			if(need==6) break;
			else
			{
				switch(need)
		{
			case 1:cout<<"您的服务需求是1：显示4个同学的代号和成绩列表"<<'\n'<<"请输入四位同学的代号和成绩:"<<endl;
		int score1,score2,score3,score4;
	char grade1,grade2,grade3,grade4;
	cin>>grade1>>score1>>grade2>>score2>>grade3>>score3>>grade4>>score4;
	cout<<"您的代号为:"<<grade1<<'\t'<<"您的成绩为："<<score1<<endl;
	cout<<"您的代号为:"<<grade2<<'\t'<<"您的成绩为："<<score2<<endl;
	cout<<"您的代号为:"<<grade3<<'\t'<<"您的成绩为："<<score3<<endl;
	cout<<"您的代号为:"<<grade4<<'\t'<<"您的成绩为："<<score4<<endl;
	system ("pause");
	system ("cls");
	break;
	
	case 2:cout<<"您的服务需求是2：求4人平均分 "<<'\n'<<"请输入四位同学的成绩：";
	int x,a,b,c,d; 
	cin>>a>>b>>c>>d;
	x=pinjun(a,b,c,d);  //调用函数； 
	cout<<"4人平均分为："<<x<<endl;
	system ("pause");
	system ("cls");
	break;
	
	case 3:cout<<"您的服务需求是3:求4人总分"<<'\n'<<"请输入四位同学的成绩：";
	int y,e,f,g,h;
	cin>>e>>f>>g>>h;
	y=sum(e,f,g,h);  //调用函数； 
	cout<<"4人总分为："<<y<<endl;
	system ("pause");
	system ("cls");
	break;
	
	case 4:cout<<"您的服务需求是4：查询某同学的分数"<<'\n'<<"请输入您的代号：";
	char grade;
	cin>>grade;
	switch(grade)
	{
		case'A':cout<<"您的代号为:"<<grade<<'\t'<<"成绩为：88"<<endl; break;
		case'B':cout<<"您的代号为:"<<grade<<'\t'<<"成绩为：99"<<endl; break;
		case'C':cout<<"您的代号为:"<<grade<<'\t'<<"成绩为：55"<<endl; break;
		case'D':cout<<"您的代号为:"<<grade<<'\t'<<"成绩为：66"<<endl; break;
	}
	system ("pause");
	system ("cls");
	break;
	
	case 5:cout<<"您的服务需求是5:统计及格率 "<<'\n'<<"请输入四位同学的成绩：";
	int score5,score6,score7,score8;//默认60分为及格分数；
	float z=0.0;
	cin>>score5>>score6>>score7>>score8; 
	z=jigelv(score5,score6,score7,score8);  //调用函数； 
	cout<<"这四位同学的及格率为："<<z<<"%"<<endl;
	system ("pause");
	system ("cls");
	break;
	
		}
	cout<<"************************************************\n";
	cout<<"*    欢迎使用学生成绩管理系统1.3               *\n";
	cout<<"*高静彤、陈颖茵、王振宇 计算机2003班 2020.11.19*\n";
	cout<<"*     1、输入4个同学的代号和成绩               *\n";
	cout<<"*        显示4个同学的代号和成绩列表           *\n";
	cout<<"*     2、求4人平均分                           *\n";
	cout<<"*     3、求4人总分                             *\n";
	cout<<"*     4、查询某同学的分数                      *\n";
	cout<<"*     5、统计及格率                            *\n";
	cout<<"*     6、退出                                  *\n";
	cout<<"*   请输入(1-6)选择：                          *\n"; 
	cout<<"*                                              *\n";
	cout<<"************************************************\n";
	cout<<"请从上面的1-6中选择您的服务需求(即输入序号):";
			}
			}
	    break;
		}
	}
		system ("pause");
		return 0;
}
