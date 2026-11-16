/* f_0x10024e30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10024e30(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 128u);

    wr32(sp0 - 0x34u, in_ebx);
    wr32(sp0 - 0x38u, in_ebp);
    wr32(sp0 - 0x3cu, in_esi);
    wr32(sp0 - 0x40u, in_edi);
    t1 = rd32(sp0 + 0xcu) + (rd16(rd32(sp0 + 8u)) & 0x7fffu) * 0x3cu;
    t2 = rd32(sp0 + 0xcu);
    t3 = rd32(sp0 + 8u);
    t4 = rd16(rd32(sp0 + 8u) + 2u);
    t5 = rd16(rd32(sp0 + 8u) + 4u);
    wr32(sp0 + 8u, t1);
    wr32(sp0 - 0x44u, t1 + 0xcu);
    t6 = t2 + (t4 & 0x7fffu) * 0x3cu;
    wr32(sp0 + 0xcu, t6);
    wr32(sp0 - 0x48u, t6 + 0xcu);
    wr32(sp0 - 0x4cu, sp0 - 0x24u);
    g->esp = sp0 - 0x40u;
    cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x24u, t6 + 0xcu, t1 + 0xcu);
    t7 = rd32(sp0 + 8u) + 0xcu;
    wr32(sp0 - 0x50u, t7);
    t8 = t2 + (t5 & 0x7fffu) * 0x3cu;
    wr32(sp0 - 0x30u, t8);
    wr32(sp0 - 0x54u, t8 + 0xcu);
    wr32(sp0 - 0x58u, sp0 - 0x18u);
    g->esp = sp0 - 0x4cu;
    cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x18u, t8 + 0xcu, t7);
    wr32(sp0 - 0x5cu, sp0 - 0x24u);
    wr32(sp0 - 0x60u, sp0 - 0x18u);
    wr32(sp0 - 0x64u, sp0 - 0xcu);
    g->eax = sp0 - 0xcu;
    g->esp = sp0 - 0x58u;
    t9 = cow_cdecl(g, COW_IMG(0x10027550u), 3, sp0 - 0xcu, sp0 - 0x18u, sp0 - 0x24u);
    wr32(sp0 - 0x68u, sp0 - 0xcu);
    t10 = rd32(sp0 + 8u) + 0x30u;
    wr32(sp0 - 0x6cu, t10);
    g->edx = t10;
    g->esp = sp0 - 0x64u;
    cow_cdecl(g, COW_IMG(0x10026f20u), 2, t10, sp0 - 0xcu);
    t11 = g->edx;
    wr32(sp0 - 0x70u, sp0 - 0xcu);
    t12 = rd32(sp0 + 0xcu) + 0x30u;
    wr32(sp0 - 0x74u, t12);
    g->ecx = t12;
    g->esp = sp0 - 0x6cu;
    cow_cdecl(g, COW_IMG(0x10026f20u), 2, t12, sp0 - 0xcu);
    t13 = g->ecx;
    wr32(sp0 - 0x78u, sp0 - 0xcu);
    t14 = rd32(sp0 - 0x30u) + 0x30u;
    wr32(sp0 - 0x7cu, t14);
    g->esp = sp0 - 0x74u;
    cow_cdecl(g, COW_IMG(0x10026f20u), 2, t14, sp0 - 0xcu);
    wr32(sp0 - 0x2cu, t3 + 0x1eu);
    wr32(sp0 - 0x28u, 1u);
    if ((int16_t)rd16(sp0 + 4u) > 1)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 + 4u);
        ebx = t2;
        esi = t4 & 0x7fffu;
        edi = t5 & 0x7fffu;
        loc_2c = t3 + 0x1eu;
        wr32(sp0 + 4u, eax - 1u);
        loc_28 = 1u;
L_10024f1d: ;
        t15 = ebx + esi * 0x3cu;
        t16 = rd16(loc_2c);
        wr32(sp0 + 8u, t15);
        wr32(sp0 - 0x44u, t15 + 0xcu);
        t17 = ebx + edi * 0x3cu;
        wr32(sp0 + 0xcu, t17);
        wr32(sp0 - 0x48u, t17 + 0xcu);
        wr32(sp0 - 0x4cu, sp0 - 0x24u);
        g->ecx = sp0 - 0x24u;
        g->esp = sp0 - 0x40u;
        cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x24u, t17 + 0xcu, t15 + 0xcu);
        t18 = g->ecx;
        wr32(sp0 - 0x50u, t15 + 0xcu);
        t19 = ebx + (t16 & 0x7fffu) * 0x3cu;
        wr32(sp0 - 0x30u, t19);
        wr32(sp0 - 0x54u, t19 + 0xcu);
        wr32(sp0 - 0x58u, sp0 - 0x18u);
        g->esp = sp0 - 0x4cu;
        cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x18u, t19 + 0xcu, t15 + 0xcu);
        t20 = rd32(sp0 - 0x28u);
        if (t20 == 0u)
        {
            ebp = t20;
            esi = edi;
            edi = t16 & 0x7fffu;
            goto L_10024f91;
        }
        eax = t20;
        ebp = t20;
        esi = edi;
        edi = t16 & 0x7fffu;
        if (eax != 1u) goto L_10024fa8;
        ecx = sp0 - 0x18u;
        edx = sp0 - 0x24u;
L_10024f99: ;
        wr32(sp0 - 0x44u, ecx);
        wr32(sp0 - 0x48u, edx);
        wr32(sp0 - 0x4cu, sp0 - 0xcu);
        g->esp = sp0 - 0x40u;
        cow_cdecl(g, COW_IMG(0x10027550u), 3, sp0 - 0xcu, edx, ecx);
L_10024fa8: ;
        wr32(sp0 - 0x44u, sp0 - 0xcu);
        t21 = rd32(sp0 + 8u) + 0x30u;
        wr32(sp0 - 0x48u, t21);
        wr32(sp0 - 0x28u, 1u - ebp);
        g->eax = t21;
        g->esp = sp0 - 0x40u;
        t22 = cow_cdecl(g, COW_IMG(0x10026f20u), 2, t21, sp0 - 0xcu);
        wr32(sp0 - 0x4cu, sp0 - 0xcu);
        t23 = rd32(sp0 + 0xcu) + 0x30u;
        wr32(sp0 - 0x50u, t23);
        g->edx = t23;
        g->esp = sp0 - 0x48u;
        cow_cdecl(g, COW_IMG(0x10026f20u), 2, t23, sp0 - 0xcu);
        t24 = g->edx;
        wr32(sp0 - 0x54u, sp0 - 0xcu);
        t25 = rd32(sp0 - 0x30u) + 0x30u;
        wr32(sp0 - 0x58u, t25);
        g->esp = sp0 - 0x50u;
        cow_cdecl(g, COW_IMG(0x10026f20u), 2, t25, sp0 - 0xcu);
        t26 = rd32(sp0 - 0x2cu) + 0xau;
        wr32(sp0 - 0x2cu, t26);
        t27 = rd32(sp0 + 4u) - 1u;
        t28 = rd32(sp0 + 4u);
        wr32(sp0 + 4u, t27);
        if (t28 != 1u)
        {
            loc_2c = t26;
            goto L_10024f1d;
        }
    }
    return;
L_10024f91: ;
    ecx = sp0 - 0x24u;
    edx = sp0 - 0x18u;
    goto L_10024f99;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10024e30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10024e30(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
