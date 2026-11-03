/* f_100083b0 - move a counter the caller owns, if the object says counting is on.

   The generated original (generated/all/funcs_000.c:55114) is:

     100083b0  mov eax, dword ptr [esp + 4]      ; arg0: the object
     100083b4  test byte ptr [eax + 0x1c], 1
     100083b8  je  0x100083c0                    ; bit 0 clear -> no increment
     100083ba  mov eax, dword ptr [esp + 8]      ; arg1: pointer to the counter
     100083be  inc dword ptr [eax]               ; (*arg1)++
     100083c0  mov eax, 1                        ; always returns 1
     100083c5  ret 8                             ; stdcall, two arguments

   Two things deliberately NOT done here, both because the original does not do them and cowdiff
   compares behaviour, not intent: no null check on either argument (the original dereferences both,
   so a bad pointer must fail the same way it fails in the game), and no flag setting (the caller
   cannot see flags across a call, and the contract in docs/cow/STYLE.md does not include them).

   The name is a guess - see cow/names.csv and docs/cow/NAMES_TODO.md. Until it is confirmed the file
   stays in src/unsorted/, which is where a function with an unproven purpose belongs.
*/
#include "cow.h"

uint32_t cow_incr_counter_if_active(cow_counted_obj_h obj, CowCounter* counter)
{
    CowCountedObj* o = cow_counted_obj_h_get(obj);

    if ((o->flags_1c & COW_COUNTED_FLAGS_ACTIVE) != 0u)
        *counter += 1u;
    return 1u;
}

/* COW_ADAPTER BEGIN - the marshalling half of this entry: generated shape, not a reading of the
   game, and the readability gate skips this block. stdcall (obj, counter), callee pops 8. */
void cow_adapter_100083b0(Guest* g)
{
    cow_counted_obj_h obj;
    CowCounter* counter;
    uint32_t eax;

    obj.v = rt_arg(g, 0);
    counter = COW_AS(CowCounter, rt_arg(g, 1));
    eax = cow_incr_counter_if_active(obj, counter);
    rt_return(g, eax, 8); /* eax = 1, esp += 4 + 8: exactly the original's `mov eax,1 / ret 8` */
}
/* COW_ADAPTER END */
