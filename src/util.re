module Util = {
  let classList items =>
    items |> List.map (fun (name, flag) => flag ? name : "") |> List.filter (fun s => s !== "") |>
    String.concat " ";
};
