/* f_0x10126840 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10126840(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x10126880u), self, 1, arg1);
    t2 = g->edx;
    if (self != rd32(COW_IMG(0x104e2150u)))
    {
        eax = t1;
        ecx = rd32(COW_IMG(0x104e2150u));
        edx = t2;
        goto L_10126869;
    }
    eax = t1;
    edx = t2;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10126880u), rd32(COW_IMG(0x104e2154u)), 1, arg1);
    return;
L_10126869: ;
    if (self == rd32(COW_IMG(0x104e2154u)))
    {
        g->esp = sp0 - 8u;
        cow_thiscall(g, COW_IMG(0x10126880u), ecx, 1, arg1);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10126840(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10126840(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
