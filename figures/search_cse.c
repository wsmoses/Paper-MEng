void search(int low, int high) {
  if (low == high) search_base(low);
  else {
    int mid = (low+high)/2; ///\lilabel{search_cse_call}
    cilk_spawn search(low, mid);
    search(mid + 1, high);
    cilk_sync;
} }
