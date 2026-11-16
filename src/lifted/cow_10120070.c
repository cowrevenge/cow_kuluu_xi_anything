/* f_0x10120070 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10120070(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 20u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, in_edi);
    g->edx = in_edx;
    t1 = rd32(self + 0x14u);
    g->esp = sp0 - 0xcu;
    t2 = cow_thiscall(g, COW_IMG(0x10126500u), self + 4u, 0);
    t3 = g->edx;
    wr32(sp0 - 4u, t2);
    if ((int32_t)t1 <= 0)
    {
        eax = t2;
        loc_4 = t2;
        goto L_101200a2;
    }
    edx = t3;
    edi = t1;
    loc_4 = t2;
L_10120088: ;
    wr32(sp0 - 0x10u, sp0 - 4u);
    g->eax = sp0 - 4u;
    g->esp = sp0 - 0xcu;
    t4 = cow_call_regs(g, COW_IMG(0x10126520u), g->eax, g->ecx, edx, 0, 1, sp0 - 4u);
    t5 = g->edx;
    if (t4 == 0u)
    {
        eax = t4;
        edx = t5;
    }
    else
    {
        eax = t4;
        edx = t5;
        g->eax = eax;
        g->esp = sp0 - 0xcu;
        t6 = cow_fastcall(g, COW_IMG(0x1011e6d0u), eax, edx, 0);
        t7 = g->edx;
        eax = t6;
        edx = t7;
    }
    if (edi != 1u)
    {
        edi = edi - 1u;
        goto L_10120088;
    }
L_101200a2: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10120070(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10120070(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
