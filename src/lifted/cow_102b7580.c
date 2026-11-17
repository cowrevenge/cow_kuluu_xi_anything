/* f_0x102b7580 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102b7580(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_c;
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
    uint32_t t42;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 64u);

    wr32(sp0 - 0x18u, in_ebx);
    wr32(sp0 - 0x1cu, in_ebp);
    wr32(sp0 - 0x20u, in_esi);
    wr32(sp0 - 0x24u, in_edi);
    t1 = rd32(rd32(sp0 + 8u) + 0x34u);
    wr32(sp0 - 0x28u, t1);
    g->eax = t1;
    g->ecx = self;
    g->edx = in_edx;
    t2 = rd32(sp0 + 8u);
    g->esp = sp0 - 0x1cu;
    t3 = cow_cdecl(g, COW_IMG(0x102a9600u), 3, t1, in_edi, in_esi);
    t4 = g->ecx;
    t5 = g->edx;
    wr32(sp0 - 0x2cu, t3);
    wr32(sp0 - 0x14u, t3);
    t6 = rd32(sp0 + 4u);
    wr32(t6 + 0x34u, t3);
    g->ecx = t4;
    g->edx = t5;
    g->esp = sp0 - 0x28u;
    t7 = cow_cdecl(g, COW_IMG(0x102a9a50u), 1, t3);
    t8 = g->ecx;
    t9 = g->edx;
    wr32(sp0 - 0x30u, 1u);
    wr32(sp0 - 0x34u, t7);
    wr32(sp0 - 0x38u, t3);
    wr32(t6 + 0x44u, t7);
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x102a99a0u), 6, t3, t7, 1u, rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), in_edi);
    t10 = rd32(t6 + 0x48u);
    wr32(sp0 + 8u, 0u);
    if ((int32_t)t10 <= 0)
    {
        eax = 0u;
        ebx = t2;
        ebp = t6;
        esi = t3;
    }
    else
    {
        ebx = t2;
        ebp = t6;
        wr32(sp0 + 4u, 0u);
        eax = 0u;
        ecx = 0u;
L_102b75c9: ;
        eax = eax << 4u;
        edx = 4u;
L_102b75d1: ;
        t11 = rd32(eax + rd32(ebx + 0x4cu));
        wr32(ecx + rd32(ebp + 0x4cu), t11);
        if (edx != 1u)
        {
            eax = eax + 4u;
            ecx = ecx + 4u;
            edx = edx - 1u;
            goto L_102b75d1;
        }
        t12 = rd32(sp0 + 8u) + 1u;
        t13 = rd32(sp0 + 4u);
        t14 = rd32(sp0 + 8u);
        t15 = rd32(ebp + 0x48u);
        wr32(sp0 + 8u, t12);
        wr32(sp0 + 4u, t13 + 0x28u);
        if ((int32_t)(t14 + 1u) < (int32_t)t15)
        {
            eax = t12;
            ecx = t13 + 0x28u;
            goto L_102b75c9;
        }
        eax = t12;
        esi = rd32(sp0 - 0x14u);
    }
    wr32(sp0 - 0x28u, ebx + 0x14u);
    wr32(sp0 - 0x2cu, ebp + 0x14u);
    g->ecx = ebx + 0x14u;
    g->edx = ebp + 0x14u;
    g->esp = sp0 - 0x24u;
    cow_cdecl(g, COW_IMG(0x1028d9e0u), 2, ebp + 0x14u, ebx + 0x14u);
    t16 = g->ecx;
    t17 = g->edx;
    wr32(sp0 - 0x30u, 0x234u);
    wr32(sp0 - 0x34u, COW_IMG(0x103c2194u));
    wr32(sp0 - 0x38u, 0x18u);
    t18 = rd32(esi + 0x14u);
    wr32(sp0 - 0x3cu, t18);
    g->eax = t18;
    g->esp = sp0 - 0x28u;
    t19 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, t18, 0x18u, COW_IMG(0x103c2194u), 0x234u, rd32(sp0 - 0x2cu));
    t20 = rd32(esi + 0x14u);
    wr32(sp0 + 4u, t19);
    edi = t19;
    eax = 0u;
    ecx = t20 * 0x18u >> 2u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = t20 * 0x18u & 3u;
    while (ecx) { wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    if ((int32_t)rd32(ebp + 0x48u) <= 0)
    {
        edx = t20 * 0x18u;
        goto L_102b769f;
    }
    edi = 0u;
L_102b7653: ;
    wr32(sp0 + 8u, 4u);
    edx = edi << 4u;
L_102b7660: ;
    t21 = rd32(sp0 + 4u);
    t22 = rd32(edx + rd32(ebx + 0x4cu));
    wr32(t21 + t22 * 0x18u + rd32(t21 + t22 * 0x18u) * 4u + 4u, edi);
    t23 = rd32(t21 + t22 * 0x18u) + 1u;
    t24 = rd32(sp0 + 8u);
    wr32(t21 + t22 * 0x18u, t23);
    wr32(sp0 + 8u, t24 - 1u);
    if (t24 != 1u)
    {
        edx = edx + 4u;
        goto L_102b7660;
    }
    edx = edx + 4u;
    if ((int32_t)(edi + 1u) < (int32_t)rd32(ebp + 0x48u))
    {
        edi = edi + 1u;
        goto L_102b7653;
    }
    esi = rd32(sp0 - 0x14u);
L_102b769f: ;
    t25 = rd32(ebp + 0x48u);
    wr32(sp0 + 8u, 0u);
    if ((int32_t)t25 <= 0) goto L_102b76f4;
L_102b76ae: ;
    esi = 0u;
    edi = rd32(sp0 + 8u) << 4u;
L_102b76b7: ;
    t26 = rd32(sp0 + 4u) + rd32(edi + rd32(ebx + 0x4cu)) * 0x18u;
    wr32(sp0 - 0x28u, t26);
    wr32(sp0 - 0x2cu, esi);
    t27 = rd32(sp0 + 8u);
    wr32(sp0 - 0x30u, t27);
    wr32(sp0 - 0x34u, ebp);
    g->edx = t27;
    g->esp = sp0 - 4u;
    cow_thiscall_cdecl(g, COW_IMG(0x102b7840u), t26, 12, ebp, t27, esi, t26, rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u));
    t28 = g->edx;
    if ((int32_t)(esi + 1u) < 4)
    {
        esi = esi + 1u;
        edi = edi + 4u;
        goto L_102b76b7;
    }
    edx = t28;
    t29 = rd32(sp0 + 8u) + 1u;
    t30 = rd32(sp0 + 8u);
    t31 = rd32(ebp + 0x48u);
    wr32(sp0 + 8u, t29);
    if ((int32_t)(t30 + 1u) < (int32_t)t31) goto L_102b76ae;
    esi = rd32(sp0 - 0x14u);
L_102b76f4: ;
    if ((int32_t)rd32(rd32(sp0 - 0x14u) + 0x14u) <= 0)
    {
        ecx = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
    }
    else
    {
        esi = rd32(esi + rd32(ebp + 0x44u) * 4u + 0x54u);
        t32 = rd32(sp0 + 4u);
        wr32(sp0 + 8u, t32);
        edi = 0u;
L_102b7714: ;
        t33 = rd32(sp0 + 8u);
        wr32(edi * 4u + esi, 0u);
        t34 = rd32(ebp + 0x4cu);
        wr8(sp0 - 4u, 0xffu);
        eax = 0u;
        ebx = t34 + rd32(t33 + 4u) * 0x28u;
L_102b7732: ;
        if (rd32(eax * 4u + ebx) == edi) goto L_102b773f;
        if ((int32_t)(eax + 1u) < 4)
        {
            eax = eax + 1u;
            goto L_102b7732;
        }
L_102b7743: ;
        wr32(sp0 - 0x10u, ebx);
        t35 = rd32(sp0 - 4u);
        wr32(sp0 - 0xcu, t35);
        eax = ebx;
        loc_10 = ebx;
        loc_c = t35;
L_102b7751: ;
        if (rd32(eax + rd32(COW_IMG(0x103c7b80u) + (uint32_t)(int8_t)loc_c * 4u) * 4u + 0x10u) == 0u) goto L_102b77a0;
        ecx = rd32(COW_IMG(0x103c7b80u) + (uint32_t)(int8_t)loc_c * 4u);
        wr32(sp0 - 0x28u, sp0 - 0x10u);
        g->ecx = ecx;
        g->esp = sp0 - 0x1cu;
        cow_call_regs(g, COW_IMG(0x102bc540u), g->eax, g->ecx, sp0 - 0x10u, 1, 3, sp0 - 0x10u, rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
        t36 = g->ecx;
        t37 = g->edx;
        if (ebx != rd32(sp0 - 0x10u))
        {
            eax = rd32(sp0 - 0x10u);
            loc_10 = rd32(sp0 - 0x10u);
            loc_c = rd32(sp0 - 0xcu);
            goto L_102b7751;
        }
        eax = rd32(sp0 - 0x10u);
        ecx = t36;
        edx = t37;
        if (rd8(sp0 - 4u) != rd8(sp0 - 0xcu))
        {
            loc_10 = rd32(sp0 - 0x10u);
            loc_c = rd32(sp0 - 0xcu);
            goto L_102b7751;
        }
        edx = (edx & 0xffffff00u) | rd8(sp0 - 0xcu);
        if (rd32(rd32(sp0 + 8u)) == 3u) goto L_102b77dc;
        eax = rd32(rd32(sp0 + 8u)) - 3u;
        if (eax == 1u) goto L_102b77d3;
        eax = eax - 1u;
        if (eax == 1u) goto L_102b77dc;
        wr32(edi * 4u + esi, 0u);
        loc_10 = rd32(sp0 - 0x10u);
L_102b77e3: ;
        t38 = rd32(sp0 + 8u) + 0x18u;
        wr32(sp0 + 8u, t38);
        if ((int32_t)(edi + 1u) < (int32_t)rd32(rd32(sp0 - 0x14u) + 0x14u))
        {
            edi = edi + 1u;
            goto L_102b7714;
        }
        ecx = rd32(sp0 - 0x14u);
    }
    if ((int32_t)rd32(ebp + 0x48u) > 0)
    {
        eax = rd32(ebp + 0x48u);
        esi = 0u;
        edi = 0u;
L_102b7807: ;
        t39 = edi + rd32(ebp + 0x4cu);
        wr32(sp0 - 0x28u, t39);
        wr32(sp0 - 0x2cu, ebp);
        g->edx = t39;
        g->esp = sp0 - 0xcu;
        cow_thiscall_cdecl(g, COW_IMG(0x102b7320u), ecx, 8, ebp, t39, rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u), loc_10);
        t40 = g->ecx;
        t41 = g->edx;
        if ((int32_t)(esi + 1u) < (int32_t)rd32(ebp + 0x48u))
        {
            eax = rd32(ebp + 0x48u);
            ecx = t40;
            esi = esi + 1u;
            edi = edi + 0x28u;
            loc_10 = rd32(sp0 - 0x10u);
            goto L_102b7807;
        }
        ecx = t40;
        edx = t41;
    }
    wr32(sp0 - 0x28u, 0x288u);
    wr32(sp0 - 0x2cu, COW_IMG(0x103c2194u));
    t42 = rd32(sp0 + 4u);
    wr32(sp0 - 0x30u, t42);
    g->esp = sp0 - 0x24u;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, t42, COW_IMG(0x103c2194u), 0x288u);
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = rd32(sp0 - 0x20u);
    g->edi = rd32(sp0 - 0x24u);
    g->ebp = rd32(sp0 - 0x1cu);
    return;
L_102b773f: ;
    wr8(sp0 - 4u, (uint8_t)eax);
    goto L_102b7743;
L_102b77a0: ;
    if (rd32(rd32(sp0 + 8u)) == 1u)
    {
        edx = rd32(sp0 + 8u);
        wr32(edi * 4u + esi, 5u);
    }
    else
    {
        eax = rd32(rd32(sp0 + 8u)) - 1u;
        edx = rd32(sp0 + 8u);
        if (eax == 1u)
        {
            wr32(edi * 4u + esi, 3u);
        }
        else
        {
            eax = eax - 1u;
            if (eax == 1u)
            {
                wr32(edi * 4u + esi, 4u);
            }
            else
            {
                wr32(edi * 4u + esi, 0u);
            }
        }
    }
    goto L_102b77e3;
L_102b77d3: ;
    wr32(edi * 4u + esi, 1u);
    loc_10 = rd32(sp0 - 0x10u);
    goto L_102b77e3;
L_102b77dc: ;
    wr32(edi * 4u + esi, 2u);
    loc_10 = rd32(sp0 - 0x10u);
    goto L_102b77e3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102b7580(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102b7580(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
