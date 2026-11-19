/* f_0x10232090 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10232090(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_18c;
    uint32_t loc_190;
    uint32_t loc_194;
    uint32_t loc_198;
    uint32_t loc_19c;
    uint32_t loc_1a0;
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
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 452u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102320b0u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->ebp; in_edi = g->edi; in_esi = rd32(sp0 - 0x1a0u); in_ebp = rd32(sp0 - 0x19cu); in_ebx = rd32(sp0 - 0x198u); g->ebp = rd32(sp0 - 0x19cu); g->ebx = rd32(sp0 - 0x198u); g->esi = rd32(sp0 - 0x1a0u); goto E_102320b0;
    case 0x1023210fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x1a4u); in_esi = rd32(sp0 - 0x1a0u); in_ebp = rd32(sp0 - 0x19cu); in_ebx = rd32(sp0 - 0x198u); g->ebp = rd32(sp0 - 0x19cu); g->ebx = rd32(sp0 - 0x198u); g->edi = rd32(sp0 - 0x1a4u); g->esi = rd32(sp0 - 0x1a0u); goto E_1023210f;
    case 0x10232113u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x1a4u); in_esi = rd32(sp0 - 0x1a0u); in_ebp = rd32(sp0 - 0x19cu); in_ebx = rd32(sp0 - 0x198u); g->ebp = rd32(sp0 - 0x19cu); g->ebx = rd32(sp0 - 0x198u); g->edi = rd32(sp0 - 0x1a4u); g->esi = rd32(sp0 - 0x1a0u); goto E_10232113;
    case 0x10232142u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x1a4u); in_esi = rd32(sp0 - 0x1a0u); in_ebp = rd32(sp0 - 0x19cu); in_ebx = rd32(sp0 - 0x198u); self = rd32(sp0 - 0x194u); g->ebp = rd32(sp0 - 0x19cu); g->ebx = rd32(sp0 - 0x198u); g->edi = rd32(sp0 - 0x1a4u); g->esi = rd32(sp0 - 0x1a0u); goto E_10232142;
    case 0x10232160u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_190 = rd32(sp0 - 0x190u); goto E_10232160;
    case 0x10232162u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_190 = rd32(sp0 - 0x190u); goto E_10232162;
    case 0x10232174u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; goto E_10232174;
    case 0x10232189u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; goto E_10232189;
    case 0x1023219du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1023219d;
    case 0x102321a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_190 = rd32(sp0 - 0x190u); goto E_102321a6;
    case 0x102321b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_190 = rd32(sp0 - 0x190u); goto E_102321b0;
    case 0x102321c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102321c5;
    case 0x102321cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102321cb;
    case 0x102321d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_190 = rd32(sp0 - 0x190u); goto E_102321d0;
    case 0x102322a0u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102322a0;
    case 0x102322a8u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102322a8;
    case 0x102322acu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_194 = rd32(sp0 - 0x194u); goto E_102322ac;
    case 0x102322b6u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_194 = rd32(sp0 - 0x194u); goto E_102322b6;
    case 0x102322beu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_194 = rd32(sp0 - 0x194u); goto E_102322be;
    case 0x102322c2u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_194 = rd32(sp0 - 0x194u); loc_190 = rd32(sp0 - 0x190u); goto E_102322c2;
    case 0x102322ccu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_194 = rd32(sp0 - 0x194u); loc_190 = rd32(sp0 - 0x190u); goto E_102322cc;
    case 0x102322d0u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_194 = rd32(sp0 - 0x194u); loc_190 = rd32(sp0 - 0x190u); goto E_102322d0;
    case 0x102322d2u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_194 = rd32(sp0 - 0x194u); loc_190 = rd32(sp0 - 0x190u); goto E_102322d2;
    case 0x102322dcu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_194 = rd32(sp0 - 0x194u); loc_190 = rd32(sp0 - 0x190u); goto E_102322dc;
    case 0x102322e0u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_194 = rd32(sp0 - 0x194u); loc_190 = rd32(sp0 - 0x190u); goto E_102322e0;
    case 0x102322e2u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_194 = rd32(sp0 - 0x194u); loc_190 = rd32(sp0 - 0x190u); goto E_102322e2;
    case 0x102322e6u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_194 = rd32(sp0 - 0x194u); loc_190 = rd32(sp0 - 0x190u); goto E_102322e6;
    case 0x10232312u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_194 = rd32(sp0 - 0x194u); loc_190 = rd32(sp0 - 0x190u); goto E_10232312;
    case 0x10232316u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_194 = rd32(sp0 - 0x194u); loc_190 = rd32(sp0 - 0x190u); loc_18c = rd32(sp0 - 0x18cu); goto E_10232316;
    case 0x1023231bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_194 = rd32(sp0 - 0x194u); loc_190 = rd32(sp0 - 0x190u); loc_18c = rd32(sp0 - 0x18cu); goto E_1023231b;
    case 0x10232340u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_194 = rd32(sp0 - 0x194u); loc_190 = rd32(sp0 - 0x190u); loc_18c = rd32(sp0 - 0x18cu); goto E_10232340;
    case 0x10232348u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_194 = rd32(sp0 - 0x194u); loc_190 = rd32(sp0 - 0x190u); loc_18c = rd32(sp0 - 0x18cu); goto E_10232348;
    case 0x1023234du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_194 = rd32(sp0 - 0x194u); loc_190 = rd32(sp0 - 0x190u); loc_18c = rd32(sp0 - 0x18cu); goto E_1023234d;
    case 0x10232355u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_194 = rd32(sp0 - 0x194u); loc_190 = rd32(sp0 - 0x190u); loc_18c = rd32(sp0 - 0x18cu); goto E_10232355;
    case 0x1023235au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_194 = rd32(sp0 - 0x194u); loc_190 = rd32(sp0 - 0x190u); loc_18c = rd32(sp0 - 0x18cu); goto E_1023235a;
    case 0x102323b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1a0 = rd32(sp0 - 0x1a0u); loc_19c = rd32(sp0 - 0x19cu); loc_198 = rd32(sp0 - 0x198u); loc_194 = rd32(sp0 - 0x194u); goto E_102323b7;
    default: break;
    }
#endif

    COW_AT(10232090)
    wr32(sp0 - 0x198u, in_ebx);
    wr32(sp0 - 0x19cu, in_ebp);
    wr32(sp0 - 0x1a0u, in_esi);
    wr32(sp0 - 0x194u, self);
    if (arg2 == 0u)
    {
        edi = in_edi;
        loc_198 = in_ebx;
        loc_19c = in_ebp;
        loc_1a0 = in_esi;
    }
    else
    {
    COW_AT(102320b0)
        wr32(sp0 - 0x1a4u, in_edi);
        t1 = rd8(COW_IMG(0x103d3c84u));
        wr8(sp0 - 0x100u, (uint8_t)t1);
        edi = sp0 - 0xffu;
        eax = 0u;
        ecx = 0x3fu;
        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        wr16(edi, (uint16_t)(uint16_t)eax); edi += (g->df ? (uint32_t)-2 : 2u);
        wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u);
        wr8(sp0 - 0x180u, (uint8_t)t1);
        edi = sp0 - 0x17fu;
        eax = 0u;
        ecx = 0xfu;
        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        wr16(edi, (uint16_t)(uint16_t)eax); edi += (g->df ? (uint32_t)-2 : 2u);
        wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u);
        wr8(sp0 - 0x140u, (uint8_t)t1);
        edi = sp0 - 0x13fu;
        eax = 0u;
        ecx = 0xfu;
        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        wr16(edi, (uint16_t)(uint16_t)eax); edi += (g->df ? (uint32_t)-2 : 2u);
        wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u);
        wr32(sp0 - 0x18cu, 0u);
        wr32(sp0 - 0x188u, 0u);
        wr32(sp0 - 0x184u, 0u);
        if (rd32(arg2 + 0x1560u) == 0u)
        {
            eax = rd32(arg2 + 0x1560u);
            edx = (in_edx & 0xffffff00u) | t1;
        }
        else
        {
            eax = rd32(arg2 + 0x1560u);
            edx = (in_edx & 0xffffff00u) | t1;
    COW_AT(1023210f)
            if (rd32(eax) == 0u)
            {
    COW_AT(10232113)
                wr32(sp0 - 0x1a8u, 0x80804040u);
                wr32(sp0 - 0x1acu, 0x84u);
                wr32(sp0 - 0x1b0u, 0xcu);
                g->eax = eax;
                g->edx = edx;
                t2 = rd32(self + 8u);
                g->esp = sp0 - 0x1a8u;
                t3 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x84u);
                t4 = g->edx;
                wr32(sp0 - 0x1acu, t3);
                wr32(sp0 - 0x1b0u, 0xc8u);
                wr32(sp0 - 0x1b4u, 0xdcu);
                g->ebx = 0u;
                g->edi = t2 + 0xc4u;
                g->edx = t4;
                g->esp = sp0 - 0x1a4u;
                t5 = cow_thiscall(g, COW_IMG(0x101171b0u), t2 + 0xc4u, 4, 0xdcu, 0xc8u, t3, 0x80804040u);
                t6 = g->ecx;
                t7 = g->edx;
                eax = t5;
                ecx = t6;
                edx = t7;
            }
        }
    COW_AT(10232142)
        wr32(sp0 - 0x1a8u, arg1);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x1a4u;
        t8 = cow_cdecl(g, COW_IMG(0x10230a80u), 1, arg1);
        t9 = g->ecx;
        t10 = g->edx;
        wr32(sp0 - 0x190u, t8);
        if (rd32(arg2 + 0x1564u) == 0u)
        {
            eax = rd32(arg2 + 0x1564u);
            ecx = t9;
            edx = t10;
            ebx = 0u;
            loc_190 = t8;
        }
        else
        {
            eax = rd32(arg2 + 0x1564u);
            ecx = t9;
            edx = t10;
            loc_190 = t8;
    COW_AT(10232160)
            ebx = rd32(eax);
        }
    COW_AT(10232162)
        wr32(sp0 - 0x1a8u, arg1);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x1a4u;
        t11 = cow_call_regs(g, COW_IMG(0x10230930u), eax, g->ecx, g->edx, 1, 1, arg1);
        t12 = g->ecx;
        t13 = g->edx;
        if ((uint8_t)t11 != 0u)
        {
            eax = t11;
            ecx = t12;
            edx = t13;
            edi = 0x80808080u;
            loc_190 = rd32(sp0 - 0x190u);
        }
        else
        {
            ecx = t12;
            edx = t13;
    COW_AT(10232174)
            wr32(sp0 - 0x1a8u, arg2);
            wr32(sp0 - 0x1acu, arg1);
            g->eax = arg1;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x19cu;
            t14 = cow_cdecl(g, COW_IMG(0x102309d0u), 4, arg1, arg2, rd32(sp0 - 0x1a4u), rd32(sp0 - 0x1a0u));
            t15 = g->ecx;
            t16 = g->edx;
            if ((uint8_t)t14 != 1u)
            {
                eax = t14;
                ecx = t15;
                edx = t16;
                edi = 0x80808080u;
                loc_190 = rd32(sp0 - 0x190u);
            }
            else
            {
                eax = t14;
                edx = t16;
    COW_AT(10232189)
                wr32(sp0 - 0x1a8u, arg1);
                g->eax = eax;
                g->ecx = arg1;
                g->edx = edx;
                g->esp = sp0 - 0x1a4u;
                t17 = cow_cdecl(g, COW_IMG(0x102308a0u), 1, arg1);
                t18 = g->ecx;
                t19 = g->edx;
                if ((uint8_t)t17 != 0u)
                {
                    eax = t17;
                    ecx = t18;
                    edx = t19;
                    edi = 0x80808080u;
                    loc_190 = rd32(sp0 - 0x190u);
                }
                else
                {
                    eax = t17;
                    ecx = t18;
                    edx = t19;
    COW_AT(1023219d)
                    wr32(sp0 - 0x190u, ebx);
                    edi = 0x802060a0u;
                    loc_190 = ebx;
                }
            }
        }
    COW_AT(102321a6)
        if (rd32(rd32(sp0 - 0x194u) + 0x68u) != 4u)
        {
            ebp = rd32(sp0 - 0x194u);
        }
        else
        {
            ebp = rd32(sp0 - 0x194u);
    COW_AT(102321b0)
            wr32(sp0 - 0x1a8u, arg2);
            wr32(sp0 - 0x1acu, arg1);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = arg1;
            g->esp = sp0 - 0x19cu;
            t20 = cow_cdecl(g, COW_IMG(0x102309d0u), 4, arg1, arg2, rd32(sp0 - 0x1a4u), rd32(sp0 - 0x1a0u));
            t21 = g->ecx;
            t22 = g->edx;
            if ((uint8_t)t20 == 0u)
            {
                eax = t20;
                ecx = t21;
                edx = t22;
                loc_190 = rd32(sp0 - 0x190u);
            }
            else
            {
                eax = t20;
                ecx = t21;
                edx = t22;
    COW_AT(102321c5)
                if (rd32(sp0 - 0x190u) != ebx)
                {
                    loc_190 = rd32(sp0 - 0x190u);
                }
                else
                {
    COW_AT(102321cb)
                    edi = 0x802060a0u;
                    loc_190 = rd32(sp0 - 0x190u);
                }
            }
        }
    COW_AT(102321d0)
        wr32(sp0 - 0x1a8u, 0x81u);
        wr32(sp0 - 0x1acu, 0xcu);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x1a4u;
        t23 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x81u);
        t24 = g->ecx;
        t25 = g->edx;
        wr32(sp0 - 0x1b0u, t23);
        wr32(sp0 - 0x1b4u, COW_IMG(0x10386a14u));
        wr32(sp0 - 0x1b8u, sp0 - 0x100u);
        g->ebx = ebx;
        g->eax = sp0 - 0x100u;
        g->edx = t25;
        t26 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x10386a14u), t23, 0xcu, 0x81u);
        t27 = g->edx;
        wr32(sp0 - 0x1a8u, 0x80808080u);
        wr32(sp0 - 0x1acu, sp0 - 0x100u);
        wr32(sp0 - 0x1b0u, 0xb4u);
        wr32(sp0 - 0x1b4u, 0x14u);
        g->ebx = ebx;
        g->edi = edi;
        t28 = rd32(ebp + 8u);
        cow_thiscall(g, COW_IMG(0x101171b0u), t28 + 0xc4u, 4, 0x14u, 0xb4u, sp0 - 0x100u, 0x80808080u);
        t29 = g->ecx;
        wr32(sp0 - 0x1a8u, ebx);
        t30 = rd32(sp0 - 0x190u);
        wr32(sp0 - 0x1acu, t30);
        wr32(sp0 - 0x1b0u, COW_IMG(0x10357fbcu));
        wr32(sp0 - 0x1b4u, sp0 - 0x100u);
        g->ebx = ebx;
        g->eax = sp0 - 0x100u;
        g->edx = t30;
        g->esp = sp0 - 0x1a0u;
        t31 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x10357fbcu), t30, ebx, rd32(sp0 - 0x1a4u));
        t32 = g->edx;
        wr32(sp0 - 0x1a8u, edi);
        wr32(sp0 - 0x1acu, sp0 - 0x100u);
        wr32(sp0 - 0x1b0u, 0xb4u);
        wr32(sp0 - 0x1b4u, 0xb4u);
        g->ebx = ebx;
        g->edi = edi;
        g->edx = t32;
        t33 = rd32(ebp + 8u);
        g->esp = sp0 - 0x1a4u;
        t34 = cow_thiscall(g, COW_IMG(0x101171b0u), t33 + 0xc4u, 4, 0xb4u, 0xb4u, sp0 - 0x100u, edi);
        t35 = g->ecx;
        t36 = g->edx;
        wr32(sp0 - 0x1a8u, 0x83u);
        wr32(sp0 - 0x1acu, 0xcu);
        g->ecx = t35;
        t37 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x83u);
        t38 = g->ecx;
        wr32(sp0 - 0x1b0u, t37);
        wr32(sp0 - 0x1b4u, COW_IMG(0x1034f7e0u));
        wr32(sp0 - 0x1b8u, sp0 - 0x100u);
        g->ebx = ebx;
        g->edx = sp0 - 0x100u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x1034f7e0u), t37, 0xcu, 0x83u);
        t39 = g->edx;
        wr32(sp0 - 0x1a8u, 0x80808080u);
        wr32(sp0 - 0x1acu, sp0 - 0x100u);
        wr32(sp0 - 0x1b0u, 0xc8u);
        wr32(sp0 - 0x1b4u, 0x14u);
        g->ebx = ebx;
        g->edi = edi;
        g->edx = t39;
        cow_thiscall(g, COW_IMG(0x101171b0u), rd32(ebp + 8u) + 0xc4u, 4, 0x14u, 0xc8u, sp0 - 0x100u, 0x80808080u);
        t40 = g->edx;
        if (rd32(arg2 + 0x1568u) == 0u)
        {
            edx = t40;
    COW_AT(102322a8)
            wr32(sp0 - 0x194u, 0u);
            loc_194 = 0u;
        }
        else
        {
            eax = rd32(arg2 + 0x1568u);
    COW_AT(102322a0)
            wr32(sp0 - 0x194u, rd32(eax));
            edx = rd32(eax);
            loc_194 = rd32(eax);
        }
    COW_AT(102322ac)
        if (rd32(arg2 + 0x156cu) == 0u)
        {
    COW_AT(102322be)
            wr32(sp0 - 0x190u, 0u);
            loc_190 = 0u;
        }
        else
        {
            eax = rd32(arg2 + 0x156cu);
    COW_AT(102322b6)
            wr32(sp0 - 0x190u, rd32(eax));
            loc_190 = rd32(eax);
        }
    COW_AT(102322c2)
        if (rd32(arg2 + 0x1570u) == 0u)
        {
            eax = rd32(arg2 + 0x1570u);
    COW_AT(102322d0)
            edi = 0u;
        }
        else
        {
            eax = rd32(arg2 + 0x1570u);
    COW_AT(102322cc)
            edi = rd32(eax);
        }
    COW_AT(102322d2)
        if (rd32(arg2 + 0x1574u) == 0u)
        {
    COW_AT(102322e0)
            ebx = 0u;
        }
        else
        {
            esi = rd32(arg2 + 0x1574u);
    COW_AT(102322dc)
            ebx = rd32(esi);
        }
    COW_AT(102322e2)
        if (edi == 0u)
        {
    COW_AT(10232312)
            ecx = 0u;
            esi = rd32(sp0 - 0x184u);
            loc_18c = rd32(sp0 - 0x18cu);
        }
        else
        {
    COW_AT(102322e6)
            wr32(sp0 - 0x1a8u, 0x7du);
            wr32(sp0 - 0x1acu, 0xcu);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x1a4u;
            t41 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x7du);
            t42 = g->edx;
            wr32(sp0 - 0x1b0u, t41);
            wr32(sp0 - 0x1b4u, edi);
            wr32(sp0 - 0x1b8u, COW_IMG(0x10386a0cu));
            wr32(sp0 - 0x1bcu, sp0 - 0x180u);
            g->ebx = ebx;
            g->ecx = sp0 - 0x180u;
            g->esp = sp0 - 0x1a8u;
            t43 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x180u, COW_IMG(0x10386a0cu), edi, t41, 0xcu);
            t44 = g->ecx;
            wr32(sp0 - 0x18cu, sp0 - 0x180u);
            eax = t43;
            ecx = t44;
            edx = sp0 - 0x180u;
            esi = 1u;
            loc_18c = sp0 - 0x180u;
            loc_194 = rd32(sp0 - 0x194u);
            loc_190 = rd32(sp0 - 0x190u);
        }
    COW_AT(10232316)
        if (ebx == 0u)
        {
            edi = rd32(sp0 - 0x1a4u);
        }
        else
        {
            edi = rd32(sp0 - 0x1a4u);
    COW_AT(1023231b)
            wr32(sp0 - 0x1a4u, 0x7eu);
            wr32(sp0 - 0x1a8u, 0xcu);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x1a0u;
            t45 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x7eu);
            t46 = g->ecx;
            t47 = g->edx;
            wr32(sp0 - 0x1acu, t45);
            wr32(sp0 - 0x1b0u, ebx);
            wr32(sp0 - 0x1b4u, COW_IMG(0x10386a0cu));
            wr32(sp0 - 0x1b8u, sp0 - 0x140u);
            g->ebx = ebx;
            g->edx = t47;
            g->esp = sp0 - 0x1a4u;
            cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x140u, COW_IMG(0x10386a0cu), ebx, t45, 0xcu);
            t48 = g->edx;
            wr32(esi * 4u + sp0 - 0x18cu, sp0 - 0x140u);
            edx = t48;
            loc_18c = rd32(sp0 - 0x18cu);
            loc_194 = rd32(sp0 - 0x194u);
            loc_190 = rd32(sp0 - 0x190u);
        }
    COW_AT(10232340)
        if (rd32(sp0 - 0x188u) != 0u)
        {
            ecx = rd32(sp0 - 0x188u);
        }
        else
        {
    COW_AT(10232348)
            ecx = COW_IMG(0x103d3c84u);
        }
    COW_AT(1023234d)
        if (loc_18c != 0u)
        {
            eax = loc_18c;
        }
        else
        {
    COW_AT(10232355)
            eax = COW_IMG(0x103d3c84u);
        }
    COW_AT(1023235a)
        wr32(sp0 - 0x1a4u, ecx);
        wr32(sp0 - 0x1a8u, eax);
        wr32(sp0 - 0x1acu, 0x7cu);
        wr32(sp0 - 0x1b0u, 0xcu);
        g->eax = eax;
        g->ecx = ecx;
        g->esp = sp0 - 0x1a8u;
        t49 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x7cu);
        t50 = g->ecx;
        wr32(sp0 - 0x1acu, t49);
        t51 = rd32(sp0 - 0x190u);
        wr32(sp0 - 0x1b0u, t51);
        wr32(sp0 - 0x1b4u, 0x7bu);
        wr32(sp0 - 0x1b8u, 0xcu);
        g->edx = t51;
        g->esp = sp0 - 0x1b0u;
        t52 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x7bu);
        t53 = g->edx;
        wr32(sp0 - 0x1b4u, t52);
        t54 = rd32(sp0 - 0x194u);
        wr32(sp0 - 0x1b8u, t54);
        wr32(sp0 - 0x1bcu, COW_IMG(0x103869f8u));
        wr32(sp0 - 0x1c0u, sp0 - 0x100u);
        g->ebx = ebx;
        g->eax = t54;
        g->esp = sp0 - 0x1acu;
        t55 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x103869f8u), t54, t52, rd32(sp0 - 0x1b0u));
        wr32(sp0 - 0x1a4u, 0x80808080u);
        wr32(sp0 - 0x1a8u, sp0 - 0x100u);
        wr32(sp0 - 0x1acu, 0xdcu);
        wr32(sp0 - 0x1b0u, 0x14u);
        g->ebx = ebx;
        g->edi = edi;
        g->esp = sp0 - 0x1a0u;
        cow_thiscall(g, COW_IMG(0x101171b0u), rd32(ebp + 8u) + 0xc4u, 4, 0x14u, 0xdcu, sp0 - 0x100u, 0x80808080u);
        loc_198 = rd32(sp0 - 0x198u);
        loc_19c = rd32(sp0 - 0x19cu);
        loc_1a0 = rd32(sp0 - 0x1a0u);
    }
    COW_AT(102323b7)
    g->ebx = loc_198;
    g->esi = loc_1a0;
    g->edi = edi;
    g->ebp = loc_19c;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10232090(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102320b0u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->ebp;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x1a0u);
        in_ebp = rd32(sp0 - 0x19cu);
        in_ebx = rd32(sp0 - 0x198u);
        g->esp = sp0 - 0x1a0u;
        g->ebx = 0u;
        g->esi = arg2;
        wr32(sp0 - 0x194u, self);
        (void)sp0;
        return 1;
    }
    case 0x1023210fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1a4u);
        in_esi = rd32(sp0 - 0x1a0u);
        in_ebp = rd32(sp0 - 0x19cu);
        in_ebx = rd32(sp0 - 0x198u);
        g->esp = sp0 - 0x1a4u;
        g->ebx = 0u;
        g->esi = arg2;
        wr32(sp0 - 0x194u, self);
        wr32(sp0 - 0x18cu, 0u);
        wr32(sp0 - 0x188u, 0u);
        wr32(sp0 - 0x184u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10232113u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1a4u);
        in_esi = rd32(sp0 - 0x1a0u);
        in_ebp = rd32(sp0 - 0x19cu);
        in_ebx = rd32(sp0 - 0x198u);
        g->esp = sp0 - 0x1a4u;
        g->ebx = 0u;
        g->esi = arg2;
        wr32(sp0 - 0x194u, self);
        wr32(sp0 - 0x18cu, 0u);
        wr32(sp0 - 0x188u, 0u);
        wr32(sp0 - 0x184u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10232142u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1a4u);
        in_esi = rd32(sp0 - 0x1a0u);
        in_ebp = rd32(sp0 - 0x19cu);
        in_ebx = rd32(sp0 - 0x198u);
        self = rd32(sp0 - 0x194u);
        g->esp = sp0 - 0x1a4u;
        g->ebx = 0u;
        g->esi = arg2;
        wr32(sp0 - 0x18cu, 0u);
        wr32(sp0 - 0x188u, 0u);
        wr32(sp0 - 0x184u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10232160u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_190;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_190 = rd32(sp0 - 0x190u);
        g->esp = sp0 - 0x1a4u;
        g->ebp = arg1;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10232162u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_190;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_190 = rd32(sp0 - 0x190u);
        g->esp = sp0 - 0x1a4u;
        g->ebp = arg1;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10232174u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        g->esp = sp0 - 0x1a4u;
        g->esi = arg2;
        g->edi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x10232189u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        g->esp = sp0 - 0x1a4u;
        g->esi = arg2;
        g->edi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x1023219du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x1a4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102321a6u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_190;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_190 = rd32(sp0 - 0x190u);
        g->esp = sp0 - 0x1a4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102321b0u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_190;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_190 = rd32(sp0 - 0x190u);
        g->esp = sp0 - 0x1a4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102321c5u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x1a4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102321cbu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x1a4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102321d0u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_190;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_190 = rd32(sp0 - 0x190u);
        g->esp = sp0 - 0x1a4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102322a0u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x1a4u;
        g->ecx = 0u;
        g->esi = arg2;
        wr32(sp0 - 0x1b8u, sp0 - 0x100u);
        wr32(sp0 - 0x1acu, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x102322a8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x1a4u;
        g->ecx = 0u;
        g->esi = arg2;
        wr32(sp0 - 0x1b8u, sp0 - 0x100u);
        wr32(sp0 - 0x1acu, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x102322acu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_194;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_194 = rd32(sp0 - 0x194u);
        g->esp = sp0 - 0x1a4u;
        g->ecx = 0u;
        g->esi = arg2;
        wr32(sp0 - 0x1b8u, sp0 - 0x100u);
        wr32(sp0 - 0x1acu, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x102322b6u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_194;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_194 = rd32(sp0 - 0x194u);
        g->esp = sp0 - 0x1a4u;
        g->ecx = 0u;
        g->esi = arg2;
        wr32(sp0 - 0x1b8u, sp0 - 0x100u);
        wr32(sp0 - 0x1acu, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x102322beu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_194;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_194 = rd32(sp0 - 0x194u);
        g->esp = sp0 - 0x1a4u;
        g->ecx = 0u;
        g->esi = arg2;
        wr32(sp0 - 0x1b8u, sp0 - 0x100u);
        wr32(sp0 - 0x1acu, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x102322c2u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_190;
        uint32_t loc_194;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_194 = rd32(sp0 - 0x194u);
        loc_190 = rd32(sp0 - 0x190u);
        g->esp = sp0 - 0x1a4u;
        g->ecx = 0u;
        g->esi = arg2;
        wr32(sp0 - 0x1b8u, sp0 - 0x100u);
        wr32(sp0 - 0x1acu, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x102322ccu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_190;
        uint32_t loc_194;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_194 = rd32(sp0 - 0x194u);
        loc_190 = rd32(sp0 - 0x190u);
        g->esp = sp0 - 0x1a4u;
        g->ecx = 0u;
        g->esi = arg2;
        wr32(sp0 - 0x1b8u, sp0 - 0x100u);
        wr32(sp0 - 0x1acu, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x102322d0u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_190;
        uint32_t loc_194;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_194 = rd32(sp0 - 0x194u);
        loc_190 = rd32(sp0 - 0x190u);
        g->esp = sp0 - 0x1a4u;
        g->ecx = 0u;
        g->esi = arg2;
        wr32(sp0 - 0x1b8u, sp0 - 0x100u);
        wr32(sp0 - 0x1acu, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x102322d2u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_190;
        uint32_t loc_194;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_194 = rd32(sp0 - 0x194u);
        loc_190 = rd32(sp0 - 0x190u);
        g->esp = sp0 - 0x1a4u;
        g->ecx = 0u;
        g->esi = arg2;
        wr32(sp0 - 0x1b8u, sp0 - 0x100u);
        wr32(sp0 - 0x1acu, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x102322dcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_190;
        uint32_t loc_194;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_194 = rd32(sp0 - 0x194u);
        loc_190 = rd32(sp0 - 0x190u);
        g->esp = sp0 - 0x1a4u;
        g->ecx = 0u;
        wr32(sp0 - 0x1b8u, sp0 - 0x100u);
        wr32(sp0 - 0x1acu, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x102322e0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_190;
        uint32_t loc_194;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_194 = rd32(sp0 - 0x194u);
        loc_190 = rd32(sp0 - 0x190u);
        g->esp = sp0 - 0x1a4u;
        g->ecx = 0u;
        wr32(sp0 - 0x1b8u, sp0 - 0x100u);
        wr32(sp0 - 0x1acu, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x102322e2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_190;
        uint32_t loc_194;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_194 = rd32(sp0 - 0x194u);
        loc_190 = rd32(sp0 - 0x190u);
        g->esp = sp0 - 0x1a4u;
        g->ecx = 0u;
        wr32(sp0 - 0x1b8u, sp0 - 0x100u);
        wr32(sp0 - 0x1acu, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x102322e6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_190;
        uint32_t loc_194;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_194 = rd32(sp0 - 0x194u);
        loc_190 = rd32(sp0 - 0x190u);
        g->esp = sp0 - 0x1a4u;
        g->ecx = 0u;
        wr32(sp0 - 0x1b8u, sp0 - 0x100u);
        wr32(sp0 - 0x1acu, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x10232312u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_190;
        uint32_t loc_194;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_194 = rd32(sp0 - 0x194u);
        loc_190 = rd32(sp0 - 0x190u);
        g->esp = sp0 - 0x1a4u;
        g->ecx = 0u;
        wr32(sp0 - 0x1b8u, sp0 - 0x100u);
        wr32(sp0 - 0x1acu, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x10232316u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18c;
        uint32_t loc_190;
        uint32_t loc_194;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_194 = rd32(sp0 - 0x194u);
        loc_190 = rd32(sp0 - 0x190u);
        loc_18c = rd32(sp0 - 0x18cu);
        g->esp = sp0 - 0x1a4u;
        (void)sp0;
        return 1;
    }
    case 0x1023231bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18c;
        uint32_t loc_190;
        uint32_t loc_194;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_194 = rd32(sp0 - 0x194u);
        loc_190 = rd32(sp0 - 0x190u);
        loc_18c = rd32(sp0 - 0x18cu);
        g->esp = sp0 - 0x1a0u;
        (void)sp0;
        return 1;
    }
    case 0x10232340u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18c;
        uint32_t loc_190;
        uint32_t loc_194;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_194 = rd32(sp0 - 0x194u);
        loc_190 = rd32(sp0 - 0x190u);
        loc_18c = rd32(sp0 - 0x18cu);
        g->esp = sp0 - 0x1a0u;
        (void)sp0;
        return 1;
    }
    case 0x10232348u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18c;
        uint32_t loc_190;
        uint32_t loc_194;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_194 = rd32(sp0 - 0x194u);
        loc_190 = rd32(sp0 - 0x190u);
        loc_18c = rd32(sp0 - 0x18cu);
        g->esp = sp0 - 0x1a0u;
        (void)sp0;
        return 1;
    }
    case 0x1023234du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18c;
        uint32_t loc_190;
        uint32_t loc_194;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_194 = rd32(sp0 - 0x194u);
        loc_190 = rd32(sp0 - 0x190u);
        loc_18c = rd32(sp0 - 0x18cu);
        g->esp = sp0 - 0x1a0u;
        (void)sp0;
        return 1;
    }
    case 0x10232355u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18c;
        uint32_t loc_190;
        uint32_t loc_194;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_194 = rd32(sp0 - 0x194u);
        loc_190 = rd32(sp0 - 0x190u);
        loc_18c = rd32(sp0 - 0x18cu);
        g->esp = sp0 - 0x1a0u;
        (void)sp0;
        return 1;
    }
    case 0x1023235au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18c;
        uint32_t loc_190;
        uint32_t loc_194;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_194 = rd32(sp0 - 0x194u);
        loc_190 = rd32(sp0 - 0x190u);
        loc_18c = rd32(sp0 - 0x18cu);
        g->esp = sp0 - 0x1a0u;
        (void)sp0;
        return 1;
    }
    case 0x102323b7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_194;
        uint32_t loc_198;
        uint32_t loc_19c;
        uint32_t loc_1a0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1a0 = rd32(sp0 - 0x1a0u);
        loc_19c = rd32(sp0 - 0x19cu);
        loc_198 = rd32(sp0 - 0x198u);
        loc_194 = rd32(sp0 - 0x194u);
        g->esp = sp0 - 0x1a0u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10232090(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10232090(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
