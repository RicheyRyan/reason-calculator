let component = ReasonReact.statelessComponent "Division";

let make children => {
  ...component,
  render: fun _self =>
    <svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 64 80" className="icon">
      <path
        d="M64 40.3c0 1.7-1.3 3-3 3H3c-1.7 0-3-1.3-3-3V29.7c0-1.7 1.3-3 3-3h58c1.7 0 3 1.3 3 3z"
      />
      <circle cx="32" cy="11.2" r="11.2" />
      <circle cx="32" cy="58.8" r="11.2" />
    </svg>
};
