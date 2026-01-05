#include <iostream>
#include <cstdlib>
#include<fstream>
#include <ctime>
#include <windows.h>
#include<string.h>
using namespace std;
int count=1;
int level1();
int level2();
int level3();
int level4();
int level5();
int level6();
int level7();
int level8();
int level9();
int level10();
int level = 0;
const int size1=3;
const int size2=5;
const int size3=3;
const int size4=7;
const int size5=5;
const int size6=3;
const int size7=5;
const int size8=3;
const int size9=7;
const int size10=7;
char name[50];
int score[10];
bool con = true;
int num;
string words1[10] = {"apple","river","mountain","sky","forest","sun","moon","flower","dream","story"};
string words2[10] = {"car","train","window","garden","bridge","city","street","cloud","stone","shadow"};
string words3[10] = {"music","poetry","dance","culture","heritage","festival","rhythm","voice","melody","song"};
string words4[10] = {"computer","keyboard","screen","mouse","coding","program","logic","binary","network","server"};
string words5[10] = {"lion","tiger","eagle","whale","horse","panda","zebra","camel","shark","wolf"};
string words6[10] = {"red","blue","green","yellow","purple","orange","silver","gold","white","black"};
string words7[10] = {"happy","sad","angry","excited","calm","brave","confused","proud","curious","lonely"};
string words8[10] = {"book","pen","paper","bag","lamp","chair","table","clock","phone","mirror"};
string words9[10] = {"summer","winter","autumn","spring","rain","snow","wind","storm","fog","sunshine"};
string words10[10] = {"ocean","desert","valley","island","village","castle","temple","forest","canyon","harbor"};
int wordGame();
int numberGame();
#include <fstream>
using namespace std;

void writeScorecardToFile(int levelsCompleted)
{
    fstream file("D:\\info.txt", ios::out);

    if(!file)
        return;

    file << "Your scorecard:\n\n";
    file << "You completed " << levelsCompleted << " level(s):\n\n";
    file << "Level     Total Points     Obtained Points\n";

    for(int i = 0; i < levelsCompleted; i++)
    {
        file << "  " << (i+1)
             << "            "
             << score[i] + 0   // keeps formatting simple
             << "                 "
             << score[i]
             << endl;
    }

    file.close();
}


int main()
{
	int choice;
	cout<<"Enter your choice : "<<endl;
	cout<<"Press 1 to word game :"<<endl;
	cout<<"Press 2 to play number game : "<<endl;
	cin>>choice;
	cin.ignore();
	if(choice==1)
	{
		wordGame();
	}
	else if(choice==2)
	{
		numberGame();
	}
	else{
		cout<<"Invalid Input : "<<endl;
	}
}




