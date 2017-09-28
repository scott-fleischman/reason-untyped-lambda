[%bs.raw {|require('./App.css')|}];

let component = ReasonReact.statelessComponent "App";

let make _children => {
  let term = TermData.Abstraction (1, TermData.Abstraction (0, TermData.Variable 0));
  let context = {TermData.variables: [|"y", "x"|]};
  {...component, render: fun _self => <div className="App"> <Term term context /> </div>}
};
