void racey() {
  int x = 0;
  cilk_spawn { x = 1; }///\lilabel{set_x}
  while( x == 0 );///\lilabel{while_loop}
  foo();///\lilabel{call_foo}
  cilk_sync;///\lilabel{sync}
  printf("%d\n", x);///\lilabel{print}
}
