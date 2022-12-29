# Check if divisible by 10
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a binary number in the form of string, the task is to check whether the decimal representation of the given binary number is divisible by 10 or not. The number could be very large and may not fit even in long long int.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
bin = "1010"
<strong>Output:</strong>
1
<strong>Explanation:</strong>
The decimal representation of given 
string is 10 which is divisible by 10.
So, answer is 1.</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
bin = "10"
<strong>Output:</strong>
0
<strong>Explanation:</strong>
The decimal representation of bin is 
2, which is not divisible by 10, so 
answer is 0.</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything.Your Task is to complete the function <strong>isDivisibleBy10()</strong> which takes a binary string bin as input parameter and returns 0 if the decimal representaion of bin is not divisible by 10.Otherwise it returns 1.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong>O(N)<br>
<strong>Expected Auxillary Space:</strong>O(1)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= |bin| &lt;= 10<sup>5</sup></span></p>
</div>