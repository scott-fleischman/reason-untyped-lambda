[%bs.raw {|require('./App.css')|}];

let component = ReasonReact.statelessComponent "App";

let make _children => {
  ...component,
  render: fun _self =>
    <div className="App"> <p> (ReasonReact.stringToElement {js|λ|js}) </p> </div>
};
