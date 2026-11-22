/* f_0x100ad320 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100ad320(Guest* g)
{
    double d14;
    double d15;
    double d16;
    double d17;
    double d18;
    double d22;
    double d30;
    double d31;
    double d32;
    double d33;
    double d34;
    double d35;
    double d36;
    double d37;
    double d38;
    double d39;
    double d40;
    double d41;
    double d42;
    double d43;
    double d44;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    double loc_c_f;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t4;
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
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 48u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100ad333u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; self = g->ebp; in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_100ad333;
    case 0x100ad33du: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_100ad33d;
    case 0x100ad349u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; self = g->ebp; in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_100ad349;
    case 0x100ad356u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; self = g->ebp; in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_100ad356;
    case 0x100ad361u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; goto E_100ad361;
    case 0x100ad372u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; goto E_100ad372;
    case 0x100ad382u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100ad382;
    case 0x100ad38du: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100ad38d;
    case 0x100ad398u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_100ad398;
    case 0x100ad3b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100ad3b1;
    case 0x100ad3b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100ad3b3;
    case 0x100ad3d9u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; self = g->ebp; in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_100ad3d9;
    case 0x100ad3e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; goto E_100ad3e7;
    case 0x100ad405u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; goto E_100ad405;
    case 0x100ad42cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; goto E_100ad42c;
    case 0x100ad441u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; goto E_100ad441;
    case 0x100ad45au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; goto E_100ad45a;
    case 0x100ad473u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; loc_c_f = rdf32(sp0 - 0xcu); goto E_100ad473;
    case 0x100ad479u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; loc_c_f = rdf32(sp0 - 0xcu); goto E_100ad479;
    case 0x100ad47bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; loc_c_f = rdf32(sp0 - 0xcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100ad47b;
    case 0x100ad48du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; goto E_100ad48d;
    case 0x100ad493u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; goto E_100ad493;
    case 0x100ad496u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100ad496;
    case 0x100ad4a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; goto E_100ad4a9;
    case 0x100ad4afu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; goto E_100ad4af;
    case 0x100ad4b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100ad4b2;
    case 0x100ad4c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; goto E_100ad4c5;
    case 0x100ad4cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; goto E_100ad4cb;
    case 0x100ad4ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100ad4ce;
    case 0x100ad4deu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; goto E_100ad4de;
    case 0x100ad4e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; goto E_100ad4e4;
    case 0x100ad4e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100ad4e6;
    case 0x100ad4f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; goto E_100ad4f6;
    case 0x100ad4fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; goto E_100ad4fc;
    case 0x100ad4ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100ad4ff;
    case 0x100ad510u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; goto E_100ad510;
    case 0x100ad516u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; goto E_100ad516;
    case 0x100ad519u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100ad519;
    case 0x100ad52au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; goto E_100ad52a;
    case 0x100ad530u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; goto E_100ad530;
    case 0x100ad533u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100ad533;
    case 0x100ad542u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_100ad542;
    default: break;
    }
#endif

    COW_AT(100ad320)
    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_ebp);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, in_edi);
    if (rd32(self + 0x870u) != 0u)
    {
        eax = rd32(self + 0x870u);
        ecx = self;
        goto L_100ad349;
    }
    eax = rd32(self + 0x870u);
    COW_AT(100ad333)
    if (rd32(self + 0x874u) != 0u)
    {
        ecx = rd32(self + 0x874u);
        goto L_100ad349;
    }
    COW_AT(100ad33d)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return eax & 0xffffff00u;
L_100ad349: ;
    COW_AT(100ad349)
    t1 = rd32(self + 0x874u);
    if (t1 != 1u) goto L_100ad3d9;
    COW_AT(100ad356)
    g->eax = rd32(self);
    g->edx = in_edx;
    t2 = rd32(self);
    g->esp = sp0 - 0x20u;
    t3 = cow_thiscall(g, rd32(t2 + 0x1bcu), self, 0);
    t4 = g->edx;
    eax = t3;
    edx = t4;
    COW_AT(100ad361)
    wr32(sp0 - 0x24u, eax);
    wr32(sp0 - 0x28u, arg2);
    g->eax = eax;
    g->esp = sp0 - 0x20u;
    t5 = cow_thiscall(g, COW_IMG(0x10028370u), arg3, 2, arg2, eax);
    eax = t5;
    COW_AT(100ad372)
    wr32(sp0 - 0x24u, COW_IMG(0x1035be18u));
    g->eax = eax;
    g->edx = rd32(self);
    t6 = rd32(self);
    g->esp = sp0 - 0x20u;
    t7 = cow_thiscall_cdecl(g, rd32(t6 + 0x1bcu), self, 1, COW_IMG(0x1035be18u));
    t8 = g->ecx;
    t9 = g->edx;
    eax = t7;
    ecx = t8;
    edx = t9;
    COW_AT(100ad382)
    wr32(sp0 - 0x28u, eax);
    wr32(sp0 - 0x2cu, arg1);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t10 = cow_cdecl(g, COW_IMG(0x10026f70u), 3, arg1, eax, COW_IMG(0x1035be18u));
    t11 = g->edx;
    eax = t10;
    edx = t11;
    COW_AT(100ad38d)
    wr32(sp0 - 0x24u, arg1);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t12 = cow_thiscall(g, COW_IMG(0x10028320u), arg3, 1, arg1);
    t13 = g->edx;
    eax = t12;
    edx = t13;
    COW_AT(100ad398)
    d14 = fr(g, fr(g, (double)rdf32(arg1 + 4u) - (double)rdf32(arg2 + 4u)) * (double)rdf32(COW_IMG(0x10329a08u)));
    if (!(d14 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d14, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = d14;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d14, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = d14;
    COW_AT(100ad3b1)
        x0 = -x0;
    }
    COW_AT(100ad3b3)
    d15 = fr(g, (double)rdf32(arg1) - x0);
    wrf32(arg1, (float)d15);
    d16 = fr(g, x0 + (double)rdf32(arg2));
    wrf32(arg2, (float)d16);
    d17 = (double)rdf32(arg1 + 4u);
    wrf32(arg1 + 4u, (float)-d17);
    d18 = (double)rdf32(arg2 + 4u);
    wrf32(arg2 + 4u, (float)-d18);
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = rd32(sp0 - 0x20u);
    g->ebp = rd32(sp0 - 0x18u);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_100ad3d9: ;
    COW_AT(100ad3d9)
    wr32(sp0 - 0x24u, eax + 0x4cu);
    wr32(sp0 - 0x28u, sp0 - 0x10u);
    g->eax = sp0 - 0x10u;
    g->edx = in_edx;
    g->esp = sp0 - 0x20u;
    t19 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x10u, eax + 0x4cu);
    t20 = g->edx;
    eax = t19;
    edx = t20;
    COW_AT(100ad3e7)
    wr32(sp0 - 4u, 0x3f800000u);
    wr32(sp0 - 0x24u, sp0 - 0x10u);
    wr32(sp0 - 0x28u, arg1);
    g->esp = sp0 - 0x20u;
    cow_thiscall(g, COW_IMG(0x10028370u), arg3, 2, arg1, sp0 - 0x10u);
    COW_AT(100ad405)
    t21 = rd32(arg1);
    d22 = (double)rdf32(arg1 + 4u);
    wrf32(arg1 + 4u, (float)-d22);
    wr32(arg2, t21);
    t23 = rd32(arg1 + 4u);
    wr32(arg2 + 4u, t23);
    t24 = rd32(arg1 + 8u);
    wr32(arg2 + 8u, t24);
    t25 = rd32(arg1 + 0xcu);
    wr32(arg2 + 0xcu, t25);
    ebx = 0xcu;
L_100ad42c: ;
    COW_AT(100ad42c)
    t26 = ebx + rd32(self + 0x870u) + 0x4cu;
    wr32(sp0 - 0x24u, t26);
    wr32(sp0 - 0x28u, sp0 - 0x10u);
    g->edx = sp0 - 0x10u;
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x10u, t26);
    t27 = g->edx;
    edx = t27;
    COW_AT(100ad441)
    wr32(sp0 - 4u, 0x3f800000u);
    wr32(sp0 - 0x24u, sp0 - 0x10u);
    g->eax = sp0 - 0x10u;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t28 = cow_thiscall(g, COW_IMG(0x10028320u), arg3, 1, sp0 - 0x10u);
    t29 = g->edx;
    eax = t28;
    edx = t29;
    COW_AT(100ad45a)
    d30 = (double)rdf32(sp0 - 0xcu);
    wrf32(sp0 - 0xcu, (float)(double)(float)-d30);
    d31 = (double)rdf32(sp0 - 0x10u);
    if ((cow_fsw(g, (double)rdf32(arg1), d31, 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, (double)rdf32(arg1), d31, 0u) & 0x4100u;
        loc_c_f = (double)(float)-d30;
    COW_AT(100ad479)
        x0 = (double)rdf32(arg1);
    }
    else
    {
        eax = cow_fsw(g, (double)rdf32(arg1), d31, 0u) & 0x4100u;
        loc_c_f = (double)(float)-d30;
    COW_AT(100ad473)
        x0 = (double)rdf32(sp0 - 0x10u);
    }
    COW_AT(100ad47b)
    wrf32(arg1, (float)x0);
    d32 = (double)rdf32(arg1 + 4u);
    d33 = (double)rdf32(sp0 - 0xcu);
    if ((cow_fsw(g, d32, d33, 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d32, d33, 0u) & 0x4100u;
    COW_AT(100ad493)
        x0 = (double)rdf32(arg1 + 4u);
    }
    else
    {
        eax = cow_fsw(g, d32, d33, 0u) & 0x4100u;
    COW_AT(100ad48d)
        x0 = (double)rdf32(sp0 - 0xcu);
    }
    COW_AT(100ad496)
    wrf32(arg1 + 4u, (float)x0);
    d34 = (double)rdf32(arg1 + 8u);
    d35 = (double)rdf32(sp0 - 8u);
    if ((cow_fsw(g, d34, d35, 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d34, d35, 0u) & 0x4100u;
    COW_AT(100ad4af)
        x0 = (double)rdf32(arg1 + 8u);
    }
    else
    {
        eax = cow_fsw(g, d34, d35, 0u) & 0x4100u;
    COW_AT(100ad4a9)
        x0 = (double)rdf32(sp0 - 8u);
    }
    COW_AT(100ad4b2)
    wrf32(arg1 + 8u, (float)x0);
    d36 = (double)rdf32(arg1 + 0xcu);
    d37 = (double)rdf32(sp0 - 4u);
    if ((cow_fsw(g, d36, d37, 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d36, d37, 0u) & 0x4100u;
    COW_AT(100ad4cb)
        x0 = (double)rdf32(arg1 + 0xcu);
    }
    else
    {
        eax = cow_fsw(g, d36, d37, 0u) & 0x4100u;
    COW_AT(100ad4c5)
        x0 = (double)rdf32(sp0 - 4u);
    }
    COW_AT(100ad4ce)
    wrf32(arg1 + 0xcu, (float)x0);
    d38 = (double)rdf32(sp0 - 0x10u);
    if (!((double)rdf32(arg2) < d38))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(arg2), d38, 0u);
    COW_AT(100ad4e4)
        x0 = (double)rdf32(arg2);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(arg2), d38, 0u);
    COW_AT(100ad4de)
        x0 = (double)rdf32(sp0 - 0x10u);
    }
    COW_AT(100ad4e6)
    wrf32(arg2, (float)x0);
    d39 = (double)rdf32(arg2 + 4u);
    d40 = (double)rdf32(sp0 - 0xcu);
    if (!(d39 < d40))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d39, d40, 0u);
    COW_AT(100ad4fc)
        x0 = (double)rdf32(arg2 + 4u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d39, d40, 0u);
    COW_AT(100ad4f6)
        x0 = (double)rdf32(sp0 - 0xcu);
    }
    COW_AT(100ad4ff)
    wrf32(arg2 + 4u, (float)x0);
    d41 = (double)rdf32(arg2 + 8u);
    d42 = (double)rdf32(sp0 - 8u);
    if (!(d41 < d42))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d41, d42, 0u);
    COW_AT(100ad516)
        x0 = (double)rdf32(arg2 + 8u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d41, d42, 0u);
    COW_AT(100ad510)
        x0 = (double)rdf32(sp0 - 8u);
    }
    COW_AT(100ad519)
    wrf32(arg2 + 8u, (float)x0);
    d43 = (double)rdf32(arg2 + 0xcu);
    d44 = (double)rdf32(sp0 - 4u);
    if (!(d43 < d44))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d43, d44, 0u);
    COW_AT(100ad530)
        x0 = (double)rdf32(arg2 + 0xcu);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d43, d44, 0u);
    COW_AT(100ad52a)
        x0 = (double)rdf32(sp0 - 4u);
    }
    COW_AT(100ad533)
    wrf32(arg2 + 0xcu, (float)x0);
    if ((int32_t)(ebx + 0xcu) < 96)
    {
        ebx = ebx + 0xcu;
        goto L_100ad42c;
    }
    COW_AT(100ad542)
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = rd32(sp0 - 0x20u);
    g->ebp = rd32(sp0 - 0x18u);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100ad320(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100ad333u:
    {
        uint32_t eax;
        uint32_t ebx;
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
        ebx = g->ebx;
        self = g->ebp;
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100ad33du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100ad349u:
    {
        uint32_t eax;
        uint32_t ebx;
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
        ebx = g->ebx;
        self = g->ebp;
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100ad356u:
    {
        uint32_t eax;
        uint32_t ebx;
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
        ebx = g->ebx;
        self = g->ebp;
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100ad361u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100ad372u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        g->esp = sp0 - 0x20u;
        g->ebx = arg3;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ad382u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x24u;
        g->ebx = arg3;
        g->edi = arg2;
        wr32(sp0 - 0x24u, COW_IMG(0x1035be18u));
        (void)sp0;
        return 1;
    }
    case 0x100ad38du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x2cu;
        g->ebx = arg3;
        g->esi = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ad398u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x20u;
        g->esi = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ad3b1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x20u;
        g->esi = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ad3b3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x20u;
        g->esi = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ad3d9u:
    {
        uint32_t eax;
        uint32_t ebx;
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
        ebx = g->ebx;
        self = g->ebp;
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100ad3e7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x28u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100ad405u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        g->esp = sp0 - 0x20u;
        g->esi = arg1;
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100ad42cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        g->esp = sp0 - 0x20u;
        g->esi = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ad441u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        g->esp = sp0 - 0x28u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0x28u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100ad45au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        g->esp = sp0 - 0x20u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0x28u, sp0 - 0x10u);
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        wr32(sp0 - 4u, 0x3f800000u);
        (void)sp0;
        return 1;
    }
    case 0x100ad473u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        loc_c_f = rdf32(sp0 - 0xcu);
        g->esp = sp0 - 0x20u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0x28u, sp0 - 0x10u);
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        wr32(sp0 - 4u, 0x3f800000u);
        (void)sp0;
        return 1;
    }
    case 0x100ad479u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        loc_c_f = rdf32(sp0 - 0xcu);
        g->esp = sp0 - 0x20u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0x28u, sp0 - 0x10u);
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        wr32(sp0 - 4u, 0x3f800000u);
        (void)sp0;
        return 1;
    }
    case 0x100ad47bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double loc_c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        loc_c_f = rdf32(sp0 - 0xcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x20u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0x28u, sp0 - 0x10u);
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        wr32(sp0 - 4u, 0x3f800000u);
        (void)sp0;
        return 1;
    }
    case 0x100ad48du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        g->esp = sp0 - 0x20u;
        g->esi = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ad493u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        g->esp = sp0 - 0x20u;
        g->esi = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ad496u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x20u;
        g->esi = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ad4a9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        g->esp = sp0 - 0x20u;
        g->esi = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ad4afu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        g->esp = sp0 - 0x20u;
        g->esi = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ad4b2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x20u;
        g->esi = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ad4c5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        g->esp = sp0 - 0x20u;
        g->esi = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ad4cbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        g->esp = sp0 - 0x20u;
        g->esi = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ad4ceu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x20u;
        g->esi = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ad4deu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        g->esp = sp0 - 0x20u;
        g->esi = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ad4e4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        g->esp = sp0 - 0x20u;
        g->esi = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ad4e6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x20u;
        g->esi = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ad4f6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        g->esp = sp0 - 0x20u;
        g->esi = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ad4fcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        g->esp = sp0 - 0x20u;
        g->esi = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ad4ffu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x20u;
        g->esi = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ad510u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        g->esp = sp0 - 0x20u;
        g->esi = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ad516u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        g->esp = sp0 - 0x20u;
        g->esi = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ad519u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x20u;
        g->esi = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ad52au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        g->esp = sp0 - 0x20u;
        g->esi = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ad530u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        g->esp = sp0 - 0x20u;
        g->esi = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ad533u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x20u;
        g->esi = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ad542u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100ad320(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100ad320(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
