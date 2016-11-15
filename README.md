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

```{r}
sessionInfo()
# R version 3.3.2 (2016-10-31)
# Platform: x86_64-apple-darwin13.4.0 (64-bit)
# Running under: macOS Sierra 10.12.1
# 
# locale:
# [1] en_CA.UTF-8/en_CA.UTF-8/en_CA.UTF-8/C/en_CA.UTF-8/en_CA.UTF-8
# 
# attached base packages:
# [1] stats     graphics  grDevices utils     datasets  methods   base     
# 
# loaded via a namespace (and not attached):
# [1] tools_3.3.2
packageVersion("Rcpp")
# [1] ‘0.12.7’
```
