// Program for lowercase and vowel using switch :

#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	char letter;
	cout<<"Enter any letter : ";
	letter=getche();
	cout<<"\n";
	if(letter>='a'&&letter<='z')
		{
			switch(letter)
			{
				case'a':
				case'e':
				case'i':
				case'o':
				case'u':
					cout<<"Vowel";
					break;
				default:
					cout<<"Consonant";
			}
		}
	else
		cout<<"You have entered any other character .";
	getch();
}