int numberGame()
{
	cout<<"Press 1 to start level 1 "<<endl;
	cin>>num;
	if(num==1)
	{
		level1();
    }
    
    
    if(count==2)
    {
    	cout<<"Want to continue to level 2 "<<endl;
    	cout<<"Press 1 to continue "<<endl;
    	cout<<"Press 2 to exit "<<endl;
		cin>>num;
		if(num==1)
		{
			level2();
	    }
	    if(num==2)
	    {
	    	count--;
		}
	}
	 if(count==1)
	{
		cout<<"The game has finished : "<<endl;;
	cout<<"Do u want to see your scorecard : "<<endl;
	cout<<"Press 1 to see scorecard : "<<endl;
	cout<<"Press 2 to exit the game completely!"<<endl;
	cin>>num;
	if(num==1)
	{
		cout<<"Your scorecard:"<<endl<<endl;
		cout<<"You completed only 1 level : "<<endl;
		cout<<"Level :           Total Points :           Obtained Points:"<<endl;
		cout<<"   1  :"<<"                3                             "<<score[0]<<endl<<endl;
		writeScorecardToFile(1);
	}
	}
	
	
	if(count==3)
    {
    	cout<<"Want to continue to level 3 "<<endl;
    	cout<<"Press 1 to continue "<<endl;
    	cout<<"Press 2 to exit "<<endl;
		cin>>num;
		if(num==1)
		{
			level3();
	    }
	    if(num==2)
	    {
	    	count--;
		}
	}
	if(count==2)
	{
		cout<<"The game has finished : "<<endl;;
	cout<<"Do u want to see your scorecard : "<<endl;
	cout<<"Press 1 to see scorecard : "<<endl;
	cout<<"Press 2 to exit the game completely!"<<endl;
	cin>>num;
	if(num==1)
	{
		cout<<"Your scorecard:"<<endl<<endl;
		cout<<"You completed only 2 level : "<<endl;
		cout<<"Level :           Total Points :           Obtained Points:"<<endl;
		cout<<"   1  :"<<"                3                             "<<score[0]<<endl;
		cout<<"   2  :"<<"                5                             "<<score[1]<<endl;
		writeScorecardToFile(2);
	}
	}
	
	
	if(count==4)
    {
    	cout<<"Want to continue to level 4 "<<endl;
    	cout<<"Press 1 to continue "<<endl;
    	cout<<"Press 2 to exit "<<endl;
		cin>>num;
		if(num==1)
		{
			level4();
	    }
	    else if(num==2)
	    {
	    	count--;
		}
	}
	if(count==3)
	{
		cout<<"The game has finished : "<<endl;;
	cout<<"Do u want to see your scorecard : "<<endl;
	cout<<"Press 1 to see scorecard : "<<endl;
	cout<<"Press 2 to exit the game completely!"<<endl;
	cin>>num;
	if(num==1)
	{
		cout<<"Your scorecard:"<<endl<<endl;
		cout<<"You completed only 3 level : "<<endl;
		cout<<"Level :           Total Points :           Obtained Points:"<<endl;
		cout<<"   1  :"<<"                3                             "<<score[0]<<endl;
		cout<<"   2  :"<<"                5                             "<<score[1]<<endl;
		cout<<"   3  :"<<"                3                             "<<score[2]<<endl;
		writeScorecardToFile(3);
	}
	}
	
	
	if(count==5)
    {
    	cout<<"Want to continue to level 5 "<<endl;
    	cout<<"Press 1 to continue "<<endl;
    	cout<<"Press 2 to exit "<<endl;
		cin>>num;
		if(num==1)
		{
			level5();
	    }
	    if(num==2)
	    {
	    	count--;
		}
	}
	if(count==4)
	{
		cout<<"The game has finished : "<<endl;;
	cout<<"Do u want to see your scorecard : "<<endl;
	cout<<"Press 1 to see scorecard : "<<endl;
	cout<<"Press 2 to exit the game completely!"<<endl;
	cin>>num;
	if(num==1)
	{
		cout<<"Your scorecard:"<<endl<<endl;
		cout<<"You completed only 4 level : "<<endl;
		cout<<"Level :           Total Points :           Obtained Points:"<<endl;
		cout<<"   1  :"<<"             "<<size1<<"                        "<<score[0]<<endl;
		cout<<"   2  :"<<"             "<<size2<<"                           "<<score[1]<<endl;
		cout<<"   3  :"<<"             "<<size3<<"                            "<<score[2]<<endl;
		cout<<"   4  :"<<"             "<<size4<<"                            "<<score[3]<<endl;
		writeScorecardToFile(4);
		
	}
	}
	
	
	if(count==6)
    {
    	cout<<"Want to continue to level 6 "<<endl;
    	cout<<"Press 1 to continue "<<endl;
    	cout<<"Press 2 to exit "<<endl;
		cin>>num;
		if(num==1)
		{
			level6();
	    }
	    if(num==2)
	    {
	    	count--;
		}
	}
	if(count==5)
	{
		cout<<"The game has finished : "<<endl;;
	cout<<"Do u want to see your scorecard : "<<endl;
	cout<<"Press 1 to see scorecard : "<<endl;
	cout<<"Press 2 to exit the game completely!"<<endl;
	cin>>num;
	if(num==1)
	{
		cout<<"Your scorecard:"<<endl<<endl;
		cout<<"You completed only 5 level : "<<endl;
		cout<<"Level :           Total Points :           Obtained Points:"<<endl;
		cout<<"   1  :"<<"             "<<size1<<"                        "<<score[0]<<endl;
		cout<<"   2  :"<<"             "<<size2<<"                           "<<score[1]<<endl;
		cout<<"   3  :"<<"             "<<size3<<"                            "<<score[2]<<endl;
		cout<<"   4  :"<<"             "<<size4<<"                            "<<score[3]<<endl;
		cout<<"   5  :"<<"             "<<size5<<"                            "<<score[4]<<endl;
		writeScorecardToFile(5);
		
	}
	}
	
	if(count==7)
    {
    	cout<<"Want to continue to level 7 "<<endl;
    	cout<<"Press 1 to continue "<<endl;
    	cout<<"Press 2 to exit "<<endl;
		cin>>num;
		if(num==1)
		{
			level7();
	    }
	    if(num==2)
	    {
	    	count--;
		}
	}
	if(count==6)
	{
		cout<<"The game has finished : "<<endl;;
	cout<<"Do u want to see your scorecard : "<<endl;
	cout<<"Press 1 to see scorecard : "<<endl;
	cout<<"Press 2 to exit the game completely!"<<endl;
	cin>>num;
	if(num==1)
	{
		cout<<"Your scorecard:"<<endl<<endl;
		cout<<"You completed 6 level : "<<endl;
		cout<<"Level :           Total Points :           Obtained Points:"<<endl;
		cout<<"   1  :"<<"             "<<size1<<"                        "<<score[0]<<endl;
		cout<<"   2  :"<<"             "<<size2<<"                           "<<score[1]<<endl;
		cout<<"   3  :"<<"             "<<size3<<"                            "<<score[2]<<endl;
		cout<<"   4  :"<<"             "<<size4<<"                            "<<score[3]<<endl;
		cout<<"   5  :"<<"             "<<size5<<"                            "<<score[4]<<endl;
		cout<<"   6  :"<<"             "<<size6<<"                            "<<score[5]<<endl;
		writeScorecardToFile(6);		
	}
	}
	
	
	
	if(count==8)
    {
    	cout<<"Want to continue to level 8 "<<endl;
    	cout<<"Press 1 to continue "<<endl;
    	cout<<"Press 2 to exit "<<endl;
		cin>>num;
		if(num==1)
		{
			level8();
	    }
	    if(num==2)
	    {
	    	count--;
		}
	}
    if(count==7)
	{
		cout<<"The game has finished : "<<endl;;
	cout<<"Do u want to see your scorecard : "<<endl;
	cout<<"Press 1 to see scorecard : "<<endl;
	cout<<"Press 2 to exit the game completely!"<<endl;
	cin>>num;
	if(num==1)
	{
		cout<<"Your scorecard:"<<endl<<endl;
		cout<<"You completed 7 level : "<<endl;
		cout<<"Level :           Total Points :           Obtained Points:"<<endl;
		cout<<"   1  :"<<"             "<<size1<<"                        "<<score[0]<<endl;
		cout<<"   2  :"<<"             "<<size2<<"                           "<<score[1]<<endl;
		cout<<"   3  :"<<"             "<<size3<<"                            "<<score[2]<<endl;
		cout<<"   4  :"<<"             "<<size4<<"                            "<<score[3]<<endl;
		cout<<"   5  :"<<"             "<<size5<<"                            "<<score[4]<<endl;
		cout<<"   6  :"<<"             "<<size6<<"                            "<<score[5]<<endl;
		cout<<"   7  :"<<"             "<<size7<<"                            "<<score[6]<<endl;
		writeScorecardToFile(7);		
	}
	}
	
	if(count==9)
    {
    	cout<<"Want to continue to level 9 "<<endl;
    	cout<<"Press 1 to continue "<<endl;
    	cout<<"Press 2 to exit "<<endl;
		cin>>num;
		if(num==1)
		{
			level9();
	    }
	    if(num==2)
	    {
	    	count--;
		}
	}

    if(count==8)
	{
		cout<<"The game has finished : "<<endl;;
	cout<<"Do u want to see your scorecard : "<<endl;
	cout<<"Press 1 to see scorecard : "<<endl;
	cout<<"Press 2 to exit the game completely!"<<endl;
	cin>>num;
	if(num==1)
	{
		cout<<"Your scorecard:"<<endl<<endl;
		cout<<"You completed 8 level : "<<endl;
		cout<<"Level :           Total Points :           Obtained Points:"<<endl;
		cout<<"   1  :"<<"             "<<size1<<"                        "<<score[0]<<endl;
		cout<<"   2  :"<<"             "<<size2<<"                           "<<score[1]<<endl;
		cout<<"   3  :"<<"             "<<size3<<"                            "<<score[2]<<endl;
		cout<<"   4  :"<<"             "<<size4<<"                            "<<score[3]<<endl;
		cout<<"   5  :"<<"             "<<size5<<"                            "<<score[4]<<endl;
		cout<<"   6  :"<<"             "<<size6<<"                            "<<score[5]<<endl;
		cout<<"   7  :"<<"             "<<size7<<"                            "<<score[6]<<endl;
		cout<<"   8  :"<<"             "<<size8<<"                            "<<score[7]<<endl;
		writeScorecardToFile(8);		
	}
	}
	
	
	
	if(count==10)
    {
    	cout<<"Want to continue to last level of the game "<<endl;
    	cout<<"Press 1 to continue "<<endl;
    	cout<<"Press 2 to exit "<<endl;
		cin>>num;
		if(num==1)
		{
			level10();
	    }
	    if(num==2)
	    {
	    	count--;
		}
	}
	
	if(count==9)
	{
		cout<<"The game has finished : "<<endl;;
	cout<<"Do u want to see your scorecard : "<<endl;
	cout<<"Press 1 to see scorecard : "<<endl;
	cout<<"Press 2 to exit the game completely!"<<endl;
	cin>>num;
	if(num==1)
	{
		cout<<"Your scorecard:"<<endl<<endl;
		cout<<"You completed 9 level : "<<endl;
		cout<<"Level :           Total Points :           Obtained Points:"<<endl;
		cout<<"   1  :"<<"             "<<size1<<"                        "<<score[0]<<endl;
		cout<<"   2  :"<<"             "<<size2<<"                           "<<score[1]<<endl;
		cout<<"   3  :"<<"             "<<size3<<"                            "<<score[2]<<endl;
		cout<<"   4  :"<<"             "<<size4<<"                            "<<score[3]<<endl;
		cout<<"   5  :"<<"             "<<size5<<"                            "<<score[4]<<endl;
		cout<<"   6  :"<<"             "<<size6<<"                            "<<score[5]<<endl;
		cout<<"   7  :"<<"             "<<size7<<"                            "<<score[6]<<endl;
		cout<<"   8  :"<<"             "<<size8<<"                            "<<score[7]<<endl;
		cout<<"   9  :"<<"             "<<size9<<"                            "<<score[8]<<endl;
		writeScorecardToFile(9);		
	}
	}
	
	if(count==11)
	{
		cout<<"Congratulation!";
		puts(name);
		cout<<endl;
		cout<<"The game has concluded";
	}
	if(count==11)
	{
		cout<<"The game has finished : "<<endl;;
	cout<<"Do u want to see your scorecard : "<<endl;
	cout<<"Press 1 to see scorecard : "<<endl;
	cout<<"Press 2 to exit the game completely!"<<endl;
	cin>>num;
	if(num==1)
	{
		cout<<"Your scorecard:"<<endl<<endl;
		cout<<"You completed 9 level : "<<endl;
		cout<<"Level :           Total Points :           Obtained Points:"<<endl;
		cout<<"   1  :"<<"             "<<size1<<"                        "<<score[0]<<endl;
		cout<<"   2  :"<<"             "<<size2<<"                           "<<score[1]<<endl;
		cout<<"   3  :"<<"             "<<size3<<"                            "<<score[2]<<endl;
		cout<<"   4  :"<<"             "<<size4<<"                            "<<score[3]<<endl;
		cout<<"   5  :"<<"             "<<size5<<"                            "<<score[4]<<endl;
		cout<<"   6  :"<<"             "<<size6<<"                            "<<score[5]<<endl;
		cout<<"   7  :"<<"             "<<size7<<"                            "<<score[6]<<endl;
		cout<<"   8  :"<<"             "<<size8<<"                            "<<score[7]<<endl;
		cout<<"   9  :"<<"             "<<size9<<"                            "<<score[8]<<endl;
		cout<<"   10  :"<<"             "<<size10<<"                            "<<score[9]<<endl;
		writeScorecardToFile(10);		
	}
	}
		
}
int level1()
{
	cout<<"Welcome To level 1 "<<endl;
	puts(name);
	cout<<endl;
	Sleep(2000);
	cout<<"Game starting soon "<<endl;
	Sleep(2000);
	system("CLS");
    for(int n=10; n>0; n--)
    {
    	cout<<n;
    	Sleep(300);
	    system("CLS");
	}
	cout<<"The game has started : "<<endl;
	Sleep(2000);
	system("CLS");
	srand(time(0));
	int number[size1];
    for(int n=0; n<size1; n++)
    {
    	number[n] = rand() % 10 + 1;
	}
	cout<<"Remember the sequence : "<<endl;
	for(int n=0; n<size1; n++)
	{
		cout<<number[n]<<"     ";
	}
	Sleep(5000);
	system("CLS");
	cout<<"Time is up! Time to check your memory !"<<endl;
	cout<<"Enter the sequence ! ;"<<endl;
	int userinput[size1];
	for(int n=0; n<size1; n++)
	{
		cin>>userinput[n];
	}
	Sleep(5000);
	system("CLS");
	cout<<"you entered the sequence : ";
	for(int n=0; n<size1; n++)
	{
		cout<<userinput[n]<<" ";
	}
	cout<<endl;
	cout<<"Original sequence is : ";
	for(int n=0; n<size1; n++)
	{
		cout<<number[n]<<" ";
	}
     score[0] = 0 ;
	for(int n=0; n<size1; n++)
	{
		if(number[n]==userinput[n])
		{
			score[0]++;
		}
	}
	cout<<endl;
	cout<<"Your score is "<<score[0]<<endl;
	Sleep(5000);
	system("CLS");
	if(score[0]>=2)
	{
		count++;
	}
}


