#include<iostream>
using namespace std;
int main()
{
    char str[100];
    cin.getline(str, 100);
    for (int i=0; str[i] != '\0'; i++)
     {
      for (int j=i+1; str[j] != '\0'; j++)
      {
        if (str[i]==' ')
        {

        }
        else if(str[i]==str[j])
        {
          for(int k=j;str[k] != '\0'; k++)
            {
            str[k]=str[k+1];
            }
        }
  
      }
     }
  cout << str << endl;
return 0;
}
// remove repeating characters