/* f_0x1024a460 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_1024a460(Guest* g)
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
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
    uint32_t t64;
    uint32_t t65;
    uint32_t t66;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x1024a370u), 6, 1u, 0u, 0u, in_edi, in_esi, in_ebp);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u) goto L_1024a731;
    ecx = t2;
    edx = t3;
    esi = t1;
    if (rd32(esi + 4u) != 0u)
    {
        if (rd32(esi + 0x3cu) != 0u)
        {
            eax = rd32(esi + 0x3cu);
            t4 = rd32(COW_IMG(0x103291c8u));
            wr32(esi + 0x48u, 0u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t5 = cow_thiscall(g, t4, ecx, 2, eax, 0u);
            t6 = g->ecx;
            t7 = g->edx;
            if (t5 == 0u)
            {
                eax = t5;
                edx = t7;
            }
            else
            {
                eax = t5;
                ecx = t6;
                edx = t7;
                edi = t4;
                ebp = rd32(COW_IMG(0x103290f8u));
L_1024a49f: ;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                cow_thiscall(g, ebp, ecx, 1, 1u);
                t8 = g->ecx;
                t9 = g->edx;
                t10 = rd32(esi + 0x3cu);
                g->eax = t10;
                g->edx = t9;
                t11 = cow_thiscall(g, edi, t8, 2, t10, 0u);
                t12 = g->ecx;
                t13 = g->edx;
                if (t11 != 0u)
                {
                    eax = t11;
                    ecx = t12;
                    edx = t13;
                    goto L_1024a49f;
                }
                eax = t11;
                edx = t13;
            }
            t14 = rd32(esi + 0x3cu);
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, rd32(COW_IMG(0x10329104u)), t14, 1, t14);
            t15 = g->ecx;
            wr32(esi + 0x3cu, 0u);
            ecx = t15;
        }
        if (rd32(esi + 4u) != 0u)
        {
            eax = rd32(esi + 4u);
            g->edx = rd32(eax);
            t16 = rd32(eax);
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, rd32(t16 + 0x48u), ecx, 1, eax);
            t17 = g->ecx;
            t18 = g->edx;
            if (rd32(esi + 4u) == 0u)
            {
                ecx = t17;
            }
            else
            {
                eax = rd32(esi + 4u);
                edx = t18;
                t19 = rd32(eax);
                g->esp = sp0 - 0x10u;
                cow_thiscall(g, rd32(t19 + 8u), t19, 1, eax);
                t20 = g->ecx;
                wr32(esi + 4u, 0u);
                ecx = t20;
            }
            if (rd32(esi) != 0u)
            {
                eax = rd32(esi);
                g->esp = sp0 - 0x10u;
                cow_thiscall(g, rd32(rd32(eax) + 8u), ecx, 1, eax);
                wr32(esi, 0u);
            }
        }
    }
    t21 = rd32(sp0 + 0x10u);
    wr32(esi + 0xd4u, 0u);
    t22 = rd32(COW_IMG(0x103889f0u) + (t21 & 0x7fu) * 4u) << 0xcu;
    wr32(esi + 0x70u, t22);
    wr32(esi + 0x80u, arg3 << 0xcu);
    wr32(esi + 0xd4u, 0u);
    wr32(esi + 0x6cu, 0u);
    wr32(esi + 0x7cu, 0u);
    wr32(esi + 0x78u, 0u);
    g->esp = sp0 - 8u;
    t23 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, t22, arg3 << 0xcu, 1, 3, 0x20u, in_edi, in_esi);
    t24 = g->ecx;
    t25 = g->edx;
    if (t23 == 0u) goto L_1024a731;
    ecx = t24;
    edx = t25;
    ebp = t23;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x10249af0u), arg1, ecx, edx, 1, 3, ebp, arg1, 0u);
    t26 = g->ecx;
    t27 = g->edx;
    g->esp = sp0 - 0x14u;
    t28 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, t26, t27, 1, 3, 0x12u, ebp, arg1);
    t29 = g->ecx;
    t30 = g->edx;
    g->esp = sp0 - 0x18u;
    t31 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, t29, t30, 1, 3, 0x24u, 0x12u, ebp);
    t32 = g->ecx;
    t33 = g->edx;
    wr32(sp0 + 0x10u, t31);
    if (t28 == 0u)
    {
        eax = t31;
        ecx = t32;
        edx = t33;
        edi = t31;
    }
    else
    {
        eax = t31;
        ecx = t32;
        edx = t33;
        ebx = t28;
        edi = t31;
        if (edi != 0u)
        {
            wr16(ebx, 1u);
            wr16(ebx + 2u, rd16(ebp + 4u));
            wr16(ebx + 0xeu, rd16(ebp + 8u));
            wr16(ebx + 0xcu, (uint16_t)(uint32_t)((int32_t)(rd32(ebp + 8u) * rd32(ebp + 4u) + ((uint32_t)((int32_t)(rd32(ebp + 8u) * rd32(ebp + 4u)) >> 0x1fu) & 7u)) >> 3u));
            t34 = rd32(ebp + 0xcu);
            t35 = rd16(ebx + 0xcu);
            wr32(ebx + 4u, t34);
            wr32(ebx + 8u, t35 * t34);
            wr16(ebx + 0x10u, 0u);
            eax = 0u;
            ecx = 9u;
            while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            t36 = rd32(sp0 + 0x10u);
            wr32(t36, 0x24u);
            wr32(t36 + 0x14u, rd32(COW_IMG(0x1034a118u)));
            wr32(t36 + 0x18u, rd32(COW_IMG(0x1034a11cu)));
            wr32(t36 + 0x1cu, rd32(COW_IMG(0x1034a120u)));
            wr32(t36 + 0x20u, rd32(COW_IMG(0x1034a124u)));
            t37 = rd32(COW_IMG(0x106690f8u));
            wr32(t36 + 0x10u, ebx);
            wr32(t36 + 4u, t37 | 0x500c0u);
            wr32(t36 + 8u, 0x30000u);
            g->eax = t36;
            g->edx = rd32(rd32(COW_IMG(0x106690f4u)));
            t38 = rd32(COW_IMG(0x106690f4u));
            t39 = rd32(rd32(COW_IMG(0x106690f4u)));
            g->esp = sp0 - 0x10u;
            t40 = cow_thiscall(g, rd32(t39 + 0xcu), t38, 4, t38, t36, esi, 0u);
            t41 = g->ecx;
            t42 = g->edx;
            if ((int32_t)t40 < 0)
            {
                eax = t40;
                ecx = t41;
                edx = t42;
            }
            else
            {
                g->eax = rd32(esi);
                g->edx = rd32(rd32(esi));
                t43 = rd32(esi);
                t44 = rd32(rd32(esi));
                g->esp = sp0 - 0x10u;
                t45 = cow_thiscall(g, rd32(t44), esi + 4u, 3, t43, COW_IMG(0x1034185cu), esi + 4u);
                t46 = g->ecx;
                t47 = g->edx;
                if ((int32_t)t45 >= 0)
                {
                    eax = t45;
                    ecx = t46;
                    edx = t47;
                }
                else
                {
                    ecx = t46;
                    edx = t47;
                    if (rd32(esi) == 0u)
                    {
                        eax = rd32(esi);
                    }
                    else
                    {
                        eax = rd32(esi);
                        g->eax = eax;
                        g->edx = edx;
                        t48 = rd32(eax);
                        g->esp = sp0 - 0x10u;
                        t49 = cow_thiscall(g, rd32(t48 + 8u), t48, 1, eax);
                        t50 = g->ecx;
                        t51 = g->edx;
                        wr32(esi, 0u);
                        eax = t49;
                        ecx = t50;
                        edx = t51;
                    }
                }
            }
            edi = rd32(sp0 + 0x10u);
        }
        g->eax = eax;
        g->esp = sp0 - 0x10u;
        t52 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, ebx);
        t53 = g->ecx;
        t54 = g->edx;
        eax = t52;
        ecx = t53;
        edx = t54;
    }
    if (edi != 0u)
    {
        g->eax = eax;
        g->esp = sp0 - 0x10u;
        t55 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, edi);
        t56 = g->ecx;
        t57 = g->edx;
        eax = t55;
        ecx = t56;
        edx = t57;
    }
    if (rd32(esi) == 0u) goto L_1024a714;
    wr32(esi + 0xc0u, arg2);
    wr32(esi + 8u, arg1);
    wr32(esi + 0xc4u, 0xf4240u);
    edi = esi + 0xcu;
    eax = 0u;
    ecx = 0xcu;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(esi + 0x18u, 1u);
    wr8(esi + 0x38u, 1u);
    wr8(esi + 0x36u, rd8(ebp + 4u));
    t58 = rd32(ebp + 0x18u);
    wr32(esi + 0x20u, t58);
    wr32(esi + 0x14u, t58);
    t59 = rd32(ebp + 0xcu);
    wr32(esi + 0x28u, t59);
    wr8(esi + 0x37u, rd8(ebp + 8u));
    t60 = rd32(ebp + 0x1cu) - arg1;
    wr32(esi + 0x30u, t60);
    if ((int32_t)rd32(ebp + 0x14u) <= 0)
    {
        eax = rd32(ebp + 0x14u);
        eax = 0xffffffffu;
    }
    else
    {
        eax = rd32(ebp + 0x10u);
    }
    wr32(esi + 0x48u, 1u);
    wr32(esi + 0x24u, eax);
    wr32(esi + 0x1cu, 0xf4240u);
    wr32(esi + 0xd8u, 0u);
    wr32(esi + 0xf0u, 0u);
    wr32(esi + 0x44u, esi);
    g->eax = eax;
    g->edx = 0xf4240u;
    g->esp = sp0 - 0x10u;
    t61 = cow_thiscall(g, rd32(COW_IMG(0x10329100u)), esi + 0x40u, 6, 0u, 0u, COW_IMG(0x102480e0u), esi + 0x3cu, 0u, esi + 0x40u);
    t62 = g->ecx;
    t63 = g->edx;
    wr32(esi + 0x3cu, t61);
    if (t61 == 0u)
    {
        eax = t61;
        ecx = t62;
        edx = t63;
        goto L_1024a70c;
    }
    eax = t61;
    ecx = t62;
    edx = t63;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t64 = cow_thiscall(g, rd32(COW_IMG(0x10329210u)), ecx, 2, eax, 1u);
    t65 = g->ecx;
    t66 = g->edx;
    cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t65, t66, 1, 1, ebp);
    return;
L_1024a70c: ;
    wr32(esi + 0xc0u, 0u);
L_1024a71e: ;
    wr32(esi + 0xc4u, 0xffffffffu);
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, ebp);
L_1024a731: ;
    return;
L_1024a714: ;
    wr32(esi + 0xc0u, 0u);
    goto L_1024a71e;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1024a460(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1024a460(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