int level2()
{
	srand(time(0));
//	const int size2 = 5;
	int number2[size2];
	int userinput2[size2];
	score[1]=0;
	cout<<"Congrats for completing level 1 by scoring "<<score[0]<<" / "<<size1<<endl;
	Sleep(1500);
	system("CLS");
	cout<<"Welcome to level 2 : "<<endl;
	puts(name);
	Sleep(1500);
	cout<<"Game About to begin : "<<endl;
	Sleep(1500);
	system("CLS");
	for(int n=10; n>0; n--)
	{
		cout<<n;
		Sleep(300);
		system("CLS");
	}
	cout<<"LET'S GO ! "<<endl;
	Sleep(1000);
	system("CLS");
	for(int n=0; n<size2; n++)
	{
		number2[n] = rand() % 10 + 1;
	}
	cout<<"Remember The Sequence U have 5 seconds !"<<endl;
	for(int n=0; n<size2; n++)
	{
		cout<<number2[n]<<"   ";
	}
	cout<<endl;
	Sleep(5000);
	system("CLS");
	cout<<"Enter the Sequence ! "<<endl;
	for(int n=0; n<size2; n++)
	{
		cin>>userinput2[n];
	}
	Sleep(2000);
	system("CLS");
	cout<<endl;
	cout<<"Original Sequence ! "<<endl;
	for(int n=0; n<size2; n++)
	{
		cout<<number2[n]<<"  ";
	}
	cout<<endl;
	cout<<"you enetered the sequence !"<<endl;
	for(int n=0; n<size2; n++)
	{
		cout<<userinput2[n]<<"  ";
	}
	for(int n=0; n<size2; n++)
	{
		if(userinput2[n]==number2[n])
		{
			score[1]++;
		}
	}
	cout<<endl;
	cout<<"Your score is : "<<score[1]<<endl;
	Sleep(8000);
	system("CLS");
	if(score[1]>=3)
	{
		count++;
	}
}

