#include "DoublyLinkedList.h"

NODE InsertAfter(LIST L, NODE Tar, NODE New){
  New->Succ = Tar->Succ;
  Tar->Succ = New;
  New->Pred = Tar;
  return New;
}
