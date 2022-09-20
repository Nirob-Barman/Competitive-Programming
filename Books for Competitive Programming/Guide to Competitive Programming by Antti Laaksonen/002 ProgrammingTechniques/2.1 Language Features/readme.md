2.1 Language Features
---
A typical C++ code template for competitive programming looks like this:


```
#include <bits/stdc++.h>

using namespace std;

int main() {

// solution comes here

}
```




2.1.1 Input and Output
---
In most contests, standard streams are used for reading input and writing output. In C++, the standard streams are cin for input and cout for output. Also C functions, such as scanf and printf, can be used.


The input for the program usually consists of numbers and strings separated with spaces and newlines. They can be read from the cin stream as follows:

```
int a, b;
string x;
cin >> a >> b >> x;
```

This kind of code always works, assuming that there is at least one space or newline between each element in the input. For example, the above code can read both the following inputs:

```
123 456 monkey
```


```
123 456
monkey
```


The cout stream is used for output as follows:
```
int a = 123, b = 456;
string x = "monkey";
cout << a << " " << b << " " << x << "\n";
```


Input and output is sometimes a bottleneck in the program. The following lines at the beginning of the code make input and output more efficient:
```
ios::sync_with_stdio(0);
cin.tie(0);
```



Note that the newline "\n"works faster than endl, because endl always causes a flush operation.

The C functions scanf and printf are an alternative to the C++ standard streams. They are usually slightly faster, but also more difficult to use. The following code reads two integers from the input:
```
int a, b;
scanf("%d %d", &a, &b);
```



The following code prints two integers:
```
int a = 123, b = 456;
printf("%d %d\n", a, b);
```


Sometimes the program should read a whole input line, possibly containing spaces.
This can be accomplished by using the getline function:
```
string s;
getline(cin, s);
```


If the amount of data is unknown, the following loop is useful:
```
while (cin >> x) {
// code
}
```
This loop reads elements from the input one after another, until there is no more data available in the input.

In some contest systems, files are used for input and output. An easy solution for this is to write the code as usual using standard streams, but add the following lines to the beginning of the code:
```
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
```
After this, the program reads the input from the file “input.txt” and writes the
output to the file “output.txt”.











2.1.2 Working with Numbers
---


The following code defines a long long variable:
```
long long x = 123456789123456789LL;
```
The suffix LL means that the type of the number is long long.

A common mistake when using the type long long is that the type int is still used somewhere in the code. For example, the following code contains a subtle error:
```
int a = 123456789;
long long b = a*a;
cout << b << "\n"; // -1757895751
```
**Modular Arithmetic**

We denote by x mod m the remainder when x is divided by m. For example, 17 mod 5 = 2, because 17 = 3 · 5 + 2. An important property of remainders is that the following formulas hold:


<p align="center"

(a + b) mod m = (a mod m + b mod m) mod m
   
<p align="center"

(a − b) mod m = (a mod m − b mod m) mod m

<p align="center"
   
(a · b) mod m = (a mod m · b mod m) mod m

</p>

Thus, we can take the remainder after every operation, and the numbers will never become too large.


For example, the following code calculates n!, the factorial of n, modulo m:
```
long long x = 1;
for (int i = 1; i <= n; i++) {
x = (x*i)%m;
}
cout << x << "\n";
```





**Floating Point Numbers**
The most useful floating point types in C++ are the 64-bit double and, as an extension in the g++ compiler, the 80-bit long double. In most cases, double is enough, but long double is more accurate.

 For example, the following code prints the value of x with 9 decimal places:
```
printf("%.9f\n", x);
```


A difficulty when using floating point numbers is that some numbers cannot be represented accurately as floating point numbers, and there will be rounding errors. For example, in the following code, the value of x is slightly smaller than 1, while the correct value would be 1.
```
double x = 0.3*3+0.1; 
printf("%.20f\n", x); // 0.99999999999999988898
```
It is risky to compare floating point numbers with the == operator, because it is possible that the values should be equal but they are not because of precision errors. A better way to compare floating point numbers is to assume that two numbers are equal if the difference between them is less than ε, where ε is a small number. For example, in the following code ε = 10<sup>−9</sup>:


```
if (abs(a-b) < 1e-9) {
// a and b are equal
}
```
Note that while floating point numbers are inaccurate, integers up to a certain limit can still be represented accurately. For example, using double, it is possible
to accurately represent all integers whose absolute value is at most 2<sup>53</sup>.










2.1.3 Shortening Code
---
Type Names The command typedef can be used to give a short name to a data type. For example, the name long long is long, so we can define a short name
ll as follows:
```
typedef long long ll;
```
After this, the code
```
long long a = 123456789;
long long b = 987654321;
cout << a*b << "\n";
```
can be shortened as follows:
```
ll a = 123456789;
ll b = 987654321;
cout << a*b << "\n";
```
The command typedef can also be used with more complex types. For example, the following code gives the name vi for a vector of integers, and the name pi for
a pair that contains two integers.
```
typedef vector<int> vi;
typedef pair<int,int> pi;
```
Macros Another way to shorten code is to define macros. A macro specifies that certain strings in the code will be changed before the compilation. In C++, macros
are defined using the #define keyword. For example, we can define the following macros:
```
#define F first
#define S second
#define PB push_back
#define MP make_pair
```




```
v.push_back(make_pair(y1,x1));
v.push_back(make_pair(y2,x2));
int d = v[i].first+v[i].second;
```
can be shortened as follows:
```
v.PB(MP(y1,x1));
v.PB(MP(y2,x2));
int d = v[i].F+v[i].S;
```
A macro can also have parameters, which makes it possible to shorten loops and other structures. For example, we can define the following macro:
```
#define REP(i,a,b) for (int i = a; i <= b; i++)
```
After this, the code
```
for (int i = 1; i <= n; i++) {
search(i);
}
```
can be shortened as follows:
```
REP(i,1,n) {
search(i);
}
```
