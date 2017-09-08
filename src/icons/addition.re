let component = ReasonReact.statelessComponent "Addition";

let make children => {
  ...component,
  render: fun _self =>
    <svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 64 80" className="icon">
      <path
        d="M64 37.313c0 1.657-1.343 3-3 3H3c-1.657 0-3-1.343-3-3V26.688c0-1.657 1.343-3 3-3h58c1.657 0 3 1.343 3 3v10.625z"
      />
      <path
        d="M37.313 64c1.657 0 3-1.343 3-3V3c0-1.657-1.343-3-3-3H26.688c-1.657 0-3 1.343-3 3v58c0 1.657 1.343 3 3 3h10.625z"
      />
    </svg>
};
