/* f_0x100b6a60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b6a60(Guest* g)
{
    double d25;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
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
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    t1 = rd8(rd16(self + 0x256u) + rd32(self + 0x20u) + 1u);
    if (t1 > 8u) goto L_100b6db8;
    eax = t1;
    edx = t1;
    t2 = rd32(COW_IMG(0x100b6dc0u) + eax * 4u);
    switch (t2 - RD)
    {
    case 0x100b6a90u: goto L_100b6a90;
    case 0x100b6accu: goto L_100b6acc;
    case 0x100b6b2eu: goto L_100b6b2e;
    case 0x100b6b6au: goto L_100b6b6a;
    case 0x100b6bccu: goto L_100b6bcc;
    case 0x100b6c47u: goto L_100b6c47;
    case 0x100b6cb7u: goto L_100b6cb7;
    case 0x100b6d29u: goto L_100b6d29;
    case 0x100b6d65u: goto L_100b6d65;
    default: rt_fatal(g, COW_IMG(0x100b6a89u), "switch");
    }
    return;
L_100b6a90: ;
    if (rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) != 0u)
    {
        eax = rd16(self + 2u);
        wr32(sp0 - 0x18u, 2u);
        g->eax = eax;
        g->esp = sp0 - 0x14u;
        t37 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0xdcu, t37);
    }
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 4u));
    return;
L_100b6acc: ;
    wr32(sp0 - 0x18u, sp0 - 8u);
    wr32(sp0 - 0x1cu, sp0 - 4u);
    wr32(sp0 - 0x20u, 2u);
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t32 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 2u);
    t33 = g->edx;
    wr32(sp0 - 0x20u, t32);
    g->esp = sp0 - 0x14u;
    t34 = cow_fastcall(g, COW_IMG(0x100afb00u), self, t33, 3, t32, sp0 - 4u, sp0 - 8u);
    if ((uint8_t)t34 != 1u) goto L_100b6db1;
    if (rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 8u) * 4u) == 0u) goto L_100b6db1;
    eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 8u) * 4u);
    edx = (uint16_t)rd32(sp0 - 8u);
    edi = COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 8u) * 4u;
    wr32(sp0 - 0x18u, 6u);
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t35 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 6u);
    t36 = rd32(sp0 - 0x14u);
    wr32(rd32(edi) + 0xdcu, t35);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 8u));
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = t36;
    return;
L_100b6b2e: ;
    if (rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) != 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
        edx = rd16(self + 2u);
        wr32(sp0 - 0x18u, 2u);
        g->eax = eax;
        g->esp = sp0 - 0x14u;
        t31 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0xe0u, t31);
    }
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 4u));
    return;
L_100b6b6a: ;
    wr32(sp0 - 0x18u, sp0 - 8u);
    wr32(sp0 - 0x1cu, sp0 - 4u);
    wr32(sp0 - 0x20u, 2u);
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t26 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 2u);
    t27 = g->edx;
    wr32(sp0 - 0x20u, t26);
    g->esp = sp0 - 0x14u;
    t28 = cow_fastcall(g, COW_IMG(0x100afb00u), self, t27, 3, t26, sp0 - 4u, sp0 - 8u);
    if ((uint8_t)t28 != 1u) goto L_100b6db1;
    if (rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 8u) * 4u) == 0u) goto L_100b6db1;
    eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 8u) * 4u);
    edx = (uint16_t)rd32(sp0 - 8u);
    edi = COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 8u) * 4u;
    wr32(sp0 - 0x18u, 6u);
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t29 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 6u);
    t30 = rd32(sp0 - 0x14u);
    wr32(rd32(edi) + 0xe0u, t29);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 8u));
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = t30;
    return;
L_100b6bcc: ;
    wr32(sp0 - 0x18u, sp0 - 8u);
    wr32(sp0 - 0x1cu, sp0 - 4u);
    wr32(sp0 - 0x20u, 2u);
    g->edx = sp0 - 8u;
    g->esp = sp0 - 0x1cu;
    t19 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 2u);
    t20 = g->edx;
    wr32(sp0 - 0x20u, t19);
    g->esp = sp0 - 0x14u;
    t21 = cow_fastcall(g, COW_IMG(0x100afb00u), self, t20, 3, t19, sp0 - 4u, sp0 - 8u);
    t22 = g->edx;
    if ((uint8_t)t21 != 1u) goto L_100b6db1;
    edx = t22;
    if (rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 8u) * 4u) == 0u) goto L_100b6db1;
    eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 8u) * 4u);
    if (rd32(eax + 0xd4u) == 0u) goto L_100b6db1;
    edi = rd32(eax + 0xd4u);
    wr32(sp0 - 0x18u, 6u);
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t23 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 6u);
    wr32(sp0 - 8u, t23);
    t24 = rd32(sp0 - 0x14u);
    d25 = fr(g, (double)(int32_t)t23 * (double)rdf32(COW_IMG(0x1032a378u)));
    wrf32(rd32(edi + 0x260u) + 0x168u, (float)d25);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 8u));
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = t24;
    return;
L_100b6c47: ;
    wr32(sp0 - 0x18u, sp0 - 8u);
    wr32(sp0 - 0x1cu, sp0 - 4u);
    wr32(sp0 - 0x20u, 2u);
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t14 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 2u);
    t15 = g->edx;
    wr32(sp0 - 0x20u, t14);
    g->esp = sp0 - 0x14u;
    t16 = cow_fastcall(g, COW_IMG(0x100afb00u), self, t15, 3, t14, sp0 - 4u, sp0 - 8u);
    if ((uint8_t)t16 == 1u)
    {
        if (rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 8u) * 4u) != 0u)
        {
            eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 8u) * 4u);
            t17 = rd32(eax + 0x120u);
            t18 = t17 ^ ((rd8(rd16(self + 0x256u) + rd32(self + 0x20u) + 6u) << 0x15u ^ t17) & 0x200000u);
            wr32(eax + 0x120u, t18);
        }
    }
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 7u));
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    return;
L_100b6cb7: ;
    wr32(sp0 - 0x18u, sp0 - 8u);
    wr32(sp0 - 0x1cu, sp0 - 4u);
    wr32(sp0 - 0x20u, 2u);
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t9 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 2u);
    t10 = g->edx;
    wr32(sp0 - 0x20u, t9);
    g->esp = sp0 - 0x14u;
    t11 = cow_fastcall(g, COW_IMG(0x100afb00u), self, t10, 3, t9, sp0 - 4u, sp0 - 8u);
    if ((uint8_t)t11 != 1u) goto L_100b6d1a;
    if (rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 8u) * 4u) == 0u) goto L_100b6d1a;
    eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 8u) * 4u);
    if (rd32(eax + 0x1c4u) == 0u) goto L_100b6d1a;
    edx = rd32(eax + 0x1c4u);
    if (rd32(eax + 0xa0u) == 0u) goto L_100b6d1a;
    ecx = rd32(eax + 0xa0u);
    wr32(sp0 - 0x18u, ecx);
    wr32(sp0 - 0x1cu, edx);
    g->eax = rd32(ecx);
    t12 = rd32(ecx);
    g->esp = sp0 - 0x14u;
    t13 = cow_thiscall(g, rd32(t12 + 0x2a0u), ecx, 2, edx, ecx);
    if ((uint8_t)t13 != 1u) goto L_100b6d1a;
    eax = t13;
    wr8(self + 0x25au, (uint8_t)eax);
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    return;
L_100b6d1a: ;
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 6u));
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    return;
L_100b6d29: ;
    if (rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) != 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
        wr32(sp0 - 0x18u, 2u);
        g->eax = eax;
        g->esp = sp0 - 0x14u;
        t8 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
        wr32(sp0 - 0x18u, t8);
        cow_thiscall(g, COW_IMG(0x1008a790u), rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u), 1, t8);
    }
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 4u));
    return;
L_100b6d65: ;
    wr32(sp0 - 0x18u, sp0 - 8u);
    wr32(sp0 - 0x1cu, sp0 - 4u);
    wr32(sp0 - 0x20u, 2u);
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t3 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 2u);
    t4 = g->edx;
    wr32(sp0 - 0x20u, t3);
    g->esp = sp0 - 0x14u;
    t5 = cow_fastcall(g, COW_IMG(0x100afb00u), self, t4, 3, t3, sp0 - 4u, sp0 - 8u);
    if ((uint8_t)t5 == 1u)
    {
        if (rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 8u) * 4u) != 0u)
        {
            eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 8u) * 4u);
            edx = (uint16_t)rd32(sp0 - 8u);
            edi = COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 8u) * 4u;
            wr32(sp0 - 0x18u, 6u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t6 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 6u);
            t7 = g->edx;
            wr32(sp0 - 0x18u, t6);
            cow_thiscall(g, COW_IMG(0x1008a790u), rd32(edi), 1, t6);
        }
    }
L_100b6db1: ;
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 8u));
L_100b6db8: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b6a60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b6a60(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
