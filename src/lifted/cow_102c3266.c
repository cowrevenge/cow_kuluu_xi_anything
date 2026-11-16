/* f_0x102c3266 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102c3266(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t esi;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd8(arg1 + 9u) < 8u)
    {
        ecx = (self & 0xffffff00u) | rd8(arg1 + 9u);
        if ((uint8_t)ecx != 1u)
        {
            eax = arg2 + rd32(arg1 + 4u);
            goto L_102c3286;
        }
        eax = arg2 + rd32(arg1 + 4u);
        esi = COW_IMG(0x103c8108u);
L_102c329c: ;
        if (arg2 >= eax) goto L_102c32b1;
        ecx = arg2;
L_102c32a4: ;
        wr8(ecx, rd8(esi + rd8(ecx)));
        if (ecx + 1u < eax)
        {
            ecx = ecx + 1u;
            goto L_102c32a4;
        }
    }
L_102c32b1: ;
    return;
L_102c3286: ;
    if ((uint8_t)ecx != 2u) goto L_102c3292;
    esi = COW_IMG(0x103c8208u);
    goto L_102c329c;
L_102c3292: ;
    if ((uint8_t)ecx != 4u) goto L_102c32b1;
    esi = COW_IMG(0x103c8308u);
    goto L_102c329c;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c3266(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102c3266(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
