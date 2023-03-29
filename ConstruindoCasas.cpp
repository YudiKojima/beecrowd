#include <iostream>

using namespace std;

int main()
{

    int a, b, c;
    int md, i=1;
    float mc, p, tp;

    while (true)
    {
        cin >> a;
        if (a <= 0 || a > 1000)
            break;
        cin >> b;
        if (b <= 0 || b > 1000)
            break;
        cin >> c;
        if (c <= 0 || c > 1000)
            break;

        mc = a * b;
        p = mc / c;
        tp = p * 100;
        md=0;
        i=0;
        do{
            md = i * i;
            i = i + 1;
        } while(md<=tp);
        cout<<i-2<<endl;
    }

    return 0;
}