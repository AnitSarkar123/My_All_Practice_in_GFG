<h2><a href="https://www.geeksforgeeks.org/problems/remove-duplicates-from-a-sorted-doubly-linked-list/1">Remove duplicates from a sorted DLL</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO" style="--text-color: var(--problem-text-color);" bis_skin_checked="1"><p><span style="font-size: 18px;">Given a doubly&nbsp;linked list of <strong>n </strong>nodes sorted by values, remove duplicate nodes present in the linked list.</span></p>
<p><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong> head: 1&lt;-&gt;1&lt;-&gt;1&lt;-&gt;2&lt;-&gt;3&lt;-&gt;4
<strong>Output: </strong>1&lt;-&gt;2&lt;-&gt;3&lt;-&gt;4
<strong>Explanation: </strong>Only the first occurance of node with value 1 is retained along with other distinct values. </span></pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>head: 1&lt;-&gt;2&lt;-&gt;2&lt;-&gt;3&lt;-&gt;3&lt;-&gt;4&lt;-&gt;4
<strong>Output: </strong>1&lt;-&gt;2&lt;-&gt;3&lt;-&gt;4
<strong>Explanation:</strong>
Only the first occurance of nodes with values 2, 3 and 4 are retained, rest repeating nodes are deleted.</span></pre>
<p><span style="font-size: 18px;"><strong>Constraint:</strong><br>1 ≤ n ≤ 10<sup>5</sup><br></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Linked List</code>&nbsp;