int level3()
{
	srand(time(0));
//	const int size3 = 3;
	int number3[size3];
	int userinput3[size3];
	score[2]=0;
	cout<<"Great achievement you have completed level 2 by scoring "<<score[1]<<" / "<<size2<<endl;
	Sleep(1500);
	system("CLS");
	cout<<"Welcome to level 3 : "<<endl;
	puts(name);
	Sleep(1500);
	cout<<"Game About to begin : "<<endl;
	Sleep(1500);
	system("CLS");
	for(int n=10; n>0; n--)
	{
		cout<<n;
		Sleep(300);
		system("CLS");
	}
	cout<<"LET'S GO ! "<<endl;
	Sleep(1000);
	system("CLS");
	for(int n=0; n<size3; n++)
	{
		number3[n] = rand() % 100 + 1;
	}
	cout<<"Remember The Sequence U have 5 seconds !"<<endl;
	for(int n=0; n<size3; n++)
	{
		cout<<number3[n]<<"   ";
	}
	cout<<endl;
	Sleep(5000);
	system("CLS");
	cout<<"Enter the Sequence ! "<<endl;
	for(int n=0; n<size3; n++)
	{
		cin>>userinput3[n];
	}
	Sleep(2000);
	system("CLS");
	cout<<endl;
	cout<<"Original Sequence ! "<<endl;
	for(int n=0; n<size3; n++)
	{
		cout<<number3[n]<<"  ";
	}
	cout<<endl;
	cout<<"you enetered the sequence !"<<endl;
	for(int n=0; n<size3; n++)
	{
		cout<<userinput3[n]<<"  ";
	}
	for(int n=0; n<size3; n++)
	{
		if(userinput3[n]==number3[n])
		{
			score[2]++;
		}
	}
	cout<<endl;
	cout<<"Your score is : "<<score[2]<<endl;
	Sleep(8000);
	system("CLS");
	if(score[2]>=2)
	{
		count++;
	}
}

int level4()
{
	srand(time(0));
//	const int size4 = 7;
	int number4[size4];
	int userinput4[size4];
	score[3]=0;
	cout<<"Congrats for completing level 3 by scoring "<<score[2]<<" / "<<size3<<endl;
	Sleep(1500);
	system("CLS");
	cout<<"Welcome to level 4 : "<<endl;
	puts(name);
	Sleep(1500);
	cout<<"Game About to begin : "<<endl;
	Sleep(1500);
	system("CLS");
	for(int n=10; n>0; n--)
	{
		cout<<n;
		Sleep(300);
		system("CLS");
	}
	cout<<"LET'S GO ! "<<endl;
	Sleep(1000);
	system("CLS");
	for(int n=0; n<size4; n++)
	{
		number4[n] = rand() % 10 + 1;
	}
	cout<<"Remember The Sequence U have 5 seconds !"<<endl;
	for(int n=0; n<size4; n++)
	{
		cout<<number4[n]<<"   ";
	}
	cout<<endl;
	Sleep(5000);
	system("CLS");
	cout<<"Enter the Sequence ! "<<endl;
	for(int n=0; n<size4; n++)
	{
		cin>>userinput4[n];
	}
	Sleep(2000);
	system("CLS");
	cout<<endl;
	cout<<"Original Sequence ! "<<endl;
	for(int n=0; n<size4; n++)
	{
		cout<<number4[n]<<"  ";
	}
	cout<<endl;
	cout<<"you enetered the sequence !"<<endl;
	for(int n=0; n<size4; n++)
	{
		cout<<userinput4[n]<<"  ";
	}
	for(int n=0; n<size4; n++)
	{
		if(userinput4[n]==number4[n])
		{
			score[3]++;
		}
	}
	cout<<endl;
	cout<<"Your score is : "<<score[3]<<endl;
	Sleep(8000);
	system("CLS");
	if(score[3]>=5)
	{
		count++;
	}
}

int level5()
{
	srand(time(0));
//	const int size5 = 5;
	int number5[size5];
	int userinput5[size5];
	score[4]=0;
	cout<<"You have done great so far by scoring "<<score[3]<<" / "<<size4<<" in level 4"<<endl;
	Sleep(1500);
	system("CLS");
	cout<<"Welcome to level 5 : "<<endl;
	puts(name);
	Sleep(1500);
	cout<<"Game About to begin : "<<endl;
	Sleep(1500);
	system("CLS");
	for(int n=10; n>0; n--)
	{
		cout<<n;
		Sleep(300);
		system("CLS");
	}
	cout<<"LET'S GO ! "<<endl;
	Sleep(1000);
	system("CLS");
	for(int n=0; n<size5; n++)
	{
		number5[n] = rand() % 100 + 1;
	}
	cout<<"Remember The Sequence U have 5 seconds !"<<endl;
	for(int n=0; n<size5; n++)
	{
		cout<<number5[n]<<"   ";
	}
	cout<<endl;
	Sleep(5000);
	system("CLS");
	cout<<"Enter the Sequence ! "<<endl;
	for(int n=0; n<size5; n++)
	{
		cin>>userinput5[n];
	}
	Sleep(2000);
	system("CLS");
	cout<<endl;
	cout<<"Original Sequence ! "<<endl;
	for(int n=0; n<size5; n++)
	{
		cout<<number5[n]<<"  ";
	}
	cout<<endl;
	cout<<"you enetered the sequence !"<<endl;
	for(int n=0; n<size5; n++)
	{
		cout<<userinput5[n]<<"  ";
	}
	for(int n=0; n<size5; n++)
	{
		if(userinput5[n]==number5[n])
		{
			score[4]++;
		}
	}
	cout<<endl;
	cout<<"Your score is : "<<score[4]<<endl;
	Sleep(8000);
	system("CLS");
	if(score[4]>=3)
	{
		count++;
	}
}

