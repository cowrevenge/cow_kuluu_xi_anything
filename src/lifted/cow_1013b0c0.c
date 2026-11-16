/* f_0x1013b0c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_1013b0c0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 32u);

    if (arg2 != 0u) goto L_1013b0d5;
    return 0u;
L_1013b0d5: ;
    wr32(sp0 - 0x18u, in_esi);
    t1 = rd32(self + 0x1cu);
    wr16(sp0 - 8u, (uint16_t)arg1);
    wr32(sp0 - 0x14u, rd32(arg2));
    t2 = rd32(arg2 + 4u);
    wr32(sp0 - 0x10u, t2);
    t3 = rd32(arg2 + 8u);
    wr32(sp0 - 0xcu, t3);
    if (rd16(rd32(t1 + 0x14b4u)) == 4u) goto L_1013b129;
    eax = rd16(rd32(t1 + 0x14b4u)) - 4u;
    ecx = rd32(t1 + 0x14b4u);
    wr16(sp0 - 4u, 0u);
    wr16(sp0 - 6u, 0u);
    if (eax != 1u) goto L_1013b149;
    t4 = rd16(rd32(arg3 + 0x14f8u));
    wr16(sp0 - 2u, (uint16_t)t4);
    ecx = (ecx & 0xffff0000u) | t4;
L_1013b14e: ;
    wr32(sp0 - 0x18u, arg4);
    wr32(sp0 - 0x1cu, sp0 - 0x14u);
    g->eax = sp0 - 0x14u;
    g->esp = sp0 - 0x14u;
    t9 = cow_cdecl(g, COW_IMG(0x100ff140u), 2, sp0 - 0x14u, arg4);
    return t9;
L_1013b129: ;
    t5 = rd32(arg3 + 0x1500u);
    t6 = rd32(arg3 + 0x14fcu);
    t7 = rd16(rd32(arg3 + 0x14fcu));
    wr16(sp0 - 6u, (uint16_t)t7);
    t8 = rd16(t5);
    wr16(sp0 - 4u, (uint16_t)t8);
    ecx = ((t6 | t7) & 0xffff0000u) | t8;
L_1013b149: ;
    wr16(sp0 - 2u, 0u);
    goto L_1013b14e;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1013b0c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1013b0c0(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
