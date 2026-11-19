/* f_0x10073430 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_10073430(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_40c;
    uint32_t loc_410;
    uint32_t loc_414;
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
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 1076u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1007345au: eax = g->eax; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0x428u); in_esi = rd32(sp0 - 0x424u); in_ebp = rd32(sp0 - 0x420u); in_ebx = rd32(sp0 - 0x41cu); self = rd32(sp0 - 0x418u); g->ebp = rd32(sp0 - 0x420u); g->ebx = rd32(sp0 - 0x41cu); g->edi = rd32(sp0 - 0x428u); g->esi = rd32(sp0 - 0x424u); goto E_1007345a;
    case 0x10073465u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10073465;
    case 0x1007347bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1007347b;
    case 0x10073486u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; goto E_10073486;
    case 0x1007349au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1007349a;
    case 0x100734e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_414 = rd32(sp0 - 0x414u); loc_410 = rd32(sp0 - 0x410u); loc_40c = rd32(sp0 - 0x40cu); goto E_100734e0;
    case 0x10073504u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10073504;
    case 0x10073516u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_414 = rd32(sp0 - 0x414u); goto E_10073516;
    case 0x1007351bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_414 = rd32(sp0 - 0x414u); goto E_1007351b;
    case 0x10073520u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_414 = rd32(sp0 - 0x414u); goto E_10073520;
    case 0x10073537u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_414 = rd32(sp0 - 0x414u); goto E_10073537;
    case 0x10073550u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10073550;
    case 0x1007355fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1007355f;
    case 0x10073561u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10073561;
    case 0x100735e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100735e9;
    case 0x100735f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100735f4;
    case 0x100735fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100735fb;
    case 0x10073600u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10073600;
    case 0x10073602u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10073602;
    case 0x10073611u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10073611;
    case 0x10073615u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10073615;
    case 0x10073617u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10073617;
    case 0x1007361eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1007361e;
    case 0x10073623u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_414 = rd32(sp0 - 0x414u); goto E_10073623;
    case 0x1007363fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_414 = rd32(sp0 - 0x414u); loc_410 = rd32(sp0 - 0x410u); loc_40c = rd32(sp0 - 0x40cu); goto E_1007363f;
    case 0x10073646u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_414 = rd32(sp0 - 0x414u); loc_410 = rd32(sp0 - 0x410u); loc_40c = rd32(sp0 - 0x40cu); goto E_10073646;
    case 0x1007364au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_414 = rd32(sp0 - 0x414u); loc_410 = rd32(sp0 - 0x410u); loc_40c = rd32(sp0 - 0x40cu); goto E_1007364a;
    case 0x1007364cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_414 = rd32(sp0 - 0x414u); loc_410 = rd32(sp0 - 0x410u); loc_40c = rd32(sp0 - 0x40cu); goto E_1007364c;
    case 0x10073650u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_414 = rd32(sp0 - 0x414u); loc_410 = rd32(sp0 - 0x410u); loc_40c = rd32(sp0 - 0x40cu); goto E_10073650;
    case 0x10073663u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10073663;
    case 0x10073667u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10073667;
    case 0x10073669u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10073669;
    case 0x1007366du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_414 = rd32(sp0 - 0x414u); loc_410 = rd32(sp0 - 0x410u); loc_40c = rd32(sp0 - 0x40cu); goto E_1007366d;
    case 0x10073674u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_414 = rd32(sp0 - 0x414u); loc_410 = rd32(sp0 - 0x410u); loc_40c = rd32(sp0 - 0x40cu); goto E_10073674;
    case 0x10073678u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_414 = rd32(sp0 - 0x414u); loc_410 = rd32(sp0 - 0x410u); loc_40c = rd32(sp0 - 0x40cu); goto E_10073678;
    case 0x1007367au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_414 = rd32(sp0 - 0x414u); loc_410 = rd32(sp0 - 0x410u); loc_40c = rd32(sp0 - 0x40cu); goto E_1007367a;
    case 0x1007367eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_414 = rd32(sp0 - 0x414u); loc_410 = rd32(sp0 - 0x410u); loc_40c = rd32(sp0 - 0x40cu); goto E_1007367e;
    case 0x10073693u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10073693;
    case 0x10073697u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10073697;
    case 0x10073699u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10073699;
    case 0x1007369du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1007369d;
    case 0x1007369fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_414 = rd32(sp0 - 0x414u); loc_410 = rd32(sp0 - 0x410u); loc_40c = rd32(sp0 - 0x40cu); goto E_1007369f;
    case 0x100736a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_414 = rd32(sp0 - 0x414u); loc_410 = rd32(sp0 - 0x410u); loc_40c = rd32(sp0 - 0x40cu); goto E_100736a3;
    case 0x100736aau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_414 = rd32(sp0 - 0x414u); loc_410 = rd32(sp0 - 0x410u); loc_40c = rd32(sp0 - 0x40cu); goto E_100736aa;
    case 0x100736afu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_414 = rd32(sp0 - 0x414u); loc_410 = rd32(sp0 - 0x410u); loc_40c = rd32(sp0 - 0x40cu); goto E_100736af;
    case 0x100736b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_414 = rd32(sp0 - 0x414u); loc_410 = rd32(sp0 - 0x410u); loc_40c = rd32(sp0 - 0x40cu); goto E_100736b1;
    case 0x100736b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_414 = rd32(sp0 - 0x414u); loc_410 = rd32(sp0 - 0x410u); loc_40c = rd32(sp0 - 0x40cu); goto E_100736b5;
    case 0x100736c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100736c6;
    case 0x100736cau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100736ca;
    case 0x100736ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100736cc;
    case 0x100736d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_414 = rd32(sp0 - 0x414u); loc_410 = rd32(sp0 - 0x410u); loc_40c = rd32(sp0 - 0x40cu); goto E_100736d0;
    case 0x100736d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_414 = rd32(sp0 - 0x414u); loc_410 = rd32(sp0 - 0x410u); loc_40c = rd32(sp0 - 0x40cu); goto E_100736d4;
    case 0x100736e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_414 = rd32(sp0 - 0x414u); loc_410 = rd32(sp0 - 0x410u); loc_40c = rd32(sp0 - 0x40cu); goto E_100736e2;
    case 0x100736e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_414 = rd32(sp0 - 0x414u); loc_410 = rd32(sp0 - 0x410u); loc_40c = rd32(sp0 - 0x40cu); goto E_100736e9;
    case 0x100736ffu: eax = g->eax; in_edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x428u); in_esi = rd32(sp0 - 0x424u); in_ebp = rd32(sp0 - 0x420u); in_ebx = rd32(sp0 - 0x41cu); g->ebp = rd32(sp0 - 0x420u); g->ebx = rd32(sp0 - 0x41cu); g->edi = rd32(sp0 - 0x428u); g->esi = rd32(sp0 - 0x424u); goto E_100736ff;
    case 0x10073708u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10073708;
    case 0x10073722u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; goto E_10073722;
    default: break;
    }
#endif

    COW_AT(10073430)
    wr32(sp0 - 0x41cu, in_ebx);
    wr32(sp0 - 0x420u, in_ebp);
    wr32(sp0 - 0x424u, in_esi);
    wr32(sp0 - 0x428u, in_edi);
    wr32(sp0 - 0x418u, self);
    wr32(sp0 - 0x42cu, 0u);
    if ((rd32(arg2 + 4u) & 0x7fu) != 1u)
    {
        eax = rd32(arg2 + 4u) & 0x7fu;
        goto L_100736ff;
    }
    eax = rd32(arg2 + 4u) & 0x7fu;
    COW_AT(1007345a)
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x428u;
    t1 = cow_thiscall(g, COW_IMG(0x10071270u), arg2, 1, 0u);
    t2 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        edx = t2;
        ebp = t1;
        goto L_1007347b;
    }
    ebp = t1;
    COW_AT(10073465)
    t3 = rd32(sp0 - 0x424u);
    t4 = rd32(sp0 - 0x428u);
    wr32(arg1, ebp);
    g->ebx = rd32(sp0 - 0x41cu);
    g->esi = t3;
    g->edi = t4;
    g->ebp = rd32(sp0 - 0x420u);
    return arg1;
L_1007347b: ;
    COW_AT(1007347b)
    if (arg3 != 0u)
    {
    COW_AT(10073486)
        wr32(arg3, ebp);
        t5 = rd32(ebp + 0x14u);
        wr32(sp0 - 0x42cu, t5);
        g->eax = t5;
        g->edx = edx;
        g->esp = sp0 - 0x428u;
        t6 = cow_thiscall(g, COW_IMG(0x10074180u), rd32(COW_IMG(0x1047d128u)), 1, t5);
        t7 = g->edx;
        wr32(ebp + 0x14u, arg3);
        eax = t6;
        edx = t7;
    }
    COW_AT(1007349a)
    g->edx = edx;
    g->esp = sp0 - 0x428u;
    cow_thiscall(g, COW_IMG(0x10072030u), ebp, 0);
    t8 = g->edx;
    wr32(sp0 - 0x42cu, 0u);
    t9 = rd32(ebp + 0x14u);
    wr32(ebp + 0x28u, t9);
    g->edx = t8;
    cow_thiscall(g, COW_IMG(0x10071f70u), ebp, 1, 0u);
    t10 = g->edx;
    t11 = rd32(ebp + 0x14u);
    wr32(sp0 - 0x410u, t11);
    wr32(sp0 - 0x400u, t11);
    wr32(sp0 - 0x414u, 0u);
    t12 = arg2 + (rd32(arg2 + 4u) >> 7u & 0x7ffffu) * 0x10u;
    wr32(sp0 - 0x40cu, t12);
    if (arg2 + (rd32(arg2 + 4u) >> 7u & 0x7ffffu) * 0x10u == 0u)
    {
        edx = t10;
        loc_410 = t11;
        goto L_1007363f;
    }
    eax = t11;
    edx = t10;
    ebx = ebp;
    esi = t12;
    loc_410 = t11;
    loc_414 = 0u;
    loc_40c = t12;
L_100734e0: ;
    COW_AT(100734e0)
    wr32(sp0 - 0x42cu, ebp);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x428u;
    t13 = cow_thiscall(g, COW_IMG(0x10071270u), esi, 1, ebp);
    t14 = g->edx;
    wr32(sp0 - 0x42cu, t13);
    wr32(sp0 - 0x430u, sp0 - 0x408u);
    g->edx = t14;
    t15 = rd32(sp0 - 0x418u);
    cow_thiscall(g, COW_IMG(0x10074140u), t15, 2, sp0 - 0x408u, t13);
    t16 = g->ecx;
    t17 = g->edx;
    if ((rd32(t13 + 0x24u) & 0x7fu) != 1u)
    {
        eax = rd32(t13 + 0x24u) & 0x7fu;
        ecx = t16;
        edx = t17;
        edi = t13;
        loc_414 = rd32(sp0 - 0x414u);
    }
    else
    {
        eax = rd32(t13 + 0x24u) & 0x7fu;
        edi = t13;
    COW_AT(10073504)
        t18 = rd32(sp0 - 0x414u) + 1u;
        wr32(sp0 - 0x414u, t18);
        t19 = rd32(edi + 0x14u);
        wr32(sp0 + t18 * 4u - 0x400u, t19);
        ecx = t19;
        edx = t18;
        ebp = edi;
        loc_414 = t18;
    }
    COW_AT(10073516)
    if (eax == 0x20u) goto L_10073537;
    COW_AT(1007351b)
    if (eax == 0x1bu) goto L_10073537;
    COW_AT(10073520)
    wr32(sp0 - 0x42cu, edi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x428u;
    t20 = cow_thiscall(g, COW_IMG(0x100711e0u), ebx + 4u, 1, edi);
    t21 = g->edx;
    wr32(sp0 - 0x42cu, ebx);
    g->edx = t21;
    t22 = cow_thiscall(g, COW_IMG(0x100711d0u), edi + 4u, 1, ebx);
    t23 = g->edx;
    eax = t22;
    edx = t23;
L_100735e9: ;
    COW_AT(100735e9)
    t42 = rd8(edi + 0x24u);
    wr8(edi + 0x1au, rd8(edi + 0x1au) & 0xfdu);
    if ((t42 & 0x7fu) != 0u)
    {
        loc_414 = rd32(sp0 - 0x414u);
        goto L_10073623;
    }
    COW_AT(100735f4)
    if (rd32(ebp + 0x28u) == 0u)
    {
    COW_AT(10073600)
        ebp = 0u;
    }
    else
    {
        ebp = rd32(ebp + 0x28u);
    COW_AT(100735fb)
        ebp = rd32(ebp);
    }
    COW_AT(10073602)
    if (rd32(sp0 + rd32(sp0 - 0x414u) * 4u - 0x400u) == 0u)
    {
        ecx = rd32(edi + 0x14u);
        edx = rd32(sp0 - 0x414u);
    COW_AT(10073615)
        eax = 0u;
    }
    else
    {
        eax = rd32(sp0 + rd32(sp0 - 0x414u) * 4u - 0x400u);
        ecx = rd32(edi + 0x14u);
        edx = rd32(sp0 - 0x414u);
    COW_AT(10073611)
        eax = rd32(eax);
    }
    COW_AT(10073617)
    wr32(eax + 0x3cu, ecx);
    if ((int32_t)edx <= 0)
    {
        loc_410 = rd32(sp0 - 0x410u);
        goto L_1007363f;
    }
    COW_AT(1007361e)
    wr32(sp0 - 0x414u, edx - 1u);
    loc_414 = edx - 1u;
    edx = edx - 1u;
L_10073623: ;
    COW_AT(10073623)
    t43 = esi + (rd32(esi + 4u) >> 7u & 0x7ffffu) * 0x10u;
    wr32(sp0 - 0x40cu, t43);
    if (esi + (rd32(esi + 4u) >> 7u & 0x7ffffu) * 0x10u != 0u)
    {
        eax = (rd32(esi + 4u) >> 7u & 0x7ffffu) << 4u;
        ebx = edi;
        esi = t43;
        loc_410 = rd32(sp0 - 0x410u);
        loc_40c = t43;
        goto L_100734e0;
    }
    loc_410 = rd32(sp0 - 0x410u);
L_1007363f: ;
    COW_AT(1007363f)
    if (rd32(ebp + 8u) == 0u)
    {
        eax = rd32(ebp + 8u);
    COW_AT(1007364a)
        esi = 0u;
    }
    else
    {
        eax = rd32(ebp + 8u);
    COW_AT(10073646)
        esi = rd32(eax);
    }
    COW_AT(1007364c)
    if (esi == 0u) goto L_1007366d;
L_10073650: ;
    COW_AT(10073650)
    wr32(sp0 - 0x42cu, 1u);
    wr32(sp0 - 0x430u, esi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x428u;
    t44 = cow_stdcall(g, COW_IMG(0x10073a60u), 2, esi, 1u);
    t45 = g->edx;
    if (rd32(esi + 8u) == 0u)
    {
        eax = t44;
        edx = t45;
    COW_AT(10073667)
        esi = 0u;
    }
    else
    {
        eax = t44;
        edx = t45;
        esi = rd32(esi + 8u);
    COW_AT(10073663)
        esi = rd32(esi);
    }
    COW_AT(10073669)
    if (esi != 0u)
    {
        loc_410 = rd32(sp0 - 0x410u);
        goto L_10073650;
    }
    loc_410 = rd32(sp0 - 0x410u);
L_1007366d: ;
    COW_AT(1007366d)
    if (rd32(ebp + 8u) == 0u)
    {
        eax = rd32(ebp + 8u);
    COW_AT(10073678)
        esi = 0u;
    }
    else
    {
        eax = rd32(ebp + 8u);
    COW_AT(10073674)
        esi = rd32(eax);
    }
    COW_AT(1007367a)
    if (esi == 0u) goto L_1007369f;
L_1007367e: ;
    COW_AT(1007367e)
    wr32(sp0 - 0x42cu, 2u);
    wr32(sp0 - 0x430u, esi);
    t46 = rd32(sp0 - 0x418u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x428u;
    t47 = cow_stdcall(g, COW_IMG(0x10073a60u), 2, esi, 2u);
    t48 = g->edx;
    if (rd32(esi + 8u) == 0u)
    {
        eax = t47;
        edx = t48;
        edi = t46;
    COW_AT(10073697)
        esi = 0u;
    }
    else
    {
        eax = t47;
        edx = t48;
        esi = rd32(esi + 8u);
        edi = t46;
    COW_AT(10073693)
        esi = rd32(esi);
    }
    COW_AT(10073699)
    if (esi != 0u)
    {
        loc_410 = rd32(sp0 - 0x410u);
        goto L_1007367e;
    }
    COW_AT(1007369d)
    loc_410 = rd32(sp0 - 0x410u);
L_100736a3: ;
    COW_AT(100736a3)
    if (rd32(ebp + 8u) == 0u)
    {
    COW_AT(100736af)
        esi = 0u;
    }
    else
    {
        ebp = rd32(ebp + 8u);
    COW_AT(100736aa)
        esi = rd32(ebp);
    }
    COW_AT(100736b1)
    if (esi == 0u) goto L_100736d0;
L_100736b5: ;
    COW_AT(100736b5)
    wr32(sp0 - 0x42cu, 4u);
    wr32(sp0 - 0x430u, esi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x428u;
    t49 = cow_stdcall(g, COW_IMG(0x10073a60u), 2, esi, 4u);
    t50 = g->edx;
    if (rd32(esi + 8u) == 0u)
    {
        eax = t49;
        edx = t50;
    COW_AT(100736ca)
        esi = 0u;
    }
    else
    {
        eax = t49;
        edx = t50;
        esi = rd32(esi + 8u);
    COW_AT(100736c6)
        esi = rd32(esi);
    }
    COW_AT(100736cc)
    if (esi != 0u)
    {
        loc_410 = rd32(sp0 - 0x410u);
        goto L_100736b5;
    }
    loc_410 = rd32(sp0 - 0x410u);
L_100736d0: ;
    COW_AT(100736d0)
    esi = loc_410;
L_100736d4: ;
    COW_AT(100736d4)
    if (rd32(rd32(sp0 - 0x418u) + 0x40008u) != 0u)
    {
        eax = rd32(rd32(sp0 - 0x418u) + 0x40008u);
    COW_AT(100736e2)
        g->esp = sp0 - 0x428u;
        cow_thiscall(g, COW_IMG(0x10071e50u), rd32(esi), 0);
    }
    COW_AT(100736e9)
    t57 = rd32(sp0 - 0x428u);
    wr32(arg1, esi);
    g->ebx = rd32(sp0 - 0x41cu);
    g->esi = rd32(sp0 - 0x424u);
    g->edi = t57;
    g->ebp = rd32(sp0 - 0x420u);
    return arg1;
L_10073537: ;
    COW_AT(10073537)
    wr32(sp0 - 0x42cu, 1u);
    wr32(sp0 - 0x430u, 0x40u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x41cu;
    t24 = cow_cdecl(g, COW_IMG(0x100286b0u), 5, 0x40u, 1u, rd32(sp0 - 0x428u), rd32(sp0 - 0x424u), rd32(sp0 - 0x420u));
    t25 = g->edx;
    wr8(COW_IMG(0x1047d12cu), 1u);
    if (t24 == 0u)
    {
    COW_AT(1007355f)
        esi = 0u;
    }
    else
    {
        eax = t24;
        edx = t25;
        esi = t24;
    COW_AT(10073550)
        g->esp = sp0 - 0x428u;
        cow_thiscall(g, COW_IMG(0x10071d80u), esi, 0);
        wr32(esi, COW_IMG(0x1032c934u));
    }
    COW_AT(10073561)
    wr32(esi + 0x20u, 0u);
    wr32(esi + 0x24u, 0u);
    wr32(esi + 0x28u, 0u);
    wr32(esi + 0x2cu, 0u);
    t26 = (rd32(esi + 0x24u) & 0xffffff80u) ^ 0xau;
    wr32(esi + 0x24u, t26);
    t27 = (rd32(esi + 0x24u) & 0xfc00007fu) | (uint32_t)(uint8_t)((rd32(esi + 0x24u) & 0xfc00027fu) >> 8u | 2u) << 8u;
    wr32(esi + 0x24u, t27);
    t28 = rd32(edi + 0x20u);
    wr32(esi + 0x20u, t28);
    wr32(sp0 - 0x42cu, edi + 0x31u);
    g->esp = sp0 - 0x428u;
    cow_thiscall(g, COW_IMG(0x10076750u), esi, 1, edi + 0x31u);
    t29 = g->ecx;
    t30 = rd32(ebp + 0x14u);
    wr32(esi + 0x28u, t30);
    wr32(sp0 - 0x42cu, esi);
    wr32(sp0 - 0x430u, sp0 - 0x404u);
    wr16(esi + 0x1au, (rd16(esi + 0x1au) & 0xfff9u) | 1u);
    g->eax = t30;
    g->edx = sp0 - 0x404u;
    t31 = cow_thiscall(g, COW_IMG(0x10074140u), rd32(sp0 - 0x418u), 2, sp0 - 0x404u, esi);
    t32 = g->edx;
    wr32(sp0 - 0x42cu, esi);
    g->edx = t32;
    t33 = cow_thiscall(g, COW_IMG(0x100711e0u), ebx + 4u, 1, esi);
    t34 = g->edx;
    wr32(sp0 - 0x42cu, ebx);
    g->edx = t34;
    t35 = cow_thiscall(g, COW_IMG(0x100711d0u), esi + 4u, 1, ebx);
    t36 = g->ecx;
    t37 = g->edx;
    wr32(sp0 - 0x42cu, edi);
    g->edx = t37;
    t38 = cow_thiscall(g, COW_IMG(0x100711e0u), t36, 1, edi);
    t39 = g->edx;
    wr32(sp0 - 0x42cu, esi);
    g->edx = t39;
    t40 = cow_thiscall(g, COW_IMG(0x100711d0u), edi + 4u, 1, esi);
    t41 = g->edx;
    eax = t40;
    edx = t41;
    esi = rd32(sp0 - 0x40cu);
    goto L_100735e9;
L_1007369f: ;
    COW_AT(1007369f)
    edi = rd32(sp0 - 0x418u);
    goto L_100736a3;
L_100736ff: ;
    COW_AT(100736ff)
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x428u;
    t51 = cow_thiscall(g, COW_IMG(0x10071270u), arg2, 1, 0u);
    t52 = g->edx;
    if (t51 != 0u)
    {
        eax = t51;
        edx = t52;
        goto L_10073722;
    }
    COW_AT(10073708)
    t53 = rd32(sp0 - 0x420u);
    t54 = rd32(sp0 - 0x424u);
    t55 = rd32(sp0 - 0x428u);
    wr32(arg1, 0u);
    g->ebx = rd32(sp0 - 0x41cu);
    g->esi = t54;
    g->edi = t55;
    g->ebp = t53;
    return arg1;
L_10073722: ;
    COW_AT(10073722)
    wr32(sp0 - 0x42cu, 7u);
    wr32(sp0 - 0x430u, eax);
    g->edx = edx;
    g->esp = sp0 - 0x428u;
    cow_stdcall(g, COW_IMG(0x10073a60u), 2, eax, 7u);
    t56 = g->edx;
    edx = t56;
    esi = 0u;
    goto L_100736d4;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10073430(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1007345au:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x428u);
        in_esi = rd32(sp0 - 0x424u);
        in_ebp = rd32(sp0 - 0x420u);
        in_ebx = rd32(sp0 - 0x41cu);
        self = rd32(sp0 - 0x418u);
        g->esp = sp0 - 0x42cu;
        g->ecx = arg2;
        g->edi = arg2;
        wr32(sp0 - 0x42cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10073465u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x1007347bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x428u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10073486u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x428u;
        g->esi = arg3;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1007349au:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x428u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100734e0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40c;
        uint32_t loc_410;
        uint32_t loc_414;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_414 = rd32(sp0 - 0x414u);
        loc_410 = rd32(sp0 - 0x410u);
        loc_40c = rd32(sp0 - 0x40cu);
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x10073504u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x428u;
        wr32(sp0 - 0x430u, sp0 - 0x408u);
        (void)sp0;
        return 1;
    }
    case 0x10073516u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_414;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_414 = rd32(sp0 - 0x414u);
        g->esp = sp0 - 0x428u;
        wr32(sp0 - 0x430u, sp0 - 0x408u);
        (void)sp0;
        return 1;
    }
    case 0x1007351bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_414;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_414 = rd32(sp0 - 0x414u);
        g->esp = sp0 - 0x428u;
        wr32(sp0 - 0x430u, sp0 - 0x408u);
        (void)sp0;
        return 1;
    }
    case 0x10073520u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_414;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_414 = rd32(sp0 - 0x414u);
        g->esp = sp0 - 0x428u;
        wr32(sp0 - 0x430u, sp0 - 0x408u);
        (void)sp0;
        return 1;
    }
    case 0x10073537u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_414;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_414 = rd32(sp0 - 0x414u);
        g->esp = sp0 - 0x428u;
        wr32(sp0 - 0x430u, sp0 - 0x408u);
        (void)sp0;
        return 1;
    }
    case 0x10073550u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x1007355fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x10073561u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x100735e9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x100735f4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x100735fbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x10073600u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x10073602u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x10073611u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x10073615u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x10073617u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x1007361eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x10073623u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_414;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_414 = rd32(sp0 - 0x414u);
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x1007363fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40c;
        uint32_t loc_410;
        uint32_t loc_414;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_414 = rd32(sp0 - 0x414u);
        loc_410 = rd32(sp0 - 0x410u);
        loc_40c = rd32(sp0 - 0x40cu);
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x10073646u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40c;
        uint32_t loc_410;
        uint32_t loc_414;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_414 = rd32(sp0 - 0x414u);
        loc_410 = rd32(sp0 - 0x410u);
        loc_40c = rd32(sp0 - 0x40cu);
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x1007364au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40c;
        uint32_t loc_410;
        uint32_t loc_414;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_414 = rd32(sp0 - 0x414u);
        loc_410 = rd32(sp0 - 0x410u);
        loc_40c = rd32(sp0 - 0x40cu);
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x1007364cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40c;
        uint32_t loc_410;
        uint32_t loc_414;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_414 = rd32(sp0 - 0x414u);
        loc_410 = rd32(sp0 - 0x410u);
        loc_40c = rd32(sp0 - 0x40cu);
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x10073650u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40c;
        uint32_t loc_410;
        uint32_t loc_414;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_414 = rd32(sp0 - 0x414u);
        loc_410 = rd32(sp0 - 0x410u);
        loc_40c = rd32(sp0 - 0x40cu);
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x10073663u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x10073667u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x10073669u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x1007366du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40c;
        uint32_t loc_410;
        uint32_t loc_414;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_414 = rd32(sp0 - 0x414u);
        loc_410 = rd32(sp0 - 0x410u);
        loc_40c = rd32(sp0 - 0x40cu);
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x10073674u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40c;
        uint32_t loc_410;
        uint32_t loc_414;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_414 = rd32(sp0 - 0x414u);
        loc_410 = rd32(sp0 - 0x410u);
        loc_40c = rd32(sp0 - 0x40cu);
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x10073678u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40c;
        uint32_t loc_410;
        uint32_t loc_414;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_414 = rd32(sp0 - 0x414u);
        loc_410 = rd32(sp0 - 0x410u);
        loc_40c = rd32(sp0 - 0x40cu);
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x1007367au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40c;
        uint32_t loc_410;
        uint32_t loc_414;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_414 = rd32(sp0 - 0x414u);
        loc_410 = rd32(sp0 - 0x410u);
        loc_40c = rd32(sp0 - 0x40cu);
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x1007367eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40c;
        uint32_t loc_410;
        uint32_t loc_414;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_414 = rd32(sp0 - 0x414u);
        loc_410 = rd32(sp0 - 0x410u);
        loc_40c = rd32(sp0 - 0x40cu);
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x10073693u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x10073697u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x10073699u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x1007369du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x1007369fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40c;
        uint32_t loc_410;
        uint32_t loc_414;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_414 = rd32(sp0 - 0x414u);
        loc_410 = rd32(sp0 - 0x410u);
        loc_40c = rd32(sp0 - 0x40cu);
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x100736a3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40c;
        uint32_t loc_410;
        uint32_t loc_414;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_414 = rd32(sp0 - 0x414u);
        loc_410 = rd32(sp0 - 0x410u);
        loc_40c = rd32(sp0 - 0x40cu);
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x100736aau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40c;
        uint32_t loc_410;
        uint32_t loc_414;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_414 = rd32(sp0 - 0x414u);
        loc_410 = rd32(sp0 - 0x410u);
        loc_40c = rd32(sp0 - 0x40cu);
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x100736afu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40c;
        uint32_t loc_410;
        uint32_t loc_414;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_414 = rd32(sp0 - 0x414u);
        loc_410 = rd32(sp0 - 0x410u);
        loc_40c = rd32(sp0 - 0x40cu);
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x100736b1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40c;
        uint32_t loc_410;
        uint32_t loc_414;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_414 = rd32(sp0 - 0x414u);
        loc_410 = rd32(sp0 - 0x410u);
        loc_40c = rd32(sp0 - 0x40cu);
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x100736b5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40c;
        uint32_t loc_410;
        uint32_t loc_414;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_414 = rd32(sp0 - 0x414u);
        loc_410 = rd32(sp0 - 0x410u);
        loc_40c = rd32(sp0 - 0x40cu);
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x100736c6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x100736cau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x100736ccu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x100736d0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40c;
        uint32_t loc_410;
        uint32_t loc_414;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_414 = rd32(sp0 - 0x414u);
        loc_410 = rd32(sp0 - 0x410u);
        loc_40c = rd32(sp0 - 0x40cu);
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x100736d4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40c;
        uint32_t loc_410;
        uint32_t loc_414;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_414 = rd32(sp0 - 0x414u);
        loc_410 = rd32(sp0 - 0x410u);
        loc_40c = rd32(sp0 - 0x40cu);
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x100736e2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40c;
        uint32_t loc_410;
        uint32_t loc_414;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_414 = rd32(sp0 - 0x414u);
        loc_410 = rd32(sp0 - 0x410u);
        loc_40c = rd32(sp0 - 0x40cu);
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x100736e9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40c;
        uint32_t loc_410;
        uint32_t loc_414;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_414 = rd32(sp0 - 0x414u);
        loc_410 = rd32(sp0 - 0x410u);
        loc_40c = rd32(sp0 - 0x40cu);
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x100736ffu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x428u);
        in_esi = rd32(sp0 - 0x424u);
        in_ebp = rd32(sp0 - 0x420u);
        in_ebx = rd32(sp0 - 0x41cu);
        g->esp = sp0 - 0x42cu;
        g->ecx = arg2;
        g->esi = 0u;
        wr32(sp0 - 0x42cu, 0u);
        wr32(sp0 - 0x418u, self);
        (void)sp0;
        return 1;
    }
    case 0x10073708u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x10073722u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x428u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10073430(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10073430(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
