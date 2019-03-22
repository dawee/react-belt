let keep = (array, predicate) =>
  Belt.List.keep(array, predicate)
  ->Belt.List.toArray
  ->ReasonReact.array;

let keepMap = (array, predicate) =>
  Belt.List.keepMap(array, predicate)
  ->Belt.List.toArray
  ->ReasonReact.array;

let keepSome = array =>
  keepMap(array, Fun.identity);

let map = (array, predicate) =>
  Belt.List.map(array, predicate)
  ->Belt.List.toArray
  ->ReasonReact.array;

let reduce = (array, initial, predicate) =>
  Belt.List.reduce(array, initial, predicate)
  ->Belt.List.toArray
  ->ReasonReact.array;
