let component = ReasonReact.statelessComponent "Division";

let make children => {
  ...component,
  render: fun _self =>
    <svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 64 80" className="icon">
      <path
        d="M64 37.313c0 1.658-1.343 3-3 3H3c-1.657 0-3-1.342-3-3V26.688c0-1.657 1.343-3 3-3h58c1.657 0 3 1.343 3 3v10.625z"
      />
      <circle cx="32" cy="11.167" r="11.167" />
      <circle cx="32" cy="52.833" r="11.167" />
    </svg>
};
