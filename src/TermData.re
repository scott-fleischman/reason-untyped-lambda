type term =
  | Variable int
  | Abstraction string term
  | Application term term;
