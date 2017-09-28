type term =
  | Variable int
  | Abstraction (int, term)
  | Application (term, term);

type context = {variables: array string};
