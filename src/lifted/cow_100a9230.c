/* f_0x100a9230 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_100a9230(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_8;
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_ebp);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, in_edi);
    t1 = rd32(sp0 + 4u);
    wr32(sp0 - 0x24u, t1);
    wr32(sp0 - 0x10u, self);
    g->edx = in_edx;
    g->esp = sp0 - 0x20u;
    t2 = cow_thiscall(g, COW_IMG(0x100a96b0u), self, 1, t1);
    t3 = g->edx;
    if ((uint8_t)t2 != 0u)
    {
        edx = t3;
        edi = t1;
        goto L_100a9276;
    }
    eax = t2;
    edx = t3;
    edi = t1;
    wr32(sp0 - 0x24u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t4 = cow_thiscall(g, COW_IMG(0x10085450u), self, 1, 0u);
    t5 = g->edx;
    if (edi == 0u)
    {
        eax = t4;
        edx = t5;
        goto L_100a94f2;
    }
    eax = t4;
    edx = t5;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t6 = cow_call_regs(g, COW_IMG(0x1018c620u), eax, edi, g->edx, 1, 0);
    t7 = g->ecx;
    t8 = g->edx;
    wr32(sp0 - 0x24u, edi);
    t9 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t7, t8, 1, 1, edi);
    t10 = g->edx;
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = rd32(sp0 - 0x20u);
    g->ebp = rd32(sp0 - 0x18u);
    g->edx = t10;
    return t9;
L_100a9276: ;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t11 = cow_thiscall(g, COW_IMG(0x1018ca20u), edi, 0);
    t12 = g->edx;
    wr32(sp0 - 0xcu, t11);
    t13 = rd32(rd32(edi + 0xcu) + 0xcu);
    wr32(sp0 - 0x24u, t13);
    g->ecx = rd32(edi + 0xcu);
    g->edx = t12;
    t14 = rd32(edi + 0xcu);
    t15 = cow_cdecl(g, COW_IMG(0x100a8cf0u), 1, t13);
    t16 = g->ecx;
    t17 = g->edx;
    wr32(sp0 + 4u, t15);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 4u, 0u);
    if (t15 != 0xaf0u)
    {
        ecx = t16;
        edx = t17;
        ebx = t15;
        loc_8 = 0u;
        loc_4 = 0u;
    }
    else
    {
        ecx = t16;
        edx = t17;
        ebx = t15;
        t18 = rd32(ecx + 0x14u);
        wr32(sp0 - 4u, t18);
        t19 = rd32(ecx + 0x10u) + 1u;
        wr32(sp0 - 8u, t19);
        ecx = t18;
        loc_8 = t19;
        loc_4 = t18;
    }
    wr32(sp0 - 0x24u, 0x34u);
    g->esp = sp0 - 0x18u;
    t20 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x34u, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    t21 = g->edx;
    if (t20 == 0u)
    {
        edx = t21;
        esi = 0u;
    }
    else
    {
        eax = t20;
        edx = t21;
        esi = t20;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        t22 = cow_thiscall(g, COW_IMG(0x100814a0u), esi + 8u, 0);
        t23 = g->edx;
        cow_thiscall(g, COW_IMG(0x100814a0u), esi + 0x14u, 0);
        t24 = rd32(sp0 - 0x10u);
        wr32(sp0 - 0x24u, t24);
        t25 = rd32(sp0 - 0xcu);
        wr32(esi, t24);
        wr32(esi + 4u, t25);
        g->edx = t25;
        cow_thiscall(g, COW_IMG(0x100814f0u), esi + 8u, 1, t24);
        t26 = g->edx;
        t27 = rd32(sp0 - 0xcu);
        wr32(sp0 - 0x24u, t27);
        g->edx = t26;
        cow_thiscall(g, COW_IMG(0x100814f0u), esi + 0x14u, 1, t27);
        t28 = g->edx;
        t29 = rd32(sp0 - 8u);
        t30 = rd16(sp0 - 4u);
        wr32(esi + 0x20u, edi);
        wr16(esi + 0x26u, (uint16_t)t29);
        wr16(esi + 0x28u, (uint16_t)t30);
        wr8(esi + 0x2au, 0u);
        wr32(esi + 0x2cu, 0u);
        wr32(esi + 0x30u, 0x6e69616du);
        if (rd32(edi + 4u) == 0u)
        {
            ecx = t29;
            edx = (t28 & 0xffff0000u) | t30;
        }
        else
        {
            eax = rd32(edi + 4u);
            ecx = t29;
            edx = (t28 & 0xffff0000u) | t30;
            wr32(esi + 0x30u, eax);
        }
        if ((uint16_t)ecx >= 0x400u)
        {
            wr16(esi + 0x26u, 0u);
        }
        wr16(esi + 0x24u, rd16(rd32(edi + 0xcu) + 0x1eu));
        g->edx = edx;
        t31 = rd32(edi + 0xcu);
        g->esp = sp0 - 0x20u;
        t32 = cow_thiscall(g, COW_IMG(0x1018c890u), edi, 0);
        t33 = g->edx;
        if (t32 == 0u)
        {
            edx = t33;
        }
        else
        {
            eax = t32;
            edx = t33;
            g->edx = edx;
            g->esp = sp0 - 0x20u;
            cow_thiscall(g, COW_IMG(0x100a4140u), eax, 0);
            t34 = g->edx;
            edx = t34;
        }
        ebx = 0u;
L_100a9358: ;
        if (rd32(esi + 0x20u) == 0u)
        {
            ecx = rd32(esi + 0x20u);
            eax = (uint32_t)(int16_t)rd16(esi + 0x24u);
        }
        else
        {
            ecx = rd32(esi + 0x20u);
            eax = (uint32_t)(int16_t)rd16(rd32(ecx + 0xcu) + 0x1eu);
            edx = rd32(ecx + 0xcu);
        }
        if ((int32_t)ebx >= (int32_t)eax) goto L_100a9384;
        wr32(sp0 - 0x24u, ebx);
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        t35 = cow_thiscall(g, COW_IMG(0x1018c8c0u), ecx, 1, ebx);
        t36 = g->edx;
        if (t35 == 0u)
        {
            edx = t36;
        }
        else
        {
            eax = t35;
            edx = t36;
            g->edx = edx;
            g->esp = sp0 - 0x20u;
            cow_thiscall(g, COW_IMG(0x100a4140u), eax, 0);
            t37 = g->edx;
            edx = t37;
        }
        ebx = ebx + 1u;
        goto L_100a9358;
    }
L_100a938c: ;
    if (rd32(rd32(edi + 0xcu) + 0xcu) == 3u) goto L_100a93a5;
    eax = rd32(rd32(edi + 0xcu) + 0xcu);
    if (eax == 0xeu) goto L_100a93a5;
    if (eax != 0xfu) goto L_100a9430;
L_100a93a5: ;
    wr32(sp0 - 0x24u, COW_IMG(0x10330ebcu));
    g->esp = sp0 - 0x20u;
    t38 = cow_fastcall(g, COW_IMG(0x1002c8f0u), rd32(sp0 - 0x10u), edx, 1, COW_IMG(0x10330ebcu));
    t39 = g->edx;
    if ((uint8_t)t38 == 0u)
    {
        edx = t39;
        goto L_100a9430;
    }
    if (rd32(rd32(edi + 0xcu) + 0xcu) != 0xeu)
    {
        eax = rd32(edi + 0xcu);
        ecx = rd32(rd32(edi + 0xcu) + 0xcu);
        if (ecx != 0xfu)
        {
            edx = 0u;
        }
        else
        {
            edx = 2u;
        }
    }
    else
    {
        eax = rd32(edi + 0xcu);
        edx = 1u;
    }
    wr32(sp0 - 0x24u, edx);
    t40 = rd16(rd32(eax + 0x20u) + 0xeu);
    wr32(sp0 - 0x28u, t40);
    t41 = rd32(sp0 - 0x10u);
    g->esp = sp0 - 0x20u;
    cow_fastcall(g, COW_IMG(0x100d25e0u), t41, t40, 2, t40, edx);
    t42 = g->ecx;
    t43 = g->edx;
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, 4u);
    wr32(sp0 - 0x2cu, 0x3cu);
    g->edx = t43;
    g->esp = sp0 - 0x24u;
    t44 = cow_cdecl(g, COW_IMG(0x10028fd0u), 2, 0x3cu, 4u);
    t45 = g->edx;
    g->esp = sp0 - 0x20u;
    t46 = cow_fastcall(g, COW_IMG(0x100748f0u), t44, t45, 0);
    t47 = g->edx;
    wr8(COW_IMG(0x1047d13cu), 1u);
    if (t44 == 0u)
    {
        eax = t46;
        edx = t47;
        goto L_100a94f2;
    }
    eax = t46;
    edx = t47;
    ebp = t44;
    g->esp = sp0 - 0x20u;
    t48 = cow_call_regs(g, COW_IMG(0x10074740u), eax, ebp, edx, 1, 0);
    t49 = g->edx;
    wr32(ebp, COW_IMG(0x1032e7c0u));
    wr32(ebp + 0x34u, edi);
    wr16(edi, (uint16_t)(rd16(edi) + 1u));
    wr32(ebp + 0x38u, esi);
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = rd32(sp0 - 0x20u);
    g->ebp = rd32(sp0 - 0x18u);
    g->edx = t49;
    return t48;
L_100a9384: ;
    ebx = rd32(sp0 + 4u);
    goto L_100a938c;
L_100a9430: ;
    if (ebx != 0xf3cu)
    {
        if (ebx == 0x1330u)
        {
            if (rd16(rd32(rd32(edi + 0xcu) + 0x20u) + 0xeu) >= 0x64u)
            {
                wr32(sp0 + 4u, 0xdca5u);
                ebx = rd32(sp0 + 4u);
            }
        }
        eax = rd16(rd32(rd32(edi + 0xcu) + 0x20u) + 0xeu);
        edx = rd32(rd32(edi + 0xcu) + 0x20u);
    }
    else
    {
        if (rd16(rd32(rd32(edi + 0xcu) + 0x20u) + 0xeu) < 0x800u)
        {
            eax = (rd32(edi + 0xcu) & 0xffff0000u) | rd16(rd32(rd32(edi + 0xcu) + 0x20u) + 0xeu);
            if ((uint16_t)eax < 0x600u)
            {
                if ((uint16_t)eax >= 0x200u)
                {
                    wr32(sp0 + 4u, 0xc1efu);
                    ebx = rd32(sp0 + 4u);
                }
                eax = (uint16_t)eax;
            }
            else
            {
                wr32(sp0 + 4u, 0xe739u);
                eax = (uint16_t)eax;
                ebx = rd32(sp0 + 4u);
            }
        }
        else
        {
            eax = (rd32(edi + 0xcu) & 0xffff0000u) | rd16(rd32(rd32(edi + 0xcu) + 0x20u) + 0xeu);
            wr32(sp0 + 4u, 0x14b07u);
            eax = (uint16_t)eax;
            ebx = rd32(sp0 + 4u);
        }
    }
    wr32(sp0 - 0x24u, eax + ebx);
    wr32(sp0 - 0x28u, sp0 - 4u);
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t50 = cow_stdcall(g, COW_IMG(0x100730e0u), 2, sp0 - 4u, eax + ebx);
    t51 = g->edx;
    wr32(sp0 + 4u, rd32(t50));
    wr32(esi + 0x2cu, eax + ebx);
    t52 = rd32(t50);
    t53 = cow_thiscall(g, COW_IMG(0x1018ca20u), edi, 0);
    wr32(sp0 - 0x24u, t53);
    t54 = rd32(sp0 - 0x10u);
    wr32(sp0 - 0x28u, t54);
    wr32(sp0 - 0x2cu, esi);
    wr32(sp0 - 0x30u, COW_IMG(0x100a8fb0u));
    g->edx = t54;
    t55 = cow_thiscall(g, COW_IMG(0x100710f0u), sp0 + 4u, 4, COW_IMG(0x100a8fb0u), esi, t54, t53);
    t56 = g->edx;
    eax = t55;
    edx = t56;
L_100a94f2: ;
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = rd32(sp0 - 0x20u);
    g->ebp = rd32(sp0 - 0x18u);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a9230(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100a9230(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
