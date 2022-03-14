void pmerge(int *C, int *A, int na, int *B, int nb) {
  if (na < nb) pmerge(C, B, nb, A, na);
  else if (na > 0) {
    int ma = na/2;
    int mb = binary_search(A[ma], B, nb);
    C[ma+mb] = A[ma];
    cilk_spawn pmerge(C, A, ma, B, mb);
    pmerge(C+ma+mb+1, A+ma+1, na-ma-1, B+mb, nb-mb);///\lilabel{pmerge_tail_call}
    cilk_sync;
  }
}
