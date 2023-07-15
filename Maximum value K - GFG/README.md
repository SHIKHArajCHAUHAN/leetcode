# Maximum value K
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given an array <strong>Arr</strong> of&nbsp;<strong>N&nbsp;</strong><strong>positive</strong>&nbsp;integers.&nbsp;Find the maximum possible value of&nbsp;<strong>K</strong> such that the array has at-least<strong> K</strong> elements that are greater than or equal to <strong>K</strong>.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 6
Arr[] = {2, 3, 4, 5, 6, 7}
<strong>Output:</strong> 4
<strong>Explanation:</strong> 4 elements [4, 5, 6, 7] 
are greater than equal to 4.</span></pre>

<p><br>
<span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 4
Arr[] = {1, 2, 3, 4}
<strong>Output:</strong> 2
<strong>Explanation:</strong>&nbsp;3 elements [2, 3, 4] are 
greater than equal to 2.</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>findMaximumNum</strong><strong>()</strong>&nbsp;which takes the array of integers&nbsp;<strong>arr</strong>&nbsp;and its size&nbsp;<strong>n&nbsp;</strong>as input parameters and returns an integer denoting the answer.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(N)<br>
<br>
<strong>Constraints:</strong><br>
2 &lt;=&nbsp;N&nbsp;&lt;= 10<sup>5</sup><br>
0 &lt;=&nbsp;Arr[i]&nbsp;&lt;= 10<sup>6</sup><br>
The array is unsorted and may contain duplicate values.</span></p>
</div>