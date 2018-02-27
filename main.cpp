#include<iostream>
#include<random>
#include<ctime>
#include<cstring>
struct suit{
    int val;
std::string su;
};
struct im
{
 int namder;
 std::string lit;
};
class card
    {
    private:
        suit su;
    im val;
    public:
        void Set(int i, int val);
        void shov();
       card& operator =(card& m);
    };
class desk
    {
    private:
        card oll [52];
    public:
       desk();
       void shov();
       void mix();

    };

card& card::operator =(card& m){

    this->su=m.su;
    this->val=m.val;
    return *this;
}
void desk::mix()
    {
        card a;
        int x,y;
        std::mt19937 genr(time(0));
        std::uniform_real_distribution<> disr(0,51);
        for(auto i=0; i<5000;i++)
        {
            x=disr(genr);
            y=disr(genr);
            if (x!=y)
            {
                a=this->oll[x];
                this->oll[x]=this->oll[y];
                this->oll[y]=a;
            }
        }

    }
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

    std::cout << su.su << ' ' << val.lit
     <<std::endl;
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
    this->val.namder = val;
    switch(this->val.namder){
    case 2:
    this->val.lit='2';
    break;
    case 3:
    this->val.lit='3';
    break;
    case 4:
    this->val.lit='4';
    break;
    case 5:
    this->val.lit='5';
    break;
    case 6:
    this->val.lit='6';
    break;
    case 7:
    this->val.lit='7';
    break;
    case 8:
    this->val.lit='8';
    break;
    case 9:
    this->val.lit='9';
    break;
    case 10:
    this->val.lit="10";
    break;
    case 11:
    this->val.lit='J';
    break;
    case 12:
    this->val.lit='Q';
    break;
    case 13:
    this->val.lit='K';
    break;
    case 14:
    this->val.lit='A';
    break;
    }
    this->su.val = i;
}
int main()
{
desk a;
a.mix();
a.shov();
}
