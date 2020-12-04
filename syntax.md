print to console: 
    Console.Write("string");
print to file:
    File.Write("string");

variable declarations:
    >>v int `name` = `value`;
    >>v string `name` = `value`;
    >>v char `name` = `value`;
    >>v bool `name` = `value`;
    >>v float `name` = `value`;

user input:
    Console.Read();
    or
    Console.Read("prompt");

functions:
    definition:
        >>f `return type` name(`parameters`)
        
            >>r `return value`;
        f<<
    calling:
        name(`parameters`);

data structures:
    arrays:
        declaration:
            >>a `name`[`type`];
        calling:
            `name`[`index`];
    list:
        declaration:
            >>l `name`[`type`];
        calling:
            `name`[`index`];
    dictionaries:
        definition:
            >>d `name`<`type-key`, `type-value`>;
        calling:
            `name`.get(`key`);
            `name`.set(`key`, `value`);
    classes:
        >>c `name` 
        
            `code`
        <<c
        or
        >>c `name` extends `extending class`
        
            `code`
        <<c
