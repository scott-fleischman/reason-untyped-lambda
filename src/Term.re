let component = ReasonReact.statelessComponent "Term";

let make ::term context::(context: TermData.context) _children => {
  let rec content term' =>
    switch term' {
    | TermData.Variable index =>
      <span> (ReasonReact.stringToElement context.variables.(index)) </span>
    | TermData.Abstraction (index, term) =>
      <span>
        (ReasonReact.stringToElement ({js|λ|js} ^ context.variables.(index) ^ "."))
        (content term)
      </span>
    | TermData.Application (leftTerm, rightTerm) =>
      <span> (content leftTerm) (ReasonReact.stringToElement " ") (content rightTerm) </span>
    };
  {
    ...component,
    render: fun _self =>
      <div>
        (ReasonReact.stringToElement "(")
        (content term)
        (ReasonReact.stringToElement ")")
      </div>
  }
};
