#include<iostream>
using namespace std;

int main()
{
int grade;

cout<<"Enter grade";
cin >> grade ;

if ((grade >79) && (grade <= 100))
{
cout << "A\n";
cout << "Excellent";
}
else if ((grade>74) &&(grade <=79))
{
cout <<"B+\n";
cout <<"Very Good";
}
else if ((grade>69) &&(grade <=74))
{
cout <<"B\n";
cout <<"Good";
}
else if ((grade>64) &&(grade <=69))
{
cout <<"C+\n";
cout <<"Above Average";
}
else if ((grade>59) &&(grade <=64))
{
cout <<"C\n";
cout <<"Average";
}
else if ((grade>54) &&(grade <=59))
{
cout <<"D+\n";
cout <<"Below Average";
}
else if ((grade>49) &&(grade <=54))
{
cout <<"D\n";
cout <<"Fair";
}
else if ((grade>39) &&(grade <=49))
{
cout <<"E\n";
cout <<"Pass";
}
else if ((grade>=0) &&(grade <=39))
{
cout <<"F\n";
cout <<"Fail";
}

return 0;
}


