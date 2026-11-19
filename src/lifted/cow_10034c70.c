/* f_0x10034c70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
uint32_t cow_fn_10034c70(Guest* g)
{
    double d24;
    double d7;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_84;
    uint32_t loc_b8;
    uint32_t loc_bc;
    uint32_t loc_c0;
    uint32_t loc_c4;
    uint32_t loc_c8;
    uint32_t loc_d0;
    uint32_t loc_d4;
    uint32_t loc_d8;
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
    uint32_t t6;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 268u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10034c8cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0xc8u); in_esi = rd32(sp0 - 0xc4u); in_ebp = rd32(sp0 - 0xc0u); in_ebx = rd32(sp0 - 0xbcu); g->ebp = rd32(sp0 - 0xc0u); g->ebx = rd32(sp0 - 0xbcu); g->edi = rd32(sp0 - 0xc8u); g->esi = rd32(sp0 - 0xc4u); goto E_10034c8c;
    case 0x10034c95u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_84 = rd32(sp0 - 0x84u); goto E_10034c95;
    case 0x10034c9cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_10034c9c;
    case 0x10034ca2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_10034ca2;
    case 0x10034cafu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_10034caf;
    case 0x10034cbau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_10034cba;
    case 0x10034cc2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_10034cc2;
    case 0x10034cd3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_10034cd3;
    case 0x10034ce7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_10034ce7;
    case 0x10034d07u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); goto E_10034d07;
    case 0x10034d29u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_10034d29;
    case 0x10034d4fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_10034d4f;
    case 0x10034d60u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_10034d60;
    case 0x10034d74u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_10034d74;
    case 0x10034d7du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_10034d7d;
    case 0x10034d8au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_10034d8a;
    case 0x10034d93u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_10034d93;
    case 0x10034d9cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_10034d9c;
    case 0x10034da6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_b8 = rd32(sp0 - 0xb8u); goto E_10034da6;
    case 0x10034db1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_b8 = rd32(sp0 - 0xb8u); goto E_10034db1;
    case 0x10034db9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b8 = rd32(sp0 - 0xb8u); goto E_10034db9;
    case 0x10034dcau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b8 = rd32(sp0 - 0xb8u); goto E_10034dca;
    case 0x10034ddeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b8 = rd32(sp0 - 0xb8u); goto E_10034dde;
    case 0x10034dffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b8 = rd32(sp0 - 0xb8u); goto E_10034dff;
    case 0x10034e28u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b8 = rd32(sp0 - 0xb8u); goto E_10034e28;
    case 0x10034e45u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_d4 = rd32(sp0 - 0xd4u); loc_b8 = rd32(sp0 - 0xb8u); goto E_10034e45;
    case 0x10034e4cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_d4 = rd32(sp0 - 0xd4u); loc_b8 = rd32(sp0 - 0xb8u); goto E_10034e4c;
    case 0x10034e6du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_d4 = rd32(sp0 - 0xd4u); loc_b8 = rd32(sp0 - 0xb8u); goto E_10034e6d;
    case 0x10034e76u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_d4 = rd32(sp0 - 0xd4u); loc_b8 = rd32(sp0 - 0xb8u); goto E_10034e76;
    case 0x10034e94u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_d4 = rd32(sp0 - 0xd4u); loc_b8 = rd32(sp0 - 0xb8u); goto E_10034e94;
    case 0x10034ec4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_d4 = rd32(sp0 - 0xd4u); loc_b8 = rd32(sp0 - 0xb8u); goto E_10034ec4;
    case 0x10034ed7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_b8 = rd32(sp0 - 0xb8u); goto E_10034ed7;
    case 0x10034eecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_b8 = rd32(sp0 - 0xb8u); goto E_10034eec;
    case 0x10034ef5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10034ef5;
    case 0x10034efeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10034efe;
    case 0x10034f07u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10034f07;
    case 0x10034f11u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10034f11;
    case 0x10034f14u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10034f14;
    case 0x10034f20u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10034f20;
    default: break;
    }
#endif

    COW_AT(10034c70)
    wr32(sp0 - 0xbcu, in_ebx);
    wr32(sp0 - 0xc0u, in_ebp);
    wr32(sp0 - 0xc4u, in_esi);
    wr32(sp0 - 0xc8u, in_edi);
    wr32(sp0 - 0x84u, self);
    g->edx = in_edx;
    g->esp = sp0 - 0xc8u;
    t1 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
    t2 = g->edx;
    eax = t1;
    edx = t2;
    COW_AT(10034c8c)
    ebx = 2u;
    esi = sp0 - 0x70u;
    loc_bc = in_ebx;
    loc_c0 = in_ebp;
    loc_c4 = in_esi;
    loc_c8 = in_edi;
    loc_84 = self;
L_10034c95: ;
    COW_AT(10034c95)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xc8u;
    t3 = cow_thiscall(g, COW_IMG(0x10032a40u), esi, 0);
    t4 = g->edx;
    eax = t3;
    edx = t4;
    COW_AT(10034c9c)
    if (ebx != 1u)
    {
        ebx = ebx - 1u;
        esi = esi + 0x10u;
        loc_bc = rd32(sp0 - 0xbcu);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_84 = rd32(sp0 - 0x84u);
        goto L_10034c95;
    }
    COW_AT(10034ca2)
    ebx = 0u;
    esi = sp0 - 0x70u;
L_10034caf: ;
    COW_AT(10034caf)
    if (rd32(arg5 + ebx * 4u) == 0u) goto L_10034d8a;
    COW_AT(10034cba)
    wr32(sp0 - 0xccu, ebx);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xc8u;
    t5 = cow_thiscall(g, COW_IMG(0x10035270u), self, 1, ebx);
    t6 = g->edx;
    eax = t5;
    edx = t6;
    COW_AT(10034cc2)
    if ((double)rdf32(eax) != (double)rdf32(COW_IMG(0x103295d8u)))
    {
        ecx = eax;
        goto L_10034ce7;
    }
    ecx = eax;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(eax), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(10034cd3)
    d7 = (double)rdf32(ecx + 4u);
    if (d7 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d7, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_10034d7d;
    }
L_10034ce7: ;
    COW_AT(10034ce7)
    wr32(sp0 - 0xccu, ecx);
    wr32(sp0 - 0xd0u, arg2);
    wr32(sp0 - 0xd4u, arg1);
    wr32(sp0 - 0xd8u, arg3);
    g->esp = sp0 - 0xc8u;
    cow_stdcall(g, COW_IMG(0x10034f30u), 4, arg3, arg1, arg2, ecx);
    COW_AT(10034d07)
    t8 = rd32(arg4 + 0xcu);
    wr32(sp0 - 0xccu, t8);
    wr32(sp0 - 0xd0u, arg3);
    wr32(sp0 - 0xd4u, arg1);
    g->esp = sp0 - 0xc8u;
    cow_thiscall(g, COW_IMG(0x10033360u), esi, 3, arg1, arg3, t8);
    COW_AT(10034d29)
    wr32(sp0 - 0xb4u, rd32(esi));
    t9 = rd32(esi + 4u);
    wr32(sp0 - 0xb0u, t9);
    t10 = rd32(esi + 8u);
    wr32(sp0 - 0xacu, t10);
    t11 = rd32(esi + 0xcu);
    wr32(sp0 - 0xa8u, t11);
    g->eax = t11;
    g->edx = t10;
    g->esp = sp0 - 0xc8u;
    t12 = cow_thiscall(g, COW_IMG(0x10032e10u), sp0 - 0xb4u, 0);
    t13 = g->edx;
    eax = t12;
    edx = t13;
    COW_AT(10034d4f)
    wr32(sp0 - 0xccu, sp0 - 0x40u);
    g->eax = eax;
    g->esp = sp0 - 0xc8u;
    t14 = cow_thiscall(g, COW_IMG(0x10032fe0u), sp0 - 0xb4u, 1, sp0 - 0x40u);
    eax = t14;
    COW_AT(10034d60)
    wr32(sp0 - 0xccu, arg2);
    g->eax = eax;
    g->edx = arg2;
    g->esp = sp0 - 0xc8u;
    t15 = cow_thiscall(g, COW_IMG(0x10028290u), sp0 - 0x40u, 1, arg2);
    t16 = g->edx;
    eax = t15;
    edx = t16;
    COW_AT(10034d74)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xc8u;
    t17 = cow_stdcall(g, COW_IMG(0x10032a70u), 0);
    t18 = g->edx;
    eax = t17;
    edx = t18;
L_10034d7d: ;
    COW_AT(10034d7d)
    if ((int32_t)(ebx + 1u) < 2)
    {
        ebx = ebx + 1u;
        esi = esi + 0x10u;
        goto L_10034caf;
    }
L_10034d8a: ;
    COW_AT(10034d8a)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xc8u;
    t19 = cow_thiscall(g, COW_IMG(0x10032a40u), sp0 - 0xa4u, 0);
    t20 = g->edx;
    eax = t19;
    edx = t20;
    COW_AT(10034d93)
    g->edx = edx;
    g->esp = sp0 - 0xc8u;
    cow_thiscall(g, COW_IMG(0x10032a40u), sp0 - 0x94u, 0);
    t21 = g->edx;
    edx = t21;
    COW_AT(10034d9c)
    wr32(sp0 - 0xb8u, sp0 - 0x70u);
    eax = sp0 - 0x70u;
    ebx = 0u;
    edi = self;
    loc_b8 = sp0 - 0x70u;
    loc_d0 = rd32(sp0 - 0xd0u);
    loc_d4 = rd32(sp0 - 0xd4u);
    loc_d8 = rd32(sp0 - 0xd8u);
L_10034da6: ;
    COW_AT(10034da6)
    if (rd32(arg5 + ebx * 4u) == 0u) goto L_10034eec;
    COW_AT(10034db1)
    wr32(sp0 - 0xccu, ebx);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xc8u;
    t22 = cow_thiscall(g, COW_IMG(0x10035270u), edi, 1, ebx);
    t23 = g->edx;
    eax = t22;
    edx = t23;
    loc_b8 = rd32(sp0 - 0xb8u);
    COW_AT(10034db9)
    if ((double)rdf32(eax) != (double)rdf32(COW_IMG(0x103295d8u))) goto L_10034dde;
    ecx = eax;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(eax), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(10034dca)
    d24 = (double)rdf32(ecx + 4u);
    if (d24 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d24, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d8 = rd32(sp0 - 0xd8u);
        goto L_10034ed7;
    }
L_10034dde: ;
    COW_AT(10034dde)
    t25 = rd32(edi + 0xcu);
    esi = rd32(edi + 0xcu) + rd32(arg5 + ebx * 4u) * 0x40u;
    edi = sp0 - 0x108u;
    ecx = 0x10u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->esp = sp0 - 0xc8u;
    cow_call_regs(g, COW_IMG(0x10032e70u), t25, sp0 - 0xa4u, g->edx, 0, 16, rd32(sp0 - 0x108u), rd32(sp0 - 0x104u), rd32(sp0 - 0x100u), rd32(sp0 - 0xfcu), rd32(sp0 - 0xf8u), rd32(sp0 - 0xf4u), rd32(sp0 - 0xf0u), rd32(sp0 - 0xecu), rd32(sp0 - 0xe8u), rd32(sp0 - 0xe4u), rd32(sp0 - 0xe0u), rd32(sp0 - 0xdcu), rd32(sp0 - 0xd8u), rd32(sp0 - 0xd4u), rd32(sp0 - 0xd0u), rd32(sp0 - 0xccu));
    loc_b8 = rd32(sp0 - 0xb8u);
    COW_AT(10034dff)
    t26 = rd32(sp0 - 0xa4u);
    wr32(sp0 - 0x94u, t26);
    t27 = rd32(sp0 - 0xa0u);
    wr32(sp0 - 0x90u, t27);
    t28 = rd32(sp0 - 0x98u);
    wr32(sp0 - 0x88u, t28);
    t29 = rd32(sp0 - 0x9cu);
    wr32(sp0 - 0x8cu, t29);
    g->esp = sp0 - 0xc8u;
    cow_thiscall(g, COW_IMG(0x10032e10u), sp0 - 0x94u, 0);
    loc_b8 = rd32(sp0 - 0xb8u);
    COW_AT(10034e28)
    wr32(sp0 - 0xccu, sp0 - 0xa4u);
    wr32(sp0 - 0xd0u, sp0 - 0xb4u);
    wr32(sp0 - 0xd4u, loc_b8);
    wr32(sp0 - 0xd8u, sp0 - 0x80u);
    g->eax = sp0 - 0xb4u;
    g->edx = sp0 - 0xa4u;
    g->esp = sp0 - 0xd0u;
    t30 = cow_thiscall(g, COW_IMG(0x10032b50u), sp0 - 0x94u, 2, sp0 - 0x80u, loc_b8);
    t31 = g->edx;
    eax = t30;
    edx = t31;
    esi = loc_b8;
    loc_b8 = rd32(sp0 - 0xb8u);
    loc_d4 = rd32(sp0 - 0xd4u);
    COW_AT(10034e45)
    g->eax = eax;
    g->esp = sp0 - 0xc8u;
    t32 = cow_thiscall(g, COW_IMG(0x10032b50u), eax, 2, sp0 - 0xb4u, sp0 - 0xa4u);
    eax = t32;
    loc_b8 = rd32(sp0 - 0xb8u);
    loc_d4 = rd32(sp0 - 0xd4u);
    COW_AT(10034e4c)
    wr32(esi, rd32(eax));
    t33 = rd32(eax + 4u);
    wr32(esi + 4u, t33);
    t34 = rd32(eax + 8u);
    wr32(esi + 8u, t34);
    t35 = rd32(eax + 0xcu);
    wr32(esi + 0xcu, t35);
    g->eax = t35;
    g->edx = esi;
    g->esp = sp0 - 0xc8u;
    t36 = cow_stdcall(g, COW_IMG(0x10032a70u), 0);
    t37 = g->edx;
    eax = t36;
    edx = t37;
    loc_b8 = rd32(sp0 - 0xb8u);
    loc_d4 = rd32(sp0 - 0xd4u);
    COW_AT(10034e6d)
    g->esp = sp0 - 0xc8u;
    cow_stdcall(g, COW_IMG(0x10032a70u), 0);
    loc_b8 = rd32(sp0 - 0xb8u);
    loc_d4 = rd32(sp0 - 0xd4u);
    COW_AT(10034e76)
    t38 = COW_IMG(0x1045f030u) + rd32(arg5 + ebx * 4u) * 0x34u;
    wr32(sp0 - 0xccu, t38);
    wr32(sp0 - 0xd0u, sp0 - 0x50u);
    g->eax = t38;
    g->esp = sp0 - 0xc8u;
    t39 = cow_thiscall(g, COW_IMG(0x10032b50u), esi, 2, sp0 - 0x50u, t38);
    eax = t39;
    loc_b8 = rd32(sp0 - 0xb8u);
    loc_d4 = rd32(sp0 - 0xd4u);
    COW_AT(10034e94)
    t40 = rd32(arg5 + ebx * 4u);
    wr32(COW_IMG(0x1045f030u) + t40 * 0x34u, rd32(eax));
    t41 = rd32(eax + 4u);
    wr32(COW_IMG(0x1045f034u) + t40 * 0x34u, t41);
    t42 = rd32(eax + 8u);
    wr32(COW_IMG(0x1045f038u) + t40 * 0x34u, t42);
    t43 = rd32(eax + 0xcu);
    wr32(COW_IMG(0x1045f03cu) + t40 * 0x34u, t43);
    g->eax = t43;
    g->edx = COW_IMG(0x1045f030u) + t40 * 0x34u;
    g->esp = sp0 - 0xc8u;
    t44 = cow_stdcall(g, COW_IMG(0x10032a70u), 0);
    t45 = g->edx;
    eax = t44;
    edx = t45;
    loc_b8 = rd32(sp0 - 0xb8u);
    loc_d4 = rd32(sp0 - 0xd4u);
    COW_AT(10034ec4)
    t46 = rd32(sp0 - 0x84u);
    wr32(COW_IMG(0x1045ec28u) + rd32(arg5 + ebx * 4u) * 4u, 0u);
    edi = t46;
    loc_d0 = sp0 - 0x50u;
    loc_d8 = sp0 - 0x80u;
L_10034ed7: ;
    COW_AT(10034ed7)
    wr32(sp0 - 0xb8u, loc_b8 + 0x10u);
    if ((int32_t)(ebx + 1u) < 2)
    {
        ebx = ebx + 1u;
        loc_b8 = loc_b8 + 0x10u;
        goto L_10034da6;
    }
L_10034eec: ;
    COW_AT(10034eec)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xc8u;
    t47 = cow_stdcall(g, COW_IMG(0x10032a70u), 0);
    t48 = g->edx;
    eax = t47;
    edx = t48;
    COW_AT(10034ef5)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xc8u;
    t49 = cow_stdcall(g, COW_IMG(0x10032a70u), 0);
    t50 = g->edx;
    eax = t49;
    edx = t50;
    COW_AT(10034efe)
    esi = sp0 - 0x50u;
    edi = 2u;
L_10034f07: ;
    COW_AT(10034f07)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xc8u;
    t51 = cow_stdcall(g, COW_IMG(0x10032a70u), 0);
    t52 = g->edx;
    eax = t51;
    edx = t52;
    esi = esi - 0x10u;
    COW_AT(10034f11)
    if (edi != 1u)
    {
        edi = edi - 1u;
        goto L_10034f07;
    }
    COW_AT(10034f14)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xc8u;
    t53 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t54 = g->edx;
    eax = t53;
    edx = t54;
    COW_AT(10034f20)
    g->ebx = rd32(sp0 - 0xbcu);
    g->esi = rd32(sp0 - 0xc4u);
    g->edi = rd32(sp0 - 0xc8u);
    g->ebp = rd32(sp0 - 0xc0u);
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10034c70(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10034c8cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0xc8u);
        in_esi = rd32(sp0 - 0xc4u);
        in_ebp = rd32(sp0 - 0xc0u);
        in_ebx = rd32(sp0 - 0xbcu);
        g->esp = sp0 - 0xc8u;
        wr32(sp0 - 0x84u, self);
        (void)sp0;
        return 1;
    }
    case 0x10034c95u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_84;
        uint32_t loc_bc;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0xc8u;
        (void)sp0;
        return 1;
    }
    case 0x10034c9cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0xc8u;
        (void)sp0;
        return 1;
    }
    case 0x10034ca2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0xc8u;
        (void)sp0;
        return 1;
    }
    case 0x10034cafu:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0xc8u;
        g->ebp = arg5;
        (void)sp0;
        return 1;
    }
    case 0x10034cbau:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0xc8u;
        g->ebp = arg5;
        (void)sp0;
        return 1;
    }
    case 0x10034cc2u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0xc8u;
        g->ebp = arg5;
        (void)sp0;
        return 1;
    }
    case 0x10034cd3u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0xc8u;
        g->ebp = arg5;
        (void)sp0;
        return 1;
    }
    case 0x10034ce7u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0xc8u;
        g->ebp = arg5;
        (void)sp0;
        return 1;
    }
    case 0x10034d07u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_d0;
        uint32_t loc_d4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        g->esp = sp0 - 0xc8u;
        g->ebp = arg5;
        wr32(sp0 - 0xd8u, arg3);
        (void)sp0;
        return 1;
    }
    case 0x10034d29u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0xc8u;
        g->ebp = arg5;
        wr32(sp0 - 0xd4u, arg1);
        wr32(sp0 - 0xd0u, arg3);
        (void)sp0;
        return 1;
    }
    case 0x10034d4fu:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0xc8u;
        g->ebp = arg5;
        (void)sp0;
        return 1;
    }
    case 0x10034d60u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0xc8u;
        g->ebp = arg5;
        wr32(sp0 - 0xccu, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x10034d74u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0xc8u;
        g->ebp = arg5;
        (void)sp0;
        return 1;
    }
    case 0x10034d7du:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0xc8u;
        g->ebp = arg5;
        (void)sp0;
        return 1;
    }
    case 0x10034d8au:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0xc8u;
        g->ebp = arg5;
        (void)sp0;
        return 1;
    }
    case 0x10034d93u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0xc8u;
        g->ebp = arg5;
        (void)sp0;
        return 1;
    }
    case 0x10034d9cu:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0xc8u;
        g->ebp = arg5;
        (void)sp0;
        return 1;
    }
    case 0x10034da6u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b8;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_b8 = rd32(sp0 - 0xb8u);
        g->esp = sp0 - 0xc8u;
        g->ebp = arg5;
        (void)sp0;
        return 1;
    }
    case 0x10034db1u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b8;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_b8 = rd32(sp0 - 0xb8u);
        g->esp = sp0 - 0xc8u;
        g->ebp = arg5;
        (void)sp0;
        return 1;
    }
    case 0x10034db9u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        g->esp = sp0 - 0xc8u;
        g->ebp = arg5;
        (void)sp0;
        return 1;
    }
    case 0x10034dcau:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        g->esp = sp0 - 0xc8u;
        g->ebp = arg5;
        (void)sp0;
        return 1;
    }
    case 0x10034ddeu:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        g->esp = sp0 - 0xc8u;
        g->ebp = arg5;
        (void)sp0;
        return 1;
    }
    case 0x10034dffu:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        g->esp = sp0 - 0xc8u;
        g->ebp = arg5;
        (void)sp0;
        return 1;
    }
    case 0x10034e28u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        g->esp = sp0 - 0xc8u;
        g->ebp = arg5;
        (void)sp0;
        return 1;
    }
    case 0x10034e45u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b8;
        uint32_t loc_d4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_b8 = rd32(sp0 - 0xb8u);
        g->esp = sp0 - 0xd0u;
        g->ebp = arg5;
        wr32(sp0 - 0xd8u, sp0 - 0x80u);
        wr32(sp0 - 0xd0u, sp0 - 0xb4u);
        wr32(sp0 - 0xccu, sp0 - 0xa4u);
        (void)sp0;
        return 1;
    }
    case 0x10034e4cu:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b8;
        uint32_t loc_d4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_b8 = rd32(sp0 - 0xb8u);
        g->esp = sp0 - 0xc8u;
        g->ebp = arg5;
        wr32(sp0 - 0xd8u, sp0 - 0x80u);
        wr32(sp0 - 0xd0u, sp0 - 0xb4u);
        wr32(sp0 - 0xccu, sp0 - 0xa4u);
        (void)sp0;
        return 1;
    }
    case 0x10034e6du:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b8;
        uint32_t loc_d4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_b8 = rd32(sp0 - 0xb8u);
        g->esp = sp0 - 0xc8u;
        g->ebp = arg5;
        wr32(sp0 - 0xd8u, sp0 - 0x80u);
        wr32(sp0 - 0xd0u, sp0 - 0xb4u);
        wr32(sp0 - 0xccu, sp0 - 0xa4u);
        (void)sp0;
        return 1;
    }
    case 0x10034e76u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b8;
        uint32_t loc_d4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_b8 = rd32(sp0 - 0xb8u);
        g->esp = sp0 - 0xc8u;
        g->ebp = arg5;
        wr32(sp0 - 0xd8u, sp0 - 0x80u);
        wr32(sp0 - 0xd0u, sp0 - 0xb4u);
        wr32(sp0 - 0xccu, sp0 - 0xa4u);
        (void)sp0;
        return 1;
    }
    case 0x10034e94u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b8;
        uint32_t loc_d4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_b8 = rd32(sp0 - 0xb8u);
        g->esp = sp0 - 0xc8u;
        g->ebp = arg5;
        wr32(sp0 - 0xd8u, sp0 - 0x80u);
        wr32(sp0 - 0xd0u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x10034ec4u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b8;
        uint32_t loc_d4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_b8 = rd32(sp0 - 0xb8u);
        g->esp = sp0 - 0xc8u;
        g->ebp = arg5;
        wr32(sp0 - 0xd8u, sp0 - 0x80u);
        wr32(sp0 - 0xd0u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x10034ed7u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b8;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_b8 = rd32(sp0 - 0xb8u);
        g->esp = sp0 - 0xc8u;
        g->ebp = arg5;
        (void)sp0;
        return 1;
    }
    case 0x10034eecu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b8;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_b8 = rd32(sp0 - 0xb8u);
        g->esp = sp0 - 0xc8u;
        (void)sp0;
        return 1;
    }
    case 0x10034ef5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xc8u;
        (void)sp0;
        return 1;
    }
    case 0x10034efeu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xc8u;
        (void)sp0;
        return 1;
    }
    case 0x10034f07u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xc8u;
        (void)sp0;
        return 1;
    }
    case 0x10034f11u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xc8u;
        (void)sp0;
        return 1;
    }
    case 0x10034f14u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xc8u;
        (void)sp0;
        return 1;
    }
    case 0x10034f20u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xc8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10034c70(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10034c70(g);
    g->esp = sp0;
    rt_return(g, r, 20u);
}
/* COW_ADAPTER END */
