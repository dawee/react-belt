let keep = (array, predicate) => Belt.Array.keep(array, predicate)->ReasonReact.array; 

let keepMap = (array, predicate) => Belt.Array.keepMap(array, predicate)->ReasonReact.array;

let keepSome = array => keepMap(array, Fun.identity);

let map = (array, predicate) => Belt.Array.map(array, predicate)->ReasonReact.array;

let reduce = (array, predicate) => Belt.Array.reduce(array, predicate)->ReasonReact.array;
