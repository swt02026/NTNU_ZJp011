NTNU_ZJp011
===========

Automated Judge Script

內容： 
The judges from the programming contests are known to be very mean and very lazy. We, judges, want less work and more Wrong Answers! So, we'd like you to help us and write an automated judge script to judge solution runs from teams all over the world. All you have to do is write a program which receives the standard solution and a team output and gives as answer one of the following messages: "Accepted", "Presentation Error" or "Wrong Answer". We define each one as:

Accepted: As we are very mean judges, we only want you to give "Accepted" as answer if the team output matches the standard solution integrally. That is, ALL characters must match and must be in the same order.

Presentation Error: We want you to give "Presentation Error" if all NUMERIC charaters match (and in the same order) but there is at least one non-numeric character wrong (or in wrong order). For instance, "15 0" and "150" would receive a "Presentation Error", whereas "15 0" and "1 0" would not (it would receive "Wrong Answer", see bellow).

Wrong Answer: If the team output could not be classified as any of the two above, then you have no option but to give "Wrong Answer" as an answer!

輸入說明：
The input will consist of an arbitrary number of input sets. Each input set begins with a positive integer n < 100, alone in a line, which describes the number of lines of the standard solution. The next n lines contain the standard solution. Then there is a positive integer m < 100, alone in a line, which describes the number of lines of the team output. The next m lines contain the team output. The input is terminated by a value of n = 0, and should not be processed. No line will have more than 120 characters.
輸出說明：
For each set you should output one of the following lines:

Run #x: Accepted Run #x: Presentation Error Run #x: Wrong Answer 
Where x stands for the number of the input set (starting from 1).
