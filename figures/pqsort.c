void pqsort(int* start, int* end) {
  if (begin == end) return;
  int* mid = partition(start, end);
  swap(end, mid);
  cilk_spawn pqsort(begin, mid);
  pqsort(mid+1, end);///\lilabel{pqsort_tail_call}
  cilk_sync;
  return;
}
