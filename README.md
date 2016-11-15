# Rcpp issue 168

Minimal reproducible example for [Rcpp issue 168](https://github.com/RcppCore/Rcpp/issues/168).

The problem transpires when creating a new `C++` object exposed with a `Rcpp` module.

## Example

After building run the following to trigger an error:

```{r}
Example$new("green")$phrase
# Error in .Object$initialize(...) : 
#  could not find function "cpp_object_initializer"
```

Alternatively, by adding `import(Rcpp)` to `NAMESPACE` file, and re-building:

```{r}
Example$new("green")$phrase
# [1] "green bananas"
```
