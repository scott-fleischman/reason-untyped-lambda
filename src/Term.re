let component = ReasonReact.statelessComponent "Term";

let make ::text _children => {
  ...component,
  render: fun _self => <div> (ReasonReact.stringToElement text) </div>
};
