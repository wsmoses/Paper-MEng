void foo() {
  #pragma omp task
  { bar(); }
  baz();
  #pragma omp taskwait
}
