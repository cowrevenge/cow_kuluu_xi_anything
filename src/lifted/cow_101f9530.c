/* f_0x101f9530 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_101f9530(Guest* g)
{
    double d10;
    double d16;
    double d9;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t t1;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 60u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101f9545u: eax = g->eax; self = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; in_edi = g->edi; in_esi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x1cu); goto E_101f9545;
    case 0x101f9553u: eax = g->eax; self = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; in_edi = g->edi; in_esi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x1cu); goto E_101f9553;
    case 0x101f9558u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_101f9558;
    case 0x101f9560u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_101f9560;
    case 0x101f9571u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; goto E_101f9571;
    case 0x101f957eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; goto E_101f957e;
    case 0x101f9584u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; goto E_101f9584;
    case 0x101f958bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; goto E_101f958b;
    case 0x101f95b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; goto E_101f95b2;
    case 0x101f95b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x24u); goto E_101f95b8;
    case 0x101f95bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x24u); goto E_101f95bc;
    case 0x101f95c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x24u); goto E_101f95c5;
    case 0x101f95cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x24u); goto E_101f95cb;
    case 0x101f95d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x24u); goto E_101f95d4;
    case 0x101f95d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x24u); goto E_101f95d8;
    case 0x101f95e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x24u); goto E_101f95e1;
    case 0x101f95edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); goto E_101f95ed;
    case 0x101f95fdu: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); goto E_101f95fd;
    case 0x101f9602u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f9602;
    case 0x101f9611u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f9611;
    case 0x101f961cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f961c;
    case 0x101f962bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f962b;
    case 0x101f9643u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x24u); goto E_101f9643;
    case 0x101f965du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x24u); goto E_101f965d;
    case 0x101f966cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x24u); goto E_101f966c;
    case 0x101f96a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f96a6;
    case 0x101f96d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f96d1;
    case 0x101f96deu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_101f96de;
    case 0x101f96f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x24u); goto E_101f96f1;
    case 0x101f9718u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f9718;
    case 0x101f971du: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); goto E_101f971d;
    case 0x101f9722u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f9722;
    case 0x101f972cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f972c;
    case 0x101f9733u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f9733;
    case 0x101f9735u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f9735;
    case 0x101f9744u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f9744;
    case 0x101f9751u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101f9751;
    case 0x101f9758u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_101f9758;
    default: break;
    }
#endif

    COW_AT(101f9530)
    wr32(sp0 - 0x18u, in_ebp);
    wr32(sp0 - 0x1cu, in_esi);
    if (rd32(self + 0x6b4u) == 0u)
    {
        ebx = in_ebx;
        edi = in_edi;
        loc_18 = in_ebp;
        loc_1c = in_esi;
        goto L_101f9758;
    }
    eax = rd32(self + 0x6b4u);
    COW_AT(101f9545)
    if (rd32(self + 0x6bcu) == 0u)
    {
        ebx = in_ebx;
        edi = in_edi;
        loc_18 = in_ebp;
        loc_1c = in_esi;
        goto L_101f9758;
    }
    edx = rd32(self + 0x6bcu);
    COW_AT(101f9553)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t1 = cow_thiscall(g, COW_IMG(0x101f9290u), self, 0);
    t2 = g->ecx;
    t3 = g->edx;
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(101f9558)
    if ((uint8_t)eax == 0u)
    {
        ebx = in_ebx;
        edi = in_edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
        goto L_101f9758;
    }
    COW_AT(101f9560)
    t4 = rd16(self + 0x6c0u);
    if ((uint16_t)t4 != (uint16_t)arg1)
    {
        eax = rd32(sp0 + 8u);
        goto L_101f957e;
    }
    eax = rd32(sp0 + 8u);
    COW_AT(101f9571)
    t5 = rd16(self + 0x6c2u);
    if ((uint16_t)t5 == (uint16_t)eax)
    {
        ebx = in_ebx;
        edi = in_edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
        goto L_101f9758;
    }
L_101f957e: ;
    COW_AT(101f957e)
    if ((uint16_t)eax != 0xffffu) goto L_101f95b2;
    COW_AT(101f9584)
    g->esp = sp0 - 0x1cu;
    t6 = cow_call_regs(g, COW_IMG(0x101efb10u), eax, self, g->edx, 1, 0);
    eax = t6;
    COW_AT(101f958b)
    wr16(self + 0x6c0u, (uint16_t)arg1);
    wr16(self + 0x6c2u, 0xffffu);
    wr32(self + 0xb8u, 0xffffffffu);
    wr32(self + 0xb4u, 0xffffffffu);
    g->ebx = in_ebx;
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = in_edi;
    g->ebp = rd32(sp0 - 0x18u);
    return;
L_101f95b2: ;
    COW_AT(101f95b2)
    wr32(sp0 - 0x20u, in_ebx);
    wr32(sp0 - 0x24u, in_edi);
    ebx = 0u;
    edi = edx;
L_101f95b8: ;
    COW_AT(101f95b8)
    eax = edi;
    edx = 0u;
L_101f95bc: ;
    COW_AT(101f95bc)
    if (rd16(eax + 4u) == 0u)
    {
        ecx = (ecx & 0xffff0000u) | rd16(eax + 4u);
        goto L_101f95d8;
    }
    ecx = (ecx & 0xffff0000u) | rd16(eax + 4u);
    COW_AT(101f95c5)
    t7 = rd16(eax + 2u);
    if ((uint16_t)t7 != (uint16_t)arg1) goto L_101f95d8;
    COW_AT(101f95cb)
    t8 = rd16(eax);
    if ((uint16_t)t8 == (uint16_t)rd32(sp0 + 8u))
    {
        ebp = rd32(sp0 + 8u);
        goto L_101f9643;
    }
    COW_AT(101f95d4)
L_101f95d8: ;
    COW_AT(101f95d8)
    if ((int32_t)(edx + 1u) < 32)
    {
        eax = eax + 0x14u;
        edx = edx + 1u;
        goto L_101f95bc;
    }
    eax = eax + 0x14u;
    edx = edx + 1u;
    COW_AT(101f95e1)
    if ((int32_t)(ebx + 1u) < 20)
    {
        ebx = ebx + 1u;
        edi = edi + 0x280u;
        goto L_101f95b8;
    }
    ebx = ebx + 1u;
    loc_20 = in_ebx;
    loc_24 = in_edi;
L_101f95ed: ;
    COW_AT(101f95ed)
    if (rd8(self + 0xa46u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0xa46u);
    COW_AT(101f971d)
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        t34 = cow_call_regs(g, COW_IMG(0x101efb10u), eax, self, g->edx, 1, 0);
        t35 = g->edx;
        eax = t34;
        edx = t35;
    COW_AT(101f9722)
        if (rd8(self + 0xa47u) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0xa47u);
    COW_AT(101f9735)
            t37 = (uint32_t)(int16_t)rd16(self + 0x100u);
            wr32(sp0 - 0x28u, t37);
            g->ebx = ebx;
            g->edx = edx;
            g->esp = sp0 - 0x24u;
            cow_thiscall(g, COW_IMG(0x101f8650u), self, 1, t37);
            t38 = g->edx;
            edx = t38;
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0xa47u);
    COW_AT(101f972c)
            g->ebx = ebx;
            g->edx = edx;
            g->esp = sp0 - 0x24u;
            cow_stdcall(g, COW_IMG(0x101f86b0u), 0);
            t36 = g->edx;
            edx = t36;
    COW_AT(101f9733)
        }
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0xa46u);
    COW_AT(101f95fd)
        g->esp = sp0 - 0x24u;
        t25 = cow_call_regs(g, COW_IMG(0x101efb00u), eax, self, g->edx, 1, 0);
        t26 = g->ecx;
        eax = t25;
        ecx = t26;
    COW_AT(101f9602)
        wr32(sp0 - 0x28u, 1u);
        t27 = (uint32_t)(int16_t)rd16(self + 0x100u);
        wr32(sp0 - 0x2cu, t27);
        g->ebx = ebx;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = t27;
        g->esp = sp0 - 0x1cu;
        t28 = cow_cdecl(g, COW_IMG(0x101cbc10u), 4, t27, 1u, rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
        t29 = g->ecx;
        t30 = g->edx;
        eax = t28;
        ecx = t29;
        edx = t30;
    COW_AT(101f9611)
        if (eax != 0u)
        {
    COW_AT(101f961c)
            wr32(sp0 - 0x28u, 1u);
            t31 = (uint32_t)(int16_t)rd16(self + 0x100u);
            wr32(sp0 - 0x2cu, t31);
            g->ebx = ebx;
            g->eax = t31;
            g->edx = edx;
            g->esp = sp0 - 0x1cu;
            t32 = cow_cdecl(g, COW_IMG(0x101cbc10u), 4, t31, 1u, rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
            t33 = g->edx;
            eax = t32;
            edx = t33;
    COW_AT(101f962b)
            wr32(self + 0xb8u, 0u);
            wr32(self + 0xb4u, eax);
        }
    }
L_101f9744: ;
    COW_AT(101f9744)
    if (rd32(self + 0xfcu) != 0xffffffffu)
    {
        ebx = rd32(sp0 - 0x20u);
        edi = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
    }
    else
    {
        eax = rd32(self + 0xfcu);
        ebx = rd32(sp0 - 0x20u);
        edi = rd32(sp0 - 0x24u);
    COW_AT(101f9751)
        g->esp = sp0 - 0x1cu;
        cow_call_regs(g, COW_IMG(0x101efb10u), eax, self, g->edx, 1, 0);
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
    }
L_101f9758: ;
    COW_AT(101f9758)
    g->ebx = ebx;
    g->esi = loc_1c;
    g->edi = edi;
    g->ebp = loc_18;
    return;
L_101f9643: ;
    COW_AT(101f9643)
    if ((uint16_t)ecx != (uint32_t)(int16_t)rd16(self + 0x100u)) goto L_101f96f1;
    edx = rd8(eax + 6u);
    COW_AT(101f965d)
    if (edx != (uint32_t)(int16_t)rd16(self + 0x102u)) goto L_101f96f1;
    COW_AT(101f966c)
    d9 = fr(g, (double)(int32_t)rd32(eax + 8u) * (double)rdf32(COW_IMG(0x1032a22cu)));
    wrf32(sp0 - 0x10u, (float)(double)(float)d9);
    d10 = fr(g, (double)(int32_t)rd32(eax + 0xcu) * (double)rdf32(COW_IMG(0x1032a22cu)));
    wrf32(sp0 - 8u, (float)(double)(float)d10);
    wr32(sp0 - 0x28u, cow_f2bits((double)(float)d10));
    wr32(sp0 - 0x2cu, cow_f2bits((double)(float)d9));
    wr32(sp0 - 0x30u, sp0 + 8u);
    wr32(sp0 - 0x34u, sp0 - 0x12u);
    t11 = rd32(self + 0xfcu);
    wr32(sp0 - 0x38u, t11);
    g->eax = t11;
    g->esp = sp0 - 0x2cu;
    t12 = cow_cdecl(g, COW_IMG(0x101f7570u), 3, t11, sp0 - 0x12u, sp0 + 8u);
    eax = t12;
    COW_AT(101f96a6)
    t13 = (uint32_t)(int16_t)rd16(sp0 + 8u);
    t14 = rd16(sp0 - 0x12u);
    wr32(sp0 + 8u, t13);
    t15 = rd32(sp0 + 8u);
    wr32(sp0 + 8u, (uint32_t)(int16_t)t14);
    wrf32(sp0 - 0x28u, (float)(double)(float)(double)(int32_t)t15);
    d16 = (double)(float)(double)(int32_t)rd32(sp0 + 8u);
    wrf32(sp0 - 0x2cu, (float)d16);
    g->eax = eax;
    g->edx = (uint32_t)(int16_t)t14;
    g->esp = sp0 - 0x24u;
    t17 = cow_thiscall(g, COW_IMG(0x101ef990u), self, 2, cow_f2bits(d16), cow_f2bits((double)(float)(double)(int32_t)t15));
    t18 = g->edx;
    eax = t17;
    edx = t18;
    COW_AT(101f96d1)
    wr32(sp0 - 0x28u, ebp);
    wr32(sp0 - 0x2cu, arg1);
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t19 = cow_call_regs(g, COW_IMG(0x101f9760u), eax, self, g->edx, 0, 2, arg1, ebp);
    t20 = g->edx;
    eax = t19;
    edx = t20;
    COW_AT(101f96de)
    wr16(self + 0x6c0u, (uint16_t)arg1);
    wr16(self + 0x6c2u, (uint16_t)ebp);
    loc_20 = rd32(sp0 - 0x20u);
    loc_24 = rd32(sp0 - 0x24u);
    goto L_101f95ed;
L_101f96f1: ;
    COW_AT(101f96f1)
    t21 = rd16(eax + 4u);
    wr32(sp0 - 0x10u, t21);
    t22 = rd8(eax + 6u);
    wr32(sp0 - 0xcu, t22);
    wr32(sp0 - 0x28u, sp0 - 0x10u);
    t23 = rd32(self + 8u);
    wr32(t23 + 0x7cu, COW_IMG(0x101faff0u));
    g->edx = t22;
    g->esp = sp0 - 0x24u;
    cow_thiscall_cdecl(g, COW_IMG(0x101f7d80u), sp0 - 0x10u, 1, rd32(sp0 - 0x28u));
    t24 = g->edx;
    edx = t24;
    COW_AT(101f9718)
    goto L_101f9744;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101f9530(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101f9545u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x101f9553u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x101f9558u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x101f9560u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x101f9571u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x1cu;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101f957eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x1cu;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101f9584u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x1cu;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101f958bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x1cu;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101f95b2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x1cu;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101f95b8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x24u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101f95bcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x24u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101f95c5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x24u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101f95cbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x101f95d4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x101f95d8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x24u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101f95e1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x24u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101f95edu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_20;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x101f95fdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_20;
        uint32_t loc_24;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x24u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x101f9602u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x101f9611u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x101f961cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x101f962bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x101f9643u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x101f965du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x101f966cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x101f96a6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        wr32(sp0 - 0x34u, sp0 - 0x12u);
        wr32(sp0 - 0x30u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x101f96d1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x34u, sp0 - 0x12u);
        wr32(sp0 - 0x30u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x101f96deu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x24u;
        g->edi = arg1;
        wr32(sp0 - 0x34u, sp0 - 0x12u);
        wr32(sp0 - 0x30u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x101f96f1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x101f9718u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101f971du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_20;
        uint32_t loc_24;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x24u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x101f9722u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x101f972cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x101f9733u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x101f9735u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x101f9744u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x101f9751u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x101f9758u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101f9530(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_101f9530(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