int level6()
{
	srand(time(0));
//	const int size6 = 3;
	int number6[size6];
	int userinput6[size6];
	score[5]=0;
	cout<<"Excellent so far as u have completed Half stages by scoring "<<score[4]<<" / "<<size5<<" in level 5"<<endl;
	Sleep(1500);
	system("CLS");
	cout<<"Welcome to level 6 : "<<endl;
	puts(name);
	Sleep(1500);
	cout<<"Game About to begin : "<<endl;
	Sleep(1500);
	system("CLS");
	for(int n=10; n>0; n--)
	{
		cout<<n;
		Sleep(300);
		system("CLS");
	}
	cout<<"LET'S GO ! "<<endl;
	Sleep(1000);
	system("CLS");
	for(int n=0; n<size6; n++)
	{
		number6[n] = rand() % 1000 + 1;
	}
	cout<<"Remember The Sequence U have 5 seconds !"<<endl;
	for(int n=0; n<size6; n++)
	{
		cout<<number6[n]<<"   ";
	}
	cout<<endl;
	Sleep(5000);
	system("CLS");
	cout<<"Enter the Sequence ! "<<endl;
	for(int n=0; n<size6; n++)
	{
		cin>>userinput6[n];
	}
	Sleep(2000);
	system("CLS");
	cout<<endl;
	cout<<"Original Sequence ! "<<endl;
	for(int n=0; n<size6; n++)
	{
		cout<<number6[n]<<"  ";
	}
	cout<<endl;
	cout<<"you enetered the sequence !"<<endl;
	for(int n=0; n<size6; n++)
	{
		cout<<userinput6[n]<<"  ";
	}
	for(int n=0; n<size6; n++)
	{
		if(userinput6[n]==number6[n])
		{
			score[5]++;
		}
	}
	cout<<endl;
	cout<<"Your score is : "<<score[5]<<endl;
	Sleep(8000);
	system("CLS");
	if(score[5]>=2)
	{
		count++;
	}
}

int level7()
{
	srand(time(0));
//	const int size6 = 3;
	int number7[size7];
	int userinput7[size7];
	score[6]=0;
	cout<<"Excellent so far  by scoring "<<score[5]<<" / "<<size6<<" in level 6"<<endl;
	Sleep(1500);
	system("CLS");
	cout<<"Welcome to level 7 : "<<endl;
	puts(name);
	Sleep(1500);
	cout<<"Game About to begin : "<<endl;
	Sleep(1500);
	system("CLS");
	for(int n=10; n>0; n--)
	{
		cout<<n;
		Sleep(300);
		system("CLS");
	}
	cout<<"LET'S GO ! "<<endl;
	Sleep(1000);
	system("CLS");
	for(int n=0; n<size7; n++)
	{
		number7[n] = rand() % 1000 + 1;
	}
	cout<<"Remember The Sequence U have 5 seconds !"<<endl;
	for(int n=0; n<size7; n++)
	{
		cout<<number7[n]<<"   ";
	}
	cout<<endl;
	Sleep(5000);
	system("CLS");
	cout<<"Enter the Sequence ! "<<endl;
	for(int n=0; n<size7; n++)
	{
		cin>>userinput7[n];
	}
	Sleep(2000);
	system("CLS");
	cout<<endl;
	cout<<"Original Sequence ! "<<endl;
	for(int n=0; n<size7; n++)
	{
		cout<<number7[n]<<"  ";
	}
	cout<<endl;
	cout<<"you enetered the sequence !"<<endl;
	for(int n=0; n<size7; n++)
	{
		cout<<userinput7[n]<<"  ";
	}
	for(int n=0; n<size7; n++)
	{
		if(userinput7[n]==number7[n])
		{
			score[6]++;
		}
	}
	cout<<endl;
	cout<<"Your score is : "<<score[6]<<endl;
	Sleep(8000);
	system("CLS");
	if(score[6]>=3)
	{
		count++;
	}
}

int level8()
{
	srand(time(0));
//	const int size6 = 3;
	int number8[size8];
	int userinput8[size8];
	score[7]=0;
	cout<<"Excellent so far as u scored "<<score[6]<<" / "<<size7<<" in level 7"<<endl;
	Sleep(1500);
	system("CLS");
	cout<<"Welcome to level 8 : "<<endl;
	puts(name);
	Sleep(1500);
	cout<<"Game About to begin : "<<endl;
	Sleep(1500);
	system("CLS");
	for(int n=10; n>0; n--)
	{
		cout<<n;
		Sleep(300);
		system("CLS");
	}
	cout<<"LET'S GO ! "<<endl;
	Sleep(800);
	system("CLS");
	for(int n=0; n<size8; n++)
	{
		number8[n] = rand() % 1000 + 1;
	}
	cout<<"Remember The Sequence U have 5 seconds !"<<endl;
	for(int n=0; n<size8; n++)
	{
		cout<<number8[n]<<"   ";
	}
	cout<<endl;
	Sleep(5000);
	system("CLS");
	cout<<"Enter the Sequence ! "<<endl;
	for(int n=0; n<size8; n++)
	{
		cin>>userinput8[n];
	}
	Sleep(2000);
	system("CLS");
	cout<<endl;
	cout<<"Original Sequence ! "<<endl;
	for(int n=0; n<size8; n++)
	{
		cout<<number8[n]<<"  ";
	}
	cout<<endl;
	cout<<"you enetered the sequence !"<<endl;
	for(int n=0; n<size8; n++)
	{
		cout<<userinput8[n]<<"  ";
	}
	for(int n=0; n<size8; n++)
	{
		if(userinput8[n]==number8[n])
		{
			score[7]++;
		}
	}
	cout<<endl;
	cout<<"Your score is : "<<score[7]<<endl;
	Sleep(8000);
	system("CLS");
	if(score[7]>=2)
	{
		count++;
	}
}

