#include<iostream>
#include<string>
#include<time.h>
using namespace std;

class Character
{
    protected:
    string Name;
    char Gender;
    int amount;
    string relation;
    
    public:
    void get_vars()
    {
        cout<<"\nEnter a Name: "; cin>>Name;
        cout<<"\nEnter M for male and F for female: "; cin>>Gender;
        cout<<"\nEnter a amount: "; cin>>amount;
        cout<<"\nEnter a relation to your character: "; cin>>relation;
    }
    
};

class Story: public Character
{
    string pronoun1 = "it", pronoun2 = "it's";

    public:
    void set_pronouns()
    {
        switch(Gender)
        {
            case 'M':
            {
                pronoun1 = "he";
                pronoun2 = "his";
                break;
            }

            case 'F':
            {
                pronoun1 = "she";
                pronoun2 = "her";
                break;
            }
        }
    }
    void print_story()
    {
        
        srand(time(0));
        int p = (rand()%3 + 1);

        switch(p)
        {
            case 1:
            {
                cout<<"\nWhile "
                    <<Name<<" was a common boy living in city. "
                    <<pronoun1<<" had a dream to serve "
                    <<pronoun1<<" country. "
                    <<pronoun1<<" fulfilled "
                    <<pronoun2<<" desire by saving The President of "
                    <<pronoun2<<" nation from a close assasination by"
                    <<pronoun2<<" own "
                    <<relation<<"!!!. After that "
                    <<pronoun1<<" was awarded with a medal and a huge prize of "
                    <<amount<<" dollars.\n";
                    break;
            }

            case 2:
            {
                cout<<"\n"
                    <<Name<<" was a farmer in the countryside. One day "
                    <<pronoun1<<" found a big pot of gold coins in "
                    <<pronoun2<<"feild. When"
                    <<pronoun1<<" analayzed the value of the coins, it turned out to be around " 
                    <<amount<<" dollars. He split it with " 
                    <<pronoun2<<" "<<relation<<".\n";
                    break;
            }

            case 3:
            {
                cout<<"\n"
                    <<Name<<" was hungry one day. "
                    <<pronoun1<<" had "
                    <<amount<<" dollars so " 
                    <<pronoun1<<" decided to order himself a sandwich from subway. But "
                    <<pronoun2<<" "<<relation<<" denied it saying "
                    <<pronoun1<<" should eat homemade food.";
                    break;
            }
        }
    }
};

int main()
{
    Story s1; 
    s1.get_vars();
    s1.set_pronouns(); 
    s1.print_story();
    return 0;
}