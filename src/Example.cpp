#include <Rcpp.h>
using namespace Rcpp;
using namespace std;

class Example {
public:
  string phrase;
  Example(string word);
};

Example::Example(string word) {
  this->phrase = word + " bananas";
}

RCPP_EXPOSED_CLASS(Example)

RCPP_MODULE(Example_module)
{
  class_<Example>("Example")
  .constructor<string>("Make example class")
  .field_readonly("phrase", &Example::phrase);
}
