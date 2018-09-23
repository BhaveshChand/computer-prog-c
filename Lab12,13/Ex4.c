typedef char elementT;
typedef struct nodeTag {
elementT element;
struct nodeTag *next;
} nodeT;

void ListDelete(nodeT **listP, elementT value) {
nodeT *currP, *prevP;
// For 1st node, indicate there is no previous
prevP = NULL;
// Visit each node, maintaining a pointer to the previous node visited
for (currP = *listP; currP != NULL; prevP = currP, currP = currP->next) {
if (currP->element == value) { // Found it
if (prevP == NULL) { // Fix beginning pointer
*listP = currP->next;
} else {
// Fix previous node's next to skip over the removed node
prevP->next = currP->next;
}
// Deallocate the node
free(currP);
// Done searching
return;
}
}
}