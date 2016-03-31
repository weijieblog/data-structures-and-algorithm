#include <stdio.h>
#include "set.h"

int match (const void *key1, const void *key2) {
  const int* ip1 = key1;
  const int* ip2 = key2;
  if (*ip1 == *ip2)
    return 1;
  return 0;
}

int main(int argc, char **argv) {
  Set *testSet = malloc(sizeof(Set));

  // test set_init
  set_init(testSet, match, NULL);
  printf("'set_init' is pass ? %d \n", testSet->head == NULL &&
                                       testSet->tail == NULL &&
                                       testSet->size == 0);
  // test set_insert
  int testData1 = 1;
  int testData2 = 1;
  set_insert(testSet, &testData1);
  set_insert(testSet, &testData2);
  printf("'set_insert' is pass ? %d \n",set_size(testSet) == 1);
  


  // test set_is_member
  // TODO
  
  // test set_remove
  // TODO

  // test set_destory
  set_destory(testSet);
  printf("'set_destory' is pass? %d \n", testSet->size == 0);
  return 0;
}
