# Q1.1
`First quadrant`  
Initially, the ant has two options it can either go in the positive x direction by 1 unit or the positive y direction by 1 unit. Similarly, after going in either direction, it can go in the positive x-axis or positive y-axis by 0.5 unit & so on...

$\therefore x>0$ & $y>0 $



# Q1.2
No matter in which direction person moves Manhattan distance will always increase.
Let us assume person is at $(0,0)$ initially & moves in either x direction by 1 unit or in y direction by 1 unit, then Manhattan distance will increase by 1 unit. Similiarly, if person moves in x direction by 0.5 units or in y direction by 0.5 units, then Manhattan distance will increase by 0.5 units and so on...

$\therefore$ Manhattan distance( $ d_m $ ) =  $\displaystyle \lim_{n \to \infty}\sum_{i=1}^{n} \frac{1}{2^{i}} = \frac{1}{1-0.5}=2$

As the Manhattan distance always converges to 2, the expected value $ E\left(d_m\right)$ will also be $2$.

This also implies that $x+y=2$, which is an equation of line



# Q1.3
The equation of the line is $x+y=2$.  
$(x,y)$ lies on this line.  
$d_e$ is the Euclidean distance of this point from the origin $(0,0)$

$$
\therefore E(d_e^2)=\int_{0}^{2} \int_{0}^{2-x} (x^2+y^2)dydx \\
E(d_e^2)=\int_{0}^{2} \left[x^2y+\frac{y^3}{3}\right]\Biggr|_{0}^{2-x}dx \\  
E(d_e^2)=\int_{0}^{2} \left(\left[x^2(2-x)+\frac{(2-x)^3}{3}\right]-0\right)dx \\  
E(d_e^2)=\left[\frac{2x^3}{3}-\frac{x^4}{4}-\frac{(2-x)^4}{12}\right]\Biggr|_{0}^{2}dx \\  
E(d_e^2)=\left[\frac{16}{3}-\frac{16}{4}-0\right]-\left[0-0-\frac{16}{12}\right] \\  
E(d_e^2)=\frac{16}{3}-4+\frac{4}{3} \\  
E(d_e^2)=\frac{8}{3}
$$



# Q1.4
The equation of the locus representing all the possible values of $(x,y)$ is given by - 

$$x+y=2$$

Which is an equation of a straight line<br><br>
![](./1.4/line.png)



# Q2.1
For a deck of 8 cards which includes 4 identical red cards & 4 idemtical black cards, the total number of possible configurations are
$${\frac{8!}{\left({4!}\right)\left({4!}\right)}} = 70$$



# Q2.2
Because we have to generate all permutations for **$\langle B,B,B,B,R,R,R,R\rangle$**, the first thought that comes to our mind is `next_permutation` available in the *Standard Template Library of C++* & we will be using the same.  

For any $n\ge2$, the total number of permuatations are
$${\frac{n!}{\left({\frac{n}{2}}\right)!\left({\frac{n}{2}}\right)!}}$$

The time complexity of `next_permutation` is $O(n)$ & for each iteration of the do while loop, there is a for loop of size $n$. So the total time complexity for the below mentioned code is $$O\left({\frac{n^2\cdot n!}{\left({\frac{n}{2}}\right)!\left({\frac{n}{2}}\right)!}}\right)$$

$\therefore$ For $n=8$, the iterations are of the order $\sim4\cdot10^3$ & seems to be a feasible solution. But for $n=52$, the iterations are of the order $\sim10^{18}$ & it will take a lot of time to generate the output.

```cpp
#include<iostream>
#include<algorithm>
using namespace std;
double generate(int n) {
  cin.tie(0);
  int count = 0; // total number of permutations
  double sum = 0; // sum of all optimal pay-offs
  char arr[] = {
    'B',
    'B',
    'B',
    'B',
    'R',
    'R',
    'R',
    'R',
  };
  do {
    int ans = 0;
    int payoff = 0;
    count++;
    for(int i = 0; i < n; i++) {
      cout<<arr[i]<<" ";
      if(arr[i] == 'R') {
        payoff++;
      } else {
        payoff--;
      }
      ans = max(ans, payoff); // maximizing the pay-off
    }
    sum += ans;
    cout<<"- "<<ans<<"\n";
  } while(next_permutation(arr, arr + n)); // generating all permutations
  return sum / count; // returning expected pay-off
}

int main() {
  int n = 8;
  double expected = generate(n);
  cout<<"The epected pay-off for this game is "<<expected;
}
```


# Q2.3
Assuming that we play optimally & generate the maximum pay-off for each permutation, the pay-off will always be $\ge0$.




# Q2.4
Assuming that we play optimally & generate the maximum pay-off for each permutation, the pay-off will always be $\ge0$.

To prove : $$n_0 = \binom{2n}{n}-\binom{2n}{n+1}$$
Where $n_0$ is the number of configurations with pay-off $\le0$. Combining the above result, we need to find configurations with pay-off $=0$.

### Proof by Induction
$n_0$ is a function of $n$.  
For $n=1$, there is only **one** possible configuration satisfying the condition $\langle R,B\rangle$.
Also,

