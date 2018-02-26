#include<iostream>
#include<random>
#include<ctime>
#include<cstring>
struct suit{
    int val;
std::string su;
};
class card
{
private:
    suit su;
int val;
public:
   void Set(int i, int val);
   void shov();
};
void card::shov()
{

    std::cout<<su.su<<' '<<val;
}
void card::Set(int i, int val)
{
    switch(i)
    {
    case 1:
        {
        this->su.su="Hearts";
        break;
        }
    case 2:
        {
        this->su.su="Diamonds";
        break;
        }
    case 3:
        {
        this->su.su="Clubs";
        break;
        }
    case 4:
        {
        this->su.su="Spades";
        break;
        }
    }
    this->val=val;
    this->su.val=i;
}
int main()
{
card a;
//a.Set()
}
