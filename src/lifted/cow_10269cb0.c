/* f_0x10269cb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10269cb0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 0x14u) == 0u)
    {
        eax = rd32(self + 0x14u);
        ecx = self;
        goto L_10269ccb;
    }
    eax = rd32(self + 0x14u);
    t1 = rd32(eax + 4u);
    wr32(self + 0x14u, t1);
    t2 = rd32(self + 0x10u) - 1u;
    wr32(self + 0x10u, t2);
    if (eax != 0u) goto L_10269cdd;
    ecx = t2;
L_10269ccb: ;
    g->eax = eax;
    g->esp = sp0 - 4u;
    t3 = cow_cdecl(g, COW_IMG(0x10311bfbu), 1, 0xcu);
    if (t3 != 0u)
    {
        eax = t3;
        goto L_10269cdd;
    }
    return;
L_10269cdd: ;
    wr32(eax + 4u, 0u);
    wr32(eax + 8u, arg1);
    t4 = rd32(self + 4u);
    wr32(eax, t4);
    if (rd32(self + 4u) != 0u)
    {
        ecx = rd32(self + 4u);
        goto L_10269d07;
    }
    t5 = rd32(self + 8u);
    wr32(self, eax);
    wr32(self + 4u, eax);
    wr32(self + 8u, t5 + 1u);
    return;
L_10269d07: ;
    wr32(ecx + 4u, eax);
    t6 = rd32(self + 8u);
    wr32(self + 4u, eax);
    wr32(self + 8u, t6 + 1u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10269cb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10269cb0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
