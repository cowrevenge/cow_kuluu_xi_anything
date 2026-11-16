/* f_0x10132270 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10132270(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    const uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = in_eax;
        goto L_101322a8;
    }
    ecx = rd32(COW_IMG(0x104dfd98u));
    if ((int8_t)arg1 < 0)
    {
        eax = (in_eax & 0xffffff00u) | (uint8_t)arg1;
        goto L_101322a8;
    }
    if ((int8_t)arg1 >= 16)
    {
        eax = (in_eax & 0xffffff00u) | (uint8_t)arg1;
        goto L_101322a8;
    }
    if (rd8(ecx + (uint32_t)(int8_t)arg1 * 8u + 0x19a58u) == 0u)
    {
        eax = (uint32_t)(int8_t)arg1;
        goto L_101322a8;
    }
    t1 = rd8(ecx + (uint32_t)(int8_t)arg1 * 8u + 0x19a59u);
    if ((int32_t)t1 < 0)
    {
        eax = t1;
        goto L_101322a8;
    }
    eax = t1;
    if ((int32_t)eax < 18) goto L_101322ab;
L_101322a8: ;
    eax = 0xffffffffu;
L_101322ab: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10132270(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10132270(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
