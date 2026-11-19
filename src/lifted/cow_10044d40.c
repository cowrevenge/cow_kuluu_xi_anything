/* f_0x10044d40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10044d40(Guest* g)
{
    double d11;
    double d27;
    double d30;
    double d32;
    double d33;
    double d34;
    double d6;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t t1;
    uint32_t t10;
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
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t31;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t4;
    uint32_t t5;
    uint32_t t7;
    uint32_t t8;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10044d57u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10044d57;
    case 0x10044d6fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 4u); goto E_10044d6f;
    case 0x10044d79u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 4u); goto E_10044d79;
    case 0x10044d7eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 4u); goto E_10044d7e;
    case 0x10044d82u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 4u); goto E_10044d82;
    case 0x10044d86u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 4u); goto E_10044d86;
    case 0x10044d88u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 4u); goto E_10044d88;
    case 0x10044d8eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 4u); goto E_10044d8e;
    case 0x10044dcbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 4u); goto E_10044dcb;
    case 0x10044de9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 4u); goto E_10044de9;
    case 0x10044e2eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 4u); goto E_10044e2e;
    case 0x10044e33u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 4u); goto E_10044e33;
    case 0x10044e36u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 4u); goto E_10044e36;
    case 0x10044e54u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 4u); goto E_10044e54;
    case 0x10044e65u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 4u); goto E_10044e65;
    case 0x10044e6au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 4u); goto E_10044e6a;
    case 0x10044e6eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 4u); goto E_10044e6e;
    case 0x10044e72u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 4u); goto E_10044e72;
    case 0x10044e74u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 4u); goto E_10044e74;
    case 0x10044e7au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 4u); goto E_10044e7a;
    case 0x10044eb5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 4u); goto E_10044eb5;
    case 0x10044ed1u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); x0 = ST(0); self = g->ebp - 0x60u; g->ebp = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 4u); goto E_10044ed1;
    case 0x10044ee5u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 4u); goto E_10044ee5;
    case 0x10044f00u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; in_edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10044f00;
    default: break;
    }
#endif

    COW_AT(10044d40)
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x10044cf0u), in_eax, self, g->edx, 1, 0);
    t2 = g->edx;
    wr8(self + 0x187u, 0u);
    if ((uint8_t)t1 == 0u)
    {
        edx = t2;
    }
    else
    {
        eax = t1;
        edx = t2;
    COW_AT(10044d57)
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        cow_thiscall(g, COW_IMG(0x100746a0u), self + 0x60u, 0);
        t3 = g->edx;
        if (!(rd32(self + 0x10cu) >> 1u & 1u))
        {
            edx = t3;
    COW_AT(10044d6f)
            if (rd32(self + 0xfcu) == 0u) goto L_10044dcb;
            eax = rd32(self + 0xfcu);
    COW_AT(10044d79)
            if (rd32(eax) == 0u) goto L_10044dcb;
    COW_AT(10044d7e)
            if (eax == 0u)
            {
    COW_AT(10044d86)
                eax = 0u;
            }
            else
            {
    COW_AT(10044d82)
                eax = rd32(eax);
            }
    COW_AT(10044d88)
            if ((rd8(eax + 0x37u) & 0xfu) == 0u) goto L_10044dcb;
    COW_AT(10044d8e)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t4 = cow_thiscall(g, COW_IMG(0x10047490u), self, 0);
            t5 = g->edx;
            d6 = fr(g, (double)rdf32(self + 0xecu) * (double)rdf32(t4));
            wrf32(self + 0x60u, (float)d6);
            g->edx = t5;
            t7 = cow_thiscall(g, COW_IMG(0x10047490u), self, 0);
            t8 = g->edx;
            d9 = fr(g, (double)rdf32(t7 + 4u) * (double)rdf32(self + 0xf0u));
            wrf32(self + 0x74u, (float)d9);
            t10 = cow_thiscall(g, COW_IMG(0x10047490u), self, 0);
            d11 = fr(g, (double)rdf32(t10 + 8u) * (double)rdf32(self + 0xf4u));
            wrf32(self + 0x88u, (float)d11);
        }
L_10044de9: ;
    COW_AT(10044de9)
        t15 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) + 1u;
        t16 = rd32(rd32(COW_IMG(0x1047cf7cu)) + rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) * 4u + 0xa10u);
        wr32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u, t15);
        t17 = rd32(self + 0xe8u);
        t18 = rd32(self + 0xe4u);
        t19 = rd32(self + 0xe0u);
        if (!(rd32(self + 0x10cu) >> 9u & 1u))
        {
            eax = t19;
            ecx = rd32(COW_IMG(0x1047cf7cu));
            edx = rd32(rd32(COW_IMG(0x1047cf7cu)));
            edi = t16;
            loc_10 = t17;
            loc_14 = t18;
            loc_18 = t19;
            loc_1c = t16;
    COW_AT(10044e33)
            g->eax = eax;
            g->esp = sp0 - 0x1cu;
            t21 = cow_thiscall(g, rd32(edx + 0x58u), ecx, 0);
            eax = t21;
        }
        else
        {
            eax = t19;
            ecx = rd32(COW_IMG(0x1047cf7cu));
            edx = rd32(rd32(COW_IMG(0x1047cf7cu)));
            edi = t16;
            loc_10 = t17;
            loc_14 = t18;
            loc_18 = t19;
            loc_1c = t16;
    COW_AT(10044e2e)
            g->eax = eax;
            g->esp = sp0 - 0x1cu;
            t20 = cow_thiscall(g, rd32(edx + 0x6cu), ecx, 0);
            eax = t20;
        }
    COW_AT(10044e36)
        g->edx = rd32(rd32(COW_IMG(0x1047cf7cu)));
        t22 = rd32(rd32(COW_IMG(0x1047cf7cu)));
        g->esp = sp0 - 0xcu;
        cow_thiscall(g, rd32(t22 + 0x20u), rd32(COW_IMG(0x1047cf7cu)), 7, self + 0x60u, self + 0x60u, edi, loc_1c, loc_18, loc_14, loc_10);
        t23 = g->edx;
        if (!(rd32(self + 0x10cu) >> 1u & 1u))
        {
            edx = t23;
        }
        else
        {
            eax = rd32(self + 0x10cu) >> 1u;
            edx = t23;
    COW_AT(10044e54)
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            cow_thiscall(g, COW_IMG(0x100746a0u), edi, 0);
            t24 = g->edx;
            if (rd32(self + 0xfcu) == 0u)
            {
                eax = rd32(self + 0xfcu);
                goto L_10044eb5;
            }
            eax = rd32(self + 0xfcu);
            edx = t24;
    COW_AT(10044e65)
            if (rd32(eax) == 0u) goto L_10044eb5;
    COW_AT(10044e6a)
            if (eax == 0u)
            {
    COW_AT(10044e72)
                eax = 0u;
            }
            else
            {
    COW_AT(10044e6e)
                eax = rd32(eax);
            }
    COW_AT(10044e74)
            if ((rd8(eax + 0x37u) & 0xfu) == 0u) goto L_10044eb5;
    COW_AT(10044e7a)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t25 = cow_thiscall(g, COW_IMG(0x10047490u), self, 0);
            t26 = g->edx;
            d27 = fr(g, fr(g, (double)rdf32(self + 0xecu) * (double)rdf32(t25)) * (double)rdf32(edi));
            wrf32(edi, (float)d27);
            g->edx = t26;
            t28 = cow_thiscall(g, COW_IMG(0x10047490u), self, 0);
            t29 = g->edx;
            d30 = fr(g, fr(g, (double)rdf32(t28 + 4u) * (double)rdf32(self + 0xf0u)) * (double)rdf32(edi + 0x14u));
            wrf32(edi + 0x14u, (float)d30);
            t31 = cow_thiscall(g, COW_IMG(0x10047490u), self, 0);
            eax = t31;
            x0 = fr(g, (double)rdf32(t31 + 8u) * (double)rdf32(self + 0xf4u));
L_10044ed1: ;
    COW_AT(10044ed1)
            d34 = fr(g, x0 * (double)rdf32(edi + 0x28u));
            wrf32(edi + 0x28u, (float)d34);
            g->edx = rd32(rd32(COW_IMG(0x1047cf7cu)));
            t35 = rd32(rd32(COW_IMG(0x1047cf7cu)));
            g->esp = sp0 - 0xcu;
            cow_thiscall(g, rd32(t35 + 0x20u), rd32(COW_IMG(0x1047cf7cu)), 3, self + 0x60u, self + 0x60u, edi);
            t36 = g->edx;
            edx = t36;
        }
    COW_AT(10044ee5)
        t37 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) - 1u;
        t38 = rd32(COW_IMG(0x1047cf7cu));
        wr32(t38 + 0xa90u, t37);
        wr32(t37 * 4u + t38 + 0xa10u, edi);
    }
    COW_AT(10044f00)
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = edx;
    return;
L_10044dcb: ;
    COW_AT(10044dcb)
    t12 = rd32(self + 0xecu);
    t13 = rd32(self + 0xf4u);
    t14 = rd32(self + 0xf0u);
    wr32(self + 0x60u, t12);
    wr32(self + 0x74u, t14);
    wr32(self + 0x88u, t13);
    goto L_10044de9;
L_10044eb5: ;
    COW_AT(10044eb5)
    d32 = fr(g, (double)rdf32(self + 0xecu) * (double)rdf32(edi));
    wrf32(edi, (float)d32);
    d33 = fr(g, (double)rdf32(self + 0xf0u) * (double)rdf32(edi + 0x14u));
    wrf32(edi + 0x14u, (float)d33);
    x0 = (double)rdf32(self + 0xf4u);
    goto L_10044ed1;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10044d40(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10044d57u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10044d6fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = self + 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x10044d79u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = self + 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x10044d7eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = self + 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x10044d82u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = self + 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x10044d86u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = self + 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x10044d88u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = self + 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x10044d8eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = self + 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x10044dcbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = self + 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x10044de9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = self + 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x10044e2eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebp = self + 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x10044e33u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebp = self + 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x10044e36u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebp = self + 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x10044e54u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = self + 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x10044e65u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = self + 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x10044e6au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = self + 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x10044e6eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = self + 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x10044e72u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = self + 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x10044e74u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = self + 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x10044e7au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = self + 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x10044eb5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = self + 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x10044ed1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        x0 = ST(0);
        self = g->ebp - 0x60u;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10044ee5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10044f00u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        in_edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10044d40(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10044d40(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
