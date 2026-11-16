/* f_0x101ba1c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101ba1c0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    wr32(self, COW_IMG(0x10337b28u));
    if (rd32(self + 4u) != 0u)
    {
        ecx = rd32(self + 4u);
        g->eax = rd32(ecx);
        t1 = rd32(ecx);
        t2 = rd32(ecx + 0x120u);
        g->esp = sp0 - 4u;
        t3 = cow_thiscall(g, rd32(t1), ecx, 1, 1u);
        if (t2 == 0u) goto L_101ba1f0;
        eax = t3;
        esi = t2;
L_101ba1de: ;
        g->eax = eax;
        t4 = rd32(esi + 0x120u);
        g->esp = sp0 - 4u;
        t5 = cow_thiscall(g, rd32(rd32(esi)), esi, 1, 1u);
        if (t4 != 0u)
        {
            eax = t5;
            esi = t4;
            goto L_101ba1de;
        }
    }
L_101ba1f0: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ba1c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101ba1c0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
