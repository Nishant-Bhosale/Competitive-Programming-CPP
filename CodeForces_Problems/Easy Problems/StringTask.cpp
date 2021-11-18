#include<bits/stdc++.h>
main()
{ char s;
while(std::cin>>s)
{
  if(!std::strchr("AEIOUYaeiouy",s))
  std::cout<<s;
  std::cout<<"."<<(char)tolower(s);
}}