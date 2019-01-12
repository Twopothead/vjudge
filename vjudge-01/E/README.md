- ## [E - 找饭友](https://vjudge.net/problem/OpenJ_Bailian-4002)

   

  [OpenJ_Bailian - 4002 ](https://vjudge.net/problem/292212/origin)

  https://vjudge.net/contest/277361#problem/E

### Description

```
中国幅员辽阔，来自全国各地的朋友的饮食口味也不尽相同。饮食喜好相同的人会组在一起吃饭，我们称其互为“饭友”。而你意外得到了一份食堂的流水账单记录，想从中发现今天来食堂吃饭的人当中每个人究竟有多少名饭友。 
首先你对账单的记录进行了一番整理，把N个消费者依次编号为1,2,…,N，把M种食品依次编号为1,2,…,M。为简单起见，认为喜欢吃同一种食品的人，就是他的饭友。你现在的任务是从这份账单记录中计算出每个人有几个饭友。
```

### Input

```
第一行两个整数N,M，2 <= N ，M<= 200。接下来有N行，第i(i = 1,2,…,N)行每一行有一个数，表示食客i-1最喜欢的食品的编号P(1<=P<=M)
```

### Output

```
包括N行，每行一个数，第i行的数表示第i号食客有几名饭友。如果i没有饭友，悲剧地发现没有人和他的口味相近，则输出“BeiJu”.
```

### Sample Input

```
4  5
2
3
2
1
```

Sample Output

```
1
BeiJu
1
BeiJu
```