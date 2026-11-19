/* f_0x101cda60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101cda60(Guest* g)
{
    double d58;
    double d68;
    double d69;
    double d70;
    double d71;
    double d72;
    double d73;
    double d74;
    double d75;
    double d76;
    double d77;
    double d78;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
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
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
    uint32_t t64;
    uint32_t t65;
    uint32_t t66;
    uint32_t t67;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 48u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101cda75u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_101cda75;
    case 0x101cda91u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101cda91;
    case 0x101cdaa0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101cdaa0;
    case 0x101cdaa7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101cdaa7;
    case 0x101cdab1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101cdab1;
    case 0x101cdac5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101cdac5;
    case 0x101cdad6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101cdad6;
    case 0x101cdae6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101cdae6;
    case 0x101cdaf4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101cdaf4;
    case 0x101cdb00u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101cdb00;
    case 0x101cdb82u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101cdb82;
    case 0x101cdb8cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101cdb8c;
    case 0x101cdb98u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101cdb98;
    case 0x101cdbbbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101cdbbb;
    case 0x101cdbe1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101cdbe1;
    case 0x101cdc05u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101cdc05;
    case 0x101cdc12u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101cdc12;
    case 0x101cdc14u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101cdc14;
    case 0x101cdc17u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101cdc17;
    case 0x101cdc26u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101cdc26;
    case 0x101cdc2fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_101cdc2f;
    case 0x101cdc3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_101cdc3e;
    case 0x101cdcb1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_101cdcb1;
    case 0x101cdcbbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_101cdcbb;
    case 0x101cdccau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_101cdcca;
    case 0x101cdcd4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_101cdcd4;
    case 0x101cdce6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_101cdce6;
    case 0x101cdcf2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_101cdcf2;
    case 0x101cdd02u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_101cdd02;
    case 0x101cdd0eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_101cdd0e;
    case 0x101cdd20u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_101cdd20;
    case 0x101cdd2cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_101cdd2c;
    case 0x101cdd3cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_101cdd3c;
    case 0x101cdd48u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_101cdd48;
    default: break;
    }
#endif

    COW_AT(101cda60)
    wr32(sp0 - 0x18u, in_ebx);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x20u;
    t1 = cow_thiscall(g, COW_IMG(0x101cec10u), self, 0);
    t2 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        loc_18 = in_ebx;
        loc_1c = in_esi;
        loc_20 = in_edi;
    }
    else
    {
        eax = t1;
        edx = t2;
    COW_AT(101cda75)
        t3 = (eax & 0xffffff00u) | rd8(self + 5u);
        wr32(sp0 - 0x24u, t3);
        t4 = rd32(self + 0x10u);
        wr32(sp0 - 0x28u, t4);
        g->eax = t3;
        g->esp = sp0 - 0x20u;
        t5 = cow_cdecl(g, COW_IMG(0x100eb490u), 2, t4, t3);
        if (t5 == 0u)
        {
            eax = t5;
            loc_18 = in_ebx;
            loc_1c = in_esi;
            loc_20 = in_edi;
        }
        else
        {
            eax = t5;
            edi = t5;
    COW_AT(101cda91)
            if (rd16(self + 0x2au) == rd8(edi + 0x10u))
            {
                loc_18 = rd32(sp0 - 0x18u);
                loc_1c = rd32(sp0 - 0x1cu);
                loc_20 = rd32(sp0 - 0x20u);
            }
            else
            {
                edx = rd8(edi + 0x10u);
    COW_AT(101cdaa0)
                if (rd32(self + 0x64u) == 0u)
                {
                    ecx = rd32(self + 0x64u);
                }
                else
                {
                    ecx = rd32(self + 0x64u);
    COW_AT(101cdaa7)
                    wr32(sp0 - 0x24u, 1u);
                    g->eax = rd32(ecx);
                    t6 = rd32(ecx);
                    g->esp = sp0 - 0x20u;
                    t7 = cow_thiscall(g, rd32(t6 + 0x18u), ecx, 1, 1u);
                    t8 = g->ecx;
                    wr32(self + 0x64u, 0u);
                    eax = t7;
                    ecx = t8;
                }
    COW_AT(101cdab1)
                t9 = rd8(edi + 0x10u);
                wr16(self + 0x2au, (uint16_t)t9);
                if (rd8(edi + 0x10u) == 0u)
                {
                    eax = (eax & 0xffffff00u) | rd8(edi + 0x10u);
                    loc_18 = rd32(sp0 - 0x18u);
                    loc_1c = rd32(sp0 - 0x1cu);
                    loc_20 = rd32(sp0 - 0x20u);
                }
                else
                {
                    ecx = (ecx & 0xffff0000u) | t9;
    COW_AT(101cdac5)
                    if (rd16(rd32(COW_IMG(0x106631d4u)) + 0x1cu) == 3u)
                    {
                        edx = rd32(COW_IMG(0x106631d4u));
    COW_AT(101cdad6)
                        if (rd32(rd32(COW_IMG(0x10664420u)) + 0xcu) != 0u)
                        {
                            eax = rd32(rd32(COW_IMG(0x10664420u)) + 0xcu);
    COW_AT(101cdae6)
                            if (rd8(eax + 2u) == rd8(edi + 2u))
                            {
                                edx = (edx & 0xffffff00u) | rd8(edi + 2u);
    COW_AT(101cdaf4)
                                if (rd16(eax) == rd16(edi))
                                {
                                    edx = (edx & 0xffff0000u) | rd16(eax);
    COW_AT(101cdb00)
                                    wr32(sp0 - 0x24u, COW_IMG(0x1037e2d8u));
                                    g->eax = eax;
                                    g->edx = edx;
                                    g->esp = sp0 - 0x20u;
                                    t10 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037e2d8u));
                                    t11 = g->edx;
                                    wr32(sp0 - 0x24u, COW_IMG(0x1037e2c4u));
                                    g->edx = t11;
                                    t12 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037e2c4u));
                                    t13 = g->edx;
                                    wr32(sp0 - 0x24u, COW_IMG(0x1037e2b0u));
                                    g->edx = t13;
                                    t14 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037e2b0u));
                                    t15 = g->edx;
                                    wr32(sp0 - 0x24u, COW_IMG(0x1037e29cu));
                                    g->edx = t15;
                                    t16 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037e29cu));
                                    t17 = g->edx;
                                    wr32(sp0 - 0x24u, COW_IMG(0x1037e288u));
                                    g->edx = t17;
                                    t18 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037e288u));
                                    t19 = g->edx;
                                    wr32(sp0 - 0x24u, COW_IMG(0x1037e274u));
                                    g->edx = t19;
                                    cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037e274u));
                                    t20 = g->edx;
                                    wr32(sp0 - 0x24u, 1u);
                                    t21 = rd32(COW_IMG(0x10664520u));
                                    wr8(t21 + 0x3au, 0u);
                                    wr32(t21 + 0x14u, 0u);
                                    t22 = rd32(t21 + 8u);
                                    wr32(sp0 - 0x28u, t22);
                                    g->edx = t20;
                                    cow_call_regs(g, COW_IMG(0x1015e790u), t22, COW_IMG(0x10621838u), g->edx, 0, 2, t22, 1u);
                                    t23 = g->edx;
                                    if (rd16(rd32(COW_IMG(0x106631d4u)) + 0x1cu) == 3u)
                                    {
                                        edx = t23;
    COW_AT(101cdb82)
                                        if (rd8(rd32(COW_IMG(0x10664420u)) + 8u) == 0u)
                                        {
                                            eax = rd32(COW_IMG(0x10664420u));
    COW_AT(101cdb8c)
                                            wr32(sp0 - 0x24u, eax);
                                            g->ebx = 0u;
                                            g->esp = sp0 - 0x20u;
                                            cow_thiscall(g, COW_IMG(0x101f23a0u), rd32(COW_IMG(0x10663740u)), 1, eax);
                                        }
                                    }
                                }
                            }
                        }
                    }
    COW_AT(101cdb98)
                    t24 = rd8(edi + 0x10u);
                    wr32(sp0 - 0x24u, t24);
                    t25 = rd8(edi + 0x14u) - 1u;
                    wr32(sp0 - 0x28u, t25);
                    g->eax = t25;
                    g->edx = t24;
                    t26 = rd32(COW_IMG(0x106631d4u));
                    g->esp = sp0 - 0x20u;
                    t27 = cow_thiscall(g, COW_IMG(0x101d5ec0u), t26, 2, t25, t24);
                    t28 = g->ecx;
                    t29 = g->edx;
                    if (t27 == 0x3e7u)
                    {
                        eax = t27;
                        loc_18 = rd32(sp0 - 0x18u);
                        loc_1c = rd32(sp0 - 0x1cu);
                        loc_20 = rd32(sp0 - 0x20u);
                    }
                    else
                    {
                        eax = t27;
                        ecx = t28;
                        edx = t29;
    COW_AT(101cdbbb)
                        wr32(sp0 - 0x24u, eax);
                        g->eax = eax;
                        g->edx = edx;
                        g->esp = sp0 - 0x20u;
                        t30 = cow_cdecl(g, COW_IMG(0x101cce00u), 1, eax);
                        t31 = g->edx;
                        wr32(sp0 - 0x24u, t30);
                        wr32(sp0 - 0x28u, sp0 - 0x14u);
                        g->edx = t31;
                        t32 = rd32(COW_IMG(0x1047d128u));
                        t33 = cow_thiscall(g, COW_IMG(0x100731b0u), t32, 2, sp0 - 0x14u, t30);
                        t34 = g->ecx;
                        t35 = g->edx;
                        wr32(self + 0x5cu, rd32(t33));
                        if (rd32(self + 0x64u) != 0u)
                        {
                            eax = rd32(self + 0x64u);
                            edx = t35;
                        }
                        else
                        {
                            eax = rd32(self + 0x64u);
                            ecx = t34;
                            edx = t35;
    COW_AT(101cdbe1)
                            wr32(sp0 - 0x24u, 0u);
                            wr32(sp0 - 0x28u, 4u);
                            wr32(sp0 - 0x2cu, 0x794u);
                            g->eax = eax;
                            g->edx = edx;
                            g->esp = sp0 - 0x24u;
                            t36 = cow_cdecl(g, COW_IMG(0x10028fd0u), 2, 0x794u, 4u);
                            t37 = g->edx;
                            g->esp = sp0 - 0x20u;
                            t38 = cow_fastcall(g, COW_IMG(0x100748f0u), t36, t37, 0);
                            t39 = g->edx;
                            wr8(COW_IMG(0x1047d13cu), 1u);
                            if (t36 == 0u)
                            {
                                edx = t39;
    COW_AT(101cdc12)
                                eax = 0u;
                            }
                            else
                            {
                                eax = t38;
                                edi = t36;
    COW_AT(101cdc05)
                                t40 = rd32(self + 0x5cu);
                                wr32(sp0 - 0x24u, t40);
                                g->eax = eax;
                                g->edx = t40;
                                g->esp = sp0 - 0x20u;
                                t41 = cow_thiscall(g, COW_IMG(0x100c41b0u), edi, 1, t40);
                                t42 = g->edx;
                                eax = t41;
                                edx = t42;
                            }
    COW_AT(101cdc14)
                            wr32(self + 0x64u, eax);
                        }
    COW_AT(101cdc17)
                        g->eax = eax;
                        g->edx = edx;
                        g->esp = sp0 - 0x20u;
                        t43 = cow_stdcall(g, COW_IMG(0x101d5fe0u), 0);
                        t44 = g->edx;
                        if ((uint8_t)t43 == 0u)
                        {
                            eax = t43;
                            edx = t44;
                        }
                        else
                        {
                            eax = t43;
                            edx = t44;
    COW_AT(101cdc26)
                            wr32(sp0 - 0x24u, 0u);
                            g->esp = sp0 - 0x20u;
                            t45 = cow_call_regs(g, COW_IMG(0x100859d0u), eax, rd32(self + 0x64u), edx, 0, 1, 0u);
                            t46 = g->edx;
                            eax = t45;
                            edx = t46;
                        }
    COW_AT(101cdc2f)
                        g->edx = edx;
                        g->esp = sp0 - 0x20u;
                        t47 = cow_call_regs(g, COW_IMG(0x101cd9a0u), eax, self, g->edx, 1, 0);
                        t48 = g->ecx;
                        t49 = g->edx;
                        if (t47 == 0u)
                        {
                            eax = t47;
                            loc_18 = rd32(sp0 - 0x18u);
                            loc_1c = rd32(sp0 - 0x1cu);
                            loc_20 = rd32(sp0 - 0x20u);
                        }
                        else
                        {
                            eax = t47;
                            ecx = t48;
                            edx = t49;
    COW_AT(101cdc3e)
                            g->edx = edx;
                            g->esp = sp0 - 0x20u;
                            t50 = cow_call_regs(g, COW_IMG(0x101cd9a0u), eax, ecx, g->edx, 1, 0);
                            t51 = g->ecx;
                            t52 = g->edx;
                            t53 = rd32(t50 + 0x34u);
                            wr32(sp0 - 0x10u, t53);
                            g->edx = t52;
                            t54 = cow_call_regs(g, COW_IMG(0x101cd9a0u), t53, t51, g->edx, 1, 0);
                            t55 = g->edx;
                            t56 = rd32(t54 + 0x38u);
                            wr32(sp0 - 0xcu, t56);
                            t57 = cow_call_regs(g, COW_IMG(0x101cd9a0u), t54, self, g->edx, 1, 0);
                            d58 = fr(g, (double)rdf32(sp0 - 0xcu) - (double)rdf32(COW_IMG(0x1032b15cu)));
                            wr32(sp0 - 0x24u, sp0 - 0x10u);
                            t59 = rd32(self + 0x64u) + 0x34u;
                            wr32(sp0 - 0x28u, t59);
                            t60 = rd32(t57 + 0x3cu);
                            wr32(sp0 - 8u, t60);
                            wrf32(sp0 - 0xcu, (float)(double)(float)d58);
                            g->eax = sp0 - 0x10u;
                            g->edx = t60;
                            t61 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, t59, sp0 - 0x10u);
                            t62 = g->edx;
                            g->edx = t62;
                            t63 = rd32(self + 0x64u);
                            t64 = cow_call_regs(g, COW_IMG(0x101cd9a0u), t61, self, g->edx, 1, 0);
                            t65 = g->ecx;
                            t66 = g->edx;
                            wr32(sp0 - 0x24u, t64 + 0x44u);
                            wr32(sp0 - 0x28u, t63 + 0x44u);
                            g->eax = t64 + 0x44u;
                            t67 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, t63 + 0x44u, t64 + 0x44u);
                            d68 = (double)rdf32(t63 + 0x44u);
                            if ((cow_fsw(g, d68, (double)rdf32(COW_IMG(0x10337e24u)), 0u) & 0x4100u) != 0u)
                            {
                                eax = cow_fsw(g, d68, (double)rdf32(COW_IMG(0x10337e24u)), 0u) & 0x4100u;
                                ebx = t63 + 0x44u;
                                edi = t63;
                            }
                            else
                            {
                                eax = cow_fsw(g, d68, (double)rdf32(COW_IMG(0x10337e24u)), 0u) & 0x4100u;
                                ebx = t63 + 0x44u;
                                edi = t63;
    COW_AT(101cdcb1)
                                d69 = fr(g, (double)rdf32(ebx) - (double)rdf32(COW_IMG(0x10331818u)));
                                wrf32(ebx, (float)d69);
                            }
    COW_AT(101cdcbb)
                            if (!((double)rdf32(ebx) < (double)rdf32(COW_IMG(0x10337e20u))))
                            {
                                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebx), (double)rdf32(COW_IMG(0x10337e20u)), 0u);
                            }
                            else
                            {
                                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebx), (double)rdf32(COW_IMG(0x10337e20u)), 0u);
    COW_AT(101cdcca)
                                d70 = fr(g, (double)rdf32(ebx) + (double)rdf32(COW_IMG(0x10331818u)));
                                wrf32(ebx, (float)d70);
                            }
    COW_AT(101cdcd4)
                            d71 = (double)rdf32(edi + 0x48u);
                            if ((cow_fsw(g, d71, (double)rdf32(COW_IMG(0x10337e24u)), 0u) & 0x4100u) != 0u)
                            {
                                eax = cow_fsw(g, d71, (double)rdf32(COW_IMG(0x10337e24u)), 0u) & 0x4100u;
                            }
                            else
                            {
                                eax = cow_fsw(g, d71, (double)rdf32(COW_IMG(0x10337e24u)), 0u) & 0x4100u;
    COW_AT(101cdce6)
                                d72 = fr(g, (double)rdf32(edi + 0x48u) - (double)rdf32(COW_IMG(0x10331818u)));
                                wrf32(edi + 0x48u, (float)d72);
                            }
    COW_AT(101cdcf2)
                            d73 = (double)rdf32(edi + 0x48u);
                            if (!(d73 < (double)rdf32(COW_IMG(0x10337e20u))))
                            {
                                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d73, (double)rdf32(COW_IMG(0x10337e20u)), 0u);
                            }
                            else
                            {
                                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d73, (double)rdf32(COW_IMG(0x10337e20u)), 0u);
    COW_AT(101cdd02)
                                d74 = fr(g, (double)rdf32(edi + 0x48u) + (double)rdf32(COW_IMG(0x10331818u)));
                                wrf32(edi + 0x48u, (float)d74);
                            }
    COW_AT(101cdd0e)
                            d75 = (double)rdf32(edi + 0x4cu);
                            if ((cow_fsw(g, d75, (double)rdf32(COW_IMG(0x10337e24u)), 0u) & 0x4100u) != 0u)
                            {
                                eax = cow_fsw(g, d75, (double)rdf32(COW_IMG(0x10337e24u)), 0u) & 0x4100u;
                            }
                            else
                            {
                                eax = cow_fsw(g, d75, (double)rdf32(COW_IMG(0x10337e24u)), 0u) & 0x4100u;
    COW_AT(101cdd20)
                                d76 = fr(g, (double)rdf32(edi + 0x4cu) - (double)rdf32(COW_IMG(0x10331818u)));
                                wrf32(edi + 0x4cu, (float)d76);
                            }
    COW_AT(101cdd2c)
                            d77 = (double)rdf32(edi + 0x4cu);
                            if (!(d77 < (double)rdf32(COW_IMG(0x10337e20u))))
                            {
                                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d77, (double)rdf32(COW_IMG(0x10337e20u)), 0u);
                                loc_18 = rd32(sp0 - 0x18u);
                                loc_1c = rd32(sp0 - 0x1cu);
                                loc_20 = rd32(sp0 - 0x20u);
                            }
                            else
                            {
                                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d77, (double)rdf32(COW_IMG(0x10337e20u)), 0u);
    COW_AT(101cdd3c)
                                d78 = fr(g, (double)rdf32(edi + 0x4cu) + (double)rdf32(COW_IMG(0x10331818u)));
                                wrf32(edi + 0x4cu, (float)d78);
                                loc_18 = rd32(sp0 - 0x18u);
                                loc_1c = rd32(sp0 - 0x1cu);
                                loc_20 = rd32(sp0 - 0x20u);
                            }
                        }
                    }
                }
            }
        }
    }
    COW_AT(101cdd48)
    g->ebx = loc_18;
    g->esi = loc_1c;
    g->edi = loc_20;
    return eax & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101cda60(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101cda75u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x101cda91u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101cdaa0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101cdaa7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101cdab1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101cdac5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101cdad6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101cdae6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101cdaf4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101cdb00u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101cdb82u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101cdb8cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101cdb98u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101cdbbbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101cdbe1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        wr32(sp0 - 0x28u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x101cdc05u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101cdc12u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101cdc14u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101cdc17u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101cdc26u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101cdc2fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x101cdc3eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x101cdcb1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x101cdcbbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x101cdccau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x101cdcd4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x101cdce6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x101cdcf2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x101cdd02u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x101cdd0eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x101cdd20u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x101cdd2cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x101cdd3cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x101cdd48u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101cda60(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101cda60(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
