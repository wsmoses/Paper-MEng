int fib(int n) {
  if (n < 2) return n;
  int x, y;
  x = cilk_spawn fib(n - 1);///\lilabel{fib_spawn}
  y = fib(n - 2);///\lilabel{fib_call}
  cilk_sync;///\lilabel{fib_sync}
  return x + y;
}
