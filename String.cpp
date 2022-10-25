#include<conio.h>
#include<iostream>
#include<String.h>
#include<stdio.h>

using namespace std;
//-------defining global variables and initializing them------------- 
string str1,str2;
char str3[256];
bool a= true;

void String1();

int main()
{
    char redo;
    
    //--------Printing my name on screen----------------    
    cout<<        "Welcome to the  program 2.3 written by Your Name"<<endl;
    cout<<"**************************************************************************"<<endl;
    cout<<endl<<endl<<endl;
     
    
    cout<<"\nEnter the First string: ";
    cin>>str1;
    cout<<"\nEnter the Second string:";
    cin>>str2;
    
    while(a)
    {
    String1();
    }
    
    cout<<"New  String after deleting first string from second : "<<endl<<str2;
     cout<<endl<<endl;
     cout<<"enter y or Y to continue:";
           cin>>redo;
           cout<<endl<<endl;
          
    
    getch();
}
void String1()
{
     //-------defining local variables and initializing them------------- 
     int len1,len2;
     int len3,k=0,b=0, match=0,i,j,count=0;
     len1=str1.length();
     len2=str2.length();
     
     for(i=0;i<len2;i++)
     {
         b=i;   
          for(j=0;j<len1;j++)
          {
             if(str2[b]==str1[j])
             {
              match=  match+1;
              b=b+1;
             }
             else
              break;      
          }
   
          if(match!=len1)
          {
            match=0;             
  
            str3[count]=str2[i];
            count++;
   
          }
          else
          {
             match=0; 
             a=true;
             i=i+len1-1;
          }            
     }
  
     str2=str3;
     if(str2.length()==len2)
     {
         a=false;                   
     }
     str3[0]='\0';
     
     for(int i=0;i<len2;i++)
             str3[i]='\0';
  
}
