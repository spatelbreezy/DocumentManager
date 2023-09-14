#include <stdio.h>
#include <string.h>
#include "document.h"

int main() {
   Document doc;
   init_document(&doc, "Meep");

   printf("Initial Document:\n");
   print_document(&doc);
   printf("\n");

   add_paragraph_after(&doc, 0);
   add_line_after(&doc, 1, 0, "This is an apple.");
   add_line_after(&doc, 1, 1, "I have an apple.");
   add_paragraph_after(&doc, 1);
   add_line_after(&doc, 2, 0, "An apple a day keeps the doctor away.");
   add_line_after(&doc, 2, 1, "I like apples.");

   printf("Test Case 1 - remove_text:\n");
   printf("Before removing 'apple':\n");
   print_document(&doc);
   remove_text(&doc, "apple");
   printf("After removing 'apple':\n");
   print_document(&doc);
   printf("\n");

   highlight_text(&doc, "day");

   printf("Test Case 2 - highlight_text:\n");
   printf("After highlighting 'day':\n");
   print_document(&doc);
   printf("\n");

   replace_text(&doc, "like", "love");

   printf("Test Case 3 - replace_text:\n");
   printf("After replacing 'like' with 'love':\n");
   print_document(&doc);
   printf("\n");

   remove_text(&doc, "an");
   highlight_text(&doc, "doctor");
   replace_text(&doc, "keeps", "helps");

   printf("Test Case 4 - Combination of remove_text, highlight_text, and replace_text:\n");
   printf("After removing 'an', highlighting 'doctor', and replacing 'keeps' with 'helps':\n");
   print_document(&doc);
   printf("\n");

   return 0;
}
