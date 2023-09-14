#include <stdio.h>
#include <string.h>
#include "document.h"

int main() {
    Document doc;
    init_document(&doc, "Meep");

    printf("Initial Document:\n");
    print_document(&doc);

    add_paragraph_after(&doc, 0);
    add_paragraph_after(&doc, 1);

    printf("\nAfter add_paragraph_after:\n");
    print_document(&doc);

    add_line_after(&doc, 0, 0, "is app131.  This course will be");
    add_line_after(&doc, 0, 1, "the result will be");
    add_line_after(&doc, 1, 0, "is app131.  This course will be");

    printf("\nAfter add_line_after:\n");
    print_document(&doc);

    remove_text(&doc, "app");

    printf("\nAfter remove_text:\n");
    print_document(&doc);

    highlight_text(&doc, "ap");

    printf("\nAfter highlight_text:\n");
    print_document(&doc);

    replace_text(&doc, "ap", "AP");

    printf("\nAfter replace_text:\n");
    print_document(&doc);

    return 0;
}
