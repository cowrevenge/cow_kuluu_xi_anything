/* f_0x10281530 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10281530(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 64u);

    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    wr32(sp0 - 0x20u, sp0 - 0xcu);
    wr32(sp0 - 0x24u, 1u);
    t1 = rd32(COW_IMG(0x1099d630u) + rd32(sp0 + 4u) * 0x28u);
    wr32(sp0 - 0x28u, t1);
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, 1u);
    t2 = rd32(COW_IMG(0x1099d620u) + rd32(sp0 + 4u) * 0x28u);
    wr32(sp0 - 0x34u, t2);
    t3 = rd32(COW_IMG(0x1099d61cu) + rd32(sp0 + 4u) * 0x28u);
    wr32(sp0 - 0x38u, t3);
    wr32(sp0 - 0x3cu, rd32(COW_IMG(0x1066941cu)));
    g->eax = rd32(COW_IMG(0x1066941cu));
    g->edx = t3;
    t4 = rd32(COW_IMG(0x1066941cu));
    t5 = rd32(rd32(COW_IMG(0x1066941cu)));
    t6 = rd32(sp0 + 4u);
    g->esp = sp0 - 0x1cu;
    t7 = cow_thiscall(g, rd32(t5 + 0x50u), t5, 8, t4, t3, t2, 1u, 0u, t1, 1u, sp0 - 0xcu);
    t8 = g->ecx;
    t9 = g->edx;
    if (t7 == 0u)
    {
        ebx = t6 * 0x28u;
    }
    else
    {
        eax = t7;
        ecx = t8;
        edx = t9;
        ebx = t6 * 0x28u;
        wr32(sp0 - 0x20u, COW_IMG(0x103b4854u));
        g->ebx = ebx;
        g->esp = sp0 - 0x18u;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b4854u), in_edi);
    }
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, sp0 - 8u);
    wr32(sp0 - 0x2cu, 0u);
    t10 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x30u, t10);
    g->edx = sp0 - 8u;
    t11 = rd32(rd32(sp0 - 0xcu));
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, rd32(t11 + 0x40u), t11, 5, t10, 0u, sp0 - 8u, 0u, 0u);
    t12 = g->ecx;
    t13 = g->edx;
    if (rd32(COW_IMG(0x1099d624u) + ebx) != 3u)
    {
        eax = rd32(COW_IMG(0x1099d624u) + ebx);
        ecx = t12;
        edx = t13;
        if (eax == 4u)
        {
            if ((int32_t)rd32(COW_IMG(0x1099d620u) + ebx) > 0)
            {
                eax = rd32(COW_IMG(0x1099d61cu) + ebx);
                ebp = 0u;
L_1028161d: ;
                if ((int32_t)eax <= 0) goto L_10281661;
                edi = 0u;
L_10281623: ;
                t22 = rd8(arg2 + edi * 4u + eax * ebp * 4u + 3u);
                wr8(edi * 4u + eax * ebp * 4u + rd32(sp0 - 4u) + 3u, (uint8_t)t22);
                t23 = rd8(arg2 + edi * 4u + eax * ebp * 4u);
                wr8(edi * 4u + eax * ebp * 4u + rd32(sp0 - 4u) + 2u, (uint8_t)t23);
                t24 = rd8(arg2 + edi * 4u + eax * ebp * 4u + 1u);
                wr8(edi * 4u + eax * ebp * 4u + rd32(sp0 - 4u) + 1u, (uint8_t)t24);
                t25 = rd8(arg2 + edi * 4u + eax * ebp * 4u + 2u);
                wr8(edi * 4u + eax * ebp * 4u + rd32(sp0 - 4u), (uint8_t)t25);
                if ((int32_t)(edi + 1u) < (int32_t)rd32(COW_IMG(0x1099d61cu) + ebx))
                {
                    eax = rd32(COW_IMG(0x1099d61cu) + ebx);
                    edx = ((edx | t22 | t23 | t24) & 0xffffff00u) | t25;
                    edi = edi + 1u;
                    goto L_10281623;
                }
                eax = rd32(COW_IMG(0x1099d61cu) + ebx);
                edx = ((edx | t22 | t23 | t24) & 0xffffff00u) | t25;
L_10281661: ;
                if ((int32_t)(ebp + 1u) < (int32_t)rd32(COW_IMG(0x1099d620u) + ebx))
                {
                    ebp = ebp + 1u;
                    goto L_1028161d;
                }
                ecx = rd32(COW_IMG(0x1099d620u) + ebx);
            }
        }
    }
    else
    {
        ecx = t12;
        edx = t13;
        t14 = rd32(COW_IMG(0x1099d620u) + ebx);
        wr32(sp0 + 4u, 0u);
        if ((int32_t)t14 > 0)
        {
            eax = rd32(COW_IMG(0x1099d61cu) + ebx);
L_102815b7: ;
            if ((int32_t)eax <= 0) goto L_102815f5;
            ebp = 0u;
L_102815bd: ;
            t15 = rd32(sp0 + 4u);
            t16 = rd8(arg2 + ebp * 3u + eax * rd32(sp0 + 4u) * 3u);
            wr8(ebp * 4u + rd32(sp0 - 4u) + eax * t15 * 4u + 2u, (uint8_t)t16);
            t17 = rd8(arg2 + ebp * 3u + eax * t15 * 3u + 1u);
            wr8(ebp * 4u + eax * t15 * 4u + rd32(sp0 - 4u) + 1u, (uint8_t)t17);
            t18 = rd8(arg2 + ebp * 3u + eax * t15 * 3u + 2u);
            wr8(ebp * 4u + eax * t15 * 4u + rd32(sp0 - 4u), (uint8_t)t18);
            if ((int32_t)(ebp + 1u) < (int32_t)rd32(COW_IMG(0x1099d61cu) + ebx))
            {
                eax = rd32(COW_IMG(0x1099d61cu) + ebx);
                edx = ((edx | t16 | t17) & 0xffffff00u) | t18;
                ebp = ebp + 1u;
                goto L_102815bd;
            }
            eax = rd32(COW_IMG(0x1099d61cu) + ebx);
L_102815f5: ;
            t19 = rd32(sp0 + 4u) + 1u;
            t20 = rd32(COW_IMG(0x1099d620u) + ebx);
            t21 = rd32(sp0 + 4u);
            wr32(sp0 + 4u, t19);
            if ((int32_t)(t21 + 1u) < (int32_t)t20)
            {
                edx = t20;
                goto L_102815b7;
            }
            ecx = t19;
            edx = t20;
        }
    }
    if (rd32(COW_IMG(0x1099d624u) + ebx) == 1u)
    {
        eax = 0u;
L_10281677: ;
        wr8(COW_IMG(0x1099d218u) + eax * 4u, (uint8_t)eax);
        wr8(COW_IMG(0x1099d219u) + eax * 4u, (uint8_t)eax);
        wr8(COW_IMG(0x1099d21au) + eax * 4u, (uint8_t)eax);
        wr8(COW_IMG(0x1099d21bu) + eax * 4u, (uint8_t)eax);
        if ((int32_t)(eax + 1u) < 256)
        {
            eax = eax + 1u;
            goto L_10281677;
        }
        wr32(sp0 - 0x20u, COW_IMG(0x1099d218u));
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x28u, rd32(COW_IMG(0x1066941cu)));
        g->edx = rd32(rd32(COW_IMG(0x1066941cu)));
        t26 = rd32(rd32(COW_IMG(0x1066941cu)));
        g->esp = sp0 - 0x1cu;
        cow_thiscall(g, rd32(t26 + 0x108u), ecx, 3, rd32(COW_IMG(0x1066941cu)), 0u, COW_IMG(0x1099d218u));
        t27 = g->edx;
        wr32(sp0 - 0x20u, 0u);
        wr32(sp0 - 0x24u, rd32(COW_IMG(0x1066941cu)));
        cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0x110u), rd32(rd32(COW_IMG(0x1066941cu))), 2, rd32(COW_IMG(0x1066941cu)), 0u);
        t28 = rd32(COW_IMG(0x1099d620u) + ebx) * rd32(COW_IMG(0x1099d61cu) + ebx);
        t29 = rd32(sp0 - 4u);
        esi = arg2;
        edi = t29;
        ecx = t28 >> 2u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        ecx = t28 & 3u;
        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        edx = t28;
    }
    wr32(sp0 - 0x20u, 0u);
    t30 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x24u, t30);
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, rd32(rd32(t30) + 0x44u), rd32(t30), 2, t30, 0u);
    t31 = rd32(sp0 - 0xcu);
    t32 = rd32(sp0 - 0x18u);
    t33 = rd32(sp0 - 0x1cu);
    wr32(COW_IMG(0x1099d638u) + ebx, t31);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = t32;
    g->edi = t33;
    g->ebp = rd32(sp0 - 0x14u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10281530(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10281530(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
