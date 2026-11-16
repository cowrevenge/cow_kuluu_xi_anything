/* f_0x1004e720 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1004e720(Guest* g)
{
    double d14;
    double d21;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_ebp);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    wr32(sp0 - 4u, self);
    t1 = arg1 + (uint32_t)(int16_t)rd16(arg1 + 0x176u);
    wr32(sp0 - 8u, t1);
    if (rd32(self + 0xecu) == 0u) goto L_1004e8a8;
    edx = t1;
    esi = rd32(self + 0xecu);
    loc_8 = t1;
L_1004e754: ;
    if ((uint8_t)rd32(esi) - 1u > 5u) goto L_1004e891;
    eax = (uint8_t)rd32(esi) - 1u;
L_1004e765: ;
    t2 = rd32(COW_IMG(0x1004e8b4u) + eax * 4u);
    switch (t2 - RD)
    {
    case 0x1004e76cu: goto L_1004e76c;
    case 0x1004e799u: goto L_1004e799;
    case 0x1004e7aau: goto L_1004e7aa;
    case 0x1004e7e6u: goto L_1004e7e6;
    case 0x1004e86au: goto L_1004e86a;
    case 0x1004e891u: goto L_1004e891;
    default: rt_fatal(g, COW_IMG(0x1004e765u), "switch");
    }
    return;
L_1004e74c: ;
    edx = loc_8;
    goto L_1004e754;
L_1004e76c: ;
    if (rd32(esi + 4u) == 0u) goto L_1004e891;
    eax = rd32(esi + 4u);
    if (rd32(eax) == 0u) goto L_1004e891;
    eax = rd32(eax);
    if ((uint8_t)rd32(rd32(eax + 0xecu)) - 1u <= 5u)
    {
        esi = rd32(eax + 0xecu);
        eax = (uint8_t)rd32(rd32(eax + 0xecu)) - 1u;
        goto L_1004e765;
    }
    esi = rd32(eax + 0xecu);
L_1004e891: ;
    if ((uint8_t)rd32(esi) == 0u) goto L_1004e8a8;
    eax = rd32(esi);
    if (esi + (eax >> 8u & 0x1fu) * 4u != 0u)
    {
        esi = esi + (eax >> 8u & 0x1fu) * 4u;
        goto L_1004e74c;
    }
L_1004e8a8: ;
    g->ebp = in_ebp;
    return;
L_1004e799: ;
    d21 = (double)rdf32(arg1 + 0x114u);
    wrf32(arg1 + 0x110u, (float)d21);
    goto L_1004e891;
L_1004e7aa: ;
    if (rd32(edx + (rd32(esi) >> 0xdu & 0x3fu) * 4u + 0x1cu) != 0u)
    {
        ecx = rd32(edx + (rd32(esi) >> 0xdu & 0x3fu) * 4u + 0x1cu);
        if (ecx == 0u)
        {
            g->esp = sp0 - 0x18u;
            cow_fastcall(g, COW_IMG(0x10063b20u), 0x30u, edx, 0);
        }
        else
        {
            eax = ecx;
            g->esp = sp0 - 0x18u;
            cow_fastcall(g, COW_IMG(0x10063b20u), rd32(eax) + 0x30u, edx, 0);
        }
    }
    goto L_1004e891;
L_1004e7e6: ;
    if (rd32(esi + 4u) != 0u)
    {
        eax = rd32(esi + 4u);
        if (rd32(eax) != 0u)
        {
            edi = rd32(eax);
            g->eax = eax;
            g->edx = edx;
            t8 = rd16(edi + 0xd6u);
            g->esp = sp0 - 0x18u;
            t9 = cow_thiscall(g, COW_IMG(0x100539e0u), edi, 0);
            t10 = g->ecx;
            t11 = g->edx;
            if ((uint8_t)t9 == 0u)
            {
                eax = t9;
                edx = t11;
                ebp = (uint32_t)(int16_t)t8;
            }
            else
            {
                ecx = t10;
                edx = t11;
                ebp = (uint32_t)(int16_t)t8;
                wr32(sp0 - 0x1cu, ecx);
                wr32(sp0 - 0x1cu, 0u);
                g->ebp = ebp;
                g->edx = edx;
                g->esp = sp0 - 0x18u;
                t12 = cow_call_regs(g, COW_IMG(0x100538e0u), sp0 - 0x1cu, edi, g->edx, 0, 1, 0u);
                t13 = g->edx;
                eax = t12;
                edx = t13;
            }
            g->edx = edx;
            d14 = fr(g, (double)rdf32(rd32(COW_IMG(0x1047bfa8u)) + 0xeb0u) + (double)rdf32(COW_IMG(0x1032961cu)));
            fpush(g, d14);
            g->esp = sp0 - 0x18u;
            t15 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
            t16 = g->edx;
            wr16(edi + 0xd6u, (uint16_t)t15);
            wr32(edi + 0xccu, 0u);
            t17 = cow_call_regs(g, COW_IMG(0x10053370u), t15, edi, t16, 1, 0);
            t18 = g->edx;
            wr32(sp0 - 0x1cu, arg1);
            g->edx = t18;
            t19 = cow_call_regs(g, COW_IMG(0x100496f0u), t17, edi, g->edx, 0, 1, arg1);
            t20 = g->edx;
            wr32(sp0 - 0x1cu, 0u);
            cow_call_regs(g, COW_IMG(0x10053890u), t19, edi, t20, 0, 1, 0u);
            wr16(edi + 0xd6u, (uint16_t)ebp);
        }
    }
    goto L_1004e891;
L_1004e86a: ;
    if (rd32(esi + 4u) != 0u)
    {
        eax = rd32(esi + 4u);
        wr32(sp0 - 0x1cu, 0u);
        wr32(sp0 - 0x20u, 0u);
        g->eax = eax;
        g->edx = edx;
        t3 = rd32(eax);
        g->esp = sp0 - 0x18u;
        t4 = cow_thiscall_cdecl(g, COW_IMG(0x1003b700u), self + 0x30u, 2, 0u, 0u);
        t5 = g->edx;
        wr32(sp0 - 0x24u, t4);
        g->edx = t5;
        g->esp = sp0 - 0x20u;
        t6 = cow_thiscall_cdecl(g, COW_IMG(0x1003b6d0u), self + 0x30u, 1, t4);
        t7 = g->edx;
        wr32(sp0 - 0x28u, t6);
        g->esp = sp0 - 0x18u;
        cow_call_regs(g, COW_IMG(0x10056c70u), t6, t3, g->edx, 0, 4, t6, rd32(sp0 - 0x24u), 0u, 0u);
    }
    goto L_1004e891;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1004e720(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1004e720(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
