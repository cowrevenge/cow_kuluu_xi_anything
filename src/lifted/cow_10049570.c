/* f_0x10049570 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10049570(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
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
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, in_edi);
    if (rd32(rd32(self + 0xe4u) + 8u) != 0u) goto L_10049674;
    eax = rd32(self + 0xe4u);
    if ((uint32_t)(int8_t)rd8(eax + 0x21u) - 0xbu > 0x2eu)
    {
        edx = in_edx;
        edi = (uint32_t)(int8_t)rd8(eax + 0x21u);
        goto L_100495b4;
    }
    ecx = (uint32_t)(int8_t)rd8(eax + 0x21u) - 0xbu;
    edi = (uint32_t)(int8_t)rd8(eax + 0x21u);
    t1 = rd32(COW_IMG(0x100496a4u) + rd8(COW_IMG(0x100496b4u) + ecx) * 4u);
    edx = rd8(COW_IMG(0x100496b4u) + ecx);
    switch (t1 - RD)
    {
    case 0x100495a1u: goto L_100495a1;
    case 0x100495a8u: goto L_100495a8;
    case 0x100495afu: goto L_100495af;
    case 0x100495b4u: goto L_100495b4;
    default: rt_fatal(g, COW_IMG(0x1004959au), "switch");
    }
    return 0;
L_100495a1: ;
    edi = 0x1fu;
L_100495b4: ;
    wr8(eax + 0x28u, 0u);
    if (edi == 0x57u) goto L_1004968e;
    if (edi == 0x47u) goto L_1004968e;
    if (edi == 0x22u) goto L_1004968e;
    if (edi == 0x24u) goto L_1004968e;
    if (edi == 0x5cu) goto L_1004968e;
    wr32(sp0 - 0x10u, in_ebp);
    t2 = rd32(rd32(self + 0xe4u) + 0xcu);
    wr32(sp0 - 0x14u, t2);
    wr32(sp0 - 0x18u, edi);
    wr32(sp0 - 0x1cu, sp0 - 4u);
    t3 = rd32(self + 0xe4u);
    g->esp = sp0 - 0x10u;
    t4 = cow_thiscall(g, COW_IMG(0x10072290u), self, 3, sp0 - 4u, edi, t2);
    t5 = rd32(t4);
    wr32(t3 + 8u, t5);
    if (t5 == 0u)
    {
        eax = t5;
        if (edi == 0x1fu)
        {
            wr32(rd32(self + 0xe4u) + 8u, eax);
            edi = rd32(self + 0x14u);
L_10049618: ;
            if (edi == 0u) goto L_10049674;
            if (rd32(edi) == 0u) goto L_10049674;
            ecx = rd32(edi);
            t6 = rd32(rd32(self + 0xe4u) + 0xcu);
            wr32(sp0 - 0x10u, t6);
            wr32(sp0 - 0x14u, 0x2eu);
            wr32(sp0 - 0x18u, sp0 - 4u);
            g->edx = sp0 - 4u;
            g->esp = sp0 - 0xcu;
            t7 = cow_thiscall(g, COW_IMG(0x10072290u), ecx, 3, sp0 - 4u, 0x2eu, t6);
            t8 = g->edx;
            if (rd32(t7) == 0u) goto L_10049643;
            eax = rd32(t7);
            edx = t8;
            if (rd32(eax) != 0u) goto L_10049650;
L_10049643: ;
            if (rd32(rd32(edi) + 0x28u) == edi) goto L_10049674;
            eax = rd32(rd32(edi) + 0x28u);
            edi = eax;
            goto L_10049618;
        }
    }
L_10049674: ;
    if (rd32(rd32(self + 0xe4u) + 8u) <= 1u) goto L_1004969b;
    eax = rd32(rd32(self + 0xe4u) + 8u);
    if (eax == 0u) goto L_1004969b;
    esi = eax;
    return rd32(esi);
L_100495a8: ;
    edi = 0x25u;
    goto L_100495b4;
L_100495af: ;
    edi = 0x21u;
    goto L_100495b4;
L_10049650: ;
    t9 = rd32(eax) + 0x30u;
    wr32(sp0 - 0x10u, t9);
    t10 = rd32(self + 0xe4u);
    g->esp = sp0 - 0xcu;
    t11 = cow_thiscall(g, COW_IMG(0x10183420u), rd32(COW_IMG(0x10631f24u)), 1, t9);
    wr32(t10 + 8u, t11);
    wr8(rd32(self + 0xe4u) + 0x28u, 1u);
    goto L_10049674;
L_1004968e: ;
    wr32(rd32(self + 0xe4u) + 8u, 1u);
L_1004969b: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10049570(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10049570(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
