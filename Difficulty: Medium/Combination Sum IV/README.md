<h2><a href="https://www.geeksforgeeks.org/problems/4-combination-sum/1">Combination Sum IV</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO" bis_skin_checked="1"><p><span style="font-size: 18px;">Given an array of <strong>unique integers arr</strong> and a target value <strong>k</strong>. Return the total number of </span><span style="font-size: 18px;"><strong>distinct combinations</strong> of elements from nums that sum up to the target.</span><span style="font-size: 18px;">&nbsp;Each element from nums can be used <strong>multiple</strong> times in a combination.</span><span style="font-size: 18px;">&nbsp;</span></p>
<p><span style="font-size: 18px;"><strong>Examples :</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>arr[] = [1, 2, 3], key = 4
<strong>Output</strong>: 7
<strong>Explanation</strong>: The possible combination ways to reach the target are: (1, 1, 1, 1) (1, 1, 2) (1, 2, 1) (1, 3) (2, 1, 1) (2, 2) (3, 1).
Note that different sequences of the same numbers are counted as distinct combinations.</span></pre>
<pre><span style="font-size: 18px;"><strong>Input</strong>: arr[] = [9], key = 3</span><span style="font-size: 18px;"><strong>
Output</strong>: 0</span></pre>
<p><span style="font-size: 18px;"><strong>Constraints</strong>:<br>1 ≤ arr.size() ≤ 200<br>1 ≤ arr[i] ≤ 10<sup>3</sup><br>1 ≤ key ≤ 10<sup>3</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Dynamic Programming</code>&nbsp;<code>Arrays</code>&nbsp;