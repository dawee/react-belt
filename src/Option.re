let map = Belt.Option.mapWithDefault(ReasonReact.null);

let fromBool = value => value ? Some(()) : None;
