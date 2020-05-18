#include <iostream>
#include <windows.h>
#include <time.h>

using namespace std;

char tabuser1[100];
char tabuser2[100];
char tabsi1[101];
char tabsi2[100];

int main()
{
    srand(time(NULL));
    for(int i=0; i<100; i++)
    {
        tabuser1[i]='W';
    }
    for(int i=0; i<100; i++)
    {
        tabuser2[i]='W';
    }
    for(int i=1; i<101; i++)
    {
        tabsi1[i]='W';
    }
    for(int i=0; i<100; i++)
    {
        tabsi2[i]='W';
    }
    /*int s1=1000, bufor=1000, bufor2=1000,bufor3=1000, s2=1000, s3=1000,s4=1000, x=4, xx=3, xxx=2,xxxx=1;
    for(int o=0; o<11; o++)
    {
        tabuser1[s1-1]='S';
        tabuser1[s2-1]='S';
        tabuser1[s3-1]='S';
        tabuser1[s4-1]='S';
        tabuser1[bufor-1]='S';
        tabuser1[bufor2-1]='S';
        tabuser1[bufor3-1]='S';
        cout<<"Pola sa ponumerowane od 1 do 100 (lewy gorny rog to 1, prawy dolny to 100)"<<endl;
        cout<<"LEGENDA:"<<endl;
        cout<<"W - woda   S - statek   T - trafiony   Z - zatopiony"<<endl<<endl;
        int k=0;
        int d=10;
        for(int i=0; i<10; i++)
        {
            for(int j=0; j<10; j++)
            {
                cout<<tabuser1[k]<<"  ";
                k++;
            }
            cout<<d<<endl;
            d+=10;
        }
        if(x>0)
        {
            cout<<endl<<"Podaj numer pola w ktorym chcesz umiescic 1-masztowiec: ";
            cin>>s1;
            x--;
        }
        else if(xx>0)
        {
            cout<<endl<<"Podaj numer pola w ktorym chcesz umiescic lewy gorny rog 2-masztowca: ";
            cin>>s2;
            cout<<"Wybierz polozenie statku: poziomo (1) pionowo (2): ";
            int polozenie;
            cin>>polozenie;
            if(polozenie==1)
            {
                bufor=s2+1;
            }
            else if(polozenie==2)
            {
                bufor=s2+10;
            }
            xx--;
        }
        else if(xxx>0)
        {
            cout<<endl<<"Podaj numer pola w ktorym chcesz umiescic lewy gorny rog 3-masztowca: ";
            cin>>s3;
            cout<<"Wybierz polozenie statku: poziomo (1) pionowo (2): ";
            int polozenie;
            cin>>polozenie;
            if(polozenie==1)
            {
                bufor=s3+1;
                bufor2=s3+2;
            }
            else if(polozenie==2)
            {
                bufor=s3+10;
                bufor2=s3+20;
            }
            xxx--;
        }
        else if(xxxx>0)
        {
            cout<<endl<<"Podaj numer pola w ktorym chcesz umiescic lewy gorny rog 4-masztowca: ";
            cin>>s4;
            cout<<"Wybierz polozenie statku: poziomo (1) pionowo (2): ";
            int polozenie;
            cin>>polozenie;
            if(polozenie==1)
            {
                bufor=s4+1;
                bufor2=s4+2;
                bufor3=s4+3;
            }
            else if(polozenie==2)
            {
                bufor=s4+10;
                bufor2=s4+20;
                bufor3=s4+30;
            }
            xxxx--;
        }
        d=10;
        system("cls");
    }*/
    cout<<"Pola sa ponumerowane od 1 do 100 (lewy gorny rog to 1, prawy dolny to 100)"<<endl;
    cout<<"LEGENDA:"<<endl;
    cout<<"W - woda   S - statek   x - pole zajete   T - trafiony   Z - zatopiony"<<endl<<endl;
    int k=0;
    int d=10;
    cout<<"Twoja plansza: "<<endl<<endl;
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            cout<<tabuser1[k]<<"  ";
            k++;
        }
        cout<<d<<endl;
        d+=10;
    }
    cout<<endl<<"Plansza przeciwnika: "<<endl<<endl;
    k=0; d=10;
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            cout<<tabuser2[k]<<"  ";
            k++;
        }
        cout<<d<<endl;
        d+=10;
    }

    cout<<endl<<"Plansza si"<<endl;

    //losowanie pojedynczych statkow
    for(int i=0; i<4; i++)
    {
        start: int liczba = rand()%100+1;
        cout<<liczba<<endl;
        if(tabsi1[liczba]=='W')
        {
            if(liczba==1&&tabsi1[2]=='W'&&tabsi1[11]=='W'&&tabsi1[12]=='W')
            {
                tabsi1[liczba]='S';
                tabsi1[2]='x';
                tabsi1[11]='x';
                tabsi1[12]='x';
            }

            else if(liczba==10&&tabsi1[9]=='W'&&tabsi1[19]=='W'&&tabsi1[20]=='W')
            {
                tabsi1[liczba]='S';
                tabsi1[9]='x';
                tabsi1[19]='x';
                tabsi1[20]='x';
            }

            else if(liczba==91&&tabsi1[81]=='W'&&tabsi1[82]=='W'&&tabsi1[92]=='W')
            {
                tabsi1[liczba]='S';
                tabsi1[81]='x';
                tabsi1[82]='x';
                tabsi1[92]='x';
            }

            else if(liczba==100&&tabsi1[89]=='W'&&tabsi1[90]=='W'&&tabsi1[99]=='W')
            {
                tabsi1[liczba]='S';
                tabsi1[89]='x';
                tabsi1[90]='x';
                tabsi1[99]='x';
            }

            else if(liczba>=2&&liczba<=9&&tabsi1[liczba-1]=='W'&&tabsi1[liczba+1]=='W'&&tabsi1[liczba+9]=='W'&&tabsi1[liczba+10]=='W'&&tabsi1[liczba+11]=='W')
            {
                tabsi1[liczba]='S';
                tabsi1[liczba-1]='x';
                tabsi1[liczba+1]='x';
                tabsi1[liczba+9]='x';
                tabsi1[liczba+10]='x';
                tabsi1[liczba+11]='x';
            }

            else if(liczba>=92&&liczba<=99&&tabsi1[liczba-1]=='W'&&tabsi1[liczba+1]=='W'&&tabsi1[liczba-9]=='W'&&tabsi1[liczba-10]=='W'&&tabsi1[liczba-11]=='W')
            {
                tabsi1[liczba]='S';
                tabsi1[liczba-1]='x';
                tabsi1[liczba+1]='x';
                tabsi1[liczba-9]='x';
                tabsi1[liczba-10]='x';
                tabsi1[liczba-11]='x';
            }

            else if(liczba%10==1&&liczba!=1&&liczba!=91&&tabsi1[liczba-10]=='W'&&tabsi1[liczba+10]=='W'&&tabsi1[liczba+1]=='W'&&tabsi1[liczba-9]=='W'&&tabsi1[liczba+11]=='W')
            {
                tabsi1[liczba]='S';
                tabsi1[liczba-10]='x';
                tabsi1[liczba+10]='x';
                tabsi1[liczba+1]='x';
                tabsi1[liczba-9]='x';
                tabsi1[liczba+11]='x';
            }

            else if(liczba%10==0&&liczba!=10&&liczba!=100&&tabsi1[liczba-10]=='W'&&tabsi1[liczba+10]=='W'&&tabsi1[liczba-1]=='W'&&tabsi1[liczba-11]=='W'&&tabsi1[liczba+9]=='W')
            {
                tabsi1[liczba]='S';
                tabsi1[liczba-10]='x';
                tabsi1[liczba+10]='x';
                tabsi1[liczba-1]='x';
                tabsi1[liczba-11]='x';
                tabsi1[liczba+9]='x';
            }

            else if(liczba>=12&&liczba<=89&&liczba%10!=0&&tabsi1[liczba-1]=='W'&&tabsi1[liczba+1]=='W'&&tabsi1[liczba-11]=='W'&&tabsi1[liczba-10]=='W'&&tabsi1[liczba-9]=='W'&&tabsi1[liczba+9]=='W'&&tabsi1[liczba+10]=='W'&&tabsi1[liczba+11]=='W')
            {
                tabsi1[liczba]='S';
                tabsi1[liczba-1]='x';
                tabsi1[liczba+1]='x';
                tabsi1[liczba-11]='x';
                tabsi1[liczba-10]='x';
                tabsi1[liczba-9]='x';
                tabsi1[liczba+9]='x';
                tabsi1[liczba+10]='x';
                tabsi1[liczba+11]='x';
            }

            else
                goto start;
        }
        else
            goto start;
    }

    int podwojne = rand()%4+0;
    cout<<endl<<podwojne<<endl;
    podwojne=3;

    //3 statki podwojne poziome
    if(podwojne==3)
    {
        for(int i=0; i<3; i++)
        {
            start2: int liczba = rand()%100+1;
            cout<<liczba<<endl;
            //bez j
            if(liczba%10!=0)
            {
                if(tabsi1[liczba]=='W'&&tabsi1[liczba+1]=='W')
                {
                    if(liczba==1&&tabsi1[3]=='W'&&tabsi1[11]=='W'&&tabsi1[12]=='W'&&tabsi1[13]=='W')
                    {
                        tabsi1[liczba]='S';
                        tabsi1[liczba+1]='S';
                        tabsi1[3]='x';
                        tabsi1[11]='x';
                        tabsi1[12]='x';
                        tabsi1[13]='x';
                    }
                    else if(liczba==9&&tabsi1[8]=='W'&&tabsi1[18]=='W'&&tabsi1[19]=='W'&&tabsi1[20]=='W')
                    {
                        tabsi1[liczba]='S';
                        tabsi1[liczba+1]='S';
                        tabsi1[8]='x';
                        tabsi1[18]='x';
                        tabsi1[19]='x';
                        tabsi1[20]='x';
                    }
                    else if(liczba==91&&tabsi1[93]=='W'&&tabsi1[81]=='W'&&tabsi1[82]=='W'&&tabsi1[83]=='W')
                    {
                        tabsi1[liczba]='S';
                        tabsi1[liczba+1]='S';
                        tabsi1[93]='x';
                        tabsi1[81]='x';
                        tabsi1[82]='x';
                        tabsi1[83]='x';
                    }
                    else if(liczba==99&&tabsi1[98]=='W'&&tabsi1[90]=='W'&&tabsi1[89]=='W'&&tabsi1[88]=='W')
                    {
                        tabsi1[liczba]='S';
                        tabsi1[liczba+1]='S';
                        tabsi1[98]='x';
                        tabsi1[90]='x';
                        tabsi1[89]='x';
                        tabsi1[88]='x';
                    }
                    else if(liczba>=2&&liczba<=8&&tabsi1[liczba-1]=='W'&&tabsi1[liczba+2]=='W'&&tabsi1[liczba+9]=='W'&&tabsi1[liczba+10]=='W'&&tabsi1[liczba+11]=='W'&&tabsi1[liczba+12]=='W')
                    {
                        tabsi1[liczba]='S';
                        tabsi1[liczba+1]='S';
                        tabsi1[liczba-1]='x';
                        tabsi1[liczba+2]='x';
                        tabsi1[liczba+9]='x';
                        tabsi1[liczba+10]='x';
                        tabsi1[liczba+11]='x';
                        tabsi1[liczba+12]='x';
                    }
                    else if(liczba>=92&&liczba<=98&&tabsi1[liczba-1]=='W'&&tabsi1[liczba+2]=='W'&&tabsi1[liczba-11]=='W'&&tabsi1[liczba-10]=='W'&&tabsi1[liczba-9]=='W'&&tabsi1[liczba-8]=='W')
                    {
                        tabsi1[liczba]='S';
                        tabsi1[liczba+1]='S';
                        tabsi1[liczba-1]='x';
                        tabsi1[liczba+2]='x';
                        tabsi1[liczba-11]='x';
                        tabsi1[liczba-10]='x';
                        tabsi1[liczba-9]='x';
                        tabsi1[liczba-8]='x';
                    }
                    else if(liczba%10==1&&liczba!=1&&liczba!=91&&tabsi1[liczba+2]=='W'&&tabsi1[liczba-10]=='W'&&tabsi1[liczba-9]=='W'&&tabsi1[liczba-8]=='W'&&tabsi1[liczba+10]=='W'&&tabsi1[liczba+11]=='W'&&tabsi1[liczba+12]=='W')
                    {
                        tabsi1[liczba]='S';
                        tabsi1[liczba+1]='S';
                        tabsi1[liczba+2]='x';
                        tabsi1[liczba-10]='x';
                        tabsi1[liczba-9]='x';
                        tabsi1[liczba-8]='x';
                        tabsi1[liczba+10]='x';
                        tabsi1[liczba+11]='x';
                        tabsi1[liczba+12]='x';
                    }
                    else if(liczba%10==9&&liczba!=9&&liczba!=99&&tabsi1[liczba-1]=='W'&&tabsi1[liczba-11]=='W'&&tabsi1[liczba-10]=='W'&&tabsi1[liczba-9]=='W'&&tabsi1[liczba+9]=='W'&&tabsi1[liczba+10]=='W'&&tabsi1[liczba+11]=='W')
                    {
                        tabsi1[liczba]='S';
                        tabsi1[liczba+1]='S';
                        tabsi1[liczba-1]='x';
                        tabsi1[liczba-11]='x';
                        tabsi1[liczba-10]='x';
                        tabsi1[liczba-9]='x';
                        tabsi1[liczba+9]='x';
                        tabsi1[liczba+10]='x';
                        tabsi1[liczba+11]='x';
                    }
                    else if(liczba>=12&&liczba<=88&&liczba%10!=0&&liczba%10!=9&&tabsi1[liczba-1]=='W'&&tabsi1[liczba+2]=='W'&&tabsi1[liczba-11]=='W'&&tabsi1[liczba-10]=='W'&&tabsi1[liczba-9]=='W'&&tabsi1[liczba-8]=='W'&&tabsi1[liczba+9]=='W'&&tabsi1[liczba+10]=='W'&&tabsi1[liczba+11]=='W'&&tabsi1[liczba+12]=='W')
                    {
                        tabsi1[liczba]='S';
                        tabsi1[liczba+1]='S';
                        tabsi1[liczba-1]='x';
                        tabsi1[liczba+2]='x';
                        tabsi1[liczba-11]='x';
                        tabsi1[liczba-10]='x';
                        tabsi1[liczba-9]='x';
                        tabsi1[liczba-8]='x';
                        tabsi1[liczba+9]='x';
                        tabsi1[liczba+10]='x';
                        tabsi1[liczba+11]='x';
                        tabsi1[liczba+12]='x';
                    }
                }
            }
            //j
            else if(liczba%10==0)
            {
                if(tabsi1[liczba]=='W'&&tabsi1[liczba-1]=='W')
                {
                    if(liczba==10&&tabsi1[liczba-2]=='W'&&tabsi1[liczba+10]=='W'&&tabsi1[liczba+9]=='W'&&tabsi1[liczba+8]=='W')
                    {
                        tabsi1[liczba]='S';
                        tabsi1[liczba-1]='S';
                        tabsi1[liczba-2]='x';
                        tabsi1[liczba+10]='x';
                        tabsi1[liczba+9]='x';
                        tabsi1[liczba+8]='x';
                    }
                    else if(liczba==100&&tabsi1[liczba-2]=='W'&&tabsi1[liczba-10]=='W'&&tabsi1[liczba-11]=='W'&&tabsi1[liczba-12]=='W')
                    {
                        tabsi1[liczba]='S';
                        tabsi1[liczba-1]='S';
                        tabsi1[liczba-2]='x';
                        tabsi1[liczba-10]='x';
                        tabsi1[liczba-11]='x';
                        tabsi1[liczba-12]='x';
                    }
                    else
                    {
                        tabsi1[liczba]='S';
                        tabsi1[liczba-1]='S';
                        tabsi1[liczba-2]='x';
                        tabsi1[liczba-10]='x';
                        tabsi1[liczba-11]='x';
                        tabsi1[liczba-12]='x';
                        tabsi1[liczba+8]='x';
                        tabsi1[liczba+9]='x';
                        tabsi1[liczba+10]='x';
                    }
                }
            }
            else
                goto start2;
        }
    }

    k=1;
    d=10;
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            cout<<tabsi1[k]<<"  ";
            k++;
        }
        cout<<d<<endl;
        d+=10;
    }

    return 0;
}
