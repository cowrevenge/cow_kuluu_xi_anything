/* f_0x1019db70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1019db70(Guest* g)
{
    uint32_t edx;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint16_t)arg1 != 5u) goto L_1019dc1c;
    if ((uint32_t)(int16_t)arg2 - 1u > 0xcu) goto L_1019dc2e;
    t1 = rd32(COW_IMG(0x1019dc34u) + rd8(COW_IMG(0x1019dc4cu) + (uint32_t)(int16_t)arg2 - 1u) * 4u);
    switch (t1 - RD)
    {
    case 0x1019dba0u: edx = rd8(COW_IMG(0x1019dc4cu) + (uint32_t)(int16_t)arg2 - 1u); goto L_1019dba0;
    case 0x1019dbc6u: goto L_1019dbc6;
    case 0x1019dbd2u: edx = rd8(COW_IMG(0x1019dc4cu) + (uint32_t)(int16_t)arg2 - 1u); goto L_1019dbd2;
    case 0x1019dbe5u: edx = rd8(COW_IMG(0x1019dc4cu) + (uint32_t)(int16_t)arg2 - 1u); goto L_1019dbe5;
    case 0x1019dbf8u: edx = rd8(COW_IMG(0x1019dc4cu) + (uint32_t)(int16_t)arg2 - 1u); goto L_1019dbf8;
    case 0x1019dc13u: edx = rd8(COW_IMG(0x1019dc4cu) + (uint32_t)(int16_t)arg2 - 1u); goto L_1019dc13;
    default: rt_fatal(g, COW_IMG(0x1019db99u), "switch");
    }
    return;
L_1019dba0: ;
    t7 = rd32(self + 0x28u);
    wr8(self + 0x24u, 1u);
    wr32(self + 0x40u, t7);
L_1019dbaa: ;
    wr8(rd32(self + 8u) + 0x62u, 0u);
    t8 = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu);
    t9 = rd32(self + 8u);
    wr32(self + 0x44u, t8);
    wr8(t9 + 0x85u, 0u);
    return;
L_1019dbc6: ;
    t6 = rd32(self + 0x30u);
    wr8(self + 0x2cu, 1u);
    wr32(self + 0x40u, t6);
    edx = t6;
    goto L_1019dbaa;
L_1019dbd2: ;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x10193830u), (uint32_t)(int16_t)arg2, g->ecx, g->edx, 1, 2, 0xacu, 0u);
    return;
L_1019dbe5: ;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x10193830u), (uint32_t)(int16_t)arg2, g->ecx, g->edx, 1, 2, 0xacu, 1u);
    return;
L_1019dbf8: ;
    t2 = (uint32_t)(int16_t)arg2 - 5u;
    g->ecx = self;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t3 = cow_call_regs(g, COW_IMG(0x10193830u), (uint32_t)(int16_t)arg2, g->ecx, g->edx, 1, 2, 0xafu, t2);
    t4 = g->ecx;
    t5 = g->edx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x10245570u), 1, t2);
    return;
L_1019dc13: ;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x101bcb60u), g->eax, g->ecx, edx, 1, 0);
    return;
L_1019dc1c: ;
    if ((uint16_t)arg1 == 6u)
    {
        wr32(self + 0x20u, 1u);
        g->esp = sp0 - 4u;
        cow_thiscall(g, COW_IMG(0x10037bf0u), self, 0);
    }
L_1019dc2e: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1019db70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1019db70(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
