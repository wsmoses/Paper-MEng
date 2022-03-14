void foo() {
  #pragma omp parallel sections
  {
    #pragma omp section
    { bar(); }
    #pragma omp section
    { baz(); }
  }
}
