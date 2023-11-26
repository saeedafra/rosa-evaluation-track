# Assignment
* `example_1.cpp` shows how you can use functions. 
* `example_2.cpp` shows how you can use pointers to have multiple return values.
* `example_3.cpp` shows how you can pass arrays to functions.

This assignment involves finding the roots of a quadratic equation numerically. There are very well-known algorithms for finding roots in general. But for this assignment, you could use the simplest algorithm.

Consider a function $f(x)$. Sometimes we know the formula of $f$. That is, we know the exact relationship of $x$ and $f(x)$. Take the example of a quadratic equation $f(x)=ax^2+bx+c$. Since we know the formula, we can solve it analytically as we saw in `basic_integral/example_2.cpp`. But in engineering, we often don't know $f$ so well. In most cases, we only have a series of sample of $f(x)$. For instance, we have $y_0, y_1, \ldots, y_{N-1}$ where $y_i=f(x_i)$ and $x_i=k_1+i\Delta$. In simpler words, we have values of $f(x)$ at $x=k_1, k_1+\Delta, k_1+2\Delta, \ldots, k_1+(N-1)\Delta$.

Under such circumstances, you can't find roots of $f(x)$ analytically and you must do it numerically. Now what's the easiest way of doing this? We have samples of $f(x)$ so we know when it gets close to zero. I leave the rest to you.

# Problem statement
Write a C++ program that solves a quadratic equation both analytically and numerically and compares the result. here is an example:

    Enter a,b and c: 1 -5 4
    How many samples, N? (1 to 1000) 100
    Enter k_1: 0
    Enter Delta: 0.1
    Generating 100 samples between x = 0 and x = 9.9
    Analytic solutions are:
    x1 = 4
    x2 = 1
    Numerically calculated solutions are:
    x=1, y=0
    x=4, y=0

You must use `derivates.cpp` as the main file which calls functions `quad_roots` and `roots_numeric` from `roots.cpp` and `roots.h`
* `quad_roots` gets $a, b$ and $c$ and returns the solutions and the number of solutions.
* `roots_numeric` gets the number of samples $N$ and the array of x-values and y-values of $f(x)$. Then it returns the number of solutions, x-values and y-values of the solutions. (y-values are expected to be very close to zero but they don't have to be exactly zero as this is a numeric calculation)

To learn about how assignments and submissions work, see `readme.md` of the repository.
