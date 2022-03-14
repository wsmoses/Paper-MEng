void pqsort(int* start, int* end) {
pqsort_start:
  if (begin == end) {
    cilk_sync;
    return;
  }
  int* mid = partition(start, end);
  swap(end, mid);
  cilk_spawn pqsort(begin, mid);
  start = mid+1;
  goto pqsort_start;
}
