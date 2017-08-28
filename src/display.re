let component = ReasonReact.statelessComponent "Display";

let make ::currentValue _children => {
  ...component,
  render: fun _self => <div className="display"> (ReasonReact.stringToElement currentValue) </div>
};
