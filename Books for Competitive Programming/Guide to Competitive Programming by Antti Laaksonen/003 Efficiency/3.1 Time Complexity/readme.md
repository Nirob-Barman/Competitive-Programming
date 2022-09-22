3.1 Time Complexity
---
The time complexity of an algorithm estimates how much time the algorithm will use for a given input. By calculating the time complexity, we can often find out whether the algorithm is fast enough for solving a problem—without implementing it.


A time complexity is denoted O(· · · ) where the three dots represent some function. Usually, the variable n denotes the input size. For example, if the input is an array of numbers, n will be the size of the array, and if the input is a string, n will be the length of the string.




3.1.1 Calculation Rules
---
If a code consists of single commands, its time complexity is O(1). For example, the time complexity of the following code is O(1).

```
a++;
b++;
c = a+b;
```



The time complexity of a loop estimates the number of times the code inside the loop is executed. For example, the time complexity of the following code is O(n), because the code inside the loop is executed n times.We assume that “...” denotes a code whose time complexity is O(1).

```
for (int i = 1; i <= n; i++) {
...
}
```


Then, the time complexity of the following code is O(n<sup>2</sup>):

```
for (int i = 1; i <= n; i++) {
for (int j = 1; j <= n; j++) {
...
}
}
```


In general, if there are k nested loops and each loop goes through n values, the time complexity is O(n<sup>k</sup>).

A time complexity does not tell us the exact number of times the code inside a loop is executed, because it only shows the order of growth and ignores the constant factors. In the following examples, the code inside the loop is executed 3n, n + 5, and ⌈n/2⌉ times, but the time complexity of each code is O(n).

```
for (int i = 1; i <= 3*n; i++) {
...
}
```
```
for (int i = 1; i <= n+5; i++) {
...
}
```
```
for (int i = 1; i <= n; i += 2) {
...
}
```



As another example, the time complexity of the following code is O(n2), because the code inside the loop is executed 1 + 2 + . . . + n = <sup>1</sup>&frasl;<sub>2</sub> (n<sup>2</sup> + n) times.
```
for (int i = 1; i <= n; i++) {
for (int j = 1; j <= i; j++) {
...
}
}
```


If an algorithm consists of consecutive phases, the total time complexity is the largest time complexity of a single phase. The reason for this is that the slowest
phase is the bottleneck of the algorithm. For example, the following code consists of three phases with time complexities O(n), O(n2), and O(n). Thus, the total time
complexity is O(n<sup>2</sup>).

```
for (int i = 1; i <= n; i++) {
...
}

for (int i = 1; i <= n; i++) {
for (int j = 1; j <= n; j++) {
...
}
}

for (int i = 1; i <= n; i++) {
...
}
```

Sometimes the time complexity depends on several factors, and the time complexity formula contains several variables. For example, the time complexity of the following code is O(nm):
```
for (int i = 1; i <= n; i++) {
for (int j = 1; j <= m; j++) {
...
}
}
```


The time complexity of a recursive function depends on the number of times the function is called and the time complexity of a single call. The total time complexity
is the product of these values. For example, consider the following function:
```
void f(int n) {
if (n == 1) return;
f(n-1);
}
```
The call f(n) causes n function calls, and the time complexity of each call is O(1), so the total time complexity is O(n). 

As another example, consider the following function:
```
void g(int n) {
if (n == 1) return;
g(n-1);
g(n-1);
}
```
What happens when the function is called with a parameter n? First, there are two calls with parameter n−1, then four calls with parameter n−2, then eight calls with parameter n − 3, and so on. In general, there will be 2<sup>k</sup> calls with parameter n − k where k = 0, 1, . . . , n − 1. Thus, the time complexity is

<p align="center"

1 + 2 + 4 + ·· ·+2<sup>n−1</sup> = 2<sup>n</sup> − 1 = O(2<sup>n</sup>).

</p>
