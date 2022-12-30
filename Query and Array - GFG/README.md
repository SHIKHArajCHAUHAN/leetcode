# Query and Array
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given an array of integers <strong>arr[]</strong> and a query integer <strong>q</strong>. Find the number <strong>X</strong>&nbsp;from&nbsp;the array such that it can be converted from <strong>q</strong> to <strong>X</strong> such that <strong>F(q, X)</strong> is minimum.</span></p>

<p><span style="font-size:18px"><strong>F(A, B)</strong> = Number of bits flipped to change the number <strong>A</strong> to <strong>B</strong>.</span></p>

<p><span style="font-size:18px">If there are more than one values in <strong>arr[]</strong> such that <strong>F(q, X)</strong> is minimum print the smallest value of <strong>X</strong> for which <strong>F(q, X)</strong> is minimum.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>n = 9, q = 1
arr[] = {5, 32, 1, 7, 10, 50, 19, 21, 2}
<strong>Output:</strong> 1
<strong>Explanation:</strong> F(1, 1) = 0, so this is the 
minimum X.
</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>n = 6, q = 8
arr[] = {5, 32, 10, 7, 10, 50, 19, 21, 2}
<strong>Output:</strong> 10
</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>findX()</strong>&nbsp;which takes the&nbsp;array of integers&nbsp;<strong>arr, n</strong>&nbsp;and&nbsp;<strong>q&nbsp;</strong>as parameters and returns an integer&nbsp;denoting the answer.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(n*logn)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(1)<br>
<strong>Constraints:</strong><br>
1 &lt;= n &lt;= 10<sup>5</sup><br>
1 &lt;= q &lt;= 10<sup>6</sup><br>
1 &lt;= arr[i] &lt;= 10<sup>6</sup></span><br>
&nbsp;</p>
</div>