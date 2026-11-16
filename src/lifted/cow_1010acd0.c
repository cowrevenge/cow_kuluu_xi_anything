/* f_0x1010acd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1010acd0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 20u);

    wr32(sp0 - 0xcu, in_esi);
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x10109110u), sp0 - 8u, 0);
    t1 = g->edx;
    if (rd32(self + 0x18u) == 0u)
    {
        eax = rd32(self + 0x18u);
        edx = t1;
        goto L_1010acfb;
    }
    eax = rd32(self + 0x18u);
    edx = t1;
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_1010acf4;
    }
    eax = eax - 1u;
    if (eax != 1u) goto L_1010ad09;
    eax = eax - 1u;
    wr32(sp0 - 0x10u, COW_IMG(0x1036bf0cu));
    loc_10 = COW_IMG(0x1036bf0cu);
L_1010ad00: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x101093b0u), sp0 - 8u, 1, loc_10);
    t2 = g->edx;
    edx = t2;
L_1010ad09: ;
    if (rd32(self + 0x1cu) > 5u) goto L_1010ad49;
    eax = rd32(self + 0x1cu);
    t3 = rd32(COW_IMG(0x1010ad6cu) + eax * 4u);
    switch (t3 - RD)
    {
    case 0x1010ad18u: goto L_1010ad18;
    case 0x1010ad1fu: goto L_1010ad1f;
    case 0x1010ad26u: goto L_1010ad26;
    case 0x1010ad2du: goto L_1010ad2d;
    case 0x1010ad34u: goto L_1010ad34;
    case 0x1010ad3bu: goto L_1010ad3b;
    default: rt_fatal(g, COW_IMG(0x1010ad11u), "switch");
    }
    return 0;
L_1010acf4: ;
    wr32(sp0 - 0x10u, COW_IMG(0x1036bf10u));
    loc_10 = COW_IMG(0x1036bf10u);
    goto L_1010ad00;
L_1010acfb: ;
    wr32(sp0 - 0x10u, COW_IMG(0x1036bf14u));
    loc_10 = COW_IMG(0x1036bf14u);
    goto L_1010ad00;
L_1010ad18: ;
    wr32(sp0 - 0x10u, COW_IMG(0x1036bf08u));
    loc_10 = COW_IMG(0x1036bf08u);
L_1010ad40: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x101093b0u), sp0 - 8u, 1, loc_10);
    t4 = g->edx;
    edx = t4;
L_1010ad49: ;
    wr32(sp0 - 0x10u, sp0 - 8u);
    g->eax = sp0 - 8u;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t5 = cow_thiscall(g, COW_IMG(0x101091b0u), arg1, 1, sp0 - 8u);
    t6 = g->edx;
    cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 8u, 0);
    return arg1;
L_1010ad1f: ;
    wr32(sp0 - 0x10u, COW_IMG(0x1036bf04u));
    loc_10 = COW_IMG(0x1036bf04u);
    goto L_1010ad40;
L_1010ad26: ;
    wr32(sp0 - 0x10u, COW_IMG(0x1036bf00u));
    loc_10 = COW_IMG(0x1036bf00u);
    goto L_1010ad40;
L_1010ad2d: ;
    wr32(sp0 - 0x10u, COW_IMG(0x1036befcu));
    loc_10 = COW_IMG(0x1036befcu);
    goto L_1010ad40;
L_1010ad34: ;
    wr32(sp0 - 0x10u, COW_IMG(0x1036bef8u));
    loc_10 = COW_IMG(0x1036bef8u);
    goto L_1010ad40;
L_1010ad3b: ;
    wr32(sp0 - 0x10u, COW_IMG(0x1036bef4u));
    loc_10 = COW_IMG(0x1036bef4u);
    goto L_1010ad40;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1010acd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1010acd0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
