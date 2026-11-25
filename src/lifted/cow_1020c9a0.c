/* f_0x1020c9a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1020c9a0(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_104;
    uint32_t loc_108;
    uint32_t loc_10c;
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
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 292u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1020c9b7u: in_eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x104u); g->esi = rd32(sp0 - 0x104u); goto E_1020c9b7;
    case 0x1020c9c6u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x104u); g->esi = rd32(sp0 - 0x104u); goto E_1020c9c6;
    case 0x1020c9d8u: ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x104u); g->esi = rd32(sp0 - 0x104u); goto E_1020c9d8;
    case 0x1020c9dfu: ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x104u); g->esi = rd32(sp0 - 0x104u); goto E_1020c9df;
    case 0x1020c9e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1020c9e4;
    case 0x1020c9ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1020c9ec;
    case 0x1020c9f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1020c9f3;
    case 0x1020ca1du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1020ca1d;
    case 0x1020ca30u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1020ca30;
    case 0x1020ca3fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1020ca3f;
    case 0x1020ca49u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1020ca49;
    case 0x1020ca4fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1020ca4f;
    case 0x1020ca57u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1020ca57;
    case 0x1020ca65u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1020ca65;
    case 0x1020ca98u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1020ca98;
    case 0x1020ca9du: ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x104u); g->esi = rd32(sp0 - 0x104u); goto E_1020ca9d;
    case 0x1020caa2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1020caa2;
    case 0x1020caaau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1020caaa;
    case 0x1020cab3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1020cab3;
    case 0x1020cac4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_108 = rd32(sp0 - 0x108u); goto E_1020cac4;
    case 0x1020cac9u: ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x104u); g->esi = rd32(sp0 - 0x104u); goto E_1020cac9;
    case 0x1020caceu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1020cace;
    case 0x1020cad6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1020cad6;
    case 0x1020cadfu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1020cadf;
    case 0x1020cae5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1020cae5;
    case 0x1020caf2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_10c = rd32(sp0 - 0x10cu); loc_108 = rd32(sp0 - 0x108u); goto E_1020caf2;
    case 0x1020cafau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1020cafa;
    case 0x1020cb07u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_10c = rd32(sp0 - 0x10cu); loc_108 = rd32(sp0 - 0x108u); goto E_1020cb07;
    case 0x1020cb0fu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x104u); g->esi = rd32(sp0 - 0x104u); goto E_1020cb0f;
    case 0x1020cb17u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x104u); g->esi = rd32(sp0 - 0x104u); goto E_1020cb17;
    case 0x1020cb1eu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x104u); g->esi = rd32(sp0 - 0x104u); goto E_1020cb1e;
    case 0x1020cb32u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1020cb32;
    case 0x1020cb48u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1020cb48;
    case 0x1020cb52u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x104u); g->esi = rd32(sp0 - 0x104u); goto E_1020cb52;
    case 0x1020cb57u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1020cb57;
    case 0x1020cb5bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1020cb5b;
    case 0x1020cb60u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1020cb60;
    case 0x1020cb6bu: ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x104u); g->esi = rd32(sp0 - 0x104u); goto E_1020cb6b;
    case 0x1020cb70u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1020cb70;
    case 0x1020cb74u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1020cb74;
    case 0x1020cb79u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1020cb79;
    case 0x1020cb81u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1020cb81;
    case 0x1020cb84u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1020cb84;
    case 0x1020cb8eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1020cb8e;
    case 0x1020cb97u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1020cb97;
    case 0x1020cba2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1020cba2;
    case 0x1020cbadu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1020cbad;
    case 0x1020cbafu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1020cbaf;
    case 0x1020cbb8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_10c = rd32(sp0 - 0x10cu); loc_108 = rd32(sp0 - 0x108u); goto E_1020cbb8;
    case 0x1020cbc2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1020cbc2;
    case 0x1020cbceu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1020cbce;
    case 0x1020cbd1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_10c = rd32(sp0 - 0x10cu); loc_108 = rd32(sp0 - 0x108u); loc_104 = rd32(sp0 - 0x104u); goto E_1020cbd1;
    case 0x1020cbe0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_108 = rd32(sp0 - 0x108u); loc_104 = rd32(sp0 - 0x104u); goto E_1020cbe0;
    default: break;
    }
#endif

    COW_AT(1020c9a0)
    wr32(sp0 - 0x104u, in_esi);
    if (rd32(COW_IMG(0x10664494u)) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
        ebx = in_ebx;
        edi = in_edi;
        loc_104 = in_esi;
        goto L_1020cbe0;
    }
    ecx = rd32(COW_IMG(0x10664494u));
    COW_AT(1020c9b7)
    if ((uint16_t)arg1 != 5u)
    {
        eax = in_eax;
        edx = in_edx;
        ebx = in_ebx;
        edi = in_edi;
        loc_104 = in_esi;
        goto L_1020cbe0;
    }
    COW_AT(1020c9c6)
    if ((uint32_t)(int16_t)arg2 - 1u > 4u)
    {
        eax = (uint32_t)(int16_t)arg2 - 1u;
        edx = in_edx;
        ebx = in_ebx;
        edi = in_edi;
        loc_104 = in_esi;
        goto L_1020cbd1;
    }
    COW_AT(1020c9d8)
    t1 = rd32(COW_IMG(0x1020cbecu) + (uint32_t)(int16_t)arg2 * 4u - 4u);
    switch (t1 - RD)
    {
    case 0x1020c9dfu: goto L_1020c9df;
    case 0x1020ca9du: goto L_1020ca9d;
    case 0x1020cac9u: goto L_1020cac9;
    case 0x1020cb0fu: goto L_1020cb0f;
    case 0x1020cb6bu: goto L_1020cb6b;
    default: rt_fatal(g, COW_IMG(0x1020c9d8u), "switch");
    }
    return 0;
L_1020c9df: ;
    COW_AT(1020c9df)
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = in_edx;
    g->esp = sp0 - 0x104u;
    t38 = cow_thiscall(g, COW_IMG(0x1020a420u), ecx, 0);
    t39 = g->edx;
    eax = t38;
    edx = t39;
    COW_AT(1020c9e4)
    if (eax == 0u)
    {
        ebx = in_ebx;
        edi = in_edi;
        loc_104 = rd32(sp0 - 0x104u);
    }
    else
    {
    COW_AT(1020c9ec)
        if (rd32(self + 0x14u) != 0u)
        {
    COW_AT(1020ca57)
            if (rd32(COW_IMG(0x104dfd98u)) == 0u)
            {
                ebx = in_ebx;
                edi = in_edi;
                loc_104 = rd32(sp0 - 0x104u);
            }
            else
            {
                ecx = rd32(COW_IMG(0x104dfd98u));
    COW_AT(1020ca65)
                t54 = rd16(rd32(COW_IMG(0x10480af0u) + rd16(ecx + 0x40da8u) * 4u) + 0xfcu) >> 1u;
                wr32(sp0 - 0x108u, t54);
                t55 = (uint32_t)(int8_t)rd8(rd32(COW_IMG(0x10480af0u) + rd16(ecx + 0x40da8u) * 4u) + 0xefu);
                wr32(sp0 - 0x10cu, t55);
                wr32(sp0 - 0x110u, eax + 4u);
                g->edx = t54;
                g->esp = sp0 - 0x104u;
                t56 = cow_call_regs(g, COW_IMG(0x101ffc20u), eax + 4u, rd32(COW_IMG(0x10663ab8u)), g->edx, 0, 3, eax + 4u, t55, t54);
                t57 = g->edx;
                eax = t56;
                edx = t57;
    COW_AT(1020ca98)
                ebx = in_ebx;
                edi = in_edi;
                loc_104 = rd32(sp0 - 0x104u);
            }
        }
        else
        {
            ecx = rd32(self + 0x14u);
    COW_AT(1020c9f3)
            wr32(sp0 - 0x108u, in_ebx);
            wr32(sp0 - 0x10cu, in_edi);
            t40 = eax;
            edi = t40 + 8u;
            eax = 0u;
            ecx = 0xffffffffu;
            cf = 0u;
            pf = PARITY(0u);
            af = 0u;
            zf = 1u;
            sf = 0u;
            of = 0u;
            while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
            t41 = ~ecx - 1u;
            edi = COW_IMG(0x1036f9b0u);
            ecx = 0xffffffffu;
            cf = 0u;
            pf = PARITY(0xffu);
            af = 0u;
            zf = 0u;
            sf = 1u;
            of = 0u;
            while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
            t42 = t41 + ~ecx + 3u;
            wr32(sp0 - 0x110u, t42);
            g->eax = t42;
            g->esp = sp0 - 0x104u;
            t43 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ~ecx - 1u, t41, 1, 3, t42, in_edi, in_ebx);
            t44 = g->ecx;
            t45 = g->edx;
            eax = t43;
            ecx = t44;
            edx = t45;
            ebx = t40 + 8u;
    COW_AT(1020ca1d)
            wr32(sp0 - 0x114u, ebx);
            wr32(sp0 - 0x118u, COW_IMG(0x1036f9b0u));
            wr32(sp0 - 0x11cu, COW_IMG(0x1036f9a8u));
            wr32(sp0 - 0x120u, eax);
            g->ebx = ebx;
            g->eax = eax;
            g->esp = sp0 - 0x10cu;
            t46 = cow_cdecl(g, COW_IMG(0x10312031u), 5, eax, COW_IMG(0x1036f9a8u), COW_IMG(0x1036f9b0u), ebx, rd32(sp0 - 0x110u));
            esi = eax;
            eax = t46;
    COW_AT(1020ca30)
            wr32(sp0 - 0x110u, esi);
            g->eax = eax;
            g->edx = rd32(rd32(COW_IMG(0x10662d40u)));
            t47 = rd32(COW_IMG(0x10662d40u));
            t48 = rd32(rd32(COW_IMG(0x10662d40u)));
            g->esp = sp0 - 0x10cu;
            t49 = cow_thiscall(g, rd32(t48 + 0x24u), t47, 1, esi);
            t50 = g->ecx;
            t51 = g->edx;
            eax = t49;
            ecx = t50;
            edx = t51;
    COW_AT(1020ca3f)
            if (esi == 0u)
            {
                ebx = rd32(sp0 - 0x108u);
                edi = rd32(sp0 - 0x10cu);
                loc_104 = rd32(sp0 - 0x104u);
            }
            else
            {
                ebx = rd32(sp0 - 0x108u);
                edi = rd32(sp0 - 0x10cu);
    COW_AT(1020ca49)
                wr32(sp0 - 0x108u, esi);
                g->eax = eax;
                g->esp = sp0 - 0x104u;
                t52 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, esi);
                t53 = g->edx;
                eax = t52;
                edx = t53;
    COW_AT(1020ca4f)
                loc_104 = rd32(sp0 - 0x104u);
            }
        }
    }
L_1020cbd1: ;
    COW_AT(1020cbd1)
    wr32(sp0 - 0x108u, COW_IMG(0x10385a50u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x104u;
    t58 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10385a50u));
    t59 = g->edx;
    eax = t58;
    edx = t59;
    loc_104 = rd32(sp0 - 0x104u);
L_1020cbe0: ;
    COW_AT(1020cbe0)
    g->ebx = ebx;
    g->esi = loc_104;
    g->edi = edi;
    g->edx = edx;
    return eax;
L_1020ca9d: ;
    COW_AT(1020ca9d)
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = in_edx;
    g->esp = sp0 - 0x104u;
    t33 = cow_thiscall(g, COW_IMG(0x1020a420u), ecx, 0);
    t34 = g->edx;
    eax = t33;
    edx = t34;
    COW_AT(1020caa2)
    if (eax == 0u)
    {
        ebx = in_ebx;
        edi = in_edi;
        loc_104 = rd32(sp0 - 0x104u);
    }
    else
    {
    COW_AT(1020caaa)
        t35 = rd32(eax);
        if (t35 != 0u)
        {
            ebx = in_ebx;
            edi = in_edi;
            loc_104 = rd32(sp0 - 0x104u);
        }
        else
        {
    COW_AT(1020cab3)
            wr32(sp0 - 0x108u, 0u);
            wr32(sp0 - 0x10cu, eax + 4u);
            g->edx = edx;
            g->esp = sp0 - 0x104u;
            t36 = cow_call_regs(g, COW_IMG(0x101ffa20u), eax + 4u, rd32(COW_IMG(0x10663ab8u)), g->edx, 0, 2, eax + 4u, 0u);
            t37 = g->edx;
            eax = t36;
            edx = t37;
    COW_AT(1020cac4)
            ebx = in_ebx;
            edi = in_edi;
            loc_104 = rd32(sp0 - 0x104u);
        }
    }
    goto L_1020cbd1;
L_1020cac9: ;
    COW_AT(1020cac9)
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = in_edx;
    g->esp = sp0 - 0x104u;
    t22 = cow_thiscall(g, COW_IMG(0x1020a420u), ecx, 0);
    t23 = g->ecx;
    t24 = g->edx;
    eax = t22;
    ecx = t23;
    edx = t24;
    COW_AT(1020cace)
    if (eax == 0u)
    {
        ebx = in_ebx;
        edi = in_edi;
        loc_104 = rd32(sp0 - 0x104u);
    }
    else
    {
    COW_AT(1020cad6)
        t25 = rd32(eax);
        if (t25 != 0u)
        {
            ebx = in_ebx;
            edi = in_edi;
            loc_104 = rd32(sp0 - 0x104u);
        }
        else
        {
    COW_AT(1020cadf)
            t26 = rd8(eax + 0x34u);
            if ((t26 & 8u) == 0u)
            {
    COW_AT(1020cafa)
                wr32(sp0 - 0x108u, 0u);
                wr32(sp0 - 0x10cu, 0u);
                t30 = rd32(eax + 0x1cu);
                wr32(sp0 - 0x110u, t30);
                g->eax = t30;
                g->edx = edx;
                g->esp = sp0 - 0x104u;
                t31 = cow_cdecl(g, COW_IMG(0x100e8fd0u), 3, t30, 0u, 0u);
                t32 = g->edx;
                eax = t31;
                edx = t32;
    COW_AT(1020cb07)
                ebx = in_ebx;
                edi = in_edi;
                loc_104 = rd32(sp0 - 0x104u);
            }
            else
            {
    COW_AT(1020cae5)
                wr32(sp0 - 0x108u, 5u);
                wr32(sp0 - 0x10cu, 0u);
                t27 = rd32(eax + 0x1cu);
                wr32(sp0 - 0x110u, t27);
                g->eax = eax;
                g->edx = t27;
                g->esp = sp0 - 0x104u;
                t28 = cow_cdecl(g, COW_IMG(0x100e8fd0u), 3, t27, 0u, 5u);
                t29 = g->edx;
                eax = t28;
                edx = t29;
    COW_AT(1020caf2)
                ebx = in_ebx;
                edi = in_edi;
                loc_104 = rd32(sp0 - 0x104u);
            }
        }
    }
    goto L_1020cbd1;
L_1020cb0f: ;
    COW_AT(1020cb0f)
    if (rd32(self + 0x20u) == 0u)
    {
        eax = rd32(self + 0x20u);
        goto L_1020cb52;
    }
    eax = rd32(self + 0x20u);
    COW_AT(1020cb17)
    if (eax != 1u)
    {
        eax = eax - 1u;
        edx = in_edx;
        ebx = in_ebx;
        edi = in_edi;
        loc_104 = in_esi;
        goto L_1020cbd1;
    }
    eax = eax - 1u;
    COW_AT(1020cb1e)
    wr32(sp0 - 0x108u, 0u);
    wr32(sp0 - 0x10cu, 1u);
    wr32(sp0 - 0x110u, 0u);
    wr32(sp0 - 0x114u, 0u);
    wr32(sp0 - 0x118u, 0x140u);
    wr32(sp0 - 0x11cu, 9u);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x114u;
    t11 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x140u);
    t12 = g->edx;
    eax = t11;
    edx = t12;
    COW_AT(1020cb32)
    wr32(sp0 - 0x118u, eax);
    wr32(sp0 - 0x11cu, 0u);
    wr32(sp0 - 0x120u, COW_IMG(0x1020cc00u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x104u;
    t13 = cow_thiscall(g, COW_IMG(0x10210e30u), rd32(COW_IMG(0x10664520u)), 7, COW_IMG(0x1020cc00u), 0u, eax, 0u, 0u, 1u, 0u);
    t14 = g->edx;
    eax = t13;
    edx = t14;
    COW_AT(1020cb48)
    g->ebx = in_ebx;
    g->esi = rd32(sp0 - 0x104u);
    g->edi = in_edi;
    g->edx = edx;
    return eax;
L_1020cb52: ;
    COW_AT(1020cb52)
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x104u;
    t15 = cow_thiscall(g, COW_IMG(0x1020a420u), ecx, 0);
    t16 = g->edx;
    eax = t15;
    edx = t16;
    COW_AT(1020cb57)
    if (eax == 0u)
    {
        ebx = in_ebx;
        edi = in_edi;
        loc_104 = rd32(sp0 - 0x104u);
        goto L_1020cbd1;
    }
    COW_AT(1020cb5b)
    t17 = rd32(eax);
    if (t17 != 0u)
    {
        ebx = in_ebx;
        edi = in_edi;
        loc_104 = rd32(sp0 - 0x104u);
        goto L_1020cbd1;
    }
    COW_AT(1020cb60)
    wr32(sp0 - 0x108u, eax + 8u);
    wr32(sp0 - 0x10cu, COW_IMG(0x1036f560u));
    loc_108 = eax + 8u;
    eax = eax + 8u;
    loc_10c = COW_IMG(0x1036f560u);
L_1020cbb8: ;
    COW_AT(1020cbb8)
    wr32(sp0 - 0x110u, sp0 - 0x100u);
    g->eax = eax;
    g->ecx = sp0 - 0x100u;
    g->esp = sp0 - 0xfcu;
    t18 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, loc_10c, loc_108, rd32(sp0 - 0x104u), rd32(sp0 - 0x100u));
    t19 = g->ecx;
    eax = t18;
    ecx = t19;
    COW_AT(1020cbc2)
    wr32(sp0 - 0x114u, 0u);
    wr32(sp0 - 0x118u, sp0 - 0x100u);
    g->eax = eax;
    g->edx = sp0 - 0x100u;
    g->esp = sp0 - 0x110u;
    t20 = cow_cdecl(g, COW_IMG(0x10080dc0u), 2, sp0 - 0x100u, 0u);
    t21 = g->edx;
    eax = t20;
    edx = t21;
    COW_AT(1020cbce)
    ebx = in_ebx;
    edi = in_edi;
    loc_104 = rd32(sp0 - 0x104u);
    goto L_1020cbd1;
L_1020cb6b: ;
    COW_AT(1020cb6b)
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = in_edx;
    g->esp = sp0 - 0x104u;
    t2 = cow_thiscall(g, COW_IMG(0x1020a420u), ecx, 0);
    t3 = g->edx;
    eax = t2;
    edx = t3;
    COW_AT(1020cb70)
    if (eax == 0u)
    {
        ebx = in_ebx;
        edi = in_edi;
        loc_104 = rd32(sp0 - 0x104u);
        goto L_1020cbd1;
    }
    COW_AT(1020cb74)
    t4 = rd32(eax);
    if (t4 != 0u)
    {
        ebx = in_ebx;
        edi = in_edi;
        loc_104 = rd32(sp0 - 0x104u);
        goto L_1020cbd1;
    }
    COW_AT(1020cb79)
    if (rd32(self + 0x20u) == 0u) goto L_1020cbaf;
    ecx = rd32(self + 0x20u);
    COW_AT(1020cb81)
    if (ecx != 1u)
    {
        ebx = in_ebx;
        edi = in_edi;
        loc_104 = rd32(sp0 - 0x104u);
    }
    else
    {
    COW_AT(1020cb84)
        if (rd32(COW_IMG(0x10664494u)) == 0u)
        {
            ebx = in_ebx;
            edi = in_edi;
            loc_104 = rd32(sp0 - 0x104u);
        }
        else
        {
            ecx = rd32(COW_IMG(0x10664494u));
    COW_AT(1020cb8e)
            wr32(sp0 - 0x108u, eax + 8u);
            g->esp = sp0 - 0x104u;
            cow_call_regs(g, COW_IMG(0x1020c410u), g->eax, g->ecx, edx, 0, 1, eax + 8u);
            t5 = g->edx;
            edx = t5;
    COW_AT(1020cb97)
            g->eax = rd32(rd32(COW_IMG(0x10664494u)));
            g->edx = edx;
            t6 = rd32(rd32(COW_IMG(0x10664494u)));
            g->esp = sp0 - 0x104u;
            t7 = cow_thiscall(g, rd32(t6 + 0x74u), rd32(COW_IMG(0x10664494u)), 0);
            t8 = g->edx;
            eax = t7;
            edx = t8;
    COW_AT(1020cba2)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x104u;
            t9 = cow_thiscall(g, COW_IMG(0x1020c390u), rd32(COW_IMG(0x10664494u)), 0);
            t10 = g->edx;
            eax = t9;
            edx = t10;
    COW_AT(1020cbad)
            ebx = in_ebx;
            edi = in_edi;
            loc_104 = rd32(sp0 - 0x104u);
        }
    }
    goto L_1020cbd1;
L_1020cbaf: ;
    COW_AT(1020cbaf)
    wr32(sp0 - 0x108u, eax + 8u);
    wr32(sp0 - 0x10cu, COW_IMG(0x1036f980u));
    loc_108 = eax + 8u;
    eax = eax + 8u;
    loc_10c = COW_IMG(0x1036f980u);
    goto L_1020cbb8;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1020c9a0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1020c9b7u:
    {
        unsigned af;
        unsigned cf;
        uint32_t ecx;
        uint32_t in_eax;
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
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x1020c9c6u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
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
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x1020c9d8u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x104u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1020c9dfu:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x104u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1020c9e4u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x1020c9ecu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x1020c9f3u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x1020ca1du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x110u;
        (void)sp0;
        return 1;
    }
    case 0x1020ca30u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x1020ca3fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10cu;
        (void)sp0;
        return 1;
    }
    case 0x1020ca49u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x1020ca4fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x1020ca57u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x1020ca65u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x1020ca98u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x1020ca9du:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x104u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1020caa2u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x1020caaau:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x1020cab3u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x1020cac4u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t loc_108;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_108 = rd32(sp0 - 0x108u);
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x1020cac9u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x104u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1020caceu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x1020cad6u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x1020cadfu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x1020cae5u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x1020caf2u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t loc_108;
        uint32_t loc_10c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_10c = rd32(sp0 - 0x10cu);
        loc_108 = rd32(sp0 - 0x108u);
        g->esp = sp0 - 0x110u;
        (void)sp0;
        return 1;
    }
    case 0x1020cafau:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x1020cb07u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t loc_108;
        uint32_t loc_10c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_10c = rd32(sp0 - 0x10cu);
        loc_108 = rd32(sp0 - 0x108u);
        g->esp = sp0 - 0x110u;
        (void)sp0;
        return 1;
    }
    case 0x1020cb0fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
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
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x1020cb17u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebx;
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
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x1020cb1eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebx;
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
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x1020cb32u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x11cu;
        wr32(sp0 - 0x114u, 0u);
        wr32(sp0 - 0x110u, 0u);
        wr32(sp0 - 0x10cu, 1u);
        wr32(sp0 - 0x108u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1020cb48u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x1020cb52u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebx;
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
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x1020cb57u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x1020cb5bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x1020cb60u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x1020cb6bu:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x104u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1020cb70u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x1020cb74u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x1020cb79u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x1020cb81u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x1020cb84u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x1020cb8eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x1020cb97u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x1020cba2u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x1020cbadu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x1020cbafu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x1020cbb8u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t loc_108;
        uint32_t loc_10c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_10c = rd32(sp0 - 0x10cu);
        loc_108 = rd32(sp0 - 0x108u);
        g->esp = sp0 - 0x10cu;
        (void)sp0;
        return 1;
    }
    case 0x1020cbc2u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x110u;
        wr32(sp0 - 0x110u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x1020cbceu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x118u;
        wr32(sp0 - 0x118u, sp0 - 0x100u);
        wr32(sp0 - 0x110u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x1020cbd1u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_104;
        uint32_t loc_108;
        uint32_t loc_10c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_10c = rd32(sp0 - 0x10cu);
        loc_108 = rd32(sp0 - 0x108u);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x1020cbe0u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_104;
        uint32_t loc_108;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_108 = rd32(sp0 - 0x108u);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1020c9a0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1020c9a0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
