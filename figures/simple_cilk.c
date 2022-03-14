void foo(void) {
  cilk_spawn bar();///\lilabel{spawn_bar}
  baz();///\lilabel{call_baz}
  cilk_sync;///\lilabel{sync}
}
