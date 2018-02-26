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
       // ~card();
    };
class desk
    {
    private:
        card oll [52];
    public:
       desk();
       void shov();

    };
desk::desk()
    {   int k=0;
        for(auto i=1; i<5; i++)
        for(auto j=2; j<15; j++){
            this->oll[k].Set(i,j);
            k++;
        }
    }
void desk::shov()
    {
        for(auto i=0; i<52; i++){
            this->oll[i].shov();

        }

    }
void card::shov()
    {

    std::cout << su.su << ' ' << val <<std::endl;
    }
void card::Set(int i, int val)
    {
    switch(i)
    {
    case 1:
        {
        this->su.su = "Hearts";
        break;
        }
    case 2:
        {
        this->su.su = "Diamonds";
        break;
        }
    case 3:
        {
        this->su.su = "Clubs";
        break;
        }
    case 4:
        {
        this->su.su = "Spades";
        break;
        }
    }
    this->val = val;
    this->su.val = i;
}
int main()
{
desk a;
a.shov();
}
