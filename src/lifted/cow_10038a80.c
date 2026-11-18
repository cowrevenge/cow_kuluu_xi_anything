/* f_0x10038a80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10038a80(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
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
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
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
    cow_frame(g, sp0, 132u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10038a97u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 0x74u); g->esi = rd32(sp0 - 0x74u); goto E_10038a97;
    case 0x10038a9eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = rd32(sp0 - 0x74u); g->esi = rd32(sp0 - 0x74u); goto E_10038a9e;
    case 0x10038aa7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = rd32(sp0 - 0x74u); g->esi = rd32(sp0 - 0x74u); goto E_10038aa7;
    case 0x10038ab0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = rd32(sp0 - 0x74u); g->esi = rd32(sp0 - 0x74u); goto E_10038ab0;
    case 0x10038ab7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = rd32(sp0 - 0x74u); g->esi = rd32(sp0 - 0x74u); goto E_10038ab7;
    case 0x10038c73u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; goto E_10038c73;
    case 0x10038cccu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; goto E_10038ccc;
    case 0x10038d05u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10038d05;
    case 0x10038d0eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10038d0e;
    case 0x10038d18u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10038d18;
    case 0x10038d6cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10038d6c;
    default: break;
    }
#endif

    COW_AT(10038a80)
    wr32(sp0 - 0x74u, in_esi);
    wr32(sp0 - 0x78u, 0xc8u);
    g->edx = in_edx;
    g->esp = sp0 - 0x74u;
    t1 = cow_call_regs(g, COW_IMG(0x10193850u), in_eax, g->ecx, g->edx, 1, 1, 0xc8u);
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        goto L_10038ab0;
    }
    edx = t2;
    COW_AT(10038a97)
    if (rd32(self + 4u) == 0u)
    {
        eax = rd32(self + 4u);
        goto L_10038ab0;
    }
    COW_AT(10038a9e)
    if (rd32(COW_IMG(0x1047b958u)) == 0u)
    {
        eax = rd32(COW_IMG(0x1047b958u));
        goto L_10038ab0;
    }
    COW_AT(10038aa7)
    if (rd32(COW_IMG(0x10456d50u)) != 0u) goto L_10038ab7;
    eax = rd32(COW_IMG(0x10456d50u));
L_10038ab0: ;
    COW_AT(10038ab0)
    g->ebx = in_ebx;
    g->esi = in_esi;
    return eax & 0xffffff00u;
L_10038ab7: ;
    COW_AT(10038ab7)
    wr32(sp0 - 0x70u, 0u);
    wr32(sp0 - 0x60u, rd32(COW_IMG(0x1047b954u)));
    wr32(sp0 - 0x44u, rd32(COW_IMG(0x1047b954u)));
    wr32(sp0 - 0x28u, rd32(COW_IMG(0x1047b954u)));
    wr32(sp0 - 0xcu, rd32(COW_IMG(0x1047b954u)));
    wr32(sp0 - 0x6cu, 0u);
    wr32(sp0 - 0x68u, 0u);
    wr32(sp0 - 0x64u, 0x3f800000u);
    wr32(sp0 - 0x5cu, 0u);
    wr32(sp0 - 0x58u, 0u);
    wr32(sp0 - 0x54u, 0x43800000u);
    wr32(sp0 - 0x50u, 0u);
    wr32(sp0 - 0x4cu, 0u);
    wr32(sp0 - 0x48u, 0x3f800000u);
    wr32(sp0 - 0x40u, 0x3f800000u);
    wr32(sp0 - 0x3cu, 0u);
    wr32(sp0 - 0x38u, 0u);
    wr32(sp0 - 0x34u, 0x43800000u);
    wr32(sp0 - 0x30u, 0u);
    wr32(sp0 - 0x2cu, 0x3f800000u);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x20u, 0x3f800000u);
    wr32(sp0 - 0x1cu, 0x43800000u);
    wr32(sp0 - 0x18u, 0x43800000u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x10u, 0x3f800000u);
    wr32(sp0 - 8u, 0x3f800000u);
    wr32(sp0 - 4u, 0x3f800000u);
    wr32(sp0 - 0x78u, 0u);
    wr32(sp0 - 0x7cu, 0xeu);
    t3 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x80u, t3);
    t4 = rd32(COW_IMG(0x1047b954u));
    g->esp = sp0 - 0x60u;
    cow_thiscall(g, rd32(rd32(t3) + 0xc8u), rd32(t3), 8, t3, 0xeu, 0u, in_esi, 0u, 0u, 0u, 0x3f800000u);
    wr32(sp0 - 0x64u, 0u);
    wr32(sp0 - 0x68u, 7u);
    t5 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x6cu, t5);
    g->esp = sp0 - 0x44u;
    cow_thiscall(g, rd32(rd32(t5) + 0xc8u), rd32(t5), 10, t5, 7u, 0u, rd32(sp0 - 0x60u), 0u, 0u, 0x43800000u, 0u, 0u, 0x3f800000u);
    wr32(sp0 - 0x48u, 3u);
    wr32(sp0 - 0x4cu, 1u);
    wr32(sp0 - 0x50u, 0u);
    t6 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x54u, t6);
    g->esp = sp0 - 0x38u;
    cow_thiscall(g, rd32(rd32(t6) + 0xfcu), rd32(t6), 7, t6, 0u, 1u, 3u, rd32(sp0 - 0x44u), 0x3f800000u, 0u);
    wr32(sp0 - 0x3cu, 0u);
    wr32(sp0 - 0x40u, 2u);
    wr32(sp0 - 0x44u, 0u);
    t7 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x48u, t7);
    g->esp = sp0 - 0x28u;
    cow_thiscall(g, rd32(rd32(t7) + 0xfcu), rd32(t7), 8, t7, 0u, 2u, 0u, 0u, 0x43800000u, 0u, 0x3f800000u);
    wr32(sp0 - 0x2cu, 2u);
    wr32(sp0 - 0x30u, 3u);
    wr32(sp0 - 0x34u, 0u);
    t8 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x38u, t8);
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, rd32(rd32(t8) + 0xfcu), rd32(t8), 10, t8, 0u, 3u, 2u, rd32(sp0 - 0x28u), 0u, 0x3f800000u, 0x43800000u, 0x43800000u, 0u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 5u);
    wr32(sp0 - 0x1cu, 0u);
    t9 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x20u, t9);
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, rd32(rd32(t9) + 0xfcu), rd32(t9), 2, t9, 0u);
    wr32(sp0 - 0x1cu, 2u);
    wr32(sp0 - 0x20u, 6u);
    wr32(sp0 - 0x24u, 0u);
    t10 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x28u, t10);
    g->esp = sp0 - 0x28u;
    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xfcu), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 0);
    wr32(sp0 - 0x2cu, 1u);
    wr32(sp0 - 0x30u, 4u);
    wr32(sp0 - 0x34u, 1u);
    t11 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x38u, t11);
    g->esp = sp0 - 0x38u;
    cow_thiscall(g, rd32(rd32(t11) + 0xfcu), rd32(t11), 0);
    wr32(sp0 - 0x3cu, 1u);
    wr32(sp0 - 0x40u, 1u);
    wr32(sp0 - 0x44u, 1u);
    t12 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x48u, t12);
    g->esp = sp0 - 0x48u;
    cow_thiscall(g, rd32(rd32(t12) + 0xfcu), rd32(t12), 0);
    if ((rd32(COW_IMG(0x1047b954u)) & 0xff000000u) != 0x80000000u)
    {
        edx = rd32(COW_IMG(0x1047b954u)) & 0xff000000u;
    COW_AT(10038c73)
        wr32(sp0 - 0x4cu, 5u);
        wr32(sp0 - 0x50u, 4u);
        wr32(sp0 - 0x54u, 0u);
        t13 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x58u, t13);
        g->esp = sp0 - 0x58u;
        cow_thiscall(g, rd32(rd32(t13) + 0xfcu), rd32(t13), 0);
        wr32(sp0 - 0x5cu, 1u);
        wr32(sp0 - 0x60u, 0x1bu);
        t14 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x64u, t14);
        g->esp = sp0 - 0x64u;
        cow_thiscall(g, rd32(rd32(t14) + 0xc8u), rd32(t14), 0);
        wr32(sp0 - 0x68u, 5u);
        wr32(sp0 - 0x6cu, 0x13u);
        t15 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x70u, t15);
        g->esp = sp0 - 0x54u;
        cow_thiscall(g, rd32(rd32(t15) + 0xc8u), rd32(t15), 7, t15, 0x13u, 5u, rd32(sp0 - 0x64u), 0x1bu, 1u, rd32(sp0 - 0x58u));
        wr32(sp0 - 0x58u, 1u);
        wr32(sp0 - 0x5cu, 0x14u);
        t16 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x60u, t16);
        g->esp = sp0 - 0x48u;
        cow_thiscall(g, rd32(rd32(t16) + 0xc8u), rd32(t16), 6, t16, 0x14u, 1u, 0u, 4u, 5u);
    }
    COW_AT(10038ccc)
    wr32(sp0 - 0x4cu, in_ebx);
    wr32(sp0 - 0x50u, 0x144u);
    t17 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x54u, t17);
    g->edx = rd32(COW_IMG(0x1045666cu));
    t18 = rd32(COW_IMG(0x1045666cu));
    g->esp = sp0 - 0x54u;
    cow_thiscall(g, rd32(rd32(t17) + 0x130u), rd32(t17), 0);
    t19 = g->edx;
    t20 = rd32(COW_IMG(0x1045666cu));
    t21 = rd8(rd32(COW_IMG(0x1045666cu)) + 0x828u);
    wr8(t20 + 0x828u, 0u);
    g->eax = t20;
    t22 = cow_thiscall(g, COW_IMG(0x1000d660u), rd32(COW_IMG(0x104566e8u)), 0);
    if ((uint8_t)t22 == 0u)
    {
        ebx = (in_ebx & 0xffffff00u) | t21;
    }
    else
    {
        ebx = (in_ebx & 0xffffff00u) | t21;
    COW_AT(10038d05)
        if (rd32(COW_IMG(0x1047b95cu)) != 0u)
        {
    COW_AT(10038d0e)
            if (rd32(COW_IMG(0x10456d54u)) != 0u)
            {
                ecx = rd32(COW_IMG(0x10456d54u));
    COW_AT(10038d18)
                wr32(sp0 - 0x58u, ecx);
                wr32(sp0 - 0x5cu, 0u);
                t23 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                wr32(sp0 - 0x60u, t23);
                g->edx = rd32(t23);
                t24 = rd32(t23);
                g->esp = sp0 - 0x54u;
                cow_thiscall(g, rd32(t24 + 0xf4u), ecx, 3, t23, 0u, ecx);
                t25 = g->edx;
                wr32(sp0 - 0x58u, 0u);
                wr32(sp0 - 0x5cu, rd32(COW_IMG(0x1047b964u)));
                wr32(sp0 - 0x60u, rd32(COW_IMG(0x1047b95cu)));
                g->ebx = ebx;
                g->eax = rd32(COW_IMG(0x1047b964u));
                t26 = rd32(COW_IMG(0x1047b964u));
                t27 = cow_thiscall(g, COW_IMG(0x10009e20u), rd32(COW_IMG(0x1045666cu)), 3, rd32(COW_IMG(0x1047b95cu)), t26, 0u);
                wr32(sp0 - 0x58u, 0x1cu);
                wr32(sp0 - 0x5cu, sp0 - 0x4cu);
                wr32(sp0 - 0x60u, 2u);
                wr32(sp0 - 0x64u, 5u);
                g->ebx = ebx;
                g->edx = sp0 - 0x4cu;
                t28 = cow_thiscall(g, COW_IMG(0x1000cd00u), rd32(COW_IMG(0x1045666cu)), 4, 5u, 2u, sp0 - 0x4cu, 0x1cu);
                t29 = g->edx;
                wr32(sp0 - 0x58u, 0u);
                wr32(sp0 - 0x5cu, 0u);
                cow_fastcall(g, COW_IMG(0x1000a1d0u), rd32(COW_IMG(0x1045666cu)), t29, 2, 0u, 0u);
            }
        }
    }
    COW_AT(10038d6c)
    wr32(sp0 - 0x58u, rd32(COW_IMG(0x10456d50u)));
    wr32(sp0 - 0x5cu, 0u);
    t30 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x60u, t30);
    g->edx = rd32(COW_IMG(0x10456d50u));
    t31 = rd32(COW_IMG(0x10456d50u));
    g->esp = sp0 - 0x60u;
    cow_thiscall(g, rd32(rd32(t30) + 0xf4u), rd32(t30), 0);
    t32 = g->edx;
    wr32(sp0 - 0x64u, 0u);
    wr32(sp0 - 0x68u, rd32(COW_IMG(0x1047b960u)));
    wr32(sp0 - 0x6cu, rd32(COW_IMG(0x1047b958u)));
    g->ebx = ebx;
    g->eax = rd32(COW_IMG(0x1047b960u));
    t33 = rd32(COW_IMG(0x1047b960u));
    t34 = cow_thiscall(g, COW_IMG(0x10009e20u), rd32(COW_IMG(0x1045666cu)), 3, rd32(COW_IMG(0x1047b958u)), t33, 0u);
    wr32(sp0 - 0x64u, 0x1cu);
    wr32(sp0 - 0x68u, sp0 - 0x58u);
    wr32(sp0 - 0x6cu, 2u);
    wr32(sp0 - 0x70u, 5u);
    g->ebx = ebx;
    g->edx = sp0 - 0x58u;
    t35 = cow_thiscall(g, COW_IMG(0x1000cd00u), rd32(COW_IMG(0x1045666cu)), 4, 5u, 2u, sp0 - 0x58u, 0x1cu);
    t36 = g->edx;
    wr32(sp0 - 0x64u, 0u);
    wr32(sp0 - 0x68u, 0u);
    cow_fastcall(g, COW_IMG(0x1000a1d0u), rd32(COW_IMG(0x1045666cu)), t36, 2, 0u, 0u);
    wr32(sp0 - 0x64u, 1u);
    wr32(sp0 - 0x68u, 0xeu);
    wr8(rd32(COW_IMG(0x1045666cu)) + 0x828u, (uint8_t)ebx);
    t37 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x6cu, t37);
    g->edx = rd32(t37);
    t38 = rd32(t37);
    g->esp = sp0 - 0x6cu;
    cow_thiscall(g, rd32(t38 + 0xc8u), rd32(COW_IMG(0x1045666cu)), 0);
    t39 = g->edx;
    wr32(sp0 - 0x70u, 1u);
    wr32(sp0 - 0x74u, 7u);
    t40 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x78u, t40);
    g->eax = t40;
    g->esp = sp0 - 0x78u;
    t41 = cow_thiscall(g, rd32(rd32(t40) + 0xc8u), rd32(t40), 0);
    g->ebx = rd32(sp0 - 0x78u);
    g->esi = 7u;
    return (t41 & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10038a80(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10038a97u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_esi = rd32(sp0 - 0x74u);
        g->esp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x10038a9eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = rd32(sp0 - 0x74u);
        g->esp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x10038aa7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = rd32(sp0 - 0x74u);
        g->esp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x10038ab0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = rd32(sp0 - 0x74u);
        g->esp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x10038ab7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = rd32(sp0 - 0x74u);
        g->esp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x10038c73u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x10038cccu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x10038d05u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x10038d0eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x10038d18u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x10038d6cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10038a80(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10038a80(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
