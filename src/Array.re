let keep = (array, predicate) => array->Belt.Array.keep(predicate)->ReasonReact.array; 

let keepMap = (array, predicate) => array->Belt.Array.keepMap(predicate)->ReasonReact.array;

let keepSome = array => array->keepMap(Fun.identity);

let map = (array, predicate) => array->Belt.Array.map(predicate)->ReasonReact.array;

let reduce = (array, initial, predicate) => array->Belt.Array.reduce(initial, predicate)->ReasonReact.array;
