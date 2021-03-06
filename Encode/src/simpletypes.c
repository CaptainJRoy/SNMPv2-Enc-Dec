
#include <simpletypes.h>

SimpleSyntax_t* create_SimpleInteger(long integerValue) {
    SimpleSyntax_t* simple;
    simple = calloc(1, sizeof(SimpleSyntax_t));
    simple -> present = SimpleSyntax_PR_integer_value;
    simple -> choice.integer_value = integerValue;
    return simple;
}

SimpleSyntax_t* create_SimpleString(char* stringValue) {
    SimpleSyntax_t* simple;
    OCTET_STRING_t* octetString = malloc(sizeof(OCTET_STRING_t));
    int res = OCTET_STRING_fromString(octetString, stringValue);
    simple = calloc(1, sizeof(SimpleSyntax_t));
    if(res < 0) {
        simple -> present = SimpleSyntax_PR_NOTHING;
        return simple;
    }
    simple -> present = SimpleSyntax_PR_string_value;
    simple -> choice.string_value = *octetString;
    return simple;
}

SimpleSyntax_t* create_SimpleObjectID(OBJECT_IDENTIFIER_t oid) {
    SimpleSyntax_t* simple;
    simple = calloc(1, sizeof(SimpleSyntax_t));
    simple -> present = SimpleSyntax_PR_objectID_value;
    simple -> choice.objectID_value = oid;
    return simple;
}
