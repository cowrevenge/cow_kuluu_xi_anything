/* f_0x10219f70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10219f70(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_34;
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
    cow_frame(g, sp0, 96u);

    wr32(sp0 - 0x28u, in_ebx);
    wr32(sp0 - 0x2cu, in_ebp);
    wr32(sp0 - 0x30u, in_esi);
    wr32(sp0 - 0x34u, in_edi);
    wr32(sp0 - 0x38u, 0x79u);
    wr32(sp0 - 0x3cu, 9u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x34u;
    t1 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x79u);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x40u, 0x7au);
    wr32(sp0 - 0x44u, 9u);
    g->ecx = t2;
    g->edx = t3;
    g->esp = sp0 - 0x3cu;
    t4 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x7au);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0x48u, 0x7cu);
    wr32(sp0 - 0x4cu, 9u);
    g->ecx = t5;
    g->edx = t6;
    g->esp = sp0 - 0x44u;
    t7 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x7cu);
    t8 = g->ecx;
    t9 = g->edx;
    wr32(sp0 - 0x50u, 0x7du);
    wr32(sp0 - 0x54u, 9u);
    g->ecx = t8;
    g->edx = t9;
    g->esp = sp0 - 0x4cu;
    t10 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x7du);
    t11 = g->ecx;
    t12 = g->edx;
    wr32(sp0 - 0x58u, 0x7eu);
    wr32(sp0 - 0x5cu, 9u);
    g->edx = t12;
    g->esp = sp0 - 0x54u;
    t13 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x7eu);
    t14 = g->edx;
    wr32(sp0 - 0xcu, t13);
    if (rd32(rd32(self + 8u) + 0x88u) == 0u)
    {
        eax = rd32(rd32(self + 8u) + 0x88u);
        edx = t14;
        ebp = rd32(COW_IMG(0x104e170cu));
        loc_c = t13;
    }
    else
    {
        eax = rd32(rd32(self + 8u) + 0x88u);
        edx = t14;
        ebp = rd32(COW_IMG(0x104e170cu));
        loc_c = t13;
        wr32(eax + 0x14u, 0u);
        wr32(eax + 0x10u, 0x64u);
        wr32(eax + 0xcu, 0x64u);
    }
    if (ebp == 0u) goto L_1021a219;
    if (rd16(self + 0x4cu) != 0u) goto L_1021a219;
    if ((int32_t)rd32(ebp + 0x8e8u) < 0)
    {
        edi = rd32(ebp + 0x8e8u);
    }
    else
    {
        edi = rd32(ebp + 0x8e8u);
        if ((int32_t)edi <= 3)
        {
            g->edx = edx;
            g->esp = sp0 - 0x34u;
            t15 = cow_thiscall(g, COW_IMG(0x1010a2d0u), ebp, 0);
            t16 = g->ecx;
            t17 = g->edx;
            wr8(self + 0x4au, 1u);
            wr8(self + 0x4bu, rd8(self + 0x4bu) & 0xf0u);
            wr16(self + 0x4eu, 1u);
            wr16(self + 0x14u, 1u);
            wr16(self + 0x50u, 0u);
            wr32(self + 0x2a0u, 0u);
            wr32(self + 0x2a4u, 0u);
            wr32(self + 0x18u, 0u);
            t18 = rd16(COW_IMG(0x1066469cu));
            wr8(self + 0x20u, 0u);
            wr16(self + 0x1cu, (uint16_t)t18);
            edx = t17;
            edi = t15;
        }
    }
    if (edi == 5u) goto L_1021a12e;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t19 = cow_thiscall(g, COW_IMG(0x1010a4d0u), ebp, 0);
    t20 = g->edx;
    if (t19 == 0u)
    {
        eax = t19;
        edx = t20;
        goto L_1021a05a;
    }
    edx = t20;
    g->esp = sp0 - 0x34u;
    t21 = cow_thiscall(g, COW_IMG(0x1010a4d0u), ebp, 0);
    g->edx = rd32(t21);
    t22 = rd32(t21);
    t23 = cow_thiscall(g, rd32(t22 + 0x10u), t21, 0);
    t24 = g->edx;
    if (t23 == 1u)
    {
        edx = t24;
        goto L_1021a12e;
    }
    eax = t23;
    edx = t24;
L_1021a05a: ;
    if (edi != 4u) goto L_1021a096;
    if (rd16(self + 0x4eu) != 0u)
    {
        wr16(self + 0x14u, 1u);
        wr16(self + 0x50u, 0u);
        wr16(self + 0x4eu, 0u);
        if (rd32(COW_IMG(0x105781f8u)) == 0u)
        {
            eax = rd32(COW_IMG(0x105781f8u));
        }
        else
        {
            eax = rd32(COW_IMG(0x105781f8u));
            wr32(sp0 - 0x38u, 8u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x34u;
            t25 = cow_thiscall(g, COW_IMG(0x10221300u), eax + 0x20u, 1, 8u);
            t26 = g->edx;
            eax = t25;
            edx = t26;
        }
    }
    wr32(sp0 - 0x38u, ebp);
    g->ebx = 0u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t27 = cow_thiscall(g, COW_IMG(0x102185d0u), self, 1, ebp);
    t28 = g->edx;
    g->ebx = rd32(sp0 - 0x28u);
    g->esi = rd32(sp0 - 0x30u);
    g->edi = rd32(sp0 - 0x34u);
    g->ebp = rd32(sp0 - 0x2cu);
    g->edx = t28;
    return t27;
L_1021a096: ;
    if (edi == 1u) goto L_1021a229;
    if (edi == 0u) goto L_1021a229;
    if (edi == 2u) goto L_1021a229;
    if (edi == 3u) goto L_1021a229;
    if (rd16(self + 0x24u) < 0x258u)
    {
        eax = (eax & 0xffff0000u) | rd16(self + 0x24u);
        goto L_1021a109;
    }
    eax = (eax & 0xffff0000u) | rd16(self + 0x24u);
    if (rd16(self + 0x22u) < 3u) goto L_1021a103;
    wr32(sp0 - 0x38u, 0x80808080u);
    wr32(sp0 - 0x3cu, 0u);
    t29 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x40u, t29);
    t30 = rd16(self + 0x30u) + rd16(self + 0x36u);
    wr32(sp0 - 0x44u, t30);
    t31 = rd16(self + 0x2eu) + rd16(self + 0x32u);
    wr32(sp0 - 0x48u, t31);
    g->ebx = 0u;
    g->eax = t31;
    g->edx = rd16(self + 0x30u);
    t32 = rd16(self + 0x30u);
    g->esp = sp0 - 0x1cu;
    t33 = cow_cdecl(g, COW_IMG(0x10129f00u), 11, t31, t30, t29, 0u, 0x80808080u, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
    t34 = g->edx;
    g->ebx = rd32(sp0 - 0x28u);
    g->esi = rd32(sp0 - 0x30u);
    g->edi = rd32(sp0 - 0x34u);
    g->ebp = rd32(sp0 - 0x2cu);
    g->edx = t34;
    return t33;
L_1021a103: ;
    if ((uint16_t)eax >= 0x258u) goto L_1021a116;
L_1021a109: ;
    t37 = rd32(sp0 - 0x34u);
    wr16(self + 0x24u, (uint16_t)(eax + 1u));
    g->ebx = rd32(sp0 - 0x28u);
    g->esi = rd32(sp0 - 0x30u);
    g->edi = t37;
    g->ebp = rd32(sp0 - 0x2cu);
    g->edx = edx;
    return eax + 1u;
L_1021a116: ;
    wr16(self + 0x22u, (uint16_t)(rd16(self + 0x22u) + 1u));
    wr32(sp0 - 0x38u, 0u);
    wr16(self + 0x24u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t35 = cow_thiscall(g, COW_IMG(0x1010a5f0u), ebp, 1, 0u);
    t36 = g->edx;
    g->ebx = rd32(sp0 - 0x28u);
    g->esi = rd32(sp0 - 0x30u);
    g->edi = rd32(sp0 - 0x34u);
    g->ebp = rd32(sp0 - 0x2cu);
    g->edx = t36;
    return t35;
L_1021a12e: ;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t38 = cow_thiscall(g, COW_IMG(0x1010a4d0u), ebp, 0);
    t39 = g->edx;
    wr32(sp0 - 0x20u, t38);
    if (rd32(t38 + 0x14u) == 0u)
    {
        eax = rd32(t38 + 0x14u);
        edx = t39;
        edi = t38;
        loc_20 = t38;
        goto L_1021a151;
    }
    eax = rd32(t38 + 0x14u);
    edx = t39;
    edi = t38;
    loc_20 = t38;
    if (rd32(eax + 4u) == 0u) goto L_1021a151;
    ecx = rd32(eax + 4u);
    wr32(sp0 - 0x24u, ecx);
    edx = ecx;
    loc_24 = ecx;
L_1021a159: ;
    if (rd16(self + 0x4eu) != 0u)
    {
        wr16(self + 0x14u, 0u);
        g->edx = edx;
        g->esp = sp0 - 0x34u;
        t40 = cow_thiscall(g, COW_IMG(0x1010a4d0u), ebp, 0);
        t41 = g->edx;
        if (t40 == 0u)
        {
            edx = t41;
        }
        else
        {
            edx = t41;
            g->esp = sp0 - 0x34u;
            t42 = cow_thiscall(g, COW_IMG(0x1010a4d0u), ebp, 0);
            g->edx = rd32(t42);
            t43 = rd32(t42);
            t44 = cow_thiscall(g, rd32(t43 + 0x10u), t42, 0);
            t45 = g->edx;
            if (t44 != 1u)
            {
                edx = t45;
            }
            else
            {
                eax = t44;
                edx = t45;
                wr32(sp0 - 0x38u, 0u);
                wr32(sp0 - 0x3cu, eax);
                wr32(sp0 - 0x40u, 2u);
                t46 = rd32(ebp + 0x8f0u);
                wr32(sp0 - 0x44u, t46);
                g->edx = edx;
                g->esp = sp0 - 0x34u;
                t47 = cow_thiscall(g, COW_IMG(0x1010f350u), sp0 - 0x1cu, 4, t46, 2u, eax, 0u);
                t48 = g->edx;
                g->edx = t48;
                t49 = cow_call_regs(g, COW_IMG(0x1010f510u), t47, sp0 - 0x1cu, g->edx, 1, 0);
                t50 = g->edx;
                if ((uint8_t)t49 != 0u)
                {
                    eax = t49;
                    edx = t50;
                }
                else
                {
                    eax = t49;
                    edx = t50;
                    wr16(self + 0x14u, 1u);
                }
                g->edx = edx;
                g->esp = sp0 - 0x34u;
                cow_thiscall(g, COW_IMG(0x1010f340u), sp0 - 0x1cu, 0);
                t51 = g->edx;
                edx = t51;
                edi = rd32(sp0 - 0x20u);
            }
        }
        wr16(self + 0x50u, 0u);
        wr16(self + 0x4eu, 0u);
        if (rd32(COW_IMG(0x105781f8u)) == 0u)
        {
            eax = rd32(COW_IMG(0x105781f8u));
        }
        else
        {
            eax = rd32(COW_IMG(0x105781f8u));
            wr32(sp0 - 0x38u, 8u);
            g->eax = eax;
            g->esp = sp0 - 0x34u;
            t52 = cow_thiscall(g, COW_IMG(0x10221300u), eax + 0x20u, 1, 8u);
            eax = t52;
        }
    }
    g->eax = eax;
    g->edx = rd32(edi);
    t53 = rd32(edi);
    g->esp = sp0 - 0x34u;
    t54 = cow_thiscall(g, rd32(t53 + 0x10u), edi, 0);
    t55 = g->edx;
    if (t54 != 1u)
    {
        edx = t55;
        goto L_1021a1ec;
    }
    eax = t54;
    edx = t55;
    wr32(sp0 - 0x38u, ebp);
    g->ebp = ebp;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t56 = cow_thiscall(g, COW_IMG(0x10218ac0u), self, 1, ebp);
    t57 = g->edx;
    g->ebx = rd32(sp0 - 0x28u);
    g->esi = rd32(sp0 - 0x30u);
    g->edi = rd32(sp0 - 0x34u);
    g->ebp = rd32(sp0 - 0x2cu);
    g->edx = t57;
    return t56;
L_1021a151: ;
    wr32(sp0 - 0x24u, COW_IMG(0x103d3c84u));
    loc_24 = COW_IMG(0x103d3c84u);
    goto L_1021a159;
L_1021a1ec: ;
    if (rd32(sp0 - 0x24u) == 0u)
    {
        eax = rd32(sp0 - 0x24u);
        goto L_1021a209;
    }
    eax = rd32(sp0 - 0x24u);
    if (rd8(eax) != 0x23u) goto L_1021a209;
    wr32(sp0 - 0x38u, ebp);
    g->ebp = ebp;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t58 = cow_thiscall(g, COW_IMG(0x10219b80u), self, 1, ebp);
    t59 = g->edx;
    g->ebx = rd32(sp0 - 0x28u);
    g->esi = rd32(sp0 - 0x30u);
    g->edi = rd32(sp0 - 0x34u);
    g->ebp = rd32(sp0 - 0x2cu);
    g->edx = t59;
    return t58;
L_1021a209: ;
    wr32(sp0 - 0x38u, ebp);
    g->edi = edi;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t60 = cow_thiscall(g, COW_IMG(0x102194a0u), self, 1, ebp);
    t61 = g->edx;
    g->ebx = rd32(sp0 - 0x28u);
    g->esi = rd32(sp0 - 0x30u);
    g->edi = rd32(sp0 - 0x34u);
    g->ebp = rd32(sp0 - 0x2cu);
    g->edx = t61;
    return t60;
L_1021a219: ;
    if (rd16(self + 0x34au) == 0u)
    {
        loc_28 = in_ebx;
        loc_2c = in_ebp;
        loc_30 = in_esi;
        loc_34 = in_edi;
    }
    else
    {
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x34u;
        t62 = cow_thiscall(g, COW_IMG(0x1021ad50u), self, 0);
        t63 = g->edx;
        eax = t62;
        edx = t63;
        loc_28 = in_ebx;
        loc_2c = in_ebp;
        loc_30 = in_esi;
        loc_34 = in_edi;
    }
L_1021a229: ;
    g->ebx = loc_28;
    g->esi = loc_30;
    g->edi = loc_34;
    g->ebp = loc_2c;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10219f70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10219f70(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
