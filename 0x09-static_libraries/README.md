# 0x09-static_libraries
# C


# Project over - took place from Jun 9, 2023 3:00 PM to Jun 10, 2023 3:00 PM

<div class="panel panel-default" id="project-description">
  <div class="panel-body">
    <h2>Resources</h2>

<p><strong>Read or watch</strong>:</p>

<ul>
<li><a href="/rltoken/XB1iH0qE6gshx0x8TfRAPQ" title="What Is A &quot;C&quot; Library? What Is It Good For?" target="_blank">What Is A “C” Library? What Is It Good For?</a> </li>
<li><a href="/rltoken/XB1iH0qE6gshx0x8TfRAPQ" title="Creating A Static &quot;C&quot; Library Using &quot;ar&quot; and &quot;ranlib&quot;" target="_blank">Creating A Static “C” Library Using “ar” and “ranlib”</a> </li>
<li><a href="/rltoken/XB1iH0qE6gshx0x8TfRAPQ" title="Using A &quot;C&quot; Library In A Program" target="_blank">Using A “C” Library In A Program</a> </li>
<li><a href="/rltoken/PexOGO-npR_ZDQk-SpOR9g" title="What is difference between Dynamic and Static library(Static and Dynamic linking)" target="_blank">What is difference between Dynamic and Static library(Static and Dynamic linking)</a> (<em>stop at 4:44</em>)</li>
</ul>

<p><strong>man or help</strong>:</p>

<ul>
<li><code>ar</code></li>
<li><code>ranlib</code></li>
<li><code>nm</code></li>
</ul>

<h2>Additional Resource</h2>

<ul>
<li><a href="/rltoken/1BPeabLhE4bu86H3g3kmHA" title="Static Libraries: How to Create &amp; Use them in C programming" target="_blank">Static Libraries: How to Create &amp; Use them in C programming</a></li>
</ul>

<h2>Learning Objectives</h2>

<p>At the end of this project, you are expected to be able to <a href="/rltoken/dkyFVPYqNQb2pkuknMb9Sw" title="explain to anyone" target="_blank">explain to anyone</a>, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>What is a static library, how does it work, how to create one, and how to use it</li>
<li>Basic usage of <code>ar</code>, <code>ranlib</code>, <code>nm</code></li>
</ul>


<h2>Requirements</h2>

<h3>C</h3>

<ul>
<li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
<li>All your files will be compiled on Ubuntu 20.04 LTS using <code>gcc</code>, using the options <code>-Wall -Werror -Wextra -pedantic -std=gnu89</code></li>
<li>All your files should end with a new line</li>
<li>A <code>README.md</code> file, at the root of the folder of the project is mandatory</li>
<li>Your code should use the <code>Betty</code> style. It will be checked using <a href="https://github.com/alx-tools/Betty/blob/master/betty-style.pl" title="betty-style.pl" target="_blank">betty-style.pl</a> and <a href="https://github.com/alx-tools/Betty/blob/master/betty-doc.pl" title="betty-doc.pl" target="_blank">betty-doc.pl</a></li>
<li>You are not allowed to use global variables</li>
<li>No more than 5 functions per file</li>
<li>You are not allowed to use the standard library. Any use of functions like <code>printf</code>, <code>puts</code>, etc… is forbidden</li>
<li>You are allowed to use <a href="https://github.com/alx-tools/_putchar.c/blob/master/_putchar.c" title="_putchar" target="_blank">_putchar</a></li>
<li>You don’t have to push <code>_putchar.c</code>, we will use our file. If you do it won’t be taken into account</li>
<li>In the following examples, the <code>main.c</code> files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own <code>main.c</code> files at compilation. Our <code>main.c</code> files might be different from the one shown in the examples</li>
<li>The prototypes of all your functions and the prototype of the function <code>_putchar</code> should be included in your header file called <code>main.h</code></li>
<li>Don’t forget to push your header file</li>
</ul>

<h3>Bash</h3>

<ul>
<li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
<li>All your scripts will be tested on Ubuntu 20.04 LTS</li>
<li>All your files should end with a new line (<a href="http://unix.stackexchange.com/questions/18743/whats-the-point-in-adding-a-new-line-to-the-end-of-a-file/18789">why?</a>)</li>
<li>The first line of all your files should be exactly <code>#!/bin/bash</code></li>
<li>A <code>README.md</code> file, at the root of the folder of the project, describing what each script is doing</li>
<li>All your files must be executable</li>
</ul>

<h2>More Info</h2>

<p>You do not need to learn about dynamic libraries, yet.</p>

  </div>
</div>
