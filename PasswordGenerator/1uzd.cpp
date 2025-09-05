#include <bits/stdc++.h>

using namespace std;

int main()
{

    int m;
    meniu:
        system("CLS");
        cout<<"pasirinkite programos numeri"<<endl;
        cout<<"****************************"<<endl;
        cout<<"*  1   Inicialai           *"<<endl;
        cout<<"*  2   Grazos skaiciavimas *"<<endl;
        cout<<"****************************"<<endl;
        cin>>m;
        if(m==1)
        {
            system("CLS");
            cout << "********************************\n";
            cout << "* Programavo:                  *\n";
            cout << "* Vilius Chaziachmetovas       *\n";
            cout << "********************************\n";
            cout <<"   ****         ****  \n";
            cout <<"   ****         ****  \n";
            cout <<"   ****         ****                  \n";
            cout <<"   ****         ****                 \n";
            cout <<"   ****         ****                \n";
            cout <<"   ****         ****      ****          \n";
            cout <<"   ****         ****  ****    ****            \n";
            cout <<"     ****     ****   ****      ****               \n";
            cout <<"      ****  ****     ****      ****                   \n";
            cout <<"         ****        ****      \n";
            cout <<"                     ****      \n";
            cout <<"                     ****      **** \n";
            cout <<"                     ****      **** \n";
            cout <<"                      ****    ****\n";
            cout <<"                          ****  \n";
            system("pause");
            goto meniu;
        }

        if(m==2)
        {
            system("CLS");
            int x;
            int x500,x200,x100,x50,x20,x10,x5;
            cout<<"Iveskite graza"<<endl;
            cin>>x;

            x500=x/500;
            x=x%500;

            x200=x/200;
            x=x%200;

            x100=x/100;
            x=x%100;

            x50=x/50;
            x=x%50;

            x20=x/20;
            x=x%20;

            x10=x/10;
            x=x%10;

            x5=x/5;
            x=x%5;

            if(x500>0)
            {
                cout<<x500<<"* 500";
            }
            if(x200>0)
            {
                cout<<x200<<" * 200 +";
            }
            if(x100>0)
            {
                cout<<x100<<" * 100 + ";
            }
            if(x50>0)
            {
                cout<<x50<<" * 50 + ";
            }
            if(x20>0)
            {
        cout<<x20<<"*20+";
            }
            if(x10>0)
            {
                cout<<x10<<" * 10 + ";
            }
            if(x5>0)
            {
                cout<<x5<<" * 5 + ";
            }
            if(x>0)
            {
                cout<<x<<" * 1";
            }
            system ("pause");
            goto meniu;
        }

    return 0;
}



