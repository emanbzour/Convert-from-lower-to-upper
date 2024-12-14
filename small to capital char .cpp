#include<iostream.h>
void smallchartocapital();
main()
{
	smallchartocapital();
}
void smallchartocapital()
{
	char word ;
	cout<<"Please,enter your small character:\n";
	cin>>word;

		if(int(word)>=97&&int(word)<=112)
		{
			cout<<char(word)<<"---->"<<(char)int(word -32)<<endl;;
     	    
			
		}
        else
        cout<<"You have entered an invalid value."<<endl;

}