int fib(int n) {
  if (n < 2) return n;
  int x, y;
  x = cilk_spawn fib(n-1);
  y = fib(n-2);
  cilk_sync;
  return x + y;
}
