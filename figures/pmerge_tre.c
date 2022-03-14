void pmerge_tre(int *C, int *A, int na, int *B, int nb) {
pmerge_start:
  if (na < nb) pmerge_tre(C, B, nb, A, na);
  else if (na > 0) {
    int ma = na/2;
    int mb = binary_search(A[ma], B, nb);
    C[ma+mb] = A[ma];
    cilk_spawn pmerge_tre(C, A, ma, B, mb);
    C += ma + mb + 1;
    A += ma + 1;  na = na - ma - 1;
    B += mb;  nb = nb - mb;
    goto pmerge_start;
  }
  cilk_sync;
}
