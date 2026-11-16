/* f_0x10228300 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10228300(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    edx = in_edx;
    esi = self + 8u;
    edi = 0x20u;
L_1022830d: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x102270e0u), esi, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t3;
    }
    else
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        g->eax = eax;
        g->esp = sp0 - 0xcu;
        t4 = cow_fastcall(g, COW_IMG(0x102270b0u), ecx, edx, 0);
        t5 = g->edx;
        eax = t4;
        edx = t5;
    }
    if (edi != 1u)
    {
        esi = esi + 0x10u;
        edi = edi - 1u;
        goto L_1022830d;
    }
    wr8(self + 4u, 0u);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10228300(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10228300(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
