/* f_0x10039a80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10039a80(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_34;
    uint32_t loc_38;
    uint32_t loc_3c;
    uint32_t loc_40;
    uint32_t loc_44;
    uint32_t loc_50;
    uint32_t loc_58;
    uint32_t loc_5c;
    uint32_t loc_60;
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
    cow_frame(g, sp0, 104u);

    wr32(sp0 - 0x38u, in_ebx);
    wr32(sp0 - 0x3cu, in_ebp);
    wr32(sp0 - 0x40u, in_esi);
    wr32(sp0 - 0x44u, in_edi);
    wr32(sp0 - 0x30u, 0u);
    wr32(sp0 - 0x2cu, 0u);
    t1 = (self & 0xffff0000u) | rd16(self + 0x26u);
    t2 = rd16(self + 0x24u);
    wr32(sp0 - 0x28u, 0xcu);
    eax = t2;
    ecx = t1;
    edx = 2u;
    ebp = (uint16_t)t1;
    edi = (uint16_t)t2;
    loc_34 = rd32(sp0 - 0x34u) & 0xffff00ffu;
    loc_30 = 0u;
    loc_2c = 0u;
    loc_28 = 0xcu;
L_10039abc: ;
    if ((uint16_t)eax == 1u)
    {
        wr32(sp0 - 0x30u, 1u);
        loc_30 = 1u;
    }
    if ((uint16_t)ecx == 1u)
    {
        wr32(sp0 - 0x2cu, 1u);
        loc_2c = 1u;
    }
    if (edi == edx)
    {
        wr32(sp0 - 0x30u, 1u);
        loc_30 = 1u;
    }
    if (ebp == edx)
    {
        wr32(sp0 - 0x2cu, 1u);
        loc_2c = 1u;
    }
    wr32(sp0 - 0x28u, loc_28 - 1u);
    if (loc_28 != 1u)
    {
        edx = edx * 2u;
        loc_28 = loc_28 - 1u;
        goto L_10039abc;
    }
    loc_28 = loc_28 - 1u;
    if (loc_30 == 0u)
    {
        edx = loc_30;
        goto L_10039b0d;
    }
    if (loc_2c != 0u)
    {
        edx = loc_2c;
        goto L_10039b15;
    }
    edx = loc_2c;
L_10039b0d: ;
    edx = (edx & 0xffffff00u) | 1u;
    loc_34 = (loc_34 & 0xffff00ffu) | 0x100u;
L_10039b17: ;
    if (rd8(self + 0x2au) > (uint8_t)edx)
    {
        if ((uint16_t)eax < 0x20u) goto L_10039b28;
        if ((uint16_t)ecx >= 0x20u) goto L_10039b2b;
L_10039b28: ;
        wr8(self + 0x2au, (uint8_t)edx);
    }
L_10039b2b: ;
    if (rd32(self + 0x20u) != 0u)
    {
        ebx = rd32(self + 0x20u);
        goto L_10039b43;
    }
    if (rd32(self + 0x1cu) != 0u)
    {
        ebx = rd32(self + 0x1cu);
        goto L_10039b43;
    }
    g->edx = edx;
    return (eax & 0xffffff00u) | (uint8_t)edx;
L_10039b15: ;
    edx = (edx & 0xffffff00u) | 1u;
    goto L_10039b17;
L_10039b43: ;
    if ((rd32(self + 0x2cu) >> 4u & 0xfu) == 9u)
    {
        edx = rd32(self + 0x2cu) >> 4u;
        ebx = (ebx & 0xffffff00u) | (rd32(self + 0x2cu) >> 4u & 0xfu);
        loc_34 = (loc_34 & 0xff00ffffu) | (rd32(self + 0x2cu) >> 4u & 0xfu) << 0x10u;
        goto L_10039b82;
    }
    edx = rd32(self + 0x2cu) >> 4u;
    ebx = (ebx & 0xffffff00u) | (rd32(self + 0x2cu) >> 4u & 0xfu);
    loc_34 = (loc_34 & 0xff00ffffu) | (rd32(self + 0x2cu) >> 4u & 0xfu) << 0x10u;
    if ((rd8(self + 0x29u) & 0x80u) == 0u)
    {
        ebx = (ebx & 0xffffff00u) | (rd8(self + 0x29u) & 0x80u);
        loc_34 = (loc_34 & 0xffffffu) | (rd8(self + 0x29u) & 0x80u) << 0x18u;
        loc_28 = (loc_28 & 0xffffff00u) | rd8(self + 0x29u);
        goto L_10039b6f;
    }
    loc_34 = (loc_34 & 0xffffffu) | (rd8(self + 0x29u) & 0x80u) << 0x18u;
    loc_28 = (loc_28 & 0xffffff00u) | rd8(self + 0x29u);
    if (rd32(rd32(self + 0x20u)) != 0u)
    {
        ebx = rd32(self + 0x20u);
        goto L_10039bdd;
    }
    ebx = rd32(self + 0x20u);
L_10039b6f: ;
    if ((uint8_t)(loc_34 >> 0x10u) != 0xau)
    {
        ebx = (ebx & 0xffffff00u) | (uint8_t)(loc_34 >> 0x10u);
        goto L_10039bcc;
    }
    ebx = (ebx & 0xffffff00u) | (uint8_t)(loc_34 >> 0x10u);
    if (rd32(COW_IMG(0x10456ab0u)) == 0u)
    {
        edx = rd32(COW_IMG(0x10456ab0u));
        goto L_10039bdd;
    }
    edx = rd32(COW_IMG(0x10456ab0u));
L_10039b82: ;
    if (rd8(self + 0x29u) == 0x10u) goto L_10039d91;
    eax = (eax & 0xffffff00u) | rd8(self + 0x29u);
    if ((uint8_t)eax == 0x18u) goto L_10039d5f;
    if ((uint8_t)eax != 0x20u) goto L_10039ddc;
    if ((rd8(self + 0x2cu) & 7u) == 0u) goto L_10039d55;
    wr32(sp0 - 0x48u, self + 0x44u);
    wr32(sp0 - 0x4cu, 1u);
    wr32(sp0 - 0x50u, 0x15u);
    wr32(sp0 - 0x54u, 0u);
    t21 = rd8(self + 0x2au);
    wr32(sp0 - 0x58u, t21);
    wr32(sp0 - 0x5cu, edi);
    t22 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x60u, t22);
    g->edx = t21;
    g->esp = sp0 - 0x44u;
    t23 = cow_stdcall(g, COW_IMG(0x102d303fu), 7, t22, edi, t21, 0u, 0x15u, 1u, self + 0x44u);
    t24 = g->edx;
    eax = t23;
    edx = t24;
L_10039dd8: ;
    if ((int32_t)eax < 0) goto L_10039de7;
L_10039ddc: ;
    g->ebx = ebx;
    g->esp = sp0 - 0x44u;
    t32 = cow_call_regs(g, COW_IMG(0x10039e50u), eax, self, edx, 1, 0);
    t33 = g->edx;
    if ((uint8_t)t32 != 0u)
    {
        eax = t32;
        edx = t33;
        goto L_10039df1;
    }
    eax = t32;
    edx = t33;
L_10039de7: ;
    g->ebx = rd32(sp0 - 0x38u);
    g->esi = rd32(sp0 - 0x40u);
    g->edi = rd32(sp0 - 0x44u);
    g->ebp = rd32(sp0 - 0x3cu);
    g->edx = edx;
    return eax & 0xffffff00u;
L_10039bcc: ;
    if ((uint8_t)ebx == 0u) goto L_10039bdd;
    if ((int32_t)(edx & 0xfu) <= (int32_t)rd32(COW_IMG(0x10456ad0u)))
    {
        edx = edx & 0xfu;
        ebx = rd32(COW_IMG(0x10456ad0u));
        goto L_10039b82;
    }
    edx = edx & 0xfu;
    ebx = rd32(COW_IMG(0x10456ad0u));
L_10039bdd: ;
    if (loc_34 >> 0x18u == 0u)
    {
        edx = (edx & 0xffffff00u) | loc_34 >> 0x18u;
        if ((uint8_t)loc_28 == 0x10u)
        {
            ebp = 0u;
        }
        else
        {
            edx = (edx & 0xffffff00u) | (uint8_t)loc_28;
            if ((uint8_t)edx == 0x18u) goto L_10039c03;
            if ((uint8_t)edx != 0x20u)
            {
                ebp = 0u;
                goto L_10039c0c;
            }
L_10039c03: ;
            ebp = 2u;
        }
    }
    else
    {
        ebp = loc_28 & 0x7fu;
    }
L_10039c0c: ;
    if (ebp == 0u) goto L_10039cc7;
    edx = ebp;
    if (edx != 2u)
    {
        edx = edx - 2u;
        goto L_10039ddc;
    }
    if ((rd8(self + 0x2cu) & 7u) == 0u) goto L_10039c4a;
    wr32(sp0 - 0x48u, self + 0x44u);
    wr32(sp0 - 0x4cu, 1u);
    wr32(sp0 - 0x50u, 0x15u);
    wr32(sp0 - 0x54u, 0u);
    t3 = rd8(self + 0x2au);
    wr32(sp0 - 0x58u, t3);
    wr32(sp0 - 0x5cu, edi);
    t4 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x60u, t4);
    g->edx = t3;
    g->esp = sp0 - 0x44u;
    t5 = cow_stdcall(g, COW_IMG(0x102d303fu), 7, t4, edi, t3, 0u, 0x15u, 1u, self + 0x44u);
    t6 = g->edx;
    eax = t5;
    edx = t6;
    goto L_10039dd8;
L_10039c4a: ;
    wr32(sp0 - 0x24u, (uint16_t)eax);
    wr32(sp0 - 0x30u, (uint16_t)ecx);
    wr32(sp0 - 0x28u, 0x33545844u);
    t7 = rd8(self + 0x2au);
    wr32(sp0 - 0x2cu, t7);
    wr32(sp0 - 0x48u, 1u);
    wr32(sp0 - 0x4cu, sp0 - 0x28u);
    wr32(sp0 - 0x50u, 0u);
    wr32(sp0 - 0x54u, sp0 - 0x2cu);
    wr32(sp0 - 0x58u, sp0 - 0x30u);
    wr32(sp0 - 0x5cu, sp0 - 0x24u);
    t8 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x60u, t8);
    g->eax = t8;
    g->edx = sp0 - 0x30u;
    g->esp = sp0 - 0x44u;
    t9 = cow_stdcall(g, COW_IMG(0x102d2f60u), 7, t8, sp0 - 0x24u, sp0 - 0x30u, sp0 - 0x2cu, 0u, sp0 - 0x28u, 1u);
    t10 = g->edx;
    if ((int32_t)t9 < 0)
    {
        eax = t9;
        edx = t10;
        goto L_10039de7;
    }
    wr32(sp0 - 0x48u, self + 0x40u);
    wr32(sp0 - 0x4cu, 1u);
    wr32(sp0 - 0x50u, 0x33545844u);
    wr32(sp0 - 0x54u, 0u);
    t11 = rd32(sp0 - 0x2cu);
    wr32(sp0 - 0x58u, t11);
    t12 = rd32(sp0 - 0x30u);
    wr32(sp0 - 0x5cu, t12);
    t13 = rd32(sp0 - 0x24u);
    wr32(sp0 - 0x60u, t13);
    eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    ecx = t13;
    edx = t12;
    loc_50 = 0x33545844u;
    loc_58 = t11;
    loc_5c = t12;
    loc_60 = t13;
L_10039dd2: ;
    wr32(sp0 - 0x64u, eax);
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    t30 = cow_stdcall(g, COW_IMG(0x102d2fd9u), 8, eax, loc_60, loc_5c, loc_58, 0u, loc_50, 1u, self + 0x40u);
    t31 = g->edx;
    eax = t30;
    edx = t31;
    goto L_10039dd8;
L_10039cc7: ;
    if ((rd8(self + 0x2cu) & 7u) == 0u) goto L_10039cdb;
    eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
L_10039d9f: ;
    wr32(sp0 - 0x48u, self + 0x44u);
    wr32(sp0 - 0x4cu, 1u);
    wr32(sp0 - 0x50u, 0x19u);
    wr32(sp0 - 0x54u, 0u);
    t27 = rd8(self + 0x2au);
    wr32(sp0 - 0x58u, t27);
    wr32(sp0 - 0x5cu, edi);
    wr32(sp0 - 0x60u, eax);
    g->edx = t27;
    g->esp = sp0 - 0x44u;
    t28 = cow_stdcall(g, COW_IMG(0x102d303fu), 7, eax, edi, t27, 0u, 0x19u, 1u, self + 0x44u);
    t29 = g->edx;
    eax = t28;
    edx = t29;
    goto L_10039dd8;
L_10039cdb: ;
    wr32(sp0 - 0x30u, (uint16_t)eax);
    wr32(sp0 - 0x2cu, (uint16_t)ecx);
    wr32(sp0 - 0x24u, 0x31545844u);
    t14 = rd8(self + 0x2au);
    wr32(sp0 - 0x28u, t14);
    wr32(sp0 - 0x48u, 1u);
    wr32(sp0 - 0x4cu, sp0 - 0x24u);
    wr32(sp0 - 0x50u, 0u);
    wr32(sp0 - 0x54u, sp0 - 0x28u);
    wr32(sp0 - 0x58u, sp0 - 0x2cu);
    wr32(sp0 - 0x5cu, sp0 - 0x30u);
    t15 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x60u, t15);
    g->eax = t15;
    g->edx = sp0 - 0x2cu;
    g->esp = sp0 - 0x44u;
    t16 = cow_stdcall(g, COW_IMG(0x102d2f60u), 7, t15, sp0 - 0x30u, sp0 - 0x2cu, sp0 - 0x28u, 0u, sp0 - 0x24u, 1u);
    t17 = g->edx;
    if ((int32_t)t16 < 0)
    {
        eax = t16;
        edx = t17;
        goto L_10039de7;
    }
    wr32(sp0 - 0x48u, self + 0x40u);
    wr32(sp0 - 0x4cu, 1u);
    wr32(sp0 - 0x50u, 0x31545844u);
    wr32(sp0 - 0x54u, 0u);
    t18 = rd32(sp0 - 0x28u);
    wr32(sp0 - 0x58u, t18);
    t19 = rd32(sp0 - 0x2cu);
    wr32(sp0 - 0x5cu, t19);
    t20 = rd32(sp0 - 0x30u);
    wr32(sp0 - 0x60u, t20);
    eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    ecx = t20;
    edx = t19;
    loc_50 = 0x31545844u;
    loc_58 = t18;
    loc_5c = t19;
    loc_60 = t20;
    goto L_10039dd2;
L_10039d55: ;
    wr32(sp0 - 0x48u, self + 0x40u);
    wr32(sp0 - 0x4cu, 1u);
    wr32(sp0 - 0x50u, 0x15u);
    loc_50 = 0x15u;
L_10039dc0: ;
    eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    edx = rd8(self + 0x2au);
L_10039dcd: ;
    wr32(sp0 - 0x54u, 0u);
    wr32(sp0 - 0x58u, edx);
    wr32(sp0 - 0x5cu, ebp);
    wr32(sp0 - 0x60u, edi);
    ecx = self + 0x40u;
    loc_58 = edx;
    loc_5c = ebp;
    loc_60 = edi;
    loc_38 = in_ebx;
    loc_3c = in_ebp;
    loc_40 = in_esi;
    loc_44 = in_edi;
    goto L_10039dd2;
L_10039d5f: ;
    if ((rd8(self + 0x2cu) & 7u) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        edx = rd8(self + 0x2au);
        goto L_10039d87;
    }
    eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    edx = rd8(self + 0x2au);
    wr32(sp0 - 0x48u, self + 0x44u);
    wr32(sp0 - 0x4cu, 1u);
    wr32(sp0 - 0x50u, 0x15u);
    wr32(sp0 - 0x54u, 0u);
    wr32(sp0 - 0x58u, edx);
    wr32(sp0 - 0x5cu, edi);
    wr32(sp0 - 0x60u, eax);
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    t25 = cow_stdcall(g, COW_IMG(0x102d303fu), 7, eax, edi, edx, 0u, 0x15u, 1u, self + 0x44u);
    t26 = g->edx;
    eax = t25;
    edx = t26;
    goto L_10039dd8;
L_10039d87: ;
    wr32(sp0 - 0x48u, self + 0x40u);
    wr32(sp0 - 0x4cu, 1u);
    wr32(sp0 - 0x50u, 0x15u);
    loc_50 = 0x15u;
    goto L_10039dcd;
L_10039d91: ;
    if ((rd8(self + 0x2cu) & 7u) == 0u) goto L_10039db8;
    eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    goto L_10039d9f;
L_10039db8: ;
    wr32(sp0 - 0x48u, self + 0x40u);
    wr32(sp0 - 0x4cu, 1u);
    wr32(sp0 - 0x50u, 0x19u);
    loc_50 = 0x19u;
    goto L_10039dc0;
L_10039df1: ;
    if (rd8(sp0 - 0x33u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x33u);
    }
    else
    {
        wr32(sp0 - 0x2cu, 0u);
        if (rd32(self + 0x40u) == 0u)
        {
            eax = rd32(self + 0x40u);
        }
        else
        {
            eax = rd32(self + 0x40u);
            wr32(sp0 - 0x48u, sp0 - 0x2cu);
            wr32(sp0 - 0x4cu, 0u);
            wr32(sp0 - 0x50u, eax);
            g->edx = sp0 - 0x2cu;
            g->esp = sp0 - 0x44u;
            cow_thiscall(g, rd32(rd32(eax) + 0x3cu), rd32(eax), 3, eax, 0u, sp0 - 0x2cu);
            t34 = g->edx;
            if (1u)
            {
                eax = 0u;
                edx = t34;
            }
            else
            {
                wr32(sp0 - 0x48u, sp0 - 0x20u);
                wr32(sp0 - 0x4cu, 0u);
                g->edx = sp0 - 0x20u;
                g->esp = sp0 - 0x44u;
                cow_thiscall(g, rd32(rd32(0u) + 0x20u), rd32(0u), 2, 0u, sp0 - 0x20u);
                t35 = g->edx;
                t36 = rd32(sp0 - 0x2cu);
                wr32(sp0 - 0x48u, t36);
                g->eax = t36;
                g->edx = t35;
                t37 = cow_thiscall(g, rd32(rd32(t36) + 8u), rd32(t36), 1, t36);
                t38 = g->edx;
                t39 = rd16(sp0 - 4u);
                t40 = rd16(sp0 - 8u);
                wr16(self + 0x24u, (uint16_t)t40);
                wr16(self + 0x26u, (uint16_t)t39);
                eax = (t37 & 0xffff0000u) | t39;
                edx = (t38 & 0xffff0000u) | t40;
            }
        }
    }
    g->ebx = rd32(sp0 - 0x38u);
    g->esi = rd32(sp0 - 0x40u);
    g->edi = rd32(sp0 - 0x44u);
    g->ebp = rd32(sp0 - 0x3cu);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10039a80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10039a80(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