int level9()
{
	srand(time(0));
//	const int size6 = 3;
	int number9[size9];
	int userinput9[size9];
	score[8]=0;
	cout<<"Excellent so far  by scoring "<<score[7]<<" / "<<size8<<" in level 8"<<endl;
	Sleep(1500);
	system("CLS");
	cout<<"Welcome to level 9 : "<<endl;
	puts(name);
	Sleep(1500);
	cout<<"Game About to begin : "<<endl;
	Sleep(1500);
	system("CLS");
	for(int n=10; n>0; n--)
	{
		cout<<n;
		Sleep(300);
		system("CLS");
	}
	cout<<"LET'S GO ! "<<endl;
	Sleep(1000);
	system("CLS");
	for(int n=0; n<size9; n++)
	{
		number9[n] = rand() % 1000 + 1;
	}
	cout<<"Remember The Sequence U have 5 seconds !"<<endl;
	for(int n=0; n<size9; n++)
	{
		cout<<number9[n]<<"   ";
	}
	cout<<endl;
	Sleep(5000);
	system("CLS");
	cout<<"Enter the Sequence ! "<<endl;
	for(int n=0; n<size9; n++)
	{
		cin>>userinput9[n];
	}
	Sleep(2000);
	system("CLS");
	cout<<endl;
	cout<<"Original Sequence ! "<<endl;
	for(int n=0; n<size9; n++)
	{
		cout<<number9[n]<<"  ";
	}
	cout<<endl;
	cout<<"you enetered the sequence !"<<endl;
	for(int n=0; n<size9; n++)
	{
		cout<<userinput9[n]<<"  ";
	}
	for(int n=0; n<size9; n++)
	{
		if(userinput9[n]==number9[n])
		{
			score[8]++;
		}
	}
	cout<<endl;
	cout<<"Your score is : "<<score[8]<<endl;
	Sleep(8000);
	system("CLS");
	if(score[8]>=3)
	{
		count++;
	}
}


int level10()
{
	srand(time(0));
//	const int size6 = 3;
	int number10[size10];
	int userinput10[size10];
	score[9]=0;
	cout<<"First of all very very congratulation You have made to the last and the most tough part if u complete this u have completed  the game best of luck . This is going to be the toughest among all:"<<endl<<endl;
	
	Sleep(20000);
	system("CLS");
	cout<<"Game About to begin : "<<endl;
	Sleep(1500);
	system("CLS");
	cout<<"It's time:"<<endl;
	Sleep(1500);
	system("CLS");
	for(int n=10; n>0; n--)
	{
		cout<<n;
		Sleep(300);
		system("CLS");
	}
	cout<<"LET'S GO ! "<<endl;
	Sleep(1000);
	system("CLS");
	for(int n=0; n<size10; n++)
	{
		number10[n] = rand() % 10000 + 1;
	}
	cout<<"Remember The Sequence U have 5 seconds !"<<endl;
	for(int n=0; n<size10; n++)
	{
		cout<<number10[n]<<"   ";
	}
	cout<<endl;
	Sleep(5000);
	system("CLS");
	cout<<"Enter the Sequence ! "<<endl;
	for(int n=0; n<size10; n++)
	{
		cin>>userinput10[n];
	}
	Sleep(2000);
	system("CLS");
	cout<<endl;
	cout<<"Original Sequence ! "<<endl;
	for(int n=0; n<size10; n++)
	{
		cout<<number10[n]<<"  ";
	}
	cout<<endl;
	cout<<"you enetered the sequence !"<<endl;
	for(int n=0; n<size10; n++)
	{
		cout<<userinput10[n]<<"  ";
	}
	for(int n=0; n<size10; n++)
	{
		if(userinput10[n]==number10[n])
		{
			score[9]++;
		}
	}
	cout<<endl;
	cout<<"Your score is : "<<score[8]<<endl;
	Sleep(8000);
	system("CLS");
	if(score[9]>=7)
	{
		count++;
	}
}


