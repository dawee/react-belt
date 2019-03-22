let map = (optional, predicate) => optional->Belt.Option.mapWithDefault(ReasonReact.null, predicate);
