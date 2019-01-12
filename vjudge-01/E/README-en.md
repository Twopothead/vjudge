## Who is your potential friend?

description

"Smelly tastes" - this is the vocabulary we like to use when describing our friends. The fact that two people are friends usually means that they have many common interests. However, as a otaku, you find that there are not many opportunities for you to get to know each other.Fortunately, you accidentally got a book borrowing record from the Peking University Library, so you can spend the day and night programming and want to discover potential friends. 
First of all, you have sorted out the borrowing records. The N readers are numbered 1, 2, ..., N, and the M books are numbered 1, 2, ..., M. At the same time, according to the principle of "smelly taste", and the person you like to read the same book, is your potential friend. Your current task is to calculate from the borrowing record that each person has several potential friends.

Input

The first two integers N, M, 2 <= N, M <= 200. Next, there are N lines, and the i-th (i = 1, 2, ..., N) line has a number in each line, indicating the number P of the favorite book of the reader i-1 (1 <= P <= M)

Output

Including N lines, one number per line, the number of the i-th line indicates that the reader i has several potential friends. If i and anyone do not have a book that they like together, then output "BeiJu" (ie tragedy, ^ ^)

Sample input

```
4  5
2
3
2
1
```

Sample output

```
1
BeiJu
1
BeiJu
```