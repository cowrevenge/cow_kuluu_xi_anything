/* f_0x1027e8f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_1027e8f0(Guest* g)
{
    uint32_t af;
    uint32_t cf;
    double d12;
    double d27;
    double d31;
    double d32;
    double d33;
    double d34;
    double d35;
    double d55;
    double d56;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_a8;
    uint32_t loc_ac;
    uint32_t loc_b0;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
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
    uint32_t t30;
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
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    uint32_t zf;
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
    cow_frame(g, sp0, 236u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1027e907u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xb0u); in_esi = rd32(sp0 - 0xacu); in_ebx = rd32(sp0 - 0xa8u); g->ebx = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xb0u); g->esi = rd32(sp0 - 0xacu); goto E_1027e907;
    case 0x1027e91du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027e91d;
    case 0x1027e922u: eax = g->eax; self = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xb0u); in_esi = rd32(sp0 - 0xacu); in_ebx = rd32(sp0 - 0xa8u); g->ebx = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xb0u); g->esi = rd32(sp0 - 0xacu); goto E_1027e922;
    case 0x1027e938u: eax = g->eax; self = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xb0u); in_esi = rd32(sp0 - 0xacu); in_ebx = rd32(sp0 - 0xa8u); g->ebx = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xb0u); g->esi = rd32(sp0 - 0xacu); goto E_1027e938;
    case 0x1027e949u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027e949;
    case 0x1027e959u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027e959;
    case 0x1027e967u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027e967;
    case 0x1027e97fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027e97f;
    case 0x1027e98au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027e98a;
    case 0x1027e999u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027e999;
    case 0x1027e9a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027e9a6;
    case 0x1027e9b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027e9b6;
    case 0x1027e9c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027e9c8;
    case 0x1027e9d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1027e9d7;
    case 0x1027e9dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1027e9df;
    case 0x1027ea24u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1027ea24;
    case 0x1027ea33u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027ea33;
    case 0x1027ea41u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027ea41;
    case 0x1027ea46u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1027ea46;
    case 0x1027ea48u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027ea48;
    case 0x1027ea4fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027ea4f;
    case 0x1027ea56u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027ea56;
    case 0x1027ea63u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027ea63;
    case 0x1027ea73u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027ea73;
    case 0x1027ea7bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027ea7b;
    case 0x1027ea81u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_b0 = rd32(sp0 - 0xb0u); loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); goto E_1027ea81;
    case 0x1027ea8eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027ea8e;
    case 0x1027ea93u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027ea93;
    case 0x1027ea9eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027ea9e;
    case 0x1027eab4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027eab4;
    case 0x1027eab9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027eab9;
    case 0x1027eacbu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027eacb;
    case 0x1027ead5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027ead5;
    case 0x1027eae6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027eae6;
    case 0x1027eafeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027eafe;
    default: break;
    }
#endif

    COW_AT(1027e8f0)
    wr32(sp0 - 0xa8u, in_ebx);
    wr32(sp0 - 0xacu, in_esi);
    wr32(sp0 - 0xb0u, in_edi);
    if (!(rd32(arg3) >> 8u & 1u)) goto L_1027e922;
    COW_AT(1027e907)
    t1 = (uint32_t)((int32_t)rd32(arg3 + 0x98u) >> 1u);
    wr32(sp0 - 0xb4u, t1);
    wr32(sp0 - 0xb8u, arg2);
    g->eax = t1;
    g->edx = in_edx;
    g->esp = sp0 - 0xacu;
    t2 = cow_thiscall_cdecl(g, COW_IMG(0x1028d930u), arg2, 3, arg2, t1, in_edi);
    t3 = g->ecx;
    t4 = g->edx;
    eax = t2;
    ecx = t3;
    edx = t4;
    COW_AT(1027e91d)
L_1027ea8e: ;
    COW_AT(1027ea8e)
    edi = eax;
L_1027ea93: ;
    COW_AT(1027ea93)
    if (rd32(arg3 + 0x94u) != 0xffffffffu)
    {
        eax = rd32(arg3 + 0x94u);
        goto L_1027eab4;
    }
    COW_AT(1027ea9e)
    t49 = rd32(edi);
    t50 = rd32(sp0 - 0xacu);
    t51 = rd32(sp0 - 0xb0u);
    wr32(arg1 + 0x14u, t49);
    g->ebx = rd32(sp0 - 0xa8u);
    g->esi = t50;
    g->edi = t51;
    g->ebp = in_ebp;
    g->edx = edx;
    return t49;
L_1027e922: ;
    COW_AT(1027e922)
    if (rd32(arg3 + 0x94u) != 0xfffffffeu)
    {
        eax = rd32(arg3 + 0x94u);
        ecx = self;
        loc_a8 = in_ebx;
        loc_ac = in_esi;
        loc_b0 = in_edi;
        goto L_1027ea81;
    }
    COW_AT(1027e938)
    wr32(sp0 - 0xb4u, sp0 - 0xa4u);
    t5 = rd32(arg3 + 0xb4u);
    wr32(sp0 - 0xb8u, t5);
    g->ecx = self;
    g->edx = sp0 - 0xa4u;
    g->esp = sp0 - 0xb0u;
    cow_cdecl(g, COW_IMG(0x10285020u), 2, t5, sp0 - 0xa4u);
    t6 = g->ecx;
    t7 = g->edx;
    ecx = t6;
    edx = t7;
    COW_AT(1027e949)
    if (rd32(sp0 - 0xa4u) != 1u) goto L_1027ea4f;
    eax = rd32(sp0 - 0xa4u);
    COW_AT(1027e959)
    wr32(sp0 - 0xb4u, 0u);
    t8 = rd32(arg3 + 0xb4u);
    wr32(sp0 - 0xb8u, t8);
    g->eax = eax;
    g->ecx = t8;
    g->edx = edx;
    g->esp = sp0 - 0xb0u;
    t9 = cow_cdecl(g, COW_IMG(0x10284ff0u), 2, t8, 0u);
    t10 = g->ecx;
    t11 = g->edx;
    eax = t9;
    ecx = t10;
    edx = t11;
    COW_AT(1027e967)
    d12 = fr(g, (double)rdf32(arg3 + 0xb0u) + (double)rdf32(arg3 + 0xacu));
    wrf32(sp0 - 0xb4u, (float)(double)(float)d12);
    wr32(sp0 - 0xb8u, arg2);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0xb8u;
    t13 = cow_stdcall(g, COW_IMG(0x1028d910u), 0);
    t14 = g->ecx;
    eax = t13;
    ecx = t14;
    cf = g->cf;
    pf = g->pf;
    af = g->af;
    zf = g->zf;
    sf = g->sf;
    of = g->of;
    COW_AT(1027e97f)
    wr32(sp0 - 0xbcu, eax);
    wr32(sp0 - 0xc0u, sp0 - 0x80u);
    g->cf = cf;
    g->pf = pf;
    g->af = af;
    g->zf = zf;
    g->sf = sf;
    g->of = of;
    g->edx = sp0 - 0x80u;
    g->esp = sp0 - 0xacu;
    cow_cdecl(g, COW_IMG(0x1027eb50u), 5, sp0 - 0x80u, eax, rd32(sp0 - 0xb8u), rd32(sp0 - 0xb4u), rd32(sp0 - 0xb0u));
    t15 = g->edx;
    edx = t15;
    COW_AT(1027e98a)
    wr32(sp0 - 0xc4u, sp0 - 0x80u);
    wr32(sp0 - 0xc8u, sp0 - 0x90u);
    g->esp = sp0 - 0xb8u;
    t16 = cow_call_regs(g, COW_IMG(0x1027a8c0u), sp0 - 0x80u, sp0 - 0x90u, g->edx, 1, 4, sp0 - 0x90u, sp0 - 0x80u, sp0 - 0x80u, rd32(sp0 - 0xbcu));
    t17 = g->ecx;
    eax = t16;
    ecx = t17;
    COW_AT(1027e999)
    t18 = rd32(arg3 + 0xacu);
    wr32(sp0 - 0xccu, t18);
    wr32(sp0 - 0xd0u, arg2);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = t18;
    g->esp = sp0 - 0xd0u;
    t19 = cow_stdcall(g, COW_IMG(0x1028d910u), 0);
    t20 = g->ecx;
    t21 = g->edx;
    eax = t19;
    ecx = t20;
    edx = t21;
    cf = g->cf;
    pf = g->pf;
    af = g->af;
    zf = g->zf;
    sf = g->sf;
    of = g->of;
    COW_AT(1027e9a6)
    wr32(sp0 - 0xd4u, eax);
    wr32(sp0 - 0xd8u, sp0 - 0x40u);
    g->cf = cf;
    g->pf = pf;
    g->af = af;
    g->zf = zf;
    g->sf = sf;
    g->of = of;
    g->eax = sp0 - 0x40u;
    g->esp = sp0 - 0xc4u;
    t22 = cow_cdecl(g, COW_IMG(0x1027eb50u), 5, sp0 - 0x40u, eax, rd32(sp0 - 0xd0u), rd32(sp0 - 0xccu), sp0 - 0x90u);
    edi = eax;
    eax = t22;
    COW_AT(1027e9b6)
    wr32(sp0 - 0xdcu, sp0 - 0x40u);
    wr32(sp0 - 0xe0u, sp0 - 0xa0u);
    g->edx = sp0 - 0xa0u;
    g->esp = sp0 - 0xd0u;
    cow_call_regs(g, COW_IMG(0x1027a8c0u), eax, sp0 - 0x40u, g->edx, 1, 4, sp0 - 0xa0u, sp0 - 0x40u, sp0 - 0x40u, rd32(sp0 - 0xd4u));
    t23 = g->edx;
    edx = t23;
    COW_AT(1027e9c8)
    wr32(sp0 - 0xe4u, sp0 - 0x90u);
    wr32(sp0 - 0xe8u, sp0 - 0xa0u);
    g->eax = sp0 - 0x90u;
    g->ecx = sp0 - 0xa0u;
    g->edx = edx;
    g->esp = sp0 - 0xe0u;
    t24 = cow_cdecl(g, COW_IMG(0x1027aee0u), 2, sp0 - 0xa0u, sp0 - 0x90u);
    t25 = g->ecx;
    t26 = g->edx;
    d27 = cow_take_float(g);
    eax = t24;
    ecx = t25;
    edx = t26;
    x0 = d27;
    COW_AT(1027e9d7)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    fpush(g, x0);
    g->esp = sp0 - 0xa8u;
    t28 = cow_cdecl(g, COW_IMG(0x10313820u), 2, rd32(sp0 - 0xb0u), rd32(sp0 - 0xacu));
    t29 = g->ecx;
    t30 = g->edx;
    d31 = cow_take_float(g);
    eax = t28;
    ecx = t29;
    edx = t30;
    x0 = d31;
    COW_AT(1027e9df)
    d32 = fr(g, (double)rdf32(sp0 - 0x74u) - (double)rdf32(sp0 - 0x34u));
    d33 = fr(g, (double)rdf32(sp0 - 0x64u) - (double)rdf32(sp0 - 0x24u));
    d34 = fr(g, (double)rdf32(sp0 - 0x54u) - (double)rdf32(sp0 - 0x14u));
    d35 = fr(g, fr(g, fr(g, d32 * d32) + fr(g, d33 * d33)) + fr(g, d34 * d34));
    if ((cow_fsw(g, d35, (double)rdf32(COW_IMG(0x10340b5cu)), 3u) & 0x4100u) == 0u)
    {
        x0 = fr(g, x0 + x0);
        goto L_1027ea46;
    }
    eax = cow_fsw(g, d35, (double)rdf32(COW_IMG(0x10340b5cu)), 3u) & 0x4100u;
    x0 = fr(g, x0 + x0);
    COW_AT(1027ea24)
    if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10340b58u)), 0u) & 0x4100u) == 0u) goto L_1027ea48;
    eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10340b58u)), 0u) & 0x4100u;
    COW_AT(1027ea33)
    wr32(sp0 - 0xb4u, 1u);
    t36 = rd32(arg3 + 0xb4u);
    wr32(sp0 - 0xb8u, t36);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0xb0u;
    t37 = cow_cdecl(g, COW_IMG(0x10284ff0u), 2, t36, 1u);
    t38 = g->ecx;
    eax = t37;
    ecx = t38;
    COW_AT(1027ea41)
    loc_a8 = rd32(sp0 - 0xa8u);
    loc_ac = rd32(sp0 - 0xacu);
    loc_b0 = rd32(sp0 - 0xb0u);
L_1027ea81: ;
    COW_AT(1027ea81)
    t45 = rd32(arg3 + 0xacu);
    wr32(sp0 - 0xb4u, t45);
    wr32(sp0 - 0xb8u, arg2);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = t45;
    g->esp = sp0 - 0xb8u;
    t46 = cow_stdcall(g, COW_IMG(0x1028d910u), 0);
    t47 = g->ecx;
    t48 = g->edx;
    eax = t46;
    ecx = t47;
    edx = t48;
    goto L_1027ea8e;
L_1027ea46: ;
    COW_AT(1027ea46)
L_1027ea48: ;
    COW_AT(1027ea48)
    eax = (rd32(arg3) & 0xffff00ffu) | (uint32_t)(uint8_t)(rd32(arg3) >> 8u | 4u) << 8u;
L_1027ea7b: ;
    COW_AT(1027ea7b)
    wr32(arg3, eax);
    if (edi != 0u) goto L_1027ea93;
    loc_a8 = rd32(sp0 - 0xa8u);
    loc_ac = rd32(sp0 - 0xacu);
    loc_b0 = rd32(sp0 - 0xb0u);
    goto L_1027ea81;
L_1027ea4f: ;
    COW_AT(1027ea4f)
    if ((rd32(arg3) >> 8u & 4u) == 0u)
    {
        eax = rd32(arg3);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_b0 = rd32(sp0 - 0xb0u);
        goto L_1027ea81;
    }
    COW_AT(1027ea56)
    t39 = rd32(arg3 + 0xacu);
    wr32(sp0 - 0xb4u, t39);
    wr32(sp0 - 0xb8u, arg2);
    g->eax = t39;
    g->edx = edx;
    g->esp = sp0 - 0xb8u;
    t40 = cow_stdcall(g, COW_IMG(0x1028d910u), 0);
    t41 = g->edx;
    eax = t40;
    edx = t41;
    COW_AT(1027ea63)
    wr32(sp0 - 0xbcu, 1u);
    t42 = rd32(arg3 + 0xb4u);
    wr32(sp0 - 0xc0u, t42);
    g->ecx = t42;
    g->edx = edx;
    g->esp = sp0 - 0xb8u;
    cow_cdecl(g, COW_IMG(0x10284ff0u), 2, t42, 1u);
    t43 = g->ecx;
    t44 = g->edx;
    ecx = t43;
    edx = t44;
    edi = eax;
    COW_AT(1027ea73)
    eax = (rd32(arg3) & 0xffff00ffu) | (rd32(arg3) >> 8u & 0xfbu) << 8u;
    goto L_1027ea7b;
L_1027eab4: ;
    COW_AT(1027eab4)
    if (eax != 0xfffffffeu)
    {
        ebp = in_ebp;
    }
    else
    {
        cf = eax < 0xfffffffeu;
        pf = PARITY((uint8_t)(eax + 2u));
        af = (eax ^ 0xfffffffeu ^ eax + 2u) >> 4u & 1u;
        zf = eax + 2u == 0u;
        sf = (int32_t)(eax + 2u) < 0;
        of = ((eax ^ 0xfffffffeu) & (eax ^ eax + 2u)) >> 0x1fu;
    COW_AT(1027eab9)
        wr32(sp0 - 0xb4u, in_ebp);
        wr32(sp0 - 0xb8u, edi);
        wr32(sp0 - 0xbcu, arg1 + 0x1cu);
        g->cf = cf;
        g->pf = pf;
        g->af = af;
        g->zf = zf;
        g->sf = sf;
        g->of = of;
        g->eax = eax;
        g->ecx = ecx;
        g->esp = sp0 - 0xa8u;
        t52 = cow_cdecl(g, COW_IMG(0x1027eb50u), 5, arg1 + 0x1cu, edi, in_ebp, rd32(sp0 - 0xb0u), rd32(sp0 - 0xacu));
        t53 = g->ecx;
        eax = t52;
        ecx = t53;
    COW_AT(1027eacb)
        wr32(sp0 - 0xc0u, arg1 + 0x1cu);
        wr32(sp0 - 0xc4u, arg1 + 0x68u);
        g->edx = arg1 + 0x68u;
        g->esp = sp0 - 0xb4u;
        cow_call_regs(g, COW_IMG(0x1027a8c0u), eax, ecx, g->edx, 1, 4, arg1 + 0x68u, arg1 + 0x1cu, arg1 + 0x1cu, rd32(sp0 - 0xb8u));
        t54 = g->edx;
        edx = t54;
    COW_AT(1027ead5)
        if (rd32(arg3 + 0x9cu) == 0x3f800000u)
        {
            eax = rd32(arg3 + 0x9cu);
            ebp = rd32(sp0 - 0xb4u);
        }
        else
        {
            eax = rd32(arg3 + 0x9cu);
            ebp = rd32(sp0 - 0xb4u);
    COW_AT(1027eae6)
            d55 = fr(g, (double)rdf32(arg1 + 0x28u) * (double)rdf32(arg3 + 0x9cu));
            wrf32(arg1 + 0x28u, (float)d55);
            d56 = fr(g, (double)rdf32(arg1 + 0x48u) * (double)rdf32(arg3 + 0x9cu));
            wrf32(arg1 + 0x48u, (float)d56);
        }
    }
    COW_AT(1027eafe)
    g->ebx = rd32(sp0 - 0xa8u);
    g->esi = rd32(sp0 - 0xacu);
    g->edi = rd32(sp0 - 0xb0u);
    g->ebp = ebp;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1027e8f0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1027e907u:
    {
        uint32_t af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xb0u);
        in_esi = rd32(sp0 - 0xacu);
        in_ebx = rd32(sp0 - 0xa8u);
        g->esp = sp0 - 0xb0u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1027e91du:
    {
        uint32_t af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xb8u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1027e922u:
    {
        uint32_t af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xb0u);
        in_esi = rd32(sp0 - 0xacu);
        in_ebx = rd32(sp0 - 0xa8u);
        g->esp = sp0 - 0xb0u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1027e938u:
    {
        uint32_t af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xb0u);
        in_esi = rd32(sp0 - 0xacu);
        in_ebx = rd32(sp0 - 0xa8u);
        g->esp = sp0 - 0xb0u;
        g->ebx = arg2;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1027e949u:
    {
        uint32_t af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xb8u;
        g->ebx = arg2;
        g->esi = arg3;
        wr32(sp0 - 0xb4u, sp0 - 0xa4u);
        (void)sp0;
        return 1;
    }
    case 0x1027e959u:
    {
        uint32_t af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xb0u;
        g->ebx = arg2;
        g->esi = arg3;
        wr32(sp0 - 0xb4u, sp0 - 0xa4u);
        (void)sp0;
        return 1;
    }
    case 0x1027e967u:
    {
        uint32_t af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xb8u;
        g->ebx = arg2;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1027e97fu:
    {
        uint32_t af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xb8u;
        g->ebx = arg2;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1027e98au:
    {
        uint32_t af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xc0u;
        g->ebx = arg2;
        g->esi = arg3;
        wr32(sp0 - 0xc0u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1027e999u:
    {
        uint32_t af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xc8u;
        g->ebx = arg2;
        g->esi = arg3;
        wr32(sp0 - 0xc8u, sp0 - 0x90u);
        wr32(sp0 - 0xc4u, sp0 - 0x80u);
        wr32(sp0 - 0xc0u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1027e9a6u:
    {
        uint32_t af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xd0u;
        g->ebx = arg2;
        g->esi = arg3;
        wr32(sp0 - 0xc8u, sp0 - 0x90u);
        wr32(sp0 - 0xc4u, sp0 - 0x80u);
        wr32(sp0 - 0xc0u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1027e9b6u:
    {
        uint32_t af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xd8u;
        g->ebx = arg2;
        g->esi = arg3;
        wr32(sp0 - 0xd8u, sp0 - 0x40u);
        wr32(sp0 - 0xc8u, sp0 - 0x90u);
        wr32(sp0 - 0xc4u, sp0 - 0x80u);
        wr32(sp0 - 0xc0u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1027e9c8u:
    {
        uint32_t af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xe0u;
        g->ebx = arg2;
        g->esi = arg3;
        wr32(sp0 - 0xe0u, sp0 - 0xa0u);
        wr32(sp0 - 0xdcu, sp0 - 0x40u);
        wr32(sp0 - 0xd8u, sp0 - 0x40u);
        wr32(sp0 - 0xc8u, sp0 - 0x90u);
        wr32(sp0 - 0xc4u, sp0 - 0x80u);
        wr32(sp0 - 0xc0u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1027e9d7u:
    {
        uint32_t af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xe8u;
        g->ebx = arg2;
        g->esi = arg3;
        wr32(sp0 - 0xe8u, sp0 - 0xa0u);
        wr32(sp0 - 0xe4u, sp0 - 0x90u);
        wr32(sp0 - 0xe0u, sp0 - 0xa0u);
        wr32(sp0 - 0xdcu, sp0 - 0x40u);
        wr32(sp0 - 0xd8u, sp0 - 0x40u);
        wr32(sp0 - 0xc8u, sp0 - 0x90u);
        wr32(sp0 - 0xc4u, sp0 - 0x80u);
        wr32(sp0 - 0xc0u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1027e9dfu:
    {
        uint32_t af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xb0u;
        g->ebx = arg2;
        g->esi = arg3;
        wr32(sp0 - 0xe8u, sp0 - 0xa0u);
        wr32(sp0 - 0xe4u, sp0 - 0x90u);
        wr32(sp0 - 0xe0u, sp0 - 0xa0u);
        wr32(sp0 - 0xdcu, sp0 - 0x40u);
        wr32(sp0 - 0xd8u, sp0 - 0x40u);
        wr32(sp0 - 0xc8u, sp0 - 0x90u);
        wr32(sp0 - 0xc4u, sp0 - 0x80u);
        wr32(sp0 - 0xc0u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1027ea24u:
    {
        uint32_t af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xb0u;
        g->ebx = arg2;
        g->esi = arg3;
        wr32(sp0 - 0xe8u, sp0 - 0xa0u);
        wr32(sp0 - 0xe4u, sp0 - 0x90u);
        wr32(sp0 - 0xe0u, sp0 - 0xa0u);
        wr32(sp0 - 0xdcu, sp0 - 0x40u);
        wr32(sp0 - 0xd8u, sp0 - 0x40u);
        wr32(sp0 - 0xc8u, sp0 - 0x90u);
        wr32(sp0 - 0xc4u, sp0 - 0x80u);
        wr32(sp0 - 0xc0u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1027ea33u:
    {
        uint32_t af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xb0u;
        g->ebx = arg2;
        g->esi = arg3;
        wr32(sp0 - 0xe8u, sp0 - 0xa0u);
        wr32(sp0 - 0xe4u, sp0 - 0x90u);
        wr32(sp0 - 0xe0u, sp0 - 0xa0u);
        wr32(sp0 - 0xdcu, sp0 - 0x40u);
        wr32(sp0 - 0xd8u, sp0 - 0x40u);
        wr32(sp0 - 0xc8u, sp0 - 0x90u);
        wr32(sp0 - 0xc4u, sp0 - 0x80u);
        wr32(sp0 - 0xc0u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1027ea41u:
    {
        uint32_t af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xb8u;
        g->ebx = arg2;
        g->esi = arg3;
        wr32(sp0 - 0xe8u, sp0 - 0xa0u);
        wr32(sp0 - 0xe4u, sp0 - 0x90u);
        wr32(sp0 - 0xe0u, sp0 - 0xa0u);
        wr32(sp0 - 0xdcu, sp0 - 0x40u);
        wr32(sp0 - 0xd8u, sp0 - 0x40u);
        wr32(sp0 - 0xc8u, sp0 - 0x90u);
        wr32(sp0 - 0xc4u, sp0 - 0x80u);
        wr32(sp0 - 0xc0u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1027ea46u:
    {
        uint32_t af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xb0u;
        g->ebx = arg2;
        g->esi = arg3;
        wr32(sp0 - 0xe8u, sp0 - 0xa0u);
        wr32(sp0 - 0xe4u, sp0 - 0x90u);
        wr32(sp0 - 0xe0u, sp0 - 0xa0u);
        wr32(sp0 - 0xdcu, sp0 - 0x40u);
        wr32(sp0 - 0xd8u, sp0 - 0x40u);
        wr32(sp0 - 0xc8u, sp0 - 0x90u);
        wr32(sp0 - 0xc4u, sp0 - 0x80u);
        wr32(sp0 - 0xc0u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1027ea48u:
    {
        uint32_t af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xb0u;
        g->ebx = arg2;
        g->esi = arg3;
        wr32(sp0 - 0xe8u, sp0 - 0xa0u);
        wr32(sp0 - 0xe4u, sp0 - 0x90u);
        wr32(sp0 - 0xe0u, sp0 - 0xa0u);
        wr32(sp0 - 0xdcu, sp0 - 0x40u);
        wr32(sp0 - 0xd8u, sp0 - 0x40u);
        wr32(sp0 - 0xc8u, sp0 - 0x90u);
        wr32(sp0 - 0xc4u, sp0 - 0x80u);
        wr32(sp0 - 0xc0u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1027ea4fu:
    {
        uint32_t af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xb0u;
        g->ebx = arg2;
        g->esi = arg3;
        wr32(sp0 - 0xb4u, sp0 - 0xa4u);
        (void)sp0;
        return 1;
    }
    case 0x1027ea56u:
    {
        uint32_t af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xb0u;
        g->ebx = arg2;
        g->esi = arg3;
        wr32(sp0 - 0xb4u, sp0 - 0xa4u);
        (void)sp0;
        return 1;
    }
    case 0x1027ea63u:
    {
        uint32_t af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xb8u;
        g->ebx = arg2;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1027ea73u:
    {
        uint32_t af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xc0u;
        g->ebx = arg2;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1027ea7bu:
    {
        uint32_t af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xb0u;
        g->ebx = arg2;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1027ea81u:
    {
        uint32_t af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t loc_a8;
        uint32_t loc_ac;
        uint32_t loc_b0;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
        g->esp = sp0 - 0xb0u;
        g->ebx = arg2;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1027ea8eu:
    {
        uint32_t af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xb8u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1027ea93u:
    {
        uint32_t af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xb0u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1027ea9eu:
    {
        uint32_t af;
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xb0u;
        (void)sp0;
        return 1;
    }
    case 0x1027eab4u:
    {
        uint32_t af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xb0u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1027eab9u:
    {
        uint32_t af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xb0u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1027eacbu:
    {
        uint32_t af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xbcu;
        g->ebx = arg1;
        g->ebp = arg1 + 0x1cu;
        g->esi = arg3;
        wr32(sp0 - 0xbcu, arg1 + 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x1027ead5u:
    {
        uint32_t af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xc4u;
        g->ebx = arg1;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1027eae6u:
    {
        uint32_t af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xb0u;
        g->ebx = arg1;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1027eafeu:
    {
        uint32_t af;
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xb0u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1027e8f0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1027e8f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
