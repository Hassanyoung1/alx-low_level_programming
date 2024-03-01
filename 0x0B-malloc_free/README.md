# 0x0B. C - malloc, free
# C Memory allocation

# Project over - took place from Jun 13, 2023 3:00 PM to Jun 14, 2023 3:00 PM

<div class="panel panel-default" id="project-description">
  <div class="panel-body">
    <h2>Resources</h2>

<p><strong>Read or watch</strong>:</p>

<ul>
<li><a href="/rltoken/7q6RmWq86XkUhvmlhrg9bg" title="0x0a - malloc &amp; free - quick overview.pdf" target="_blank">0x0a - malloc &amp; free - quick overview.pdf</a></li>
<li><a href="/rltoken/pfGb2oVIYLO_1a8jtFGQYw" title="Dynamic memory allocation in C - malloc calloc realloc free" target="_blank">Dynamic memory allocation in C - malloc calloc realloc free</a> (<em>stop at 6:50</em>)</li>
</ul>

<p><strong>man or help</strong>:</p>

<ul>
<li><code>malloc</code></li>
<li><code>free</code></li>
</ul>

<h2>Additional Resources</h2>

<ul>
<li><a href="/rltoken/NzDPz5Q4v_3BihRZ9sPCsw" title="Dynamic Memory Allocation in C Programming Explained" target="_blank">Dynamic Memory Allocation in C Programming Explained</a></li>
</ul>

<h2>Learning Objectives</h2>

<p>At the end of this project, you are expected to be able to <a href="/rltoken/f-MGO-Fu4KSrem3R6GkEyw" title="explain to anyone" target="_blank">explain to anyone</a>, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>What is the difference between automatic and dynamic allocation</li>
<li>What is <code>malloc</code> and <code>free</code> and how to use them</li>
<li>Why and when use <code>malloc</code></li>
<li>How to use <code>valgrind</code> to check for memory leak</li>
</ul>


<h2>Requirements</h2>

<h3>General</h3>

<ul>
<li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
<li>All your files will be compiled on Ubuntu 20.04 LTS using <code>gcc</code>, using the options <code>-Wall -Werror -Wextra -pedantic -std=gnu89</code></li>
<li>All your files should end with a new line</li>
<li>A <code>README.md</code> file, at the root of the folder of the project is mandatory</li>
<li>Your code should use the <code>Betty</code> style. It will be checked using <a href="https://github.com/alx-tools/Betty/blob/master/betty-style.pl" title="betty-style.pl" target="_blank">betty-style.pl</a> and <a href="https://github.com/alx-tools/Betty/blob/master/betty-doc.pl" title="betty-doc.pl" target="_blank">betty-doc.pl</a></li>
<li>You are not allowed to use global variables</li>
<li>No more than 5 functions per file</li>
<li>The only C standard library functions allowed are <code>malloc</code> and <code>free</code>. Any use of functions like <code>printf</code>, <code>puts</code>, <code>calloc</code>, <code>realloc</code> etc… is forbidden</li>
<li>You are allowed to use <a href="https://github.com/alx-tools/_putchar.c/blob/master/_putchar.c" title="_putchar" target="_blank">_putchar</a></li>
<li>You don’t have to push <code>_putchar.c</code>, we will use our file. If you do it won’t be taken into account</li>
<li>In the following examples, the <code>main.c</code> files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own <code>main.c</code> files at compilation. Our <code>main.c</code> files might be different from the one shown in the examples</li>
<li>The prototypes of all your functions and the prototype of the function <code>_putchar</code> should be included in your header file called <code>main.h</code></li>
<li>Don’t forget to push your header file</li>
</ul>

<h2>More Info</h2>

<p>You do not have to learn about <code>calloc</code> and <code>realloc</code>.</p>

  </div>
</div>
