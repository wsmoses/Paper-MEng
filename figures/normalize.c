__attribute__((const))
double norm(const double *A, int n);

void normalize(double *restrict out,
               const double *restrict in, int n) {
  cilk_for (int i = 0; i < n; ++i)///\lilabel{cilk_for(}
    out[i] = in[i] / norm(in, n);///\lilabel{normalize_element}\lilabel{cilk_for)}
}
