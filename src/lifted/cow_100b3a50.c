/* f_0x100b3a50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b3a50(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 0xcu, in_esi);
    t1 = rd8(rd16(self + 0x256u) + rd32(self + 0x20u) + 1u);
    if (t1 > 5u) goto L_100b3aac;
    eax = t1;
    edx = t1;
    t2 = rd32(COW_IMG(0x100b3ca8u) + eax * 4u);
    switch (t2 - RD)
    {
    case 0x100b3a76u: goto L_100b3a76;
    case 0x100b3ab1u: goto L_100b3ab1;
    case 0x100b3afdu: goto L_100b3afd;
    case 0x100b3b97u: goto L_100b3b97;
    case 0x100b3bf8u: goto L_100b3bf8;
    case 0x100b3c61u: goto L_100b3c61;
    default: rt_fatal(g, COW_IMG(0x100b3a6fu), "switch");
    }
    return;
L_100b3a76: ;
    wr32(sp0 - 0x10u, sp0 - 8u);
    wr32(sp0 - 0x14u, sp0 - 4u);
    wr32(sp0 - 0x18u, 2u);
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t34 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 2u);
    t35 = g->edx;
    wr32(sp0 - 0x18u, t34);
    g->esp = sp0 - 0xcu;
    t36 = cow_fastcall(g, COW_IMG(0x100afb00u), self, t35, 3, t34, sp0 - 4u, sp0 - 8u);
    t37 = g->ecx;
    if ((uint8_t)t36 == 1u)
    {
        ecx = t37;
        wr32(sp0 - 0x10u, 0xffffffffu);
        t38 = rd32(sp0 - 4u);
        wr32(sp0 - 0x14u, t38);
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x100b3dc0u), 2, t38, 0xffffffffu);
    }
L_100b3aa4: ;
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 6u));
L_100b3aac: ;
    return;
L_100b3ab1: ;
    wr32(sp0 - 0x10u, sp0 - 8u);
    wr32(sp0 - 0x14u, sp0 - 4u);
    wr32(sp0 - 0x18u, 2u);
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t29 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 2u);
    t30 = g->edx;
    wr32(sp0 - 0x18u, t29);
    g->esp = sp0 - 0xcu;
    t31 = cow_fastcall(g, COW_IMG(0x100afb00u), self, t30, 3, t29, sp0 - 4u, sp0 - 8u);
    if ((uint8_t)t31 == 1u)
    {
        t32 = rd8(rd16(self + 0x256u) + rd32(self + 0x20u) + 6u);
        wr32(sp0 - 0x10u, t32);
        t33 = rd32(sp0 - 4u);
        wr32(sp0 - 0x14u, t33);
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x100b3dc0u), 2, t33, t32);
    }
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 7u));
    g->esi = rd32(sp0 - 0xcu);
    return;
L_100b3afd: ;
    wr32(sp0 - 0x10u, sp0 - 4u);
    wr32(sp0 - 0x14u, sp0 - 8u);
    wr32(sp0 - 0x18u, 2u);
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t22 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 2u);
    t23 = g->edx;
    wr32(sp0 - 0x18u, t22);
    g->esp = sp0 - 0xcu;
    t24 = cow_fastcall(g, COW_IMG(0x100afb00u), self, t23, 3, t22, sp0 - 8u, sp0 - 4u);
    if ((uint8_t)t24 == 1u)
    {
        t25 = rd32(sp0 - 4u);
        if (rd32(COW_IMG(0x10480af0u) + (uint16_t)t25 * 4u) != 0u)
        {
            eax = COW_IMG(0x10480af0u) + (uint16_t)t25 * 4u;
            ecx = rd32(COW_IMG(0x10480af0u) + (uint16_t)t25 * 4u);
            edx = t25;
            if (rd32(ecx + 0xd4u) != 0u)
            {
                ecx = rd32(ecx + 0xd4u);
                wr32(sp0 - 0x10u, in_edi);
                if (rd32(ecx + 0x260u) != 0u)
                {
                    t26 = rd32(sp0 - 8u);
                    wr16(self + 2u, (uint16_t)edx);
                    wr32(self + 8u, t26);
                    t27 = rd32(rd32(rd32(eax) + 0xd4u) + 0x260u);
                    wr32(self + 0x260u, t27);
                    t28 = rd32(rd32(rd32(eax) + 0xd4u) + 0x264u) + 1u;
                    wr32(rd32(rd32(eax) + 0xd4u) + 0x264u, t28);
                    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 6u));
                }
            }
        }
    }
    wr8(self + 0x25au, 1u);
    g->esi = rd32(sp0 - 0xcu);
    return;
L_100b3b97: ;
    if (rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) == 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
    }
    else
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
        if (rd32(eax + 0xd4u) == 0u)
        {
            eax = rd32(eax + 0xd4u);
        }
        else
        {
            eax = rd32(eax + 0xd4u);
            t17 = rd32(eax + 0x264u) - 1u;
            t18 = rd32(eax + 0x264u);
            wr32(eax + 0x264u, t17);
            if ((int32_t)(t18 - 1u) < 0)
            {
                wr32(eax + 0x264u, 0u);
            }
        }
    }
    t19 = rd16(self);
    t20 = rd32(self + 0x25cu);
    t21 = rd32(self + 4u);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 2u));
    wr32(self + 8u, t21);
    wr16(self + 2u, (uint16_t)t19);
    wr32(self + 0x260u, t20);
    wr8(self + 0x25au, 1u);
    return;
L_100b3bf8: ;
    wr32(sp0 - 0x10u, sp0 - 8u);
    wr32(sp0 - 0x14u, sp0 - 4u);
    wr32(sp0 - 0x18u, 3u);
    g->edx = sp0 - 8u;
    g->esp = sp0 - 0x14u;
    t9 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 3u);
    t10 = g->edx;
    wr32(sp0 - 0x18u, t9);
    g->esp = sp0 - 0xcu;
    t11 = cow_fastcall(g, COW_IMG(0x100afb00u), self, t10, 3, t9, sp0 - 4u, sp0 - 8u);
    if ((uint8_t)t11 != 1u) goto L_100b3c54;
    t12 = rd8(rd16(self + 0x256u) + rd32(self + 0x20u) + 2u);
    wr32(sp0 - 0x10u, t12);
    t13 = rd8(rd16(self + 0x256u) + rd32(self + 0x20u) + 7u);
    wr32(sp0 - 0x14u, t13);
    t14 = rd32(self + 8u);
    wr32(sp0 - 0x18u, t14);
    t15 = rd32(sp0 - 4u);
    wr32(sp0 - 0x1cu, t15);
    g->esp = sp0 - 0xcu;
    t16 = cow_cdecl(g, COW_IMG(0x100b3cc0u), 4, t15, t14, t13, t12);
    if (t16 != 2u) goto L_100b3c54;
    wr8(self + 0x25au, 1u);
    g->esi = rd32(sp0 - 0xcu);
    return;
L_100b3c54: ;
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 8u));
    g->esi = rd32(sp0 - 0xcu);
    return;
L_100b3c61: ;
    wr32(sp0 - 0x10u, sp0 - 8u);
    wr32(sp0 - 0x14u, sp0 - 4u);
    wr32(sp0 - 0x18u, 2u);
    g->edx = sp0 - 8u;
    g->esp = sp0 - 0x14u;
    t3 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 2u);
    t4 = g->edx;
    wr32(sp0 - 0x18u, t3);
    g->esp = sp0 - 0xcu;
    t5 = cow_fastcall(g, COW_IMG(0x100afb00u), self, t4, 3, t3, sp0 - 4u, sp0 - 8u);
    t6 = g->edx;
    if ((uint8_t)t5 != 1u) goto L_100b3aa4;
    edx = t6;
    t7 = rd32(sp0 - 4u);
    wr32(sp0 - 0x10u, t7);
    g->esp = sp0 - 0xcu;
    t8 = cow_cdecl(g, COW_IMG(0x100b3d70u), 1, t7);
    if (t8 != 2u) goto L_100b3aa4;
    wr8(self + 0x25au, 1u);
    g->esi = rd32(sp0 - 0xcu);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b3a50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b3a50(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
