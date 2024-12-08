<div class="markdown prose w-full break-words dark:prose-invert dark"><hr><h1><strong>ft_printf</strong></h1><h2><strong>42 Cursus Project</strong></h2><p><code>ft_printf</code> is a 42 School project that challenges students to recreate the functionality of the standard C library's <code>printf</code> function. This project focuses on understanding variadic functions, formatting output, and improving coding discipline.</p><hr><h2><strong>Getting Started</strong></h2><p>To get started, clone the repository and compile the project using the provided Makefile. This project supports custom implementations of <code>ft_printf</code> based on required formatting options.</p><h3><strong>Requirements</strong></h3><ul><li>Basic knowledge of the C programming language.</li><li>Understanding of variadic functions.</li><li>Adherence to the 42 School coding standards.</li></ul><hr><h2><strong>Usage</strong></h2><p>To use <code>ft_printf</code> in your program:</p><ol><li>Include the header file:<pre class="!overflow-visible"><div class="contain-inline-size rounded-md border-[0.5px] border-token-border-medium relative bg-token-sidebar-surface-primary dark:bg-gray-950"><div class="flex items-center text-token-text-secondary px-4 py-2 text-xs font-sans justify-between rounded-t-md h-9 bg-token-sidebar-surface-primary dark:bg-token-main-surface-secondary select-none"></div><div class="sticky top-9 md:top-[5.75rem]"><div class="absolute bottom-0 right-2 flex h-9 items-center"><div class="flex items-center rounded bg-token-sidebar-surface-primary px-2 font-sans text-xs text-token-text-secondary dark:bg-token-main-surface-secondary"><span class="" data-state="closed"><button class="flex gap-1 items-center select-none py-1"><svg width="24" height="24" viewBox="0 0 24 24" fill="none" xmlns="http://www.w3.org/2000/svg" class="icon-sm"><path fill-rule="evenodd" clip-rule="evenodd" d="M7 5C7 3.34315 8.34315 2 10 2H19C20.6569 2 22 3.34315 22 5V14C22 15.6569 20.6569 17 19 17H17V19C17 20.6569 15.6569 22 14 22H5C3.34315 22 2 20.6569 2 19V10C2 8.34315 3.34315 7 5 7H7V5ZM9 7H14C15.6569 7 17 8.34315 17 10V15H19C19.5523 15 20 14.5523 20 14V5C20 4.44772 19.5523 4 19 4H10C9.44772 4 9 4.44772 9 5V7ZM5 9C4.44772 9 4 9.44772 4 10V19C4 19.5523 4.44772 20 5 20H14C14.5523 20 15 19.5523 15 19V10C15 9.44772 14.5523 9 14 9H5Z" fill="currentColor"></path></svg></button></span></div></div></div><div class="overflow-y-auto p-4" dir="ltr"><code class="!whitespace-pre hljs language-c"><span class="hljs-meta">#<span class="hljs-keyword">include</span> <span class="hljs-string">"ft_printf.h"</span></span>
</code></div></div></pre></li><li>Call <code>ft_printf</code> like you would <code>printf</code>:<pre class="!overflow-visible"><div class="contain-inline-size rounded-md border-[0.5px] border-token-border-medium relative bg-token-sidebar-surface-primary dark:bg-gray-950"><div class="flex items-center text-token-text-secondary px-4 py-2 text-xs font-sans justify-between rounded-t-md h-9 bg-token-sidebar-surface-primary dark:bg-token-main-surface-secondary select-none"></div><div class="sticky top-9 md:top-[5.75rem]"><div class="absolute bottom-0 right-2 flex h-9 items-center"><div class="flex items-center rounded bg-token-sidebar-surface-primary px-2 font-sans text-xs text-token-text-secondary dark:bg-token-main-surface-secondary"><span class="" data-state="closed"><button class="flex gap-1 items-center select-none py-1"><svg width="24" height="24" viewBox="0 0 24 24" fill="none" xmlns="http://www.w3.org/2000/svg" class="icon-sm"><path fill-rule="evenodd" clip-rule="evenodd" d="M7 5C7 3.34315 8.34315 2 10 2H19C20.6569 2 22 3.34315 22 5V14C22 15.6569 20.6569 17 19 17H17V19C17 20.6569 15.6569 22 14 22H5C3.34315 22 2 20.6569 2 19V10C2 8.34315 3.34315 7 5 7H7V5ZM9 7H14C15.6569 7 17 8.34315 17 10V15H19C19.5523 15 20 14.5523 20 14V5C20 4.44772 19.5523 4 19 4H10C9.44772 4 9 4.44772 9 5V7ZM5 9C4.44772 9 4 9.44772 4 10V19C4 19.5523 4.44772 20 5 20H14C14.5523 20 15 19.5523 15 19V10C15 9.44772 14.5523 9 14 9H5Z" fill="currentColor"></path></svg></button></span></div></div></div><div class="overflow-y-auto p-4" dir="ltr"><code class="!whitespace-pre hljs language-c">ft_printf(<span class="hljs-string">"Hello, %s! Your score is %d.\n"</span>, <span class="hljs-string">"student"</span>, <span class="hljs-number">100</span>);
</code></div></div></pre></li></ol><hr><h2><strong>Features</strong></h2><p>The project replicates most of the functionalities of the standard <code>printf</code> function, including:</p><ul><li><p><strong>Supported Specifiers</strong>:</p><ul><li><code>%c</code>: Single character</li><li><code>%s</code>: String</li><li><code>%p</code>: Pointer address</li><li><code>%d</code>/<code>%i</code>: Decimal integer</li><li><code>%u</code>: Unsigned integer</li><li><code>%x</code>/<code>%X</code>: Hexadecimal (lower/uppercase)</li><li><code>%%</code>: Percent sign</li></ul></li><li><hr><h2><strong>Project Files</strong></h2><ul><li><strong>ft_printf.c</strong>: The main function that processes and dispatches formatting tasks.</li><li><strong>ft_printf_utils.c && ft_printf_utils2.c</strong>: Helper functions for string and number manipulations.</li><li><strong>ft_printf.h</strong>: Header File.</li><hr><h2><strong>Compilation</strong></h2><p>To compile the project:</p><ol><li>Run <code>make</code> to build the library:<pre class="!overflow-visible"><div class="contain-inline-size rounded-md border-[0.5px] border-token-border-medium relative bg-token-sidebar-surface-primary dark:bg-gray-950"><div class="flex items-center text-token-text-secondary px-4 py-2 text-xs font-sans justify-between rounded-t-md h-9 bg-token-sidebar-surface-primary dark:bg-token-main-surface-secondary select-none"></div><div class="sticky top-9 md:top-[5.75rem]"><div class="absolute bottom-0 right-2 flex h-9 items-center"><div class="flex items-center rounded bg-token-sidebar-surface-primary px-2 font-sans text-xs text-token-text-secondary dark:bg-token-main-surface-secondary"><span class="" data-state="closed"><button class="flex gap-1 items-center select-none py-1"><svg width="24" height="24" viewBox="0 0 24 24" fill="none" xmlns="http://www.w3.org/2000/svg" class="icon-sm"><path fill-rule="evenodd" clip-rule="evenodd" d="M7 5C7 3.34315 8.34315 2 10 2H19C20.6569 2 22 3.34315 22 5V14C22 15.6569 20.6569 17 19 17H17V19C17 20.6569 15.6569 22 14 22H5C3.34315 22 2 20.6569 2 19V10C2 8.34315 3.34315 7 5 7H7V5ZM9 7H14C15.6569 7 17 8.34315 17 10V15H19C19.5523 15 20 14.5523 20 14V5C20 4.44772 19.5523 4 19 4H10C9.44772 4 9 4.44772 9 5V7ZM5 9C4.44772 9 4 9.44772 4 10V19C4 19.5523 4.44772 20 5 20H14C14.5523 20 15 19.5523 15 19V10C15 9.44772 14.5523 9 14 9H5Z" fill="currentColor"></path></svg></button></span></div></div></div><div class="overflow-y-auto p-4" dir="ltr"><code class="!whitespace-pre hljs language-sh">make
</code></div></div></pre></li><li>Include <code>libftprintf.a</code> in your projects:<pre class="!overflow-visible"><div class="contain-inline-size rounded-md border-[0.5px] border-token-border-medium relative bg-token-sidebar-surface-primary dark:bg-gray-950"><div class="flex items-center text-token-text-secondary px-4 py-2 text-xs font-sans justify-between rounded-t-md h-9 bg-token-sidebar-surface-primary dark:bg-token-main-surface-secondary select-none"></div><div class="sticky top-9 md:top-[5.75rem]"><div class="absolute bottom-0 right-2 flex h-9 items-center"><div class="flex items-center rounded bg-token-sidebar-surface-primary px-2 font-sans text-xs text-token-text-secondary dark:bg-token-main-surface-secondary"><span class="" data-state="closed"><button class="flex gap-1 items-center select-none py-1"><svg width="24" height="24" viewBox="0 0 24 24" fill="none" xmlns="http://www.w3.org/2000/svg" class="icon-sm"><path fill-rule="evenodd" clip-rule="evenodd" d="M7 5C7 3.34315 8.34315 2 10 2H19C20.6569 2 22 3.34315 22 5V14C22 15.6569 20.6569 17 19 17H17V19C17 20.6569 15.6569 22 14 22H5C3.34315 22 2 20.6569 2 19V10C2 8.34315 3.34315 7 5 7H7V5ZM9 7H14C15.6569 7 17 8.34315 17 10V15H19C19.5523 15 20 14.5523 20 14V5C20 4.44772 19.5523 4 19 4H10C9.44772 4 9 4.44772 9 5V7ZM5 9C4.44772 9 4 9.44772 4 10V19C4 19.5523 4.44772 20 5 20H14C14.5523 20 15 19.5523 15 19V10C15 9.44772 14.5523 9 14 9H5Z" fill="currentColor"></path></svg></button></span></div></div></div><div class="overflow-y-auto p-4" dir="ltr"><code class="!whitespace-pre hljs language-sh">cc main.c libftprintf.a -o program
</code></div></div></pre></li></ol><hr><h2><strong>Testing</strong></h2><p>Test <code>ft_printf</code> by comparing its output with the standard <code>printf</code> function. Use tools like:</p><ul><li><strong>42FileChecker</strong>: A popular testing tool for 42 projects.</li><li><strong>printf Tester</strong>: Automated tests specifically for the <code>ft_printf</code> project.</li></ul><hr><h2><strong>Challenges</strong></h2><ul><li>Understanding how to process and parse variadic arguments.</li><li>Handling edge cases like large numbers, null pointers, and unexpected formats.</li><li>Adhering to 42’s stringent coding norms.</li></ul><hr><h2><strong>Authors</strong></h2><ul><li><strong>[Your Name]</strong>: Initial development</li><li><strong>1337/42 Network</strong>: C programming expertise</li></ul><hr><p>Feel free to modify the <strong>Features</strong>, <strong>Project Files</strong>, and <strong>Testing</strong> sections based on your implementation!</p></div>
