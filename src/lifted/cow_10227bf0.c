/* f_0x10227bf0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10227bf0(Guest* g)
{
    double d43;
    double d44;
    double d47;
    double d48;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_28;
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
    uint32_t t45;
    uint32_t t46;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 52u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10227c0du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_10227c0d;
    case 0x10227c17u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_10227c17;
    case 0x10227c2au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_10227c2a;
    case 0x10227c2du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_10227c2d;
    case 0x10227c46u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_ebp = rd32(sp0 - 0x28u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x28u); goto E_10227c46;
    case 0x10227c51u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_ebp = rd32(sp0 - 0x28u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x28u); goto E_10227c51;
    case 0x10227c56u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_ebp = rd32(sp0 - 0x28u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x28u); goto E_10227c56;
    case 0x10227c6au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_ebp = rd32(sp0 - 0x28u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x28u); goto E_10227c6a;
    case 0x10227c6fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_ebp = rd32(sp0 - 0x28u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x28u); goto E_10227c6f;
    case 0x10227c7bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_ebp = rd32(sp0 - 0x28u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x28u); goto E_10227c7b;
    case 0x10227c86u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_ebp = rd32(sp0 - 0x28u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x28u); goto E_10227c86;
    case 0x10227c8bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_ebp = rd32(sp0 - 0x28u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x28u); goto E_10227c8b;
    case 0x10227c9cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_ebp = rd32(sp0 - 0x28u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x28u); goto E_10227c9c;
    case 0x10227cb8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_10227cb8;
    case 0x10227cbeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_10227cbe;
    case 0x10227ccfu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10227ccf;
    case 0x10227cd5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10227cd5;
    case 0x10227cdeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10227cde;
    case 0x10227ce6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10227ce6;
    case 0x10227ceau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10227cea;
    case 0x10227ceeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10227cee;
    case 0x10227cf2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_10227cf2;
    case 0x10227d09u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_10227d09;
    case 0x10227d24u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10227d24;
    case 0x10227d2bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10227d2b;
    case 0x10227d38u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10227d38;
    case 0x10227d4eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_10227d4e;
    case 0x10227d61u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10227d61;
    case 0x10227d77u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10227d77;
    case 0x10227d82u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10227d82;
    case 0x10227d90u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10227d90;
    case 0x10227da3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10227da3;
    case 0x10227dbbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10227dbb;
    case 0x10227e23u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10227e23;
    case 0x10227e38u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10227e38;
    case 0x10227e46u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10227e46;
    case 0x10227e4cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); goto E_10227e4c;
    case 0x10227e76u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10227e76;
    case 0x10227e80u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_10227e80;
    default: break;
    }
#endif

    COW_AT(10227bf0)
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, in_edi);
    wr32(sp0 - 0x24u, 2u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x20u;
    t1 = cow_cdecl(g, COW_IMG(0x10193890u), 1, 2u);
    t2 = g->ecx;
    t3 = g->edx;
    if (rd8(self + 0x65u) == ((uint8_t)t1 == 0u))
    {
        eax = (t1 & 0xffffff00u) | (uint8_t)t1 == 0u;
        ecx = (t2 & 0xffffff00u) | rd8(self + 0x65u);
        edx = t3;
    }
    else
    {
        eax = (t1 & 0xffffff00u) | (uint8_t)t1 == 0u;
        edx = t3;
    COW_AT(10227c0d)
        wr8(self + 0x65u, (uint8_t)eax);
        g->eax = eax;
        g->esp = sp0 - 0x20u;
        t4 = cow_fastcall(g, COW_IMG(0x10227f40u), self, edx, 0);
        t5 = g->ecx;
        t6 = g->edx;
        eax = t4;
        ecx = t5;
        edx = t6;
    }
    COW_AT(10227c17)
    wr32(sp0 - 0x24u, in_ebx);
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t7 = cow_call_regs(g, COW_IMG(0x10099230u), eax, g->ecx, g->edx, 1, 0);
    t8 = g->edx;
    wr32(sp0 - 0x18u, 0u);
    if (rd32(self + 8u) == 0u)
    {
        eax = t7;
        edx = t8;
    }
    else
    {
        eax = t7;
        ecx = rd32(self + 8u);
        edx = t8;
    COW_AT(10227c2a)
        wr8(ecx + 0x69u, 0u);
    }
    COW_AT(10227c2d)
    wr32(sp0 - 0x28u, in_ebp);
    t9 = COW_IMG(0x10485a30u) - eax;
    wr32(sp0 - 0x14u, t9);
    wr32(sp0 - 0x18u, 0x20u);
    ecx = t9;
    ebx = 0u;
    ebp = eax + 0x40u;
    edi = eax;
    loc_18 = 0x20u;
    loc_14 = t9;
L_10227c46: ;
    COW_AT(10227c46)
    if (rd16(ecx + edi) != 0xffffu)
    {
        edx = (edx & 0xffff0000u) | rd16(ecx + edi);
    COW_AT(10227c51)
        if ((uint16_t)edx != 0u)
        {
    COW_AT(10227c56)
            wr16(self + (uint16_t)ebx * 2u + 0x290u, (uint16_t)edx);
            if (eax == 0u)
            {
                ecx = (uint16_t)ebx;
                goto L_10227c7b;
            }
            ecx = (uint16_t)ebx;
    COW_AT(10227c6a)
            if (rd16(edi) != (uint16_t)edx) goto L_10227c7b;
    COW_AT(10227c6f)
            wr32(ecx * 4u + self + 0x2f0u, rd32(ebp));
L_10227c86: ;
    COW_AT(10227c86)
            ecx = loc_14;
            ebx = ebx + 1u;
        }
    }
    COW_AT(10227c8b)
    wr32(sp0 - 0x18u, loc_18 - 1u);
    if (loc_18 != 1u)
    {
        edx = loc_18 - 1u;
        ebp = ebp + 4u;
        edi = edi + 2u;
        loc_18 = loc_18 - 1u;
        goto L_10227c46;
    }
    edx = loc_18 - 1u;
    COW_AT(10227c9c)
    wr32(sp0 - 0x18u, ebx);
    wr32(sp0 - 0x14u, self + 0x68u);
    wr32(sp0 - 0x10u, 0xfffffd98u - self);
    eax = 0xfffffd98u - self;
    ecx = self + 0x68u;
    ebp = self + 0x268u;
    loc_18 = ebx;
    loc_28 = in_ebp;
    loc_14 = self + 0x68u;
    loc_10 = 0xfffffd98u - self;
L_10227cb8: ;
    COW_AT(10227cb8)
    if (rd8(ebp) != 0u)
    {
    COW_AT(10227cbe)
        g->eax = eax;
        g->esp = sp0 - 0x28u;
        t10 = cow_thiscall(g, COW_IMG(0x10227110u), ecx, 0);
        if ((int32_t)(uint16_t)ebx <= 0)
        {
            eax = t10;
            edx = 0u;
            edi = (uint16_t)ebx;
        }
        else
        {
            eax = t10;
            edi = (uint16_t)ebx;
    COW_AT(10227ccf)
            edx = 0u;
            ebx = self + 0x290u;
L_10227cd5: ;
    COW_AT(10227cd5)
            if (eax == rd16(ebx)) goto L_10227ce6;
    COW_AT(10227cde)
            if ((int32_t)(edx + 1u) < (int32_t)edi)
            {
                edx = edx + 1u;
                ebx = ebx + 2u;
                goto L_10227cd5;
            }
            edx = edx + 1u;
L_10227ce6: ;
    COW_AT(10227ce6)
            ebx = rd32(sp0 - 0x18u);
        }
    COW_AT(10227cea)
        if (edx != edi)
        {
            loc_18 = rd32(sp0 - 0x18u);
            loc_28 = rd32(sp0 - 0x28u);
            loc_14 = rd32(sp0 - 0x14u);
            loc_10 = rd32(sp0 - 0x10u);
        }
        else
        {
    COW_AT(10227cee)
            wr8(ebp, 0u);
            loc_18 = rd32(sp0 - 0x18u);
            loc_28 = rd32(sp0 - 0x28u);
            loc_14 = rd32(sp0 - 0x14u);
            loc_10 = rd32(sp0 - 0x10u);
        }
    }
    COW_AT(10227cf2)
    wr32(sp0 - 0x14u, loc_14 + 0x10u);
    if ((int32_t)(ebp + loc_10 + 1u) < 32)
    {
        ecx = loc_14 + 0x10u;
        edx = ebp + loc_10 + 1u;
        ebp = ebp + 1u;
        loc_14 = loc_14 + 0x10u;
        goto L_10227cb8;
    }
    edx = ebp + loc_10 + 1u;
    COW_AT(10227d09)
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, (uint16_t)ebx);
    g->eax = (uint16_t)ebx;
    g->esp = sp0 - 0x28u;
    t11 = cow_fastcall(g, COW_IMG(0x10221a80u), self, edx, 2, (uint16_t)ebx, 0u);
    t12 = g->edx;
    if ((uint16_t)ebx == rd16(self + 0x374u))
    {
        eax = t11;
        edx = t12;
        ebp = rd32(sp0 - 0x28u);
    }
    else
    {
        eax = t11;
        edx = t12;
        ebp = rd32(sp0 - 0x28u);
    COW_AT(10227d24)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        t13 = cow_thiscall(g, COW_IMG(0x10227ed0u), self, 0);
        t14 = g->edx;
        eax = t13;
        edx = t14;
    }
    COW_AT(10227d2b)
    wr16(self + 0x374u, (uint16_t)ebx);
    if ((uint16_t)ebx != 0u)
    {
        ebx = rd32(sp0 - 0x24u);
        goto L_10227d61;
    }
    ebx = rd32(sp0 - 0x24u);
    COW_AT(10227d38)
    t15 = rd32(self + 8u);
    wr32(sp0 - 0x24u, t15);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t16 = cow_thiscall(g, COW_IMG(0x1015ed80u), COW_IMG(0x10621838u), 1, t15);
    t17 = g->edx;
    if ((uint8_t)t16 != 1u)
    {
        eax = t16;
        edx = t17;
        goto L_10227e80;
    }
    eax = t16;
    edx = t17;
    COW_AT(10227d4e)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t18 = cow_thiscall(g, COW_IMG(0x10157620u), rd32(COW_IMG(0x1057876cu)), 0);
    t19 = g->edx;
    g->ebx = ebx;
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = rd32(sp0 - 0x20u);
    g->ebp = ebp;
    g->edx = t19;
    return t18;
L_10227c7b: ;
    COW_AT(10227c7b)
    wr32(ecx * 4u + self + 0x2f0u, 0x7fffffffu);
    goto L_10227c86;
L_10227d61: ;
    COW_AT(10227d61)
    t20 = rd32(self + 8u);
    wr32(sp0 - 0x24u, t20);
    g->eax = eax;
    g->edx = t20;
    g->esp = sp0 - 0x20u;
    t21 = cow_thiscall(g, COW_IMG(0x1015ed80u), COW_IMG(0x10621838u), 1, t20);
    t22 = g->ecx;
    t23 = g->edx;
    if ((uint8_t)t21 == 0u)
    {
        eax = t21;
        ecx = t22;
        edx = t23;
    }
    else
    {
        ecx = t22;
        edx = t23;
    COW_AT(10227d77)
        if ((int32_t)rd32(self + 0x40u) <= 0)
        {
            eax = rd32(self + 0x40u);
        }
        else
        {
            eax = rd32(self + 0x40u);
    COW_AT(10227d82)
            if (rd8(self + 0x376u) != 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(self + 0x376u);
            }
            else
            {
    COW_AT(10227d90)
                if (rd16(self + rd32(self + 0x30u) * 2u + 0x290u) == 0xffffu)
                {
                    eax = rd32(self + 0x30u);
                }
                else
                {
                    eax = rd32(self + 0x30u);
    COW_AT(10227da3)
                    t24 = rd16(eax * 2u + self + 0x290u);
                    wr32(sp0 - 0x24u, t24);
                    g->ebx = ebx;
                    g->edx = edx;
                    g->esp = sp0 - 0x20u;
                    t25 = cow_call_regs(g, COW_IMG(0x10227af0u), eax, self, g->edx, 0, 1, t24);
                    t26 = g->ecx;
                    t27 = g->edx;
                    if ((int32_t)t25 < 0)
                    {
                        eax = t25;
                        ecx = t26;
                        edx = t27;
                    }
                    else
                    {
                        eax = t25;
                        edx = t27;
                        edi = t25;
    COW_AT(10227dbb)
                        g->eax = eax;
                        g->edx = edx;
                        g->esp = sp0 - 0x20u;
                        t28 = cow_thiscall(g, COW_IMG(0x1018d2b0u), sp0 - 0xcu, 0);
                        t29 = g->edx;
                        wr32(sp0 - 0x24u, 2u);
                        g->edx = t29;
                        t30 = cow_thiscall_cdecl(g, COW_IMG(0x10227120u), edi * 0x10u + self + 0x68u, 1, 2u);
                        t31 = g->edx;
                        wr32(sp0 - 0x28u, t30);
                        cow_thiscall(g, COW_IMG(0x1013a320u), rd32(COW_IMG(0x105781f8u)), 2, t30, 2u);
                        t32 = rd16(self + rd32(self + 0x30u) * 2u + 0x290u);
                        wr32(sp0 - 0x24u, t32);
                        wr32(sp0 - 0x28u, sp0 - 0xcu);
                        g->eax = t32;
                        t33 = rd32(self + 0x30u);
                        t34 = cow_fastcall(g, COW_IMG(0x10227450u), rd32(COW_IMG(0x106671b4u)), t33, 2, sp0 - 0xcu, t32);
                        t35 = g->edx;
                        wr32(sp0 - 0x24u, 2u);
                        g->edx = t35;
                        t36 = cow_thiscall_cdecl(g, COW_IMG(0x1018d470u), sp0 - 0xcu, 1, 2u);
                        t37 = g->edx;
                        wr32(sp0 - 0x28u, t36);
                        g->edx = t37;
                        t38 = cow_thiscall(g, COW_IMG(0x10150cc0u), rd32(COW_IMG(0x1057847cu)), 2, t36, 2u);
                        t39 = g->edx;
                        wr8(self + 0x376u, 1u);
                        t40 = cow_fastcall(g, COW_IMG(0x1018d250u), sp0 - 0xcu, t39, 0);
                        t41 = g->ecx;
                        t42 = g->edx;
                        eax = t40;
                        ecx = t41;
                        edx = t42;
                    }
                }
            }
        }
    }
    COW_AT(10227e23)
    d43 = (double)rdf32(self + 0x28cu);
    if ((cow_fsw(g, d43, (double)rdf32(COW_IMG(0x10329ce0u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d43, (double)rdf32(COW_IMG(0x10329ce0u)), 0u) & 0x4100u;
    COW_AT(10227e46)
        x0 = (double)rdf32(self + 0x28cu);
    }
    else
    {
        eax = cow_fsw(g, d43, (double)rdf32(COW_IMG(0x10329ce0u)), 0u) & 0x4100u;
    COW_AT(10227e38)
        x0 = fr(g, (double)rdf32(COW_IMG(0x10331380u)) - (double)rdf32(self + 0x28cu));
    }
    COW_AT(10227e4c)
    d44 = fr(g, x0 * (double)rdf32(COW_IMG(0x1032a3e0u)));
    wrf32(self + 0x288u, (float)d44);
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t45 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t46 = g->edx;
    d47 = cow_take_float(g);
    d48 = fr(g, (double)rdf32(self + 0x28cu) - d47);
    wrf32(self + 0x28cu, (float)d48);
    if (!(d48 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (t45 & 0xffff0000u) | (uint16_t)cow_fsw(g, d48, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        edx = t46;
    }
    else
    {
        eax = (t45 & 0xffff0000u) | (uint16_t)cow_fsw(g, d48, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        edx = t46;
    COW_AT(10227e76)
        wr32(self + 0x28cu, 0x42200000u);
    }
L_10227e80: ;
    COW_AT(10227e80)
    g->ebx = ebx;
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = rd32(sp0 - 0x20u);
    g->ebp = ebp;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10227bf0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10227c0du:
    {
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
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10227c17u:
    {
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
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10227c2au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10227c2du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10227c46u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_ebp = rd32(sp0 - 0x28u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10227c51u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_ebp = rd32(sp0 - 0x28u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10227c56u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_ebp = rd32(sp0 - 0x28u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10227c6au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_ebp = rd32(sp0 - 0x28u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10227c6fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_ebp = rd32(sp0 - 0x28u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10227c7bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_ebp = rd32(sp0 - 0x28u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10227c86u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_ebp = rd32(sp0 - 0x28u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10227c8bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_ebp = rd32(sp0 - 0x28u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10227c9cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_ebp = rd32(sp0 - 0x28u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10227cb8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10227cbeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10227ccfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10227cd5u:
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
    case 0x10227cdeu:
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
    case 0x10227ce6u:
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
    case 0x10227ceau:
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
    case 0x10227ceeu:
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
    case 0x10227cf2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10227d09u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10227d24u:
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
    case 0x10227d2bu:
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
    case 0x10227d38u:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10227d4eu:
    {
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10227d61u:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10227d77u:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10227d82u:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10227d90u:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10227da3u:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10227dbbu:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10227e23u:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10227e38u:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10227e46u:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10227e4cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10227e76u:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10227e80u:
    {
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10227bf0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10227bf0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
