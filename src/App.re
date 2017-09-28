[%bs.raw {|require('./App.css')|}];

let component = ReasonReact.statelessComponent "App";

let make _children => {
  let text = {js|λ|js};
  {...component, render: fun _self => <div className="App"> <Term text /> </div>}
};
