# 0x00. C - Hello, World
# C


 # Project over - took place from May 18, 2023 3:00 PM to May 19, 2023 3:00 PM


<h2>Resources</h2>

<p><strong>Read or watch</strong>:</p>

<ul>
<li><a href="/rltoken/P01aLj9BDfDUOv-y9x82Yw" title="Everything you need to know to start with C.pdf" target="_blank">Everything you need to know to start with C.pdf</a> (<em>You do not have to learn everything in there yet, but make sure you read it entirely first</em>)</li>
<li><a href="/rltoken/YWFrRob_-Yo-_NQikMLI-g" title="Dennis Ritchie" target="_blank">Dennis Ritchie</a> </li>
<li><a href="/rltoken/W4oygfMgAp5Hyc7o6QuSYQ" title="&quot;C&quot; Programming Language: Brian Kernighan" target="_blank">“C” Programming Language: Brian Kernighan</a> </li>
<li><a href="/rltoken/WYdE1novaWa0yt5fzGvLBw" title="Why C Programming Is Awesome" target="_blank">Why C Programming Is Awesome</a> </li>
<li><a href="/rltoken/aE_pZLbexuLroHA0FmjLbw" title="Learning to program in C part 1" target="_blank">Learning to program in C part 1</a> </li>
<li><a href="/rltoken/3a5y1N-0FlTaPbKRxlRLlQ" title="Learning to program in C part 2" target="_blank">Learning to program in C part 2</a> </li>
<li><a href="/rltoken/idYJyVfQRZ9e5aljiT5UKg" title="Understanding C program Compilation Process" target="_blank">Understanding C program Compilation Process</a> </li>
<li><a href="/rltoken/wJg_qB9ducisfVQNk62htg" title="Betty Coding Style" target="_blank">Betty Coding Style</a> </li>
<li><a href="/rltoken/zwv5CHLybXN6KFmsjbu_tg" title="Hash-bang under the hood" target="_blank">Hash-bang under the hood</a> (<em>Look at only after you finish consuming the other resources</em>)</li>
<li><a href="/rltoken/JrokM8Pk6bd9wPqQvEfSAA" title="Linus Torvalds on C vs. C++" target="_blank">Linus Torvalds on C vs. C++</a> (<em>Look at only after you finish consuming the other resources</em>)</li>
</ul>

<p><strong>man or help</strong>:</p>

<ul>
<li><code>gcc</code></li>
<li><code>printf (3)</code></li>
<li><code>puts</code></li>
<li><code>putchar</code></li>
</ul>

<h2>Learning Objectives</h2>

<p>At the end of this project, you are expected to be able to <a href="/rltoken/VGWjGaWZbgcLYTwfLEBmmQ" title="explain to anyone" target="_blank">explain to anyone</a>, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>Why C programming is awesome </li>
<li>Who invented C</li>
<li>Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds</li>
<li>What happens when you type <code>gcc main.c</code></li>
<li>What is an entry point</li>
<li>What is <code>main</code></li>
<li>How to print text using <code>printf</code>, <code>puts</code> and <code>putchar</code></li>
<li>How to get the size of a specific type using the unary operator <code>sizeof</code></li>
<li>How to compile using <code>gcc</code></li>
<li>What is the default program name when compiling with <code>gcc</code></li>
<li>What is the official C coding style and how to check your code with <code>betty-style</code></li>
<li>How to find the right header to include in your source code when using a standard library function</li>
<li>How does the <code>main</code> function influence the return value of the program</li>
</ul>


<h2>Requirements</h2>

<h3>C</h3>

<ul>
<li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
<li>All your files will be compiled on Ubuntu 20.04 LTS using <code>gcc</code>, using the options <code>-Wall -Werror -Wextra -pedantic -std=gnu89</code></li>
<li>All your files should end with a new line</li>
<li>A <code>README.md</code> file at the root of the repo, containing a description of the repository</li>
<li>A <code>README.md</code> file, at the root of the folder of <em>this</em> project, containing a description of the project</li>
<li>There should be no errors and no warnings during compilation</li>
<li>You are not allowed to use <code>system</code></li>
<li>Your code should use the <code>Betty</code> style. It will be checked using <a href="https://github.com/alx-tools/Betty/blob/master/betty-style.pl" title="betty-style.pl" target="_blank">betty-style.pl</a> and <a href="https://github.com/alx-tools/Betty/blob/master/betty-doc.pl" title="betty-doc.pl" target="_blank">betty-doc.pl</a></li>
</ul>

<h3>Shell Scripts</h3>

<ul>
<li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
<li>All your scripts will be tested on Ubuntu 20.04 LTS</li>
<li>All your scripts should be exactly two lines long (<code>$ wc -l file</code> should print 2)</li>
<li>All your files should end with a new line</li>
<li>The first line of all your files should be exactly <code>#!/bin/bash</code></li>
</ul>

<h2>More Info</h2>

<h3>Betty linter</h3>

<p>To run the Betty linter just with command <code>betty &lt;filename&gt;</code>:</p>

<ul>
<li>Go to the <a href="/rltoken/QkZtBg3ps5iLBlUdX-CPJQ" title="Betty" target="_blank">Betty</a> repository</li>
<li>Clone the <a href="/rltoken/QkZtBg3ps5iLBlUdX-CPJQ" title="repo" target="_blank">repo</a> to your local machine</li>
<li><code>cd</code> into the Betty directory</li>
<li>Install the linter with <code>sudo ./install.sh</code></li>
<li><code>emacs</code> or <code>vi</code> a new file called <code>betty</code>, and copy the script below:</li>
</ul>

<pre><code>#!/bin/bash
# Simply a wrapper script to keep you from having to use betty-style
# and betty-doc separately on every item.
# Originally by Tim Britton (@wintermanc3r), multiargument added by
# Larry Madeo (@hillmonkey)

BIN_PATH="/usr/local/bin"
BETTY_STYLE="betty-style"
BETTY_DOC="betty-doc"

if [ "$#" = "0" ]; then
    echo "No arguments passed."
    exit 1
fi

for argument in "$@" ; do
    echo -e "\n========== $argument =========="
    ${BIN_PATH}/${BETTY_STYLE} "$argument"
    ${BIN_PATH}/${BETTY_DOC} "$argument"
done
</code></pre>

<ul>
<li>Once saved, exit file and change permissions to apply to all users with <code>chmod a+x betty</code></li>
<li>Move the <code>betty</code> file into <code>/bin/</code> directory or somewhere else in your <code>$PATH</code> with <code>sudo mv betty /bin/</code></li>
</ul>

<p>You can now type <code>betty &lt;filename&gt;</code> to run the Betty linter!</p>

  </div>
