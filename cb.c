#include <inttypes.h>
#include <criterion/criterion.h>

uint64_t descendingOrder(uint64_t n)
{
  printf("%d\n", n);
  return n;
}

uint64_t Test(descendingOrder, should_work_on_several_examples) {
    cr_assert_eq(descendingOrder(0), 0);
    cr_assert_eq(descendingOrder(1), 1);
    cr_assert_eq(descendingOrder(15), 51);
    cr_assert_eq(descendingOrder(1021), 2110);
    cr_assert_eq(descendingOrder(123456789), 987654321);
}
