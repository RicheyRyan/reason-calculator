type state = {
  buffer: string,
  currentValue: string
};

let component = ReasonReact.statefulComponent "Calculator";

let onClick num _event {ReasonReact.state: state} =>
  ReasonReact.Update {...state, currentValue: num};

let make _children => {
  ...component,
  initialState: fun () => {buffer: "", currentValue: "0"},
  render: fun {state, update} =>
    <div className="calculator">
      <div className="calculator-body">
        <Display currentValue=state.currentValue />
        <Button> (ReasonReact.stringToElement "7") </Button>
        <Button> (ReasonReact.stringToElement "8") </Button>
        <Button> (ReasonReact.stringToElement "9") </Button>
        <Button action=true> <Division /> </Button>
        <Button> (ReasonReact.stringToElement "4") </Button>
        <Button> (ReasonReact.stringToElement "5") </Button>
        <Button> (ReasonReact.stringToElement "6") </Button>
        <Button action=true> <Multiplication /> </Button>
        <Button> (ReasonReact.stringToElement "1") </Button>
        <Button> (ReasonReact.stringToElement "2") </Button>
        <Button> (ReasonReact.stringToElement "3") </Button>
        <Button action=true> <Subtraction /> </Button>
        <Button double=true> (ReasonReact.stringToElement "0") </Button>
        <Button />
        <Button action=true> <Addition /> </Button>
        <Button action=true> (ReasonReact.stringToElement "AC") </Button>
        <Button action=true> <Equal /> </Button>
      </div>
    </div>
};
