/* f_0x100e7bd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100e7bd0(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    cow_frame(g, sp0, 552u);

    wr32(rd32(COW_IMG(0x104df770u)) + 0x5ecu, 0u);
    if (rd32(rd32(COW_IMG(0x104df770u)) + 0x3d4u) == 0u)
    {
        eax = rd32(COW_IMG(0x104df770u));
        goto L_100e7bfe;
    }
    eax = rd32(COW_IMG(0x104df770u));
    return 0xffffffffu;
L_100e7bfe: ;
    wr32(sp0 - 0x204u, 0u);
    wr32(sp0 - 0x208u, 0x200u);
    wr32(sp0 - 0x20cu, sp0 - 0x200u);
    wr32(sp0 - 0x210u, 0x14u);
    wr32(eax + 0x3d4u, 1u);
    g->ecx = sp0 - 0x200u;
    g->esp = sp0 - 0x200u;
    cow_cdecl(g, COW_IMG(0x1030ff10u), 4, 0x14u, sp0 - 0x200u, 0x200u, 0u);
    t1 = g->ecx;
    wr32(sp0 - 0x214u, sp0 - 0x200u);
    wr32(sp0 - 0x218u, COW_IMG(0x10361e10u));
    wr32(sp0 - 0x21cu, 0x200u);
    t2 = rd32(COW_IMG(0x104df770u)) + 0x3d8u;
    wr32(sp0 - 0x220u, t2);
    g->edx = sp0 - 0x200u;
    g->esp = sp0 - 0x210u;
    cow_cdecl(g, COW_IMG(0x1031033bu), 4, t2, 0x200u, COW_IMG(0x10361e10u), sp0 - 0x200u);
    t3 = g->edx;
    t4 = rd32(COW_IMG(0x104df770u)) + 0x3d8u;
    wr32(sp0 - 0x224u, t4);
    g->esp = sp0 - 0x220u;
    t5 = cow_cdecl(g, COW_IMG(0x102536d0u), 1, t4);
    t6 = rd32(COW_IMG(0x104df770u));
    wr32(t6 + 0x5e0u, t5);
    wr32(sp0 - 0x204u, COW_IMG(0x100e7cf0u));
    t7 = rd32(COW_IMG(0x104df770u)) + 0x5d8u;
    wr32(sp0 - 0x208u, t7);
    t8 = rd32(COW_IMG(0x104df770u)) + 0x3d8u;
    wr32(sp0 - 0x20cu, t8);
    wr32(sp0 - 0x210u, COW_IMG(0x100f19b0u));
    wr32(sp0 - 0x214u, COW_IMG(0x100f19a0u));
    wr32(sp0 - 0x218u, 0xau);
    g->ecx = t7;
    g->edx = t6;
    g->esp = sp0 - 0x20cu;
    t9 = cow_cdecl(g, COW_IMG(0x100f1280u), 3, 0xau, COW_IMG(0x100f19a0u), COW_IMG(0x100f19b0u));
    t10 = g->ecx;
    t11 = g->edx;
    wr32(sp0 - 0x210u, t9);
    g->edx = t11;
    g->esp = sp0 - 0x200u;
    cow_cdecl(g, COW_IMG(0x100f1340u), 4, t9, rd32(sp0 - 0x20cu), rd32(sp0 - 0x208u), COW_IMG(0x100e7cf0u));
    t12 = g->edx;
    g->edx = t12;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e7bd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e7bd0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
