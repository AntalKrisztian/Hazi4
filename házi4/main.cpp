#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
int main()
{
    int n, v[10000];
    int i,j,aux,b,a,sum,szorzat,lkkt;
    top:
    srand (time (NULL));
    cout << "a tomb elemeinek a szama=";
    cin >> n;

    if(n>5){
        for (i = 0; i < n; i++)
    {
        v[i] = ( rand() % 10000) ;


    }
    //tomb kiirasa
    for (i = 0; i < n; i++)
    {
        cout << v[i] << " \t";

    }
    cout << endl;
    cout << endl;
    //rendezes
    for (i=0; i<n-1; i++)
    {
        for (j=i+1; j<n; j++)
        {

            //ha a tomb elso feleben valamelyik elem nagyobb, mint a tomb masodik feleben, csereld ki oket

            if ( v[i]> v[j])
            {
                aux= v[j];
                v[j]= v[i];
                v[i]=aux;

            }

        }

    }
    // v[2] - harmadik legkisebb ; v[n-2] - második legnagyobb

        a=v[2];
        b=v[n-2];
    // lnko szamitas
        while (a!=b){
        if (a>b){
            a=a-b;
        }
        else if (a<b) {
            b=b-a;
        }
        }

        sum=v[2]+v[n-2];
        szorzat=v[2]*v[n-2];
        lkkt=szorzat/a;

    cout << "LNKO= " << a << endl << endl;
    cout << "LKKT= " << lkkt << endl << endl;
    cout << "A ket tomb elem szorzata= " << szorzat << endl << endl;
    cout << "A ket tomb elem osszege= " << sum << endl << endl;
    cout << "grat";
    }
    else if (n<=5){

        cout << "n nagyobb kell legyen mint 5!"<< endl;
        goto top;
    }

return 0;

}
