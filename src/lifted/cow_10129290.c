/* f_0x10129290 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10129290(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 0xcu, in_esi);
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_call_regs(g, COW_IMG(0x10129c60u), in_eax, self, g->edx, 1, 0);
    t2 = g->edx;
    wr32(sp0 - 8u, t1);
    if ((uint16_t)t1 == 0xffffu)
    {
        eax = t1;
        edx = t2;
        edi = in_edi;
    }
    else
    {
        edx = t2;
        loc_8 = t1;
        wr32(sp0 - 0x10u, in_edi);
L_101292aa: ;
        wr32(sp0 - 0x14u, sp0 - 4u);
        wr32(sp0 - 0x18u, sp0 - 8u);
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        cow_call_regs(g, COW_IMG(0x101292e0u), sp0 - 4u, self, g->edx, 0, 2, sp0 - 8u, sp0 - 4u);
        t3 = g->edx;
        if ((int32_t)arg1 > (int32_t)rd32(rd32(sp0 - 4u) + 0xcu))
        {
            eax = rd32(sp0 - 4u);
            edx = t3;
        }
        else
        {
            eax = rd32(sp0 - 4u);
            edx = t3;
            wr8(eax + 0x12u, 0u);
        }
        if (rd16(sp0 - 8u) != 0xffffu) goto L_101292aa;
        edi = rd32(sp0 - 0x10u);
    }
    g->edi = edi;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10129290(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10129290(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
