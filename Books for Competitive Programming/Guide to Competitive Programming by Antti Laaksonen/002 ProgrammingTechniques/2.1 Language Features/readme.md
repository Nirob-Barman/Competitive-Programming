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

