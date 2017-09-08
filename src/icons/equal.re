let component = ReasonReact.statelessComponent "Equal";

let make children => {
  ...component,
  render: fun _self =>
    <svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 64 80" className="icon">
      <path
        d="M64 24.646c0 1.657-1.343 3-3 3H3c-1.657 0-3-1.343-3-3V14.02c0-1.656 1.343-3 3-3h58c1.657 0 3 1.344 3 3v10.626zM64 49.98c0 1.657-1.343 3-3 3H3c-1.657 0-3-1.343-3-3V39.353c0-1.656 1.343-3 3-3h58c1.657 0 3 1.344 3 3V49.98z"
      />
    </svg>
};
