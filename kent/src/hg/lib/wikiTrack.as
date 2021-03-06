table wikiTrack
"wikiTrack bed 6+ structure, user annotations"
    (
    ushort bin;        "used for efficient position indexing"
    string chrom;      "Reference sequence chromosome or scaffold"
    uint   chromStart; "Start position in chromosome"
    uint   chromEnd;   "End position in chromosome"
    string name;       "Name of item"
    uint   score;      "(currently unused) Score from 0-1000"
    char[1] strand;    "+ or -"
    string db;         "database for item"
    string owner;      "wiki user name creator of item"
    string color;        "rgb color of item"
    string class;        "(currently unused) classification of item (browser group)"
    string creationDate;      "date item created"
    string lastModifiedDate;  "(see wiki page history, not maintained here)"
    string descriptionKey;    "name of wiki description page"
    uint id;	       "auto-increment item ID"
    string geneSymbol;    "knownGene kgXref geneSymbol name"
    )
