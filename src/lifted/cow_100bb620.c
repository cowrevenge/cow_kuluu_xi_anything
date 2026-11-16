/* f_0x100bb620 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100bb620(Guest* g)
{
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
    uint32_t t25;
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
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
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
    cow_frame(g, sp0, 48u);

    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, in_edi);
    t1 = rd8(rd16(self + 0x256u) + rd32(self + 0x20u) + 1u);
    if (t1 > 8u) goto L_100bb987;
    eax = t1;
    edx = t1;
    t2 = rd32(COW_IMG(0x100bb990u) + eax * 4u);
    switch (t2 - RD)
    {
    case 0x100bb64bu: goto L_100bb64b;
    case 0x100bb677u: goto L_100bb677;
    case 0x100bb70eu: goto L_100bb70e;
    case 0x100bb79du: goto L_100bb79d;
    case 0x100bb854u: goto L_100bb854;
    case 0x100bb8ccu: goto L_100bb8cc;
    case 0x100bb92fu: goto L_100bb92f;
    default: rt_fatal(g, COW_IMG(0x100bb644u), "switch");
    }
    return;
L_100bb64b: ;
    wr32(sp0 - 0x24u, 4u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t37 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 4u);
    t38 = g->edx;
    wr32(sp0 - 0x24u, t37);
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x2cu, 2u);
    g->edx = t38;
    g->esp = sp0 - 0x28u;
    t39 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
    t40 = g->ecx;
    t41 = g->edx;
    wr32(sp0 - 0x2cu, t39);
    g->esi = self;
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x10094040u), 3, t39, 0u, rd32(sp0 - 0x24u));
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 6u));
    g->esi = in_esi;
    return;
L_100bb677: ;
    wr32(sp0 - 0x24u, sp0 - 0x18u);
    wr32(sp0 - 0x28u, sp0 - 0x14u);
    wr32(sp0 - 0x2cu, 2u);
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t31 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 2u);
    t32 = g->edx;
    wr32(sp0 - 0x2cu, t31);
    g->esp = sp0 - 0x20u;
    t33 = cow_fastcall(g, COW_IMG(0x100afb00u), self, t32, 3, t31, sp0 - 0x14u, sp0 - 0x18u);
    if ((uint8_t)t33 != 1u) goto L_100bb700;
    if (rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 0x18u) * 4u) == 0u) goto L_100bb700;
    eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 0x18u) * 4u);
    edi = COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 0x18u) * 4u;
    t34 = rd32(eax + 0x74u);
    wr32(sp0 - 8u, t34);
    if (rd32(eax + 0x78u) != rd32(sp0 - 0x14u)) goto L_100bb700;
    if (rd8(rd16(self + 0x256u) + rd32(self + 0x20u) + 1u) != 1u) goto L_100bb6f7;
    edx = rd16(self + 0x256u);
    wr32(sp0 - 0x24u, 6u);
    g->eax = eax;
    g->esp = sp0 - 0x20u;
    t35 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 6u);
    t36 = rd32(sp0 - 0x20u);
    wr16(rd32(edi) + 0x1d8u, (uint16_t)t35);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 8u));
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = t36;
    return;
L_100bb6f7: ;
    wr16(eax + 0x1d8u, 0x17u);
L_100bb700: ;
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 8u));
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = rd32(sp0 - 0x20u);
    return;
L_100bb70e: ;
    wr32(sp0 - 0x24u, sp0 - 0x14u);
    wr32(sp0 - 0x28u, sp0 - 0x18u);
    wr32(sp0 - 0x2cu, 2u);
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t25 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 2u);
    t26 = g->edx;
    wr32(sp0 - 0x2cu, t25);
    g->esp = sp0 - 0x20u;
    t27 = cow_fastcall(g, COW_IMG(0x100afb00u), self, t26, 3, t25, sp0 - 0x18u, sp0 - 0x14u);
    if ((uint8_t)t27 == 1u)
    {
        if (rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 0x14u) * 4u) != 0u)
        {
            eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 0x14u) * 4u);
            edx = (uint16_t)rd32(sp0 - 0x14u);
            edi = COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 0x14u) * 4u;
            t28 = rd32(eax + 0x74u);
            wr32(sp0 - 8u, t28);
            if (rd32(eax + 0x78u) == rd32(sp0 - 0x18u))
            {
                eax = rd32(eax + 0x78u);
                wr32(sp0 - 0x24u, 6u);
                g->eax = eax;
                g->esp = sp0 - 0x20u;
                t29 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 6u);
                if (rd8(rd16(self + 0x256u) + rd32(self + 0x20u) + 1u) != 4u)
                {
                    eax = t29;
                    goto L_100bb77b;
                }
                eax = 0u;
L_100bb780: ;
                t30 = rd32(COW_IMG(0x1035d000u) + eax * 4u);
                wr32(rd32(edi) + 0x168u, t30);
            }
        }
    }
L_100bb78f: ;
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 8u));
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = rd32(sp0 - 0x20u);
    return;
L_100bb77b: ;
    if (eax >= 2u) goto L_100bb78f;
    goto L_100bb780;
L_100bb79d: ;
    wr32(sp0 - 0x24u, sp0 - 0x14u);
    wr32(sp0 - 0x28u, sp0 - 0xcu);
    wr32(sp0 - 0x2cu, 2u);
    g->edx = sp0 - 0xcu;
    g->esp = sp0 - 0x28u;
    t16 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 2u);
    t17 = g->edx;
    wr32(sp0 - 0x2cu, t16);
    g->esp = sp0 - 0x20u;
    t18 = cow_fastcall(g, COW_IMG(0x100afb00u), self, t17, 3, t16, sp0 - 0xcu, sp0 - 0x14u);
    t19 = g->edx;
    if ((uint8_t)t18 == 1u)
    {
        edx = t19;
        wr32(sp0 - 0x24u, sp0 - 0x18u);
        wr32(sp0 - 0x28u, sp0 - 8u);
        wr32(sp0 - 0x2cu, 6u);
        g->edx = edx;
        g->esp = sp0 - 0x28u;
        t20 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 6u);
        t21 = g->edx;
        wr32(sp0 - 0x2cu, t20);
        g->esp = sp0 - 0x20u;
        t22 = cow_fastcall(g, COW_IMG(0x100afb00u), self, t21, 3, t20, sp0 - 8u, sp0 - 0x18u);
        if ((uint8_t)t22 == 1u)
        {
            if (rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 0x14u) * 4u) != 0u)
            {
                ecx = rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 0x14u) * 4u);
                if (rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 0x18u) * 4u) != 0u)
                {
                    eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 0x18u) * 4u);
                    wr32(sp0 - 0x24u, in_ebx);
                    t23 = rd32(ecx + 0x74u);
                    wr32(sp0 - 0x14u, t23);
                    t24 = rd32(eax + 0x74u);
                    wr32(sp0 - 0x14u, t24);
                    if (rd32(ecx + 0x78u) == rd32(sp0 - 0xcu))
                    {
                        edi = rd32(eax + 0x78u);
                        if (edi == rd32(sp0 - 8u))
                        {
                            if (rd32(ecx + 0xa0u) != 0u)
                            {
                                eax = rd32(eax + 0xa0u);
                                ecx = rd32(ecx + 0xa0u);
                                if (eax != 0u)
                                {
                                    wr32(eax + 0x798u, ecx);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 0xau));
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = rd32(sp0 - 0x20u);
    return;
L_100bb854: ;
    wr32(sp0 - 0x24u, sp0 - 8u);
    wr32(sp0 - 0x28u, sp0 - 0xcu);
    wr32(sp0 - 0x2cu, 2u);
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t12 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 2u);
    t13 = g->edx;
    wr32(sp0 - 0x2cu, t12);
    g->esp = sp0 - 0x20u;
    t14 = cow_fastcall(g, COW_IMG(0x100afb00u), self, t13, 3, t12, sp0 - 0xcu, sp0 - 8u);
    if ((uint8_t)t14 != 1u) goto L_100bb97f;
    if (rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 8u) * 4u) == 0u) goto L_100bb97f;
    eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 8u) * 4u);
    t15 = rd32(eax + 0x74u);
    wr32(sp0 - 8u, t15);
    if (rd32(eax + 0x78u) != rd32(sp0 - 0xcu)) goto L_100bb97f;
    if (rd32(eax + 0xa0u) == 0u) goto L_100bb97f;
    eax = rd32(eax + 0xa0u);
    wr32(eax + 0x798u, 0u);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 6u));
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = rd32(sp0 - 0x20u);
    return;
L_100bb8cc: ;
    wr32(sp0 - 0x24u, sp0 - 8u);
    wr32(sp0 - 0x28u, sp0 - 0xcu);
    wr32(sp0 - 0x2cu, 2u);
    g->edx = sp0 - 8u;
    g->esp = sp0 - 0x28u;
    t7 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 2u);
    t8 = g->edx;
    wr32(sp0 - 0x2cu, t7);
    g->esp = sp0 - 0x20u;
    t9 = cow_fastcall(g, COW_IMG(0x100afb00u), self, t8, 3, t7, sp0 - 0xcu, sp0 - 8u);
    if ((uint8_t)t9 == 1u)
    {
        if (rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 8u) * 4u) != 0u)
        {
            edi = rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 8u) * 4u);
            t10 = rd32(edi + 0x74u);
            wr32(sp0 - 8u, t10);
            if (rd32(edi + 0x78u) == rd32(sp0 - 0xcu))
            {
                edx = t10;
                wr32(sp0 - 0x24u, 6u);
                g->esp = sp0 - 0x20u;
                t11 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 6u);
                wr32(edi + 0x20cu, t11);
            }
        }
    }
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 0xau));
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = rd32(sp0 - 0x20u);
    return;
L_100bb92f: ;
    wr32(sp0 - 0x24u, sp0 - 8u);
    wr32(sp0 - 0x28u, sp0 - 0xcu);
    wr32(sp0 - 0x2cu, 2u);
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t3 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 2u);
    t4 = g->edx;
    wr32(sp0 - 0x2cu, t3);
    g->esp = sp0 - 0x20u;
    t5 = cow_fastcall(g, COW_IMG(0x100afb00u), self, t4, 3, t3, sp0 - 0xcu, sp0 - 8u);
    if ((uint8_t)t5 == 1u)
    {
        if (rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 8u) * 4u) != 0u)
        {
            eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 8u) * 4u);
            t6 = rd32(eax + 0x74u);
            wr32(sp0 - 8u, t6);
            if (rd32(eax + 0x78u) == rd32(sp0 - 0xcu))
            {
                wr32(eax + 0x20cu, 0u);
            }
        }
    }
L_100bb97f: ;
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 6u));
L_100bb987: ;
    g->esi = in_esi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100bb620(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100bb620(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
