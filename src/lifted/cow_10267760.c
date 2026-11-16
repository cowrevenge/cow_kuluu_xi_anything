/* f_0x10267760 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10267760(Guest* g)
{
    double d1;
    uint32_t eax;
    uint32_t edx;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 24u);

    d1 = rdf64(sp0 + 8u);
    if (rdf64(COW_IMG(0x1032a108u)) != d1) goto L_10267779;
    return 0x80070057u;
L_10267779: ;
    wr32(sp0 - 4u, sp0 + 4u);
    g->eax = sp0 + 4u;
    g->edx = in_edx;
    g->esp = sp0;
    t2 = cow_thiscall(g, COW_IMG(0x10267300u), arg1, 1, sp0 + 4u);
    t3 = g->edx;
    if ((int32_t)t2 < 0)
    {
        eax = t2;
        edx = t3;
    }
    else
    {
        wr32(sp0 - 4u, in_esi);
        wr32(sp0 - 8u, in_edi);
        wr32(sp0 - 0xcu, arg3);
        wr32(sp0 - 0x10u, arg2);
        wr32(sp0 - 0x14u, arg1);
        g->eax = arg2;
        g->edx = arg3;
        g->esp = sp0 - 8u;
        t4 = cow_thiscall(g, rd32(rd32(arg1) + 0x44u), rd32(arg1), 3, arg1, arg2, arg3);
        t5 = g->edx;
        wr32(sp0 - 0xcu, arg1);
        g->edx = t5;
        cow_thiscall(g, rd32(rd32(arg1) + 8u), rd32(arg1), 1, arg1);
        t6 = g->edx;
        eax = t4;
        edx = t6;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10267760(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10267760(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
