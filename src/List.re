let keep = (array, predicate) =>
  Belt.List.keep(array, predicate)
  ->Array.of_list
  ->ReasonReact.array;

let keepMap = (array, predicate) =>
  Belt.List.keepMap(array, predicate)
  ->Array.of_list
  ->ReasonReact.array;

let keepSome = array =>
  keepMap(array, Fun.identity);

let map = (array, predicate) =>
  Belt.List.map(array, predicate)
  ->Array.of_list
  ->ReasonReact.array;

let reduce = (array, predicate) =>
  Belt.List.reduce(array, predicate)
  ->Array.of_list
  ->ReasonReact.array;
