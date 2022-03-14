__attribute__((const))
double norm(const double *A, int n);

void normalize(double *restrict out,
               const double *restrict in, int n) {
  #pragma omp parallel for
  for (int i = 0; i < n; ++i)
    out[i] = in[i] / norm(in, n);///\lilabel{omp_normalize_element}
}
