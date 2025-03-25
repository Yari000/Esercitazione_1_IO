#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{   
    double val=3.4e00;
    ofstream fout("result.txt");
    ifstream fin("data.txt"); 
    if(fin.fail())
{ 
   cout<<"errore"<<endl;
   return 1;
}
   double s=0.0e00;
   int i=0;
   double mean=2.0;
   fout<<"#N mean"<<endl;
   while(fin>>val)
   {  
      double val2= 0.75*val - 1.75;
      i++;
      s= s+ val2; 
      mean= s/i;
      fout<<setprecision(18)<<scientific<<mean<<endl;
   }
   fin.close();
   fout.close();
     
    return 0;
}
