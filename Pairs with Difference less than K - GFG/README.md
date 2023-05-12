# Pairs with Difference less than K
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given an array of N integers, the task is to find all pairs with a difference less than K.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input :</strong> Arr[] = {1, 10, 4, 2}, K = 3
<strong>Output :</strong> 2
<strong>Explanation:</strong>
we have an array a[] = {1, 10, 4, 2} and 
K = 3 We can make only two pairs with a 
difference of less than 3.
(1, 2) and (4, 2). So, the answer is 2.

</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input :</strong> Arr[] = {2, 3, 4}, K = 5
<strong>Output :</strong> 3
</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
This is a function problem. The input is already taken care of by the driver code. You only need to complete the function&nbsp;<strong>countPairs()</strong> that takes an array <strong>(arr)</strong>, sizeOfArray <strong>(n)</strong>, the integer <strong>K</strong>, and return the number of pairs whose difference is less than <strong>K</strong>. The driver code takes care of the printing.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(NLog(n)).<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(1).</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
2 ≤ N ≤ 10<sup>5</sup><br>
0 ≤ K ≤ 10<sup>4</sup><br>
1 ≤ A[i] ≤ 10<sup>5</sup></span></p>
</div>