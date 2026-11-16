/* f_0x10018a50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10018a50(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 16u);

    wr32(sp0 - 4u, in_esi);
    wr32(self, COW_IMG(0x10329fdcu));
    wr32(self + 4u, 0u);
    if (arg1 == 0u) goto L_10018a98;
    if (arg1 == 2u) goto L_10018a84;
    if (arg1 != 3u) goto L_10018ad7;
    if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) < 0) goto L_10018ad7;
    eax = 0xdb67u;
L_10018a9d: ;
    wr32(sp0 - 8u, eax);
    wr32(sp0 - 0xcu, sp0 + 4u);
    g->eax = eax;
    g->edx = sp0 + 4u;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x100731b0u), rd32(COW_IMG(0x1047d128u)), 2, sp0 + 4u, eax);
    t2 = g->edx;
    t3 = rd32(t1);
    wr32(self + 4u, t3);
    if (t3 == 0u)
    {
        eax = t3;
        edx = t2;
    }
    else
    {
        eax = t3;
        edx = t2;
        g->edx = edx;
        g->esp = sp0 - 4u;
        cow_call_regs(g, COW_IMG(0x10071e90u), eax, rd32(eax), g->edx, 1, 0);
        t4 = g->edx;
        wr32(sp0 - 8u, COW_IMG(0x10350fd8u));
        g->edx = t4;
        t5 = cow_thiscall(g, COW_IMG(0x10120450u), COW_IMG(0x104e1bf8u), 1, COW_IMG(0x10350fd8u));
        t6 = g->edx;
        wr32(self + 8u, t5);
        eax = t5;
        edx = t6;
    }
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10018b30u), self, 0);
L_10018ad7: ;
    return self;
L_10018a84: ;
    if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) < 0) goto L_10018ad7;
    eax = 0xd9c3u;
    goto L_10018a9d;
L_10018a98: ;
    eax = 0x9a6bu;
    goto L_10018a9d;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10018a50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10018a50(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
