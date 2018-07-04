#include<iostream>
#include<string.h>
using namespace std;
 void board();
int checkwin();

char box[10]={'o','1','2','3','4','5','6','7','8','9'};

int main()
{
	int player,i=0,choice,n=10;
	cout<<"\n Choose the player";
	cin>>player;
	char mark;
	while(--n && i!=1)
{
	board();
	player=(player%2)?1:2;
	cout<<"Player "<<player<<" , enter a number: ";
	cin>>choice;
	mark=(player==1)?'X':'O';
	if(choice==1 && box[1]=='1')
	box[1]=mark;
	else if(choice==2 && box[2]=='2')
	box[2]=mark;
	else if(choice==3 && box[3]=='3')
	box[3]=mark;
	else if(choice==4 && box[4]=='4')
	box[4]=mark;
	else if(choice==5 && box[5]=='5')
	box[5]=mark;
	else if(choice==6 && box[6]=='6')
	box[6]=mark;
	else if(choice==7 && box[7]=='7')
	box[7]=mark;
	else if(choice==8 && box[8]=='8')
	box[8]=mark;
	else if(choice==9 && box[9]=='9')
	box[9]=mark;
	else
{
	cout<<"\nInvalid Move ";
	player--;
	break;

}
i=checkwin();
player++;
board();
}

if(i==1)
{
cout<<"==>\aPlayer "<<--player<<" win";
}
else if(i==0)
{
cout<<"==>\aGame draw";
cout<<"\nPLAY AGAIN";
}
else if(i==-1)
{
	cout<<"\nSome error";
}
return 0;
}


	/*i=checkwin();
	player++;
if(i==1)
{
cout<<"==>\aPlayer "<<--player<<" win";
break;
}
else if(i==0)
{
cout<<"==>\aGame draw";
cout<<"\nPLAY AGAIN";
break;
}
else if(i==-1)
{
	continue;
}
}
return 0;

}
*/

int checkwin()
{
	if(box[1]==box[2] && box[2]== box[3])
	return 1;
	else if(box[4]==box[5] && box[5]==box[6])
	return 1;
	else if(box[7]==box[8] && box[8]==box[9])
	return 1;
	else if(box[1]==box[4] && box[4]==box[7])
	return 1;
	else if(box[2]==box[5] && box[5]==box[8])
	return 1;
	else if(box[3]==box[6] && box[6]==box[9])
	return 1;
	else if(box[1]==box[5] && box[5]==box[9])
	return 1;
	else if(box[3]==box[5] && box[5]==box[7])
	return 1;
	else if(box[1]!=box[2] && box[2]!=box[3] && box[4]!=box[5] && box[5]!=box[6] && box[7]!=box[8] && box[8]!=box[9] && box[1]!=box[4] && box[4]!=box[7] && box[2]!=box[5] && box[5]!=box[8] && box[3]!=box[6] && box[6]!=box[9] && box[1]!=box[5] && box[5]!=box[9] && box[3]!=box[5] && box[5]!=box[7])
	return 0;
	else if(box[1]!='1' && box[2]!=2 && box[3]!=3 && box[4]!=4 && box[5]!=5 && box[6]!=6 && box[7]!=7 && box[8]!=8 && box[9]!=9)
	return -1; 
}


void board()
{
	cout<<"\n\nTic Tac Toe\n\n";
	cout<<"Player 1(X) - Player 2 (O)"<<endl;
	cout<<endl;
	cout<<"		|	|	"<<endl;
	cout<<"		|	|	"<<endl;
	cout<<" 	"<<box[1]<<"	|"<<"  "<<box[2]<<"	| "<<box[3]<<endl;
	cout<<"	________|_______|_______"<<endl;
	cout<<"		|	|	"<<endl;
	cout<<" 	"<<box[4]<<"	|"<<"  "<<box[5]<<"	| "<<box[6]<<endl;
	cout<<"		|	|	"<<endl;
	cout<<"	________|_______|_______"<<endl;
	cout<<"		|	|	"<<endl;
	cout<<" 	"<<box[7]<<"	|"<<"  "<<box[8]<<"	| "<<box[9]<<endl;
	cout<<"		|	|	"<<endl;
	cout<<"		|	|	"<<endl;
}
