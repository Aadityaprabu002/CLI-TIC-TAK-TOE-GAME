#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
char m[3][3]={'1','2','3','4','5','6','7','8','9'};
char player1='x';
char player2='0';
int flag=0;
void input(char p);
int pos();
int pos1();
void show()
{   
    system("cls");
    cout<<"\n \n \n \n \n\n";
	int i,j;
	for(i=0;i<3;i++)
	{
	  cout<<"\t \t \t \t";
		 for(j=0;j<3;j++)
		  {
			 cout<<m[i][j];
			 if(j<2)
			 cout<<"|";
			 
	      }
		  cout<<"\n";if(i<2){
		  cout<<"\t \t \t \t";cout<<"- - -";}
		  cout<<"\n";        
	 }

   
}


int main()
{   
    repeat:
    system("cls");
    cout<<"\n \n \n \t \t \t \t";cout<<"WELCOME TO TIC TAC TOE GAME";
    cout<<"\n \t \t \t \t";cout<<"Lets get started";
	cout<<"\n \t \t \t \t";cout<<"Press enter to continue!!!";
	getch();
    int flag=0,check;
    
    show();
	for(int i=0;i<9;i++)
	{
		 if(i%2==0)
		 {   
		     reentry:
		 	 cout<<"\n \t \t \t \t";cout<<" Its PLAYER_1's turn:";
		 	 char p='X';
		   	 input(p);
	         
	        flag=pos();
		    if(flag==0)
	     	{
		     flag=0;break;
		    }
			 		 	 
		 }
		 else if(i%2!=0)
		 {
		 	cout<<"\n \t \t \t \t";cout<<"Its PLAYER_2'S turn:";
		 	 char p='O';
		 	 reentry1:
		 	 input(p);
			 flag=pos1();
			
			 if(flag==0)
			  {
			   flag=0;break;
			   }
			 	 	 
		  } 
			 
	}
	  if(flag==1)
	  {
	  	 cout<<"Its a tie";
	  }
	  char ans;
	  cout<<"\n \t \t \t \t \t \t DO YOU WANT TO PLAY AGAIN (y/n):";
	  cin>>ans;
	  if(ans=='y'||ans=='Y')
	   {
	     m[0][0]='1'; m[0][1]='2'; m[0][2]='3'; m[1][0]='4'; m[1][1]='5'; m[1][2]='6'; m[2][0]='7'; m[2][1]='8'; m[2][2]='9';goto repeat;}
	  else    
	     exit(0);
	 
	 return 0;
	 
}
void input(char p)
{
	 re:
	 char inp,p1;
	 int i,j,flag=1;
	 cin>>inp;
	 for(i=0;i<9;i++)
	 {
	 	 for(j=0;j<9;j++)
		   {
		   	  if (inp==m[i][j])
		   	  { 
		   	      flag=0;
		   	      m[i][j]=p;
				
			   }
			
		   }
	 }
	 if(flag==1)
	 { 
	   flag=0;
	   cout<<"\n Entry at an already occupied location.Please re enter:";cin>>p1;
	   inp=p1;
	   goto re;
	 }  
	 show();

	
}
int pos()
{   
    
	 if(m[0][0]=='X'&m[1][1]=='X'&m[2][2]=='X') 
	   {
	   	  cout<<"\n \t \t \t \t X WINS";
	   	  getch();return 0;
	   }
   else	if(m[0][0]=='X'&m[1][0]=='X'&m[2][0]=='X') 
   {
	   	  cout<<"\n \t \t \t \t X WINS";
	   	  getch();return 0;
    }
    else	if(m[0][0]=='X'&m[0][1]=='X'&m[0][2]=='X') 
   {
	   	  cout<<"\n \t \t \t \t X WINS";
	   	  getch();return 0;
    }
    
	else	if(m[2][2]=='X'&m[2][1]=='X'&m[2][0]=='X') 
   {
	   	  cout<<"\n \t \t \t \t X WINS";
	   	  getch();return 0;
    }  
	else	if(m[1][0]=='X'&m[1][1]=='X'&m[1][2]=='X') 
   {
	      cout<<"\n \t \t \t \t X WINS"; 
	   	  getch();return 0;
   }
   else	if(m[2][0]=='X'&m[1][1]=='X'&m[0][2]=='X') 
   {
	   	  cout<<"\n \t \t \t \t X WINS";
	   	  getch();return 0;
    }
     else	if(m[0][1]=='X'&m[1][1]=='X'& m[2][1]=='X') 
   {
	   	  cout<<"\n \t \t \t \t X WINS";
	   	  getch();return 0;
	}
	else
	{
	  return 1; 
	} 	   
}
int pos1()
{   
    
	 if(m[0][0]=='O'&m[1][1]=='O'&m[2][2]=='O') 
	   {
	   	  cout<<"\n \t \t \t \t O WINS";
	   	  getch();return 0;
	   }
   else	if(m[0][0]=='O'&m[1][0]=='O'&m[2][0]=='O') 
   {
	      cout<<"\n \t \t \t \t O WINS";
	   	  getch();return 0;
    }
    else	if(m[0][0]=='O'&m[0][1]=='O'&m[0][2]=='O') 
   {
	   	  cout<<"\n \t \t \t \t O WINS";
	   	  getch();return 0;
    }
    
	else	if(m[2][2]=='O'&m[2][1]=='O'&m[2][0]=='O') 
   {
	   	  cout<<"\n \t \t \t \t O WINS";
	   	  getch();return 0;
    } else	if(m[1][0]=='O'&m[1][1]=='O'&m[1][2]=='O') 
   {
	   	  cout<<"\n \t \t \t \t O WINS";
	   	  getch();return 0;
   }else	if(m[2][0]=='O'&m[1][1]=='O'&m[0][2]=='O') 
   {
	   	  cout<<"\n \t \t \t \t O WINS";
	   	  getch();return 0;
    }
    else	if(m[0][1]=='O'&m[1][1]=='O'&m[2][1]=='O') 
   {
	   	  cout<<"\n \t \t \t \t O WINS";
	   	  getch();return 0;
    }
    else 
	  return 1;  
    
   
}

