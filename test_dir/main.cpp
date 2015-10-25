#include <iostream>
#include <cmath>

using namespace std;

/*-------------------------------------------------------------------
bool simple(int a){
    int k = 0;
    for(int  i = 2; i < sqrt(a) + 1; ++i)
        if(a % i == 0)
            ++k;
    if(k == 0)
        return true;
    else
        return false;
}

int main()
{
    int n, a, ans = 0;
    cin >> n;

    for(int i = 0; i < n; ++i){
        cin >> a;
        if(a == 1 || a == 2)
            ++ans;
        else
            if(simple(a))
                ++ans;
    }

    cout << ans;

    //system("PAUSE");
	return 0;

}
-------------------------------------------------------------------*/
/*-------------------------------------------------------------------
int main()
{
    int a[10000], i = 0, ans = 0;
    string s;
    cout << "Do you want to enter some numbers?\n";
    cin >> s;
    if(s == "yes" || s == "Yes" || s == "YES")
        while(true){
            cout << "Enter the number: ";
            cin >> a[i];
            ++i;
            cout << "Do you want to enter another number?\n";
            cin >> s;
            if(s == "no" || s == "No" || s == "NO")
                break;
        }
    cout << i << '\n';
    for(int j = 1; j < i; ++j){
        if(a[j] > a[j - 1]){
            ++ans;
        cout << ans << '\n';}
        else{
            if(ans != 0)
                cout << "The number of numbers of the increasing sequence: " << ++ans << '\n';
            ans = 0;
        }
    }
    cout << ++ans;

    //system("PAUSE");
    return 0;
}
-------------------------------------------------------------------*/

int solve(int a){
    int ans = 0;
    while(a > 10){
        ans += a % 10;
        a /= 10;
    }
    ans += a;
    if(ans % 2 == 0)
        return 1;
    else
        return 0;
}

int main()
{
    int a = 1, ans = 0;
    while(a != 0){
        cin >> a;
        ans += solve(a);
    }

    cout << ans;

    //system("PAUSE");
    return 0;
}
