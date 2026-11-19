/* f_0x101a5af0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101a5af0(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_ac;
    uint32_t loc_b8;
    uint32_t loc_bc;
    uint32_t loc_c8;
    uint32_t loc_cc;
    unsigned of;
    unsigned pf;
    unsigned sf;
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
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 236u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101a5b1bu: in_eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->ebx; in_esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_ebp = rd32(sp0 - 0xbcu); in_ebx = rd32(sp0 - 0xb8u); g->ebp = rd32(sp0 - 0xbcu); g->ebx = rd32(sp0 - 0xb8u); goto E_101a5b1b;
    case 0x101a5b22u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->ebx; in_esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_ebp = rd32(sp0 - 0xbcu); in_ebx = rd32(sp0 - 0xb8u); g->ebp = rd32(sp0 - 0xbcu); g->ebx = rd32(sp0 - 0xb8u); goto E_101a5b22;
    case 0x101a5b2au: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->ebx; in_esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_ebp = rd32(sp0 - 0xbcu); in_ebx = rd32(sp0 - 0xb8u); g->ebp = rd32(sp0 - 0xbcu); g->ebx = rd32(sp0 - 0xb8u); goto E_101a5b2a;
    case 0x101a5b34u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->ebx; in_esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_ebp = rd32(sp0 - 0xbcu); in_ebx = rd32(sp0 - 0xb8u); g->ebp = rd32(sp0 - 0xbcu); g->ebx = rd32(sp0 - 0xb8u); goto E_101a5b34;
    case 0x101a5b3du: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->ebx; in_esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_ebp = rd32(sp0 - 0xbcu); in_ebx = rd32(sp0 - 0xb8u); g->ebp = rd32(sp0 - 0xbcu); g->ebx = rd32(sp0 - 0xb8u); goto E_101a5b3d;
    case 0x101a5b43u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->ebx; in_esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_ebp = rd32(sp0 - 0xbcu); in_ebx = rd32(sp0 - 0xb8u); g->ebp = rd32(sp0 - 0xbcu); g->ebx = rd32(sp0 - 0xb8u); goto E_101a5b43;
    case 0x101a5b48u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->ebx; in_esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_ebp = rd32(sp0 - 0xbcu); in_ebx = rd32(sp0 - 0xb8u); g->ebp = rd32(sp0 - 0xbcu); g->ebx = rd32(sp0 - 0xb8u); goto E_101a5b48;
    case 0x101a5b4cu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->ebx; in_esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_ebp = rd32(sp0 - 0xbcu); in_ebx = rd32(sp0 - 0xb8u); g->ebp = rd32(sp0 - 0xbcu); g->ebx = rd32(sp0 - 0xb8u); goto E_101a5b4c;
    case 0x101a5b67u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101a5b67;
    case 0x101a5b69u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101a5b69;
    case 0x101a5b72u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_c8 = rd32(sp0 - 0xc8u); goto E_101a5b72;
    case 0x101a5b86u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_c8 = rd32(sp0 - 0xc8u); goto E_101a5b86;
    case 0x101a5b98u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_cc = rd32(sp0 - 0xccu); goto E_101a5b98;
    case 0x101a5bfdu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); goto E_101a5bfd;
    case 0x101a5c02u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); goto E_101a5c02;
    case 0x101a5c48u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); goto E_101a5c48;
    case 0x101a5c71u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); goto E_101a5c71;
    case 0x101a5c78u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_ac = rd32(sp0 - 0xacu); goto E_101a5c78;
    case 0x101a5c94u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); goto E_101a5c94;
    case 0x101a5c9au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); goto E_101a5c9a;
    case 0x101a5cd4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); goto E_101a5cd4;
    case 0x101a5cdbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); goto E_101a5cdb;
    case 0x101a5ce1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); goto E_101a5ce1;
    case 0x101a5cf8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); goto E_101a5cf8;
    case 0x101a5d7cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); goto E_101a5d7c;
    case 0x101a5d8du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_ac = rd32(sp0 - 0xacu); goto E_101a5d8d;
    case 0x101a5d8fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_bc = rd32(sp0 - 0xbcu); loc_b8 = rd32(sp0 - 0xb8u); loc_ac = rd32(sp0 - 0xacu); goto E_101a5d8f;
    default: break;
    }
#endif

    COW_AT(101a5af0)
    wr32(sp0 - 0xb8u, in_ebx);
    wr32(sp0 - 0xbcu, in_ebp);
    t1 = rd32(self + 8u);
    wr16(sp0 - 0xb4u, 0u);
    wr16(sp0 - 0xb2u, 0u);
    wr16(sp0 - 0xb0u, 0u);
    wr16(sp0 - 0xaeu, 0u);
    if (t1 == 0u)
    {
        eax = in_eax;
        edx = in_edx;
        esi = in_esi;
        edi = in_edi;
        loc_b8 = in_ebx;
        loc_bc = in_ebp;
    }
    else
    {
        ecx = t1;
    COW_AT(101a5b1b)
        if (rd8(self + 0x1cu) == 0u)
        {
            eax = (in_eax & 0xffffff00u) | rd8(self + 0x1cu);
    COW_AT(101a5b48)
            wr8(self + 0x24u, 0u);
        }
        else
        {
    COW_AT(101a5b22)
            if ((int32_t)rd32(self + 0x28u) >= 40)
            {
                eax = rd32(self + 0x28u);
    COW_AT(101a5b34)
                wr8(self + 0x24u, 0u);
                if ((int32_t)eax >= 60)
                {
    COW_AT(101a5b43)
                    wr32(self + 0x28u, 0u);
                }
                else
                {
    COW_AT(101a5b3d)
                    wr32(self + 0x28u, eax + 1u);
                    eax = eax + 1u;
                }
            }
            else
            {
                eax = rd32(self + 0x28u);
    COW_AT(101a5b2a)
                wr8(self + 0x24u, 1u);
                wr32(self + 0x28u, eax + 1u);
                eax = eax + 1u;
            }
        }
    COW_AT(101a5b4c)
        wr32(sp0 - 0xc0u, in_esi);
        wr32(sp0 - 0xc4u, in_edi);
        t2 = (uint32_t)(int16_t)rd16(ecx + 0x4cu);
        wr32(sp0 - 0xa8u, t2);
        g->edx = in_edx;
        t3 = rd32(self + 0x18u);
        g->esp = sp0 - 0xc4u;
        t4 = cow_call_regs(g, COW_IMG(0x101a44b0u), eax, t3, g->edx, 1, 0);
        t5 = g->ecx;
        t6 = g->edx;
        if ((uint32_t)(int8_t)t4 + 1u != 0xau)
        {
            eax = (uint32_t)(int8_t)t4 + 1u;
            ecx = t5;
            edx = t6;
            esi = t2;
        }
        else
        {
            ecx = t5;
            edx = t6;
            esi = t2;
    COW_AT(101a5b67)
            eax = 0u;
        }
    COW_AT(101a5b69)
        wr32(sp0 - 0xc8u, eax);
        if (rd8(ecx + 0xcu) != 1u)
        {
            edx = (edx & 0xffffff00u) | rd8(ecx + 0xcu);
            loc_c8 = eax;
    COW_AT(101a5b86)
            wr32(sp0 - 0xccu, 0x5cu);
            wr32(sp0 - 0xd0u, 0xau);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xc8u;
            t10 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x5cu);
            t11 = g->edx;
            wr32(sp0 - 0xccu, t10);
            wr32(sp0 - 0xd0u, sp0 - 0xa4u);
            eax = t10;
            ecx = sp0 - 0xa4u;
            edx = t11;
            loc_cc = t10;
        }
        else
        {
            edx = (edx & 0xffffff00u) | rd8(ecx + 0xcu);
            loc_c8 = eax;
    COW_AT(101a5b72)
            wr32(sp0 - 0xccu, 0x5bu);
            wr32(sp0 - 0xd0u, 0xau);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0xc8u;
            t7 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x5bu);
            t8 = g->ecx;
            t9 = g->edx;
            wr32(sp0 - 0xccu, t7);
            wr32(sp0 - 0xd0u, sp0 - 0xa4u);
            eax = sp0 - 0xa4u;
            ecx = t8;
            edx = t9;
            loc_cc = t7;
        }
    COW_AT(101a5b98)
        g->ebx = self;
        g->eax = eax;
        g->esp = sp0 - 0xbcu;
        t12 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0xa4u, loc_cc, rd32(sp0 - 0xc8u), rd32(sp0 - 0xc4u), rd32(sp0 - 0xc0u));
        wr32(sp0 - 0xc8u, sp0 - 0xb4u);
        t13 = rd32(self + 8u);
        g->esp = sp0 - 0xc4u;
        t14 = cow_call_regs(g, COW_IMG(0x10118f70u), t12, t13, g->edx, 0, 1, sp0 - 0xb4u);
        t15 = g->ecx;
        t16 = rd16(sp0 - 0xb4u);
        t17 = rd16(sp0 - 0xb2u);
        wr16(sp0 - 0xb2u, (uint16_t)(t17 + 0x24u));
        wr32(sp0 - 0xc8u, 0x80808080u);
        wr32(sp0 - 0xccu, sp0 - 0xa4u);
        t18 = (uint32_t)(int16_t)(t17 + 0x24u);
        wr32(sp0 - 0xd0u, t18);
        t19 = (uint32_t)(int16_t)(t16 + 0x22u);
        wr32(sp0 - 0xd4u, t19);
        wr16(sp0 - 0xb4u, (uint16_t)(t16 + 0x22u));
        g->edx = t19;
        g->esp = sp0 - 0xb0u;
        cow_cdecl(g, COW_IMG(0x101907e0u), 9, t19, t18, sp0 - 0xa4u, 0x80808080u, rd32(sp0 - 0xc4u), rd32(sp0 - 0xc0u), rd32(sp0 - 0xbcu), rd32(sp0 - 0xb8u), rd32(sp0 - 0xb4u));
        t20 = g->edx;
        wr32(sp0 - 0xc8u, 1u);
        wr32(sp0 - 0xccu, 1u);
        wr32(sp0 - 0xd0u, 3u);
        wr32(sp0 - 0xd4u, sp0 - 0xb4u);
        g->ebx = self;
        g->eax = sp0 - 0xb4u;
        g->edx = t20;
        g->esp = sp0 - 0xc4u;
        t21 = cow_thiscall(g, COW_IMG(0x10118900u), rd32(self + 8u), 4, sp0 - 0xb4u, 3u, 1u, 1u);
        t22 = g->edx;
        if (rd8(self + 0x1cu) == 0u)
        {
            eax = (t21 & 0xffffff00u) | rd8(self + 0x1cu);
            edx = t22;
            goto L_101a5c48;
        }
        eax = (t21 & 0xffffff00u) | rd8(self + 0x1cu);
        edx = t22;
    COW_AT(101a5bfd)
        if (esi != 3u) goto L_101a5c48;
    COW_AT(101a5c02)
        wr32(sp0 - 0xc8u, 1u);
        wr32(sp0 - 0xccu, 0x78u);
        t23 = (uint32_t)(int16_t)rd16(sp0 - 0xb2u) + 5u;
        wr32(sp0 - 0xd0u, t23);
        t24 = (uint32_t)(int16_t)rd16(sp0 - 0xb4u) + 2u;
        wr32(sp0 - 0xd4u, t24);
        g->edx = edx;
        g->esp = sp0 - 0xc4u;
        t25 = cow_call_regs(g, COW_IMG(0x101c6060u), t23, rd32(self + 0x44u), g->edx, 1, 4, t24, t23, 0x78u, 1u);
        t26 = g->edx;
        wr32(sp0 - 0xd8u, t25);
        g->edx = t26;
        g->esp = sp0 - 0xd4u;
        t27 = cow_call_regs(g, COW_IMG(0x101c6020u), t25, rd32(self + 0x44u), g->edx, 1, 1, t25);
        t28 = g->edx;
        wr32(sp0 - 0xdcu, t27);
        g->edx = t28;
        g->esp = sp0 - 0xc4u;
        cow_thiscall(g, COW_IMG(0x101c60e0u), rd32(self + 0x44u), 6, t27, rd32(sp0 - 0xd8u), rd32(sp0 - 0xd4u), rd32(sp0 - 0xd0u), 0x78u, 1u);
        t29 = g->edx;
        t30 = rd32(self + 0x44u);
        t31 = rd16(sp0 - 0xaeu);
        wr32(t30 + 0x6a8u, t24);
        wr32(t30 + 0x6acu, (uint32_t)(int16_t)t31);
        edx = t29;
L_101a5c71: ;
    COW_AT(101a5c71)
        wr32(sp0 - 0xacu, 0u);
        ebp = 0u;
        esi = self + 0x2cu;
        loc_ac = 0u;
L_101a5c78: ;
    COW_AT(101a5c78)
        wr32(sp0 - 0xc8u, 1u);
        wr32(sp0 - 0xccu, 1u);
        wr32(sp0 - 0xd0u, ebp + 4u);
        wr32(sp0 - 0xd4u, sp0 - 0xb4u);
        g->ebx = self;
        g->edi = ebp + 4u;
        g->eax = sp0 - 0xb4u;
        g->edx = edx;
        g->esp = sp0 - 0xc4u;
        t36 = cow_thiscall(g, COW_IMG(0x10118900u), rd32(self + 8u), 4, sp0 - 0xb4u, ebp + 4u, 1u, 1u);
        t37 = g->edx;
        if (rd8(self + 0x1cu) == 0u)
        {
            eax = (t36 & 0xffffff00u) | rd8(self + 0x1cu);
            edx = t37;
            goto L_101a5cf8;
        }
        eax = (t36 & 0xffffff00u) | rd8(self + 0x1cu);
        edx = t37;
        edi = ebp + 4u;
    COW_AT(101a5c94)
        if (rd32(sp0 - 0xa8u) != edi) goto L_101a5cf8;
    COW_AT(101a5c9a)
        wr32(sp0 - 0xc8u, 1u);
        wr32(sp0 - 0xccu, 0x145u);
        t38 = (uint32_t)(int16_t)rd16(sp0 - 0xb2u) + 5u;
        wr32(sp0 - 0xd0u, t38);
        t39 = (uint32_t)(int16_t)rd16(sp0 - 0xb4u) - 0xa0u;
        wr32(sp0 - 0xd4u, t39);
        g->edx = edx;
        g->esp = sp0 - 0xc4u;
        t40 = cow_call_regs(g, COW_IMG(0x101c6060u), eax, rd32(esi), g->edx, 1, 4, t39, t38, 0x145u, 1u);
        t41 = g->edx;
        wr32(sp0 - 0xd8u, t40);
        g->edx = t41;
        g->esp = sp0 - 0xd4u;
        t42 = cow_call_regs(g, COW_IMG(0x101c6020u), t40, rd32(esi), g->edx, 1, 1, t40);
        t43 = g->edx;
        wr32(sp0 - 0xdcu, t42);
        g->edx = t43;
        g->esp = sp0 - 0xc4u;
        cow_thiscall(g, COW_IMG(0x101c60e0u), rd32(esi), 6, t42, rd32(sp0 - 0xd8u), rd32(sp0 - 0xd4u), rd32(sp0 - 0xd0u), 0x145u, 1u);
        t44 = g->edx;
        if ((int32_t)rd32(sp0 - 0xacu) >= 3)
        {
            edx = t44;
            ebp = t39;
            edi = t38;
    COW_AT(101a5cdb)
            edi = edi - 0x88u;
        }
        else
        {
            edx = t44;
            ebp = t39;
    COW_AT(101a5cd4)
            edi = (uint32_t)(int16_t)rd16(sp0 - 0xaeu);
        }
    COW_AT(101a5ce1)
        t45 = rd32(esi);
        wr32(t45 + 0x6a8u, ebp);
        t46 = rd32(sp0 - 0xacu);
        wr32(t45 + 0x6acu, edi);
        eax = t45;
        ebp = t46;
L_101a5d7c: ;
    COW_AT(101a5d7c)
        wr32(sp0 - 0xacu, ebp + 1u);
        if ((int32_t)(ebp + 1u) < 6)
        {
            esi = esi + 4u;
            loc_ac = ebp + 1u;
            ebp = ebp + 1u;
            goto L_101a5c78;
        }
    COW_AT(101a5d8d)
        esi = rd32(sp0 - 0xc0u);
        edi = rd32(sp0 - 0xc4u);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_bc = rd32(sp0 - 0xbcu);
    }
    COW_AT(101a5d8f)
    g->ebx = loc_b8;
    g->esi = esi;
    g->edi = edi;
    g->ebp = loc_bc;
    g->edx = edx;
    return eax;
L_101a5c48: ;
    COW_AT(101a5c48)
    wr32(sp0 - 0xc8u, 0x80808080u);
    wr32(sp0 - 0xccu, 0u);
    g->esp = sp0 - 0xc8u;
    t32 = cow_call_regs(g, COW_IMG(0x101c5e50u), eax, rd32(self + 0x44u), g->edx, 0, 1, 0u);
    wr32(sp0 - 0xccu, t32);
    t33 = (uint32_t)(int16_t)rd16(sp0 - 0xb2u) + 5u;
    wr32(sp0 - 0xd0u, t33);
    t34 = (uint32_t)(int16_t)rd16(sp0 - 0xb4u) + 2u;
    wr32(sp0 - 0xd4u, t34);
    g->edx = t34;
    g->esp = sp0 - 0xb0u;
    cow_cdecl(g, COW_IMG(0x101907e0u), 9, t34, t33, t32, 0x80808080u, rd32(sp0 - 0xc4u), rd32(sp0 - 0xc0u), rd32(sp0 - 0xbcu), rd32(sp0 - 0xb8u), rd32(sp0 - 0xb4u));
    t35 = g->edx;
    edx = t35;
    goto L_101a5c71;
L_101a5cf8: ;
    COW_AT(101a5cf8)
    wr32(sp0 - 0xc8u, 0u);
    wr32(sp0 - 0xccu, 1u);
    wr32(sp0 - 0xd0u, 0x98u);
    wr32(sp0 - 0xd4u, sp0 - 0x98u);
    wr32(sp0 - 0xd8u, 0u);
    g->edx = edx;
    t47 = rd32(esi);
    g->esp = sp0 - 0xd4u;
    t48 = cow_call_regs(g, COW_IMG(0x101c5e50u), eax, t47, g->edx, 0, 1, 0u);
    t49 = g->ecx;
    t50 = g->edx;
    edi = t48;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t51 = ~ecx - 1u;
    wr32(sp0 - 0xd8u, t51);
    wr32(sp0 - 0xdcu, eax);
    g->edx = t50;
    g->esp = sp0 - 0xd8u;
    t52 = cow_call_regs(g, COW_IMG(0x101c5e50u), eax, rd32(esi), g->edx, 0, 1, eax);
    t53 = g->edx;
    wr32(sp0 - 0xdcu, t52);
    t54 = rd32(COW_IMG(0x10662d40u));
    g->esp = sp0 - 0xc4u;
    cow_thiscall(g, COW_IMG(0x101b7280u), t54, 6, t52, rd32(sp0 - 0xd8u), sp0 - 0x98u, 0x98u, 1u, 0u);
    t55 = g->ecx;
    wr32(sp0 - 0xc8u, 0x98u);
    edi = sp0 - 0x98u;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t56 = ~ecx - 1u;
    wr32(sp0 - 0xccu, t56);
    wr32(sp0 - 0xd0u, sp0 - 0x98u);
    cow_call_regs(g, COW_IMG(0x10190140u), g->eax, g->ecx, sp0 - 0x98u, 1, 3, sp0 - 0x98u, t56, 0x98u);
    wr32(sp0 - 0xd4u, 0u);
    wr32(sp0 - 0xd8u, 0x13bu);
    wr32(sp0 - 0xdcu, 0x80808080u);
    wr32(sp0 - 0xe0u, sp0 - 0x98u);
    t57 = (uint32_t)(int16_t)rd16(sp0 - 0xb2u) + 5u;
    wr32(sp0 - 0xe4u, t57);
    t58 = (uint32_t)(int16_t)rd16(sp0 - 0xb4u) - 0xa0u;
    wr32(sp0 - 0xe8u, t58);
    g->eax = sp0 - 0x98u;
    g->edx = t58;
    g->esp = sp0 - 0xd0u;
    t59 = cow_thiscall_cdecl(g, COW_IMG(0x101906a0u), t57, 6, t58, t57, sp0 - 0x98u, 0x80808080u, 0x13bu, 0u);
    t60 = g->edx;
    eax = t59;
    edx = t60;
    goto L_101a5d7c;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101a5af0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101a5b1bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t ecx;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        in_eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_ebp = rd32(sp0 - 0xbcu);
        in_ebx = rd32(sp0 - 0xb8u);
        g->esp = sp0 - 0xbcu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101a5b22u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_ebp = rd32(sp0 - 0xbcu);
        in_ebx = rd32(sp0 - 0xb8u);
        g->esp = sp0 - 0xbcu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101a5b2au:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_ebp = rd32(sp0 - 0xbcu);
        in_ebx = rd32(sp0 - 0xb8u);
        g->esp = sp0 - 0xbcu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101a5b34u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_ebp = rd32(sp0 - 0xbcu);
        in_ebx = rd32(sp0 - 0xb8u);
        g->esp = sp0 - 0xbcu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101a5b3du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_ebp = rd32(sp0 - 0xbcu);
        in_ebx = rd32(sp0 - 0xb8u);
        g->esp = sp0 - 0xbcu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101a5b43u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_ebp = rd32(sp0 - 0xbcu);
        in_ebx = rd32(sp0 - 0xb8u);
        g->esp = sp0 - 0xbcu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101a5b48u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_ebp = rd32(sp0 - 0xbcu);
        in_ebx = rd32(sp0 - 0xb8u);
        g->esp = sp0 - 0xbcu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101a5b4cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_ebp = rd32(sp0 - 0xbcu);
        in_ebx = rd32(sp0 - 0xb8u);
        g->esp = sp0 - 0xbcu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101a5b67u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xc4u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101a5b69u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xc4u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101a5b72u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_c8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c8 = rd32(sp0 - 0xc8u);
        g->esp = sp0 - 0xc8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101a5b86u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_c8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c8 = rd32(sp0 - 0xc8u);
        g->esp = sp0 - 0xc8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101a5b98u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_cc;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_cc = rd32(sp0 - 0xccu);
        g->esp = sp0 - 0xd0u;
        g->ebp = 0u;
        wr32(sp0 - 0xd0u, sp0 - 0xa4u);
        (void)sp0;
        return 1;
    }
    case 0x101a5bfdu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_c8;
        uint32_t loc_cc;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        g->esp = sp0 - 0xc4u;
        g->ebp = 0u;
        wr32(sp0 - 0xd4u, sp0 - 0xb4u);
        (void)sp0;
        return 1;
    }
    case 0x101a5c02u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_c8;
        uint32_t loc_cc;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        g->esp = sp0 - 0xc4u;
        g->ebp = 0u;
        wr32(sp0 - 0xd4u, sp0 - 0xb4u);
        (void)sp0;
        return 1;
    }
    case 0x101a5c48u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_c8;
        uint32_t loc_cc;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        g->esp = sp0 - 0xc4u;
        g->ebp = 0u;
        wr32(sp0 - 0xd4u, sp0 - 0xb4u);
        (void)sp0;
        return 1;
    }
    case 0x101a5c71u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_c8;
        uint32_t loc_cc;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        g->esp = sp0 - 0xc4u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101a5c78u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_ac;
        uint32_t loc_c8;
        uint32_t loc_cc;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xc4u;
        (void)sp0;
        return 1;
    }
    case 0x101a5c94u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_c8;
        uint32_t loc_cc;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        g->esp = sp0 - 0xc4u;
        wr32(sp0 - 0xd4u, sp0 - 0xb4u);
        (void)sp0;
        return 1;
    }
    case 0x101a5c9au:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_c8;
        uint32_t loc_cc;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        g->esp = sp0 - 0xc4u;
        wr32(sp0 - 0xd4u, sp0 - 0xb4u);
        (void)sp0;
        return 1;
    }
    case 0x101a5cd4u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_c8;
        uint32_t loc_cc;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        g->esp = sp0 - 0xc4u;
        (void)sp0;
        return 1;
    }
    case 0x101a5cdbu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_c8;
        uint32_t loc_cc;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        g->esp = sp0 - 0xc4u;
        (void)sp0;
        return 1;
    }
    case 0x101a5ce1u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_c8;
        uint32_t loc_cc;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        g->esp = sp0 - 0xc4u;
        (void)sp0;
        return 1;
    }
    case 0x101a5cf8u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_c8;
        uint32_t loc_cc;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        g->esp = sp0 - 0xc4u;
        wr32(sp0 - 0xd4u, sp0 - 0xb4u);
        (void)sp0;
        return 1;
    }
    case 0x101a5d7cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_c8;
        uint32_t loc_cc;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        g->esp = sp0 - 0xc4u;
        (void)sp0;
        return 1;
    }
    case 0x101a5d8du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_ac;
        uint32_t loc_c8;
        uint32_t loc_cc;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xc4u;
        (void)sp0;
        return 1;
    }
    case 0x101a5d8fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_ac;
        uint32_t loc_b8;
        uint32_t loc_bc;
        uint32_t loc_c8;
        uint32_t loc_cc;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xbcu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101a5af0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101a5af0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
