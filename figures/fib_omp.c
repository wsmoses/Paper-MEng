int fib(int n) {
  if (n < 2) return n;
  int x, y;
  #pragma omp task shared(x) ///\lilabel{fib_omp_task}
  x = fib(n - 1);
  #pragma omp task shared(y)
  y = fib(n - 2);
  #pragma omp taskwait///\lilabel{fib_omp_wait}
  return x + y;
}
