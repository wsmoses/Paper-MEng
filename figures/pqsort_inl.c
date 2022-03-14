void pqsort(int* start, int* end) {
  if (begin == end) return;
  int* mid = partition(start, end);
  swap(end, mid);
  cilk_spawn pqsort(begin, mid);

  start = mid+1;
  // Begin inlined code
  if (begin == end) goto join;
  mid = partition(start, end);
  swap(end, mid);
  cilk_spawn pqsort(begin, mid);
  pqsort(mid+1, end);
  cilk_sync;///\lilabel{inlined_sync}
  // End inlined code

join:
  cilk_sync;///\lilabel{orig_sync}
  return;
}
