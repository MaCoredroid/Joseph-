#include <iostream>

using namespace std;
class Joseph
{
private:
    int length;
    int step;
    struct num
    {
        int n;
        bool live=1;
    };
public:
    Joseph(int a=0,int b=0)
    {
        length=a;
        step=b;
    }
    void simulate()
    {
        int count=0;
        num *p=new num[length+1];
        for(int i=1; i<=length; i++)
        {
            ( *(p+i)).n=i;
        }
        for(int i=1,j=0;;i++)
        {
            if((*(p+i)).live)
            {
               if(j==step)
               {
                  (*(p+i)).live=0;
                  j=0;
                  count++;
                  cout<<((*(p+i)).n);
                  if(count==length)
                    break;
                  else
                    cout<<' ';


               }
               j++;
            }
            if(i==length)
                i=0;
        }
    }


};
int main()
{
    int a,b;
    cin>>a>>b;
    Joseph obj(a,b) ;
    obj.simulate();
}
