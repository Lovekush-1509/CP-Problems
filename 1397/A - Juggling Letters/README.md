<h2><a href="https://codeforces.com/contest/1397/problem/A" target="_blank" rel="noopener noreferrer">1397A — Juggling Letters</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1397A](https://codeforces.com/contest/1397/problem/A) |

## Topics
`greedy` `strings`

---

## Problem Statement

<div class="header"><div class="title">A. Juggling Letters</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given $$$n$$$ strings $$$s_1, s_2, \ldots, s_n$$$ consisting of lowercase Latin letters.</p><p>In one operation you can remove a character from a string $$$s_i$$$ and insert it to an arbitrary position in a string $$$s_j$$$ ($$$j$$$ may be equal to $$$i$$$). You may perform this operation any number of times. Is it possible to make all $$$n$$$ strings equal?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains $$$t$$$ ($$$1 \le t \le 10$$$): the number of test cases.</p><p>The first line of each test case contains a single integer $$$n$$$ ($$$1 \le n \le 1000$$$): the number of strings.</p><p>$$$n$$$ lines follow, the $$$i$$$-th line contains $$$s_i$$$ ($$$1 \le \lvert s_i \rvert \le 1000$$$).</p><p>The sum of lengths of all strings in all test cases does not exceed $$$1000$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>If it is possible to make the strings equal, print "<span class="tex-font-style-tt">YES</span>" (without quotes).</p><p>Otherwise, print "<span class="tex-font-style-tt">NO</span>" (without quotes).</p><p>You can output each character in either lowercase or uppercase.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008221814951777804" id="id0030093336743810606" class="input-output-copier">Copy</div></div><pre id="id008221814951777804">4
2
caa
cbb
3
cba
cba
cbb
4
ccab
cbac
bca
acbcc
4
acb
caf
c
cbafc
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006238740505787803" id="id005171173155367914" class="input-output-copier">Copy</div></div><pre id="id006238740505787803">YES
NO
YES
NO
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, you can do the following: </p><ul> <li> Remove the third character of the first string and insert it after the second character of the second string, making the two strings "<span class="tex-font-style-tt">ca</span>" and "<span class="tex-font-style-tt">cbab</span>" respectively.</li><li> Remove the second character of the second string and insert it after the second character of the first string, making both strings equal to "<span class="tex-font-style-tt">cab</span>". </li></ul><p>In the second test case, it is impossible to make all $$$n$$$ strings equal.</p></div>