int wordGame()
{   
//    level 1

	int index[10];
	string RW[10];
	string UI[10];
	system("CLS");
	cout<<"Enter your name : ";
	gets(name);
	cout<<"Welcome to wordvault game "<<endl;
	puts(name);
	srand(time(0));
	index[0] = rand() % 10;
	RW[0] = words1[index[0]];
	cout<<"Remember the word : "<<RW[0]<<endl;
	Sleep(5000);
	system("CLS");
	cout<<"Enter the word : "<<endl;
	cin>>UI[0];
	Sleep(2000);
	system("CLS");
	cout<<"Original words            Users Input "<<endl;
	for(int n=0; n<1; n++)
	{
		cout<<"   "<<RW[n]<<"                       "<<UI[n]<<endl;
	}
	cout<<endl<<endl;
	if(UI[0] == RW[0])
	{
		cout<<"You have input the right word : "<<puts(name)<<endl;
		level++;
	}
	else
	{
		cout<<"OOPS! your  game is  finished "<<endl;
		cout<<"You completed "<<level<<" levels"<<endl;
		cout<<"Better luck next time : "<<puts(name)<<endl;
		exit(0);
	}
	Sleep(3000);
	system("CLS");
	
//	level 2
	
	cout<<"Welcome to level 2 "<<endl;
	puts(name);
	index[0] = rand() % 10;
	RW[0] = words1[index[0]];
	index[1] = rand() % 10;
	RW[1] = words2[index[1]];
	cout<<"Remember the words : "<<endl;
	cout<<RW[0]<<"   "<<RW[1]<<endl;
	Sleep(5000);
	system("CLS");
	cout<<"Enter the words in right sequence : "<<endl;
	cin>>UI[0]>>UI[1];
	Sleep(2000);
	system("CLS");
	cout<<"Original words            Users Input "<<endl;
	for(int n=0; n<2; n++)
	{
		cout<<"   "<<RW[n]<<"                        "<<UI[n]<<endl;
	}
	cout<<endl<<endl;
	if(UI[0] == RW[0] && UI[1] == RW[1])
	{
		cout<<"Congratulations your sequence is right : "<<puts(name)<<endl;
		level++;
	}
	else
	{
		cout<<"OOPS! game is finsihed : "<<endl;
		cout<<"You completed "<<level<<" levels "<<endl;
		cout<<"Better luck next time "<<puts(name);
		exit(0);
	}
	Sleep(5000);
	system("CLS");
	
//	level 3
	
	cout<<"Welcome to level 3 : "<<endl;
	index[0] = rand() % 10;
	index[1] = rand() % 10;
	index[2] = rand() % 10;
    RW[0] = words1[index[0]];
	RW[1] = words2[index[1]];
	RW[2] = words3[index[2]];
	cout<<"Remember the sequence : "<<endl;
	cout<<RW[0]<<"   "<<RW[1]<<"   "<<RW[2]<<"   "<<endl;
	Sleep(5000);
	system("CLS");
	cout<<"Enter the words in sequence : "<<endl;
	cin>>UI[0]>>UI[1]>>UI[2];
	Sleep(2000);
	system("CLS");
	cout<<"Original words            Users Input "<<endl;
	for(int n=0; n<3; n++)
	{
		cout<<"   "<<RW[n]<<"                     "<<UI[n]<<endl;
	}
	cout<<endl<<endl;
	if(UI[0] == RW[0] && UI[1] == RW[1] && UI[2] == RW[2])
	{
		cout<<"Congratualtions you have completed level 3 "<<puts(name)<<endl;
		level++;
	}
	else
	{
		cout<<"OOPS! Game is finished "<<endl;
		cout<<"You completed "<<level<<"  levels "<<endl;
		cout<<"Better luck next time "<<puts(name)<<endl;
		exit(0);
	}
	Sleep(7000);
	system("CLS");
	
//	level 4
	
	cout<<"Welcome to level 4 : "<<endl;
	for(int n=0; n<4; n++)
	{
		index[n] = rand() % 10;
	}
	RW[0] = words1[index[0]];
	RW[1] = words2[index[1]];
	RW[2] = words3[index[2]];
	RW[3] = words4[index[3]];
	cout<<"Remember the sequence : "<<endl;
	for(int n=0; n<4; n++)
	{
		cout<<RW[n]<<"   ";
	}
	cout<<endl;
	Sleep(5000);
	system("CLS");
	cout<<"Enter the words in correct order ! "<<endl;
	for(int n=0; n<4; n++)
	{
		cin>>UI[n];
	}
	for(int n=0; n<4; n++)
	{
		if(RW[n] == UI[n])
		{
			con = true;
		}
		else{
			con = false;
			break;
		}
	}
	Sleep(2000);
	system("CLS");
	cout<<"Original words            Users Input "<<endl;
	for(int n=0; n<4; n++)
	{
		cout<<"   "<<RW[n]<<"                       "<<UI[n]<<endl;
	}
	cout<<endl<<endl;
	if(con)
	{
		cout<<"Congratualtions for completing the level :"<<endl;
		level++;
	}
	else
	{
		cout<<"OOPS! the game is finished : "<<endl;
		cout<<"You complleted "<<level<<" levels "<<endl;
		cout<<"Better luck next time :"<<endl;
		exit(0);
	}
	Sleep(7000);
	system("CLS");

	//    level 5

    cout<<"Welcome to level 5 : "<<endl;
    for(int n=0; n<5; n++)
	{
		index[n] = rand() % 10;
	}
	RW[0] = words1[index[0]];
	RW[1] = words2[index[1]];
	RW[2] = words3[index[2]];
	RW[3] = words4[index[3]];
	RW[4] = words5[index[4]];
	cout<<"Remember the sequence : "<<endl;
	for(int n=0; n<5; n++)
	{
		cout<<RW[n]<<"   ";
	}
	cout<<endl;
	Sleep(5000);
	system("CLS");
	cout<<"Enter the words in correct order ! "<<endl;
	for(int n=0; n<5; n++)
	{
		cin>>UI[n];
	}
	for(int n=0; n<5; n++)
	{
		if(RW[n] == UI[n])
		{
			con = true;
		}
		else{
			con = false;
			break;
		}
	}
	Sleep(2000);
	system("CLS");
	cout<<"Original words            Users Input "<<endl;
	for(int n=0; n<5; n++)
	{
		cout<<"   "<<RW[n]<<"                       "<<UI[n]<<endl;
	}
	cout<<endl<<endl;
	if(con)
	{
		cout<<"Congratualtions for completing the level :"<<endl;
		level++;
	}
	else
	{
		cout<<"OOPS! the game is finished : "<<endl;
		cout<<"You completed "<<level<<" levels "<<endl;
		cout<<"Better luck next time :"<<endl;
		exit(0);
	}
	Sleep(7000);
	system("CLS");


//    level 6

    cout<<"Welcome to level 6 : "<<endl;
    for(int n=0; n<6; n++)
	{
		index[n] = rand() % 10;
	}
	RW[0] = words1[index[0]];
	RW[1] = words2[index[1]];
	RW[2] = words3[index[2]];
	RW[3] = words4[index[3]];
	RW[4] = words5[index[4]];
	RW[5] = words6[index[5]];
	cout<<"Remember the sequence : "<<endl;
	for(int n=0; n<6; n++)
	{
		cout<<RW[n]<<"   ";
	}
	cout<<endl;
	Sleep(5000);
	system("CLS");
	cout<<"Enter the words in correct order ! "<<endl;
	for(int n=0; n<6; n++)
	{
		cin>>UI[n];
	}
	for(int n=0; n<6; n++)
	{
		if(RW[n] == UI[n])
		{
			con = true;
		}
		else{
			con = false;
			break;
		}
	}
	Sleep(2000);
	system("CLS");
	cout<<"Original words            Users Input "<<endl;
	for(int n=0; n<6; n++)
	{
		cout<<"   "<<RW[n]<<"                       "<<UI[n]<<endl;
	}
	cout<<endl<<endl;
	if(con)
	{
		cout<<"Congratualtions for completing the level :"<<endl;
		level++;
	}
	else
	{
		cout<<"OOPS! the game is finished : "<<endl;
		cout<<"You completed "<<level<<" levels "<<endl;
		cout<<"Better luck next time :"<<endl;
		exit(0);
	}
	Sleep(7000);
	system("CLS");

//    level 7

    cout<<"Welcome to level 7 : "<<endl;
    for(int n=0; n<7; n++)
	{
		index[n] = rand() % 10;
	}
	RW[0] = words1[index[0]];
	RW[1] = words2[index[1]];
	RW[2] = words3[index[2]];
	RW[3] = words4[index[3]];
	RW[4] = words5[index[4]];
	RW[5] = words6[index[5]];
	RW[6] = words7[index[6]];
	cout<<"Remember the sequence : "<<endl;
	for(int n=0; n<7; n++)
	{
		cout<<RW[n]<<"   ";
	}
	cout<<endl;
	Sleep(5000);
	system("CLS");
	cout<<"Enter the words in correct order ! "<<endl;
	for(int n=0; n<7; n++)
	{
		cin>>UI[n];
	}
	for(int n=0; n<7; n++)
	{
		if(RW[n] == UI[n])
		{
			con = true;
		}
		else{
			con = false;
			break;
		}
	}
	Sleep(2000);
	system("CLS");
	cout<<"Original words            Users Input "<<endl;
	for(int n=0; n<7; n++)
	{
		cout<<"   "<<RW[n]<<"                       "<<UI[n]<<endl;
	}
	cout<<endl<<endl;
	if(con)
	{
		cout<<"Congratualtions for completing the level :"<<endl;
		level++;
	}
	else
	{
		cout<<"OOPS! the game is finished : "<<endl;
		cout<<"You completed "<<level<<" levels "<<endl;
		cout<<"Better luck next time :"<<endl;
		exit(0);
	}
	Sleep(7000);
	system("CLS");

//    level 8

    cout<<"Welcome to level 8 : "<<endl;
    for(int n=0; n<8; n++)
	{
		index[n] = rand() % 10;
	}
	RW[0] = words1[index[0]];
	RW[1] = words2[index[1]];
	RW[2] = words3[index[2]];
	RW[3] = words4[index[3]];
	RW[4] = words5[index[4]];
	RW[5] = words6[index[5]];
	RW[6] = words7[index[6]];
	RW[7] = words8[index[7]];
	cout<<"Remember the sequence : "<<endl;
	for(int n=0; n<8; n++)
	{
		cout<<RW[n]<<"   ";
	}
	cout<<endl;
	Sleep(5000);
	system("CLS");
	cout<<"Enter the words in correct order ! "<<endl;
	for(int n=0; n<8; n++)
	{
		cin>>UI[n];
	}
	for(int n=0; n<8; n++)
	{
		if(RW[n] == UI[n])
		{
			con = true;
		}
		else{
			con = false;
			break;
		}
	}
	Sleep(2000);
	system("CLS");
	cout<<"Original words            Users Input "<<endl;
	for(int n=0; n<8; n++)
	{
		cout<<"   "<<RW[n]<<"                       "<<UI[n]<<endl;
	}
	cout<<endl<<endl;
	if(con)
	{
		cout<<"Congratualtions for completing the level :"<<endl;
		level++;
	}
	else
	{
		cout<<"OOPS! the game is finished : "<<endl;
		cout<<"You completed "<<level<<" levels "<<endl;
		cout<<"Better luck next time :"<<endl;
		exit(0);
	}
	Sleep(7000);
	system("CLS");

//    level 9

    cout<<"Welcome to level 9 : "<<endl;
    for(int n=0; n<9; n++)
	{
		index[n] = rand() % 10;
	}
	RW[0] = words1[index[0]];
	RW[1] = words2[index[1]];
	RW[2] = words3[index[2]];
	RW[3] = words4[index[3]];
	RW[4] = words5[index[4]];
	RW[5] = words6[index[5]];
	RW[6] = words7[index[6]];
	RW[7] = words8[index[7]];
	RW[8] = words9[index[8]];
	cout<<"Remember the sequence : "<<endl;
	for(int n=0; n<9; n++)
	{
		cout<<RW[n]<<"   ";
	}
	cout<<endl;
	Sleep(5000);
	system("CLS");
	cout<<"Enter the words in correct order ! "<<endl;
	for(int n=0; n<9; n++)
	{
		cin>>UI[n];
	}
	for(int n=0; n<9; n++)
	{
		if(RW[n] == UI[n])
		{
			con = true;
		}
		else{
			con = false;
			break;
		}
	}
	Sleep(2000);
	system("CLS");
	cout<<"Original words            Users Input "<<endl;
	for(int n=0; n<9; n++)
	{
		cout<<"   "<<RW[n]<<"                       "<<UI[n]<<endl;
	}
	cout<<endl<<endl;
	if(con)
	{
		cout<<"Congratualtions for completing the level :"<<endl;
		level++;
	}
	else
	{
		cout<<"OOPS! the game is finished : "<<endl;
		cout<<"You completed "<<level<<" levels "<<endl;
		cout<<"Better luck next time :"<<endl;
		exit(0);
	}
	Sleep(7000);
	system("CLS");

//    level 9

    cout<<"Welcome to level 9 : "<<endl;
    for(int n=0; n<9; n++)
	{
		index[n] = rand() % 10;
	}
	RW[0] = words1[index[0]];
	RW[1] = words2[index[1]];
	RW[2] = words3[index[2]];
	RW[3] = words4[index[3]];
	RW[4] = words5[index[4]];
	RW[5] = words6[index[5]];
	RW[6] = words7[index[6]];
	RW[7] = words8[index[7]];
	RW[8] = words9[index[8]];
	RW[9] = words10[index[9]];
	cout<<"Remember the sequence : "<<endl;
	for(int n=0; n<10; n++)
	{
		cout<<RW[n]<<"   ";
	}
	cout<<endl;
	Sleep(5000);
	system("CLS");
	cout<<"Enter the words in correct order ! "<<endl;
	for(int n=0; n<10; n++)
	{
		cin>>UI[n];
	}
	for(int n=0; n<10; n++)
	{
		if(RW[n] == UI[n])
		{
			con = true;
		}
		else{
			con = false;
			break;
		}
	}
	Sleep(2000);
	system("CLS");
	cout<<"Original words            Users Input "<<endl;
	for(int n=0; n<10; n++)
	{
		cout<<"   "<<RW[n]<<"                       "<<UI[n]<<endl;
	}
	cout<<endl<<endl;
	if(con)
	{
		cout<<"Congratualtions for completing the level :"<<endl;
		level++;
	}
	else
	{
		cout<<"OOPS! the game is finished : "<<endl;
		cout<<"You completed "<<level<<" levels "<<endl;
		cout<<"Better luck next time :"<<endl;
		exit(0);
	}
	Sleep(7000);
	system("CLS");
}


