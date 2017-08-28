[%bs.raw {|require('./app.css')|}];

let component = ReasonReact.statelessComponent "App";

let make _children => {
  ...component,
  render: fun _self =>
    <div className="app">
      <div className="app-header"> <h2> (ReasonReact.stringToElement "Calculator") </h2> </div>
      <Calculator />
    </div>
};
