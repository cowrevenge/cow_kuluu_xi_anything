/* f_0x1020f960 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1020f960(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_8;
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
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 60u);

    wr32(sp0 - 0x1cu, in_edi);
    g->eax = rd32(self);
    g->edx = in_edx;
    t1 = rd32(self);
    g->esp = sp0 - 0x1cu;
    t2 = cow_thiscall(g, rd32(t1), self, 0);
    t3 = g->edx;
    t4 = rd8(self + 0x12u);
    wr16(self + 6u, (uint16_t)t4);
    if ((uint16_t)t4 != 0u)
    {
        eax = (t2 & 0xffff0000u) | t4;
        edx = t3;
        goto L_1020f98e;
    }
    eax = (t2 & 0xffff0000u) | t4;
    edx = t3;
    wr32(sp0 - 0x20u, 1u);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, 0u);
    g->edi = self;
    g->eax = eax;
    g->esp = sp0 - 0x1cu;
    t5 = cow_fastcall(g, COW_IMG(0x101f7020u), arg1, edx, 3, 0u, 0u, 1u);
    t6 = g->edx;
    g->edi = in_edi;
    g->edx = t6;
    return t5;
L_1020f98e: ;
    wr32(sp0 - 0x20u, in_ebx);
    wr32(sp0 - 0x24u, in_ebp);
    wr32(sp0 - 0x28u, in_esi);
    if (rd32(self + 8u) != 0u)
    {
        ecx = rd32(self + 8u);
        esi = in_esi;
        loc_1c = in_edi;
        loc_20 = in_ebx;
        loc_24 = in_ebp;
        loc_28 = in_esi;
    }
    else
    {
        t7 = (uint32_t)(int16_t)eax * 0x54u;
        wr32(sp0 - 0x2cu, t7);
        g->eax = (uint32_t)(int16_t)eax * 8u - (uint32_t)(int16_t)eax;
        g->esp = sp0 - 0x20u;
        t8 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, t7, edx, 1, 3, t7, in_esi, in_ebp);
        t9 = g->ecx;
        t10 = g->edx;
        if (t8 == 0u)
        {
            ecx = t9;
            edx = t10;
            esi = (uint32_t)(int16_t)eax;
            eax = t8;
            ebp = 0u;
        }
        else
        {
            ecx = t9;
            edx = t10;
            ebp = t8;
            esi = (uint32_t)(int16_t)eax;
            if ((int32_t)(esi - 1u) < 0)
            {
                eax = esi - 1u;
            }
            else
            {
                eax = esi - 1u;
                ebx = ebp;
                esi = eax + 1u;
L_1020f9c5: ;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x28u;
                t11 = cow_thiscall(g, COW_IMG(0x101f4af0u), ebx, 0);
                t12 = g->ecx;
                t13 = g->edx;
                if (esi != 1u)
                {
                    eax = t11;
                    edx = t13;
                    ebx = ebx + 0x54u;
                    esi = esi - 1u;
                    goto L_1020f9c5;
                }
                eax = t11;
                ecx = t12;
                edx = t13;
                esi = esi - 1u;
            }
        }
        wr32(self + 8u, ebp);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_28 = rd32(sp0 - 0x28u);
    }
    wr32(sp0 - 0xcu, 0u);
    wr16(self + 4u, 0u);
    wr32(sp0 - 8u, 0u);
    ebp = 0u;
    loc_c = 0u;
    loc_8 = 0u;
L_1020f9e7: ;
    if ((int16_t)rd16(self + 4u) >= (int16_t)rd16(self + 6u)) goto L_1020fbad;
    edx = (edx & 0xffff0000u) | rd16(self + 4u);
    wr32(sp0 - 0x2cu, ebp);
    wr32(sp0 - 0x30u, sp0 - 0x18u);
    g->eax = sp0 - 0x18u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t14 = cow_cdecl(g, COW_IMG(0x100f8a80u), 2, sp0 - 0x18u, ebp);
    t15 = g->ecx;
    t16 = g->edx;
    if ((uint8_t)t14 == 0u)
    {
        eax = t14;
        ecx = t15;
        edx = t16;
    }
    else
    {
        wr32(sp0 - 0x2cu, 0x80808080u);
        t17 = rd32(sp0 - 0x18u) + 0xcu;
        wr32(sp0 - 0x30u, t17);
        wr32(sp0 - 0x34u, 0x16u);
        wr32(sp0 - 0x38u, 0u);
        t18 = rd32(self + 8u) + (uint32_t)(int16_t)rd16(self + 4u) * 0x54u;
        g->eax = t17;
        t19 = rd32(self + 8u);
        g->esp = sp0 - 0x28u;
        t20 = cow_fastcall(g, COW_IMG(0x101f4b20u), t18, t19, 4, 0u, 0x16u, t17, 0x80808080u);
        t21 = g->edx;
        t22 = (t21 & 0xffff0000u) | rd16(rd32(sp0 - 0x18u) + 0xcu);
        wr32(sp0 - 0x2cu, t22);
        wr32(sp0 - 0x30u, 0u);
        g->esi = t18;
        g->edx = t22;
        t23 = cow_cdecl(g, COW_IMG(0x101cba50u), 2, 0u, t22);
        t24 = g->edx;
        t25 = (-((uint8_t)t23 != 0u) & 0xffdfdfe0u) - 0x7f7f7f80u;
        wr32(sp0 - 0x2cu, t25);
        t26 = rd32(rd32(sp0 - 0x18u)) + 1u;
        wr32(sp0 - 0x30u, t26);
        wr32(sp0 - 0x34u, 0xau);
        wr32(sp0 - 0x38u, 2u);
        g->eax = rd32(sp0 - 0x18u);
        t27 = rd32(sp0 - 0x18u);
        t28 = cow_fastcall(g, COW_IMG(0x101f4b20u), t18, t24, 4, 2u, 0xau, t26, t25);
        wr32(t18 + 0x48u, ebp);
        g->edx = rd32(self);
        t29 = rd32(self);
        t30 = cow_thiscall(g, rd32(t29 + 0x14u), self, 0);
        t31 = g->edx;
        wr32(t18 + 0x4cu, t30);
        t32 = rd16(rd32(sp0 - 0x18u) + 0xcu);
        wr32(sp0 - 0x2cu, t32);
        g->eax = t32;
        g->edx = t31;
        t33 = rd32(COW_IMG(0x10621808u));
        t34 = cow_thiscall(g, COW_IMG(0x1015b9e0u), t33, 1, t32);
        t35 = g->ecx;
        t36 = g->edx;
        if (t34 == 0u)
        {
            eax = t34;
            ecx = t35;
            edx = t36;
            esi = t18;
        }
        else
        {
            ebx = t34;
            esi = t18;
            wr32(sp0 - 0x2cu, ebx);
            t37 = rd32(sp0 - 0x18u) + 0xcu;
            wr32(sp0 - 0x30u, t37);
            g->eax = t37;
            g->esp = sp0 - 0x28u;
            t38 = cow_thiscall(g, rd32(rd32(self) + 0x20u), self, 2, t37, ebx);
            if (rd32(rd32(sp0 - 0x18u)) <= arg2)
            {
                eax = rd32(sp0 - 0x18u);
                ebp = t38;
            }
            else
            {
                eax = rd32(sp0 - 0x18u);
                ebp = 0x80404040u;
            }
            wr32(sp0 - 0x2cu, sp0 - 0x10u);
            wr32(sp0 - 0x30u, sp0 - 0x14u);
            wr32(sp0 - 0x34u, eax);
            wr32(sp0 - 4u, 0u);
            g->eax = eax;
            g->edx = sp0 - 0x10u;
            g->esp = sp0 - 0x28u;
            t39 = cow_thiscall(g, COW_IMG(0x1020f860u), self, 3, eax, sp0 - 0x14u, sp0 - 0x10u);
            t40 = g->ecx;
            t41 = g->edx;
            if (t39 == 0u)
            {
                edx = t41;
                eax = 0u;
            }
            else
            {
                eax = t39;
                ecx = t40;
                edx = t41;
                if (eax == 0x80404040u)
                {
                    ebp = eax;
                }
                if (rd32(sp0 - 0x14u) < 0x30u)
                {
                    eax = rd32(sp0 - 0x14u);
                    goto L_1020fb16;
                }
                eax = rd32(sp0 - 0x14u);
                if (eax > 0x3au) goto L_1020fb16;
                wr32(sp0 - 0x2cu, ebp);
                t42 = rd32(sp0 - 0x10u);
                wr32(sp0 - 0x30u, t42);
                wr32(sp0 - 0x34u, 0x13u);
                wr32(sp0 - 0x38u, 3u);
                wr32(sp0 - 0x14u, eax - 0x30u);
                g->esp = sp0 - 0x28u;
                cow_fastcall(g, COW_IMG(0x101f4b20u), esi, t42, 4, 3u, 0x13u, t42, ebp);
                t43 = g->edx;
                eax = 0x5au;
                edx = t43;
            }
L_1020fb79: ;
            if ((int16_t)eax <= (int16_t)rd16(sp0 - 0xcu))
            {
                loc_c = rd32(sp0 - 0xcu);
            }
            else
            {
                wr32(sp0 - 0xcu, eax);
                loc_c = eax;
            }
            wr32(sp0 - 0x2cu, ebp);
            t50 = rd32(ebx + 0x14c8u);
            wr32(sp0 - 0x30u, t50);
            wr32(sp0 - 0x34u, 1u);
            wr32(sp0 - 0x38u, 1u);
            g->eax = t50;
            g->esp = sp0 - 0x28u;
            t51 = cow_fastcall(g, COW_IMG(0x101f4b20u), esi, edx, 4, 1u, 1u, t50, ebp);
            t52 = g->ecx;
            t53 = g->edx;
            eax = t51;
            ecx = t52;
            edx = t53;
            ebp = rd32(sp0 - 8u);
        }
        wr16(self + 4u, (uint16_t)(rd16(self + 4u) + 1u));
    }
    wr32(sp0 - 8u, ebp + 1u);
    if ((int32_t)(ebp + 1u) < 80)
    {
        loc_1c = rd32(sp0 - 0x1cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = ebp + 1u;
        ebp = ebp + 1u;
        goto L_1020f9e7;
    }
    loc_1c = rd32(sp0 - 0x1cu);
    loc_20 = rd32(sp0 - 0x20u);
    loc_24 = rd32(sp0 - 0x24u);
    loc_28 = rd32(sp0 - 0x28u);
    loc_c = rd32(sp0 - 0xcu);
L_1020fbad: ;
    wr32(sp0 - 0x2cu, 1u);
    t54 = (ecx & 0xffff0000u) | rd16(self + 4u);
    wr32(sp0 - 0x30u, t54);
    t55 = rd32(self + 8u);
    wr32(sp0 - 0x34u, t55);
    g->esi = esi;
    g->edi = self;
    g->esp = sp0 - 0x28u;
    cow_fastcall(g, COW_IMG(0x101f7020u), arg1, t55, 3, t55, t54, 1u);
    t56 = g->edx;
    if ((uint16_t)rd32(sp0 - 0xcu) == 0u)
    {
        eax = rd32(sp0 - 0xcu);
        edx = t56;
        ebx = rd32(sp0 - 0x20u);
        ebp = rd32(sp0 - 0x24u);
        esi = rd32(sp0 - 0x28u);
    }
    else
    {
        eax = rd32(sp0 - 0xcu);
        edx = t56;
        ebx = rd32(sp0 - 0x20u);
        ebp = rd32(sp0 - 0x24u);
        esi = rd32(sp0 - 0x28u);
        if (rd8(self + 0xdu) != 2u)
        {
            wr8(self + 0xdu, 2u);
        }
        wr16(self + 0xeu, (uint16_t)eax);
    }
    g->ebx = ebx;
    g->esi = esi;
    g->edi = rd32(sp0 - 0x1cu);
    g->ebp = ebp;
    g->edx = edx;
    return eax;
L_1020fb16: ;
    if (eax < 0x40u) goto L_1020fb43;
    if (eax > 0x57u) goto L_1020fb43;
    wr32(sp0 - 0x2cu, ebp);
    wr32(sp0 - 0x14u, eax - 0x40u);
    t44 = (uint8_t)(eax - 0x40u) << 8u | rd8(sp0 - 0x10u);
    wr32(sp0 - 0x30u, t44);
    wr32(sp0 - 0x34u, 0x3bu);
    wr32(sp0 - 0x38u, 3u);
    g->esp = sp0 - 0x28u;
    cow_fastcall(g, COW_IMG(0x101f4b20u), esi, edx, 4, 3u, 0x3bu, t44, ebp);
    t45 = g->edx;
    eax = 0x5au;
    edx = t45;
    goto L_1020fb79;
L_1020fb43: ;
    if (eax >= 0x80u)
    {
        cf = eax < 0x80u;
        zf = eax == 0x80u;
        if (!(!cf && !zf))
        {
            t46 = rd32(sp0 - 0x10u) + 0x11du;
            wr32(sp0 - 0x2cu, t46);
            wr32(sp0 - 0x30u, 0xcu);
            g->eax = eax;
            g->edx = t46;
            g->esp = sp0 - 0x28u;
            t47 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, t46);
            t48 = g->edx;
            wr32(sp0 - 0x2cu, ebp);
            wr32(sp0 - 0x30u, t47);
            wr32(sp0 - 0x34u, 2u);
            wr32(sp0 - 0x38u, 3u);
            cow_fastcall(g, COW_IMG(0x101f4b20u), esi, t48, 4, 3u, 2u, t47, ebp);
            t49 = g->edx;
            edx = t49;
        }
    }
    eax = 0x5au;
    goto L_1020fb79;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1020f960(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1020f960(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
