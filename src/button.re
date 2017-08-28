open Util;

let component = ReasonReact.statelessComponent "Button";

let make ::double=false ::action=false _children => {
  ...component,
  render: fun _self =>
    <div className=(Util.classList [("button", true), ("double", double), ("action", action)])>
      (ReasonReact.arrayToElement _children)
    </div>
};