$$
n_0(1)=\binom{2}{1}-\binom{2}{2} \\
n_0(1)=2-1 \\
n_0 = 1
$$

$\therefore n_0(1)$ is true.  
Assume $n_0(n)$ is true.

$$
n_0(n)=\binom{2n}{n}-\binom{2n}{n+1}
$$

For every configuration with pay-off $\le0$, on moving from left to right, $count(R) \le count(B)$. Also the configurations shall always end with a $R$ else the pay-off will be $>0$.
<br><br>
Now for $n+1$, we will have an extra $R$ & $B$ to be added to the existing sequence of length $2n$. Following the above derived conditions, we will append $R$ to the end. To satisfy the condition $count(R) \le count(B)$, we can now add $B$ anywhere in the sequence before the trailing $R$.



# Q2.5




# Q2.6
Let the random variable $X$ denote the expected pay-off for any configuration & $P(X)$ denote the probability of that configuration. Then the cummulative distribution function $F_X(x)=P(X\le x)$ can be defined as follows:

$$
F_X(x)=\frac{n_k}{Total\space configurations} \\
F_X(x)=\frac{\binom{2n}{n}-\binom{2n}{n+x+1}}{\binom{2n}{n}} \\
F_X(x)=1-\frac{\binom{2n}{n+x+1}}{\binom{2n}{n}} \\
F_X(x)=1-\frac{\binom{52}{x+27}}{\binom{52}{26}}
$$

```python
import matplotlib.pyplot as plt
from math import comb

xPoints = []
yPoints = []
n = 26

for x in range(0,n):
  xPoints.append(x)
  y = 1 - comb(2*n,n+x+1) / comb(2*n,n)
  yPoints.append(y)

plt.plot(xPoints,yPoints)
plt.show()
```

![](./2.6/output.png)



# Q2.7
$n_k$ denotes the number of deck configurations such that the maximum payoff is $\le k$.
Let $F_k$ denotes the number of deck configurations such that the maximum payoff is $\ge k$. Then clearly,

$$
F_k = Total\space configurations - n_{k-1} \\
F_k = \binom{2n}{n} - \left(\binom{2n}{n}-\binom{2n}{n+k-1+1}\right) \\
F_k = \binom{2n}{n+k}\quad;\quad k\ge   1
$$

$f_k$ denotes the probability that the maximum payoff is $\ge k$. Then clearly,

$$
f_0=1 \\
f_k=\frac{F_k}{\binom{2n}{n}}=\frac{\binom{2n}{n+k}}{\binom{2n}{n}} \quad ; \quad k\ge 1
$$

Now,

$$
\frac{f_k}{f_{k-1}}=\frac{\binom{2n}{n+k}}{\binom{2n}{n+k-1}}=\frac{n-k+1}{n+k}
$$



# Q2.8
Using expression obtained in Q2.7,

$$
\frac{f_{k+1}}{f_k}=\frac{n-\left(k+1\right)+1}{n+k+1} \\
\frac{f_{k+1}}{f_k}=\frac{n-k}{n+k+1} \\
f_{k+1}=f_k\left(\frac{n-k}{n+k+1} \right)\quad ; \quad k\le26 \\
f_{27}=0
$$

Let the random variable $X$ denote the maximum pay-off of any configuration & $P(X=k)$ denote the probabiltity of maximum pay-off being $k$. Then,

$$
P(X=k)=f_k-f_{k+1} \\
P(X=k)=f_k-f_k \left(\frac{n-k}{n+k+1}\right) \\
P(X=k)=f_k\left(1-\frac{n-k}{n+k+1}\right) \\
P(X=k)=\left(\frac{2k+1}{n+k+1}\right) f_k\\
$$

```python
from math import comb
n = 26
f = list()
f.append(1)
for k in range(1,26+1):
  f.append(f[k-1]*(n-k+1)/(n+k))
  # Pre-computing f_k

for k in range(0,26+1):
  print(((2*k+1)/(n+k+1))*f[k])
  # Output of probability P(X=k)
```



# Q 2.9
Adding `max()` function in the previous code will give us the most likely payofff for the standard 52 card deck.  
$\therefore$ The most likely pay-off is $3$.

```python
from math import comb
n = 26
f = list()
max_prob = 0
most_likely = 0
f.append(1)
for k in range(1,26+1):
  f.append(f[k-1]*(n-k+1)/(n+k))
  # Pre-computing f_k

for k in range(0,26+1):
  p = ((2*k+1)/(n+k+1))*f[k] 
  # Probability of each pay-off
  if(p > max_prob):
    max_prob = p
    most_likely = k

print(most_likely)
# Printing the most likely pay-off
```



# Q2.10
The expected pay-off of the game is $4.040$.

```python
from math import comb
n = 26
f = list()
expected = 0
f.append(1)
for k in range(1,n+1):
  f.append(f[k-1]*(n-k+1)/(n+k))
  # Pre-computing f_k

for k in range(0,n+1):
  p = ((2*k+1)/(n+k+1))*f[k] 
  # Probability of each pay-off
  expected += p*k

print(expected)
# Printing the expected ikely pay-off
```