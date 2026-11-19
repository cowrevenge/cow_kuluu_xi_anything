/* f_0x1015e530 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1015e530(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_4;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 28u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1015e544u: in_eax = g->eax; self = g->ecx; in_edx = g->edx; ebp = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1015e544;
    case 0x1015e54fu: eax = g->eax; self = g->ecx; in_edx = g->edx; ebp = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1015e54f;
    case 0x1015e55au: eax = g->eax; self = g->ecx; in_edx = g->edx; ebp = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1015e55a;
    case 0x1015e56au: eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1015e56a;
    case 0x1015e595u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1015e595;
    case 0x1015e5afu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1015e5af;
    case 0x1015e5d9u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1015e5d9;
    case 0x1015e5ebu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1015e5eb;
    case 0x1015e5f3u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1015e5f3;
    case 0x1015e609u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1015e609;
    case 0x1015e61bu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1015e61b;
    case 0x1015e623u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1015e623;
    case 0x1015e635u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1015e635;
    case 0x1015e63eu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1015e63e;
    case 0x1015e655u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1015e655;
    case 0x1015e65cu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1015e65c;
    case 0x1015e660u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1015e660;
    case 0x1015e66du: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1015e66d;
    case 0x1015e67cu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1015e67c;
    case 0x1015e685u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1015e685;
    case 0x1015e68du: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1015e68d;
    case 0x1015e694u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1015e694;
    case 0x1015e69du: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1015e69d;
    case 0x1015e6acu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1015e6ac;
    case 0x1015e6b1u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_1015e6b1;
    case 0x1015e6c2u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_1015e6c2;
    case 0x1015e6ccu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_1015e6cc;
    case 0x1015e6d4u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_1015e6d4;
    default: break;
    }
#endif

    COW_AT(1015e530)
    wr32(sp0 - 4u, in_ebx);
    wr32(sp0 - 8u, in_ebp);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    if (rd32(sp0 + 4u) == 0u)
    {
        eax = in_eax;
        loc_4 = in_ebx;
        loc_8 = in_ebp;
        loc_c = in_esi;
        loc_10 = in_edi;
    }
    else
    {
        esi = rd32(sp0 + 4u);
    COW_AT(1015e544)
        if (rd8(esi + 0x6eu) != 0u)
        {
            eax = (in_eax & 0xffffff00u) | rd8(esi + 0x6eu);
            loc_4 = in_ebx;
            loc_8 = in_ebp;
            loc_c = in_esi;
            loc_10 = in_edi;
        }
        else
        {
    COW_AT(1015e54f)
            if (rd32(esi + 4u) == 0u)
            {
                eax = rd32(esi + 4u);
                loc_4 = in_ebx;
                loc_8 = in_ebp;
                loc_c = in_esi;
                loc_10 = in_edi;
            }
            else
            {
    COW_AT(1015e55a)
                if (rd32(esi + 0x10u) != 0xeu)
                {
                    eax = rd32(esi + 0x10u);
                    loc_4 = in_ebx;
                    loc_8 = in_ebp;
                    loc_c = in_esi;
                    loc_10 = in_edi;
                }
                else
                {
                    eax = rd32(esi + 0x10u);
    COW_AT(1015e56a)
                    wr32(sp0 - 0x14u, 0xeu);
                    g->edx = in_edx;
                    g->esp = sp0 - 0x14u;
                    cow_stdcall(g, COW_IMG(0x10123ea0u), 0);
                    t1 = g->edx;
                    if (rd32(esi + 0x10u) == 0xeu)
                    {
                        eax = rd32(esi + 0x10u);
                        edx = t1;
                        goto L_1015e581;
                    }
                    eax = rd32(esi + 0x10u);
                    edx = t1;
    COW_AT(1015e57a)
                    if (rd8(esi + 0x6eu) == 0u)
                    {
                        ebx = in_ebx & 0xffffff00u;
                        goto L_1015e595;
                    }
                    eax = (eax & 0xffffff00u) | rd8(esi + 0x6eu);
L_1015e581: ;
    COW_AT(1015e581)
                    g->ebx = in_ebx & 0xffffff00u;
                    g->esp = sp0 - 0x10u;
                    cow_fastcall(g, COW_IMG(0x10117ee0u), esi, edx, 0);
                    t2 = g->edx;
                    wr32(esi + 0x10u, 0u);
                    wr8(esi + 0x6eu, 0u);
                    edx = t2;
                    ebx = (in_ebx & 0xffffff00u) | 1u;
L_1015e595: ;
    COW_AT(1015e595)
                    wr32(sp0 - 0x14u, 0u);
                    t3 = rd32(esi + 4u) + 0x46u;
                    wr32(sp0 - 0x18u, t3);
                    g->edx = edx;
                    g->esp = sp0 - 0x10u;
                    t4 = cow_call_regs(g, COW_IMG(0x1015dc70u), t3, g->ecx, g->edx, 0, 2, t3, 0u);
                    t5 = g->edx;
                    if (t4 == 0u)
                    {
                        eax = t4;
                        edx = t5;
    COW_AT(1015e655)
                        wr32(esi + 0xcu, 0u);
                    }
                    else
                    {
                        eax = t4;
                        edx = t5;
                        ebp = t4;
    COW_AT(1015e5af)
                        wr32(sp0 - 0x14u, ebp);
                        g->eax = eax;
                        g->edx = edx;
                        g->esp = sp0 - 0x10u;
                        t6 = cow_thiscall(g, COW_IMG(0x10118f20u), esi, 1, ebp);
                        t7 = g->edx;
                        t8 = cow_thiscall(g, COW_IMG(0x1011a490u), esi, 0);
                        g->edx = rd32(ebp);
                        t9 = rd32(ebp);
                        t10 = cow_thiscall(g, rd32(t9 + 0x14u), ebp, 0);
                        t11 = g->edx;
                        g->edi = self;
                        g->edx = t11;
                        cow_thiscall(g, COW_IMG(0x10124b70u), rd32(COW_IMG(0x104e1d4cu)), 0);
                        t12 = g->edx;
                        if ((rd32(esi + 0x34u) >> 8u & 0x10u) == 0u)
                        {
                            edx = t12;
                        }
                        else
                        {
                            eax = rd32(esi + 0x34u);
                            edx = t12;
    COW_AT(1015e5d9)
                            wr32(sp0 - 0x14u, esi);
                            wr32(sp0 - 0x18u, 0u);
                            g->eax = eax;
                            g->edx = edx;
                            g->esp = sp0 - 0x14u;
                            t13 = cow_thiscall(g, COW_IMG(0x1015f960u), self, 1, 0u);
                            t14 = g->edx;
                            wr32(sp0 - 0x18u, t13);
                            g->edx = t14;
                            g->esp = sp0 - 0x10u;
                            cow_stdcall(g, COW_IMG(0x1015f790u), 2, t13, rd32(sp0 - 0x14u));
                            t15 = g->edx;
                            edx = t15;
                        }
    COW_AT(1015e5eb)
                        if ((rd32(esi + 0x34u) >> 8u & 0x40u) != 0u)
                        {
                            eax = rd32(esi + 0x34u);
    COW_AT(1015e5f3)
                            wr32(sp0 - 0x14u, esi);
                            wr32(sp0 - 0x18u, 2u);
                            g->eax = eax;
                            g->edx = edx;
                            g->esp = sp0 - 0x14u;
                            t16 = cow_thiscall(g, COW_IMG(0x1015f960u), self, 1, 2u);
                            t17 = g->edx;
                            wr32(sp0 - 0x18u, t16);
                            g->edx = t17;
                            g->esp = sp0 - 0x10u;
                            t18 = cow_stdcall(g, COW_IMG(0x1015f790u), 2, t16, rd32(sp0 - 0x14u));
                            t19 = g->edx;
                            if ((uint8_t)t18 != 0u)
                            {
                                edx = t19;
                            }
                            else
                            {
                                eax = t18;
                                edx = t19;
    COW_AT(1015e609)
                                wr32(sp0 - 0x14u, esi);
                                wr32(sp0 - 0x18u, 1u);
                                g->eax = eax;
                                g->edx = edx;
                                g->esp = sp0 - 0x14u;
                                t20 = cow_thiscall(g, COW_IMG(0x1015f960u), self, 1, 1u);
                                t21 = g->edx;
                                wr32(sp0 - 0x18u, t20);
                                g->edx = t21;
                                g->esp = sp0 - 0x10u;
                                cow_stdcall(g, COW_IMG(0x1015f790u), 2, t20, rd32(sp0 - 0x14u));
                                t22 = g->edx;
                                edx = t22;
                            }
                        }
    COW_AT(1015e61b)
                        if ((rd32(esi + 0x34u) >> 8u & 0x20u) == 0u)
                        {
                            eax = rd32(esi + 0x34u);
                        }
                        else
                        {
                            eax = rd32(esi + 0x34u);
    COW_AT(1015e623)
                            wr32(sp0 - 0x14u, esi);
                            wr32(sp0 - 0x18u, 1u);
                            g->eax = eax;
                            g->edx = edx;
                            g->esp = sp0 - 0x14u;
                            t23 = cow_thiscall(g, COW_IMG(0x1015f960u), self, 1, 1u);
                            t24 = g->edx;
                            wr32(sp0 - 0x18u, t23);
                            g->edx = t24;
                            g->esp = sp0 - 0x10u;
                            t25 = cow_stdcall(g, COW_IMG(0x1015f790u), 2, t23, rd32(sp0 - 0x14u));
                            t26 = g->edx;
                            eax = t25;
                            edx = t26;
                        }
    COW_AT(1015e635)
                        if ((rd32(esi + 0x34u) & 0x10000000u) != 0u)
                        {
    COW_AT(1015e63e)
                            wr32(sp0 - 0x14u, esi);
                            wr32(sp0 - 0x18u, 0x10000000u);
                            g->eax = eax;
                            g->edx = edx;
                            g->esp = sp0 - 0x14u;
                            t27 = cow_thiscall(g, COW_IMG(0x1015f960u), self, 1, 0x10000000u);
                            t28 = g->edx;
                            wr32(sp0 - 0x18u, t27);
                            g->edx = t28;
                            g->esp = sp0 - 0x10u;
                            t29 = cow_stdcall(g, COW_IMG(0x1015f790u), 2, t27, rd32(sp0 - 0x14u));
                            t30 = g->edx;
                            eax = t29;
                            edx = t30;
                        }
                    }
    COW_AT(1015e65c)
                    if ((uint8_t)ebx != 0u)
                    {
    COW_AT(1015e660)
                        g->eax = eax;
                        g->edx = edx;
                        g->esp = sp0 - 0x10u;
                        t31 = cow_thiscall(g, COW_IMG(0x10118220u), esi, 0);
                        t32 = g->edx;
                        if ((rd8(esi + 0x34u) & 8u) == 0u)
                        {
                            eax = t31;
                            edx = t32;
    COW_AT(1015e685)
                            wr8(esi + 0x68u, 1u);
                            if (eax != 0u)
                            {
    COW_AT(1015e68d)
                                g->edx = edx;
                                g->esp = sp0 - 0x10u;
                                t37 = cow_call_regs(g, COW_IMG(0x101193a0u), eax, eax, g->edx, 1, 0);
                                t38 = g->edx;
                                eax = t37;
                                edx = t38;
                            }
                        }
                        else
                        {
                            eax = t31;
                            edx = t32;
    COW_AT(1015e66d)
                            wr8(esi + 0x68u, 0u);
                            g->eax = eax;
                            g->edx = edx;
                            g->esp = sp0 - 0x10u;
                            t33 = cow_thiscall(g, COW_IMG(0x10118220u), esi, 0);
                            t34 = g->edx;
                            if (t33 == 0u)
                            {
                                eax = t33;
                                edx = t34;
                            }
                            else
                            {
                                eax = t33;
                                edx = t34;
    COW_AT(1015e67c)
                                g->eax = eax;
                                g->edx = edx;
                                g->esp = sp0 - 0x10u;
                                t35 = cow_thiscall(g, COW_IMG(0x101193b0u), eax, 0);
                                t36 = g->edx;
                                eax = t35;
                                edx = t36;
                            }
                        }
                    }
    COW_AT(1015e694)
                    if ((rd32(esi + 0x34u) & 0x20000u) == 0u)
                    {
                        loc_4 = rd32(sp0 - 4u);
                        loc_8 = rd32(sp0 - 8u);
                        loc_c = rd32(sp0 - 0xcu);
                        loc_10 = rd32(sp0 - 0x10u);
                    }
                    else
                    {
    COW_AT(1015e69d)
                        g->eax = eax;
                        g->edx = edx;
                        g->esp = sp0 - 0x10u;
                        t39 = cow_thiscall(g, COW_IMG(0x10126510u), self, 0);
                        t40 = g->edx;
                        wr32(sp0 + 4u, t39);
                        if (t39 == 0u)
                        {
                            eax = t39;
                            loc_4 = rd32(sp0 - 4u);
                            loc_8 = rd32(sp0 - 8u);
                            loc_c = rd32(sp0 - 0xcu);
                            loc_10 = rd32(sp0 - 0x10u);
                        }
                        else
                        {
                            edx = t40;
    COW_AT(1015e6ac)
L_1015e6b1: ;
    COW_AT(1015e6b1)
                            wr32(sp0 - 0x14u, sp0 + 4u);
                            g->eax = sp0 + 4u;
                            g->esp = sp0 - 0x10u;
                            t41 = cow_call_regs(g, COW_IMG(0x10126550u), g->eax, g->ecx, edx, 0, 1, sp0 + 4u);
                            t42 = g->edx;
                            if ((rd32(t41 + 0x34u) & 0x40000u) == 0u)
                            {
                                edx = t42;
                            }
                            else
                            {
                                eax = t41;
                                edx = t42;
    COW_AT(1015e6c2)
                                wr32(sp0 - 0x14u, 1u);
                                wr32(sp0 - 0x18u, eax);
                                g->edx = edx;
                                g->esp = sp0 - 0x10u;
                                cow_call_regs(g, COW_IMG(0x1015e790u), eax, self, g->edx, 0, 2, eax, 1u);
                                t43 = g->edx;
                                edx = t43;
                            }
    COW_AT(1015e6cc)
                            if (rd32(sp0 + 4u) != 0u) goto L_1015e6b1;
                            eax = rd32(sp0 + 4u);
                            loc_4 = rd32(sp0 - 4u);
                            loc_8 = rd32(sp0 - 8u);
                            loc_c = rd32(sp0 - 0xcu);
                            loc_10 = rd32(sp0 - 0x10u);
                        }
                    }
                }
            }
        }
    }
    COW_AT(1015e6d4)
    g->ebx = loc_4;
    g->esi = loc_c;
    g->edi = loc_10;
    g->ebp = loc_8;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1015e530(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1015e544u:
    {
        uint32_t ebp;
        uint32_t esi;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = in_ebx & 0xffffff00u;
        g->edi = self;
        (void)sp0;
        return 1;
    }
    case 0x1015e54fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = in_ebx & 0xffffff00u;
        g->edi = self;
        (void)sp0;
        return 1;
    }
    case 0x1015e55au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = in_ebx & 0xffffff00u;
        g->edi = self;
        (void)sp0;
        return 1;
    }
    case 0x1015e56au:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = in_ebx & 0xffffff00u;
        g->ebp = 0xeu;
        g->edi = self;
        (void)sp0;
        return 1;
    }
    case 0x1015e595u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1015e5afu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1015e5d9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1015e5ebu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1015e5f3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1015e609u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1015e61bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1015e623u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1015e635u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1015e63eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1015e655u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1015e65cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1015e660u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1015e66du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1015e67cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1015e685u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1015e68du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1015e694u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1015e69du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1015e6acu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1015e6b1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x10u;
        g->esi = 0x40000u;
        (void)sp0;
        return 1;
    }
    case 0x1015e6c2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x10u;
        g->esi = 0x40000u;
        wr32(sp0 - 0x14u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1015e6ccu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x10u;
        g->esi = 0x40000u;
        (void)sp0;
        return 1;
    }
    case 0x1015e6d4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
/* blocks no state can start at, and why (the gittable lists their sites):
     1015e57a: holds in_ebx, which no location here says
     1015e581: holds in_ebx, which no location here says
*/
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1015e530(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1015e530(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
