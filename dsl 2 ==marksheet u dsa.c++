#include <iostream>
using namespace std;

class Test
{
    int dsa[30],i,j,n,sum,cnt[50],k,rn[30]; //data members
    float av;
public:
    Test()  //default constructor
    {
        i=j=n=0;
        av=sum=k=0;
    }
    void getdata(); //member functions
    void show();
    void avg();
    void Ab_stud();
    void HS_LS();
    void MS_score();
}; //end of class declaration

//Function name: getdata()
//return type: void
//Parameter :Nil
// To accept information of test.

void Test::getdata()
{
    cout<<"\nHow many student in SE Comp Div: A : ";
    cin>>n;
    cout<<"\n\t-----------------------------------------------------";
    cout<<"\n\tEnter the marks scored for first test of subject DSA: ";
    cout<<"\n\t-----------------------------------------------------";
    cout<<"\n\nStudent who remains Absent for the test please enter -1 for them:";
    cout<<"\n                     -------------------------------------         ";
    for(i=0;i<n;i++)
    {
     cout<<"\nEnter the marks of Roll no: "<<i+1<<" : ";
     cin>>dsa[i];
    }
}

void Test::MS_score()
{
    for(i=0;i<50;i++)
    {
        cnt[i]=0;
    }
    for(i=0;i<50;i++)
    {
        for(j=0;j<n;j++)
        {
            if(dsa[j]==i)
            {
                cnt[i]=cnt[i]+1;
            }
        }
    }
    /*cout<<"\n\nCount of marks..\n\n";
    for(i=0;i<50;i++)
    {
        cout<<"\t"<<cnt[i];
    }*/
    cout<<"\n\n Marks Scored by most of the student in test are: \n";
   
    k=0;
    j=0;
        int max=cnt[j];
    for(i=0;i<50;i++)
    {
     if(cnt[i]>=max)
     {
         max=cnt[i];
         k=i;
     }
    }
    cout<<"\n\nMAximum marks "<<k<<" scored by "<<max <<" Students...\n";
    for(i=0;i<n;i++)
    {
        if(dsa[i]==k)
        {
            rn[j]=i;
            j++;
        }
    }
    cout<<"\n\n Students Roll Number are as follows..\n\n";
    for(i=0;i<j;i++)
    {
        cout<<"\t"<<rn[i]+1;
    }
}

void Test::show()
{
    cout<<"\n\nFirst Test Marks of Subject DSA are as follows...\n";
    cout<<"\n*********************************\n";
    cout<<"|  Roll No\t"<<"|"<<" DSA Marks     |";
    cout<<"\n*********************************\n";
    for(i=0;i<n;i++)
    {
        cout<<"|\t"<<i+1<<"\t|\t"<<dsa[i]<<"\t|\n";
    }
    cout<<"---------------------------------\n";
}

void Test::avg()
{
    int p=0;
    cout<<"\nAverage Score of Class = > ";
    for(i=0;i<n;i++)
    {
        if(dsa[i]!=-1)
        {
            sum=sum+dsa[i];
            p++;
        }

    }
    av=sum/p;
    cout<<av;
}

void Test::Ab_stud()
{
    int cnt=0;
    cout<<"\n\nTotal Number of Student Absent for DSA Test\n";
    cout<<"\nRoll No\t Marks\n";
    for(i=0;i<n;i++)
    {
        if(dsa[i]==-1)
        {
            cout<<i+1<<"\tAbsent\n";
            cnt++;
        }
    }
    cout<<"\n\tTotal_Absent_Student :=: "<<cnt;
}

void Test::HS_LS()
{
    int min=0;
    int max=0,rno=0,i=0;
    cout<<"\n\nHighest Score of the Class for DSA Subject are as follows..\n";
    max=dsa[i];
    for(i=0;i<n;i++)
    {
        if(dsa[i]==-1)
        {

        }
        else if(dsa[i]>=max)
        {
            max=dsa[i];
            rno=i;
        }
    }
    cout<<"\n\tDSA Highest Score: "<<"Roll No : "<<rno+1<<" Marks : "<<max;
    cout<<"\n\nLowest Score of the Class for DSA Subject are as follows..\n";
    rno=0;
    min=dsa[j];
    for(j=0;j<n;j++)
    {
        if(dsa[j]==-1)
        {

        }
        else if(dsa[j]<=min)
        {
         min=dsa[j];
         rno=j;
        }
    }
    cout<<"\n\tDSA Lowest Score: "<<"Roll No : "<<rno+1<<" Marks : "<<min;
}

int main()
{
    Test T;
    T.getdata();
    T.show();
    T.avg();
    T.Ab_stud();
    T.HS_LS();
    T.MS_score();
    cout << "\n\n\n!!!Good Bye!!!" << endl; // prints !!!Hello World!!!
    return 0;
