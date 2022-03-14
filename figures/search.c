void search(int low, int high) {
  if (low == high) search_base(low);
  else {
    cilk_spawn search(low, (low+high)/2);///\lilabel{search_expr}
    search((low+high)/2 + 1, high);///\lilabel{search_dupexpr}
    cilk_sync;
} }
