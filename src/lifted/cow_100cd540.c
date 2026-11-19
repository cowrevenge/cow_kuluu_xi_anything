/* f_0x100cd540 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=11 */
uint32_t cow_fn_100cd540(Guest* g)
{
    uint32_t cf;
    double d44;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_3c;
    uint32_t loc_44;
    uint32_t loc_48;
    uint32_t loc_4c;
    uint32_t loc_50;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
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
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
    uint32_t t64;
    uint32_t t65;
    uint32_t t66;
    uint32_t t67;
    uint32_t t68;
    uint32_t t69;
    uint32_t t7;
    uint32_t t70;
    uint32_t t71;
    uint32_t t72;
    uint32_t t73;
    uint32_t t74;
    uint32_t t75;
    uint32_t t76;
    uint32_t t77;
    uint32_t t78;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg6 = rd32(sp0 + 0x18u);
    const uint32_t arg7 = rd32(sp0 + 0x1cu);
    const uint32_t arg9 = rd32(sp0 + 0x24u);
    const uint32_t arg10 = rd32(sp0 + 0x28u);
    const uint32_t arg11 = rd32(sp0 + 0x2cu);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 124u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100cd579u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_3c = rd32(sp0 - 0x3cu); goto E_100cd579;
    case 0x100cd581u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_3c = rd32(sp0 - 0x3cu); goto E_100cd581;
    case 0x100cd585u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_3c = rd32(sp0 - 0x3cu); goto E_100cd585;
    case 0x100cd587u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_3c = rd32(sp0 - 0x3cu); goto E_100cd587;
    case 0x100cd5a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100cd5a9;
    case 0x100cd5bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100cd5bc;
    case 0x100cd5cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100cd5cb;
    case 0x100cd5d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100cd5d0;
    case 0x100cd5e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100cd5e8;
    case 0x100cd5edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100cd5ed;
    case 0x100cd5f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100cd5f7;
    case 0x100cd606u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100cd606;
    case 0x100cd616u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100cd616;
    case 0x100cd626u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100cd626;
    case 0x100cd62eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100cd62e;
    case 0x100cd637u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100cd637;
    case 0x100cd650u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100cd650;
    case 0x100cd660u: edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100cd660;
    case 0x100cd66au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100cd66a;
    case 0x100cd6a3u: edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100cd6a3;
    case 0x100cd6adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100cd6ad;
    case 0x100cd6e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100cd6e4;
    case 0x100cd6ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100cd6ff;
    case 0x100cd716u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100cd716;
    case 0x100cd71au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100cd71a;
    case 0x100cd725u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100cd725;
    case 0x100cd729u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100cd729;
    case 0x100cd740u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100cd740;
    case 0x100cd75eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100cd75e;
    case 0x100cd762u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100cd762;
    case 0x100cd76au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100cd76a;
    case 0x100cd76eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100cd76e;
    case 0x100cd770u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100cd770;
    case 0x100cd78fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100cd78f;
    case 0x100cd7a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100cd7a2;
    case 0x100cd7afu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100cd7af;
    case 0x100cd7b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100cd7b4;
    case 0x100cd7ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100cd7cc;
    case 0x100cd7d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100cd7d1;
    case 0x100cd7dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100cd7df;
    case 0x100cd7eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100cd7ee;
    case 0x100cd7feu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100cd7fe;
    case 0x100cd80au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100cd80a;
    case 0x100cd813u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100cd813;
    case 0x100cd820u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100cd820;
    case 0x100cd830u: edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100cd830;
    case 0x100cd83au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100cd83a;
    case 0x100cd870u: edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100cd870;
    case 0x100cd87au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100cd87a;
    case 0x100cd8aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100cd8ae;
    case 0x100cd8c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100cd8c3;
    case 0x100cd8dau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100cd8da;
    case 0x100cd8deu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100cd8de;
    case 0x100cd8e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100cd8e9;
    case 0x100cd8edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100cd8ed;
    case 0x100cd904u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100cd904;
    default: break;
    }
#endif

    COW_AT(100cd540)
    wr32(sp0 - 0x44u, in_ebx);
    wr32(sp0 - 0x48u, in_ebp);
    t1 = rd32(sp0 + 0x20u);
    t2 = rd32(sp0 + 8u);
    wr8(sp0 - 0x3fu, t2 == 0x2a706d6au);
    wr32(sp0 - 0x4cu, in_esi);
    wr32(sp0 - 0x50u, in_edi);
    wr8(sp0 - 0x40u, 0u);
    wr8(sp0 - 0x3eu, 0u);
    wr8(sp0 - 0x3du, 0u);
    wr32(sp0 + 8u, t2 & 0xffffffu);
    wr32(sp0 - 0x3cu, t1);
    edx = in_edx;
    ebx = t1;
    ebp = t1;
    loc_44 = in_ebx;
    loc_48 = in_ebp;
    loc_4c = in_esi;
    loc_50 = in_edi;
    loc_3c = t1;
L_100cd579: ;
    COW_AT(100cd579)
    if (rd32(sp0 + 4u) == 0u)
    {
        edi = rd32(sp0 + 4u);
    COW_AT(100cd585)
        eax = 0u;
    }
    else
    {
        edi = rd32(sp0 + 4u);
    COW_AT(100cd581)
        eax = rd32(edi);
    }
    COW_AT(100cd587)
    wr32(sp0 - 0x54u, 0xffffffu);
    t3 = rd32(sp0 + 8u);
    wr32(sp0 - 0x58u, t3);
    wr32(sp0 - 0x5cu, 0x2bu);
    wr32(sp0 - 0x60u, eax);
    g->edx = edx;
    g->esp = sp0 - 0x50u;
    cow_thiscall(g, COW_IMG(0x100742b0u), sp0 - 0x38u, 4, eax, 0x2bu, t3, 0xffffffu);
    t4 = g->ecx;
    t5 = g->edx;
    if (rd32(sp0 - 0x24u) == 0u)
    {
        eax = rd32(sp0 - 0x24u);
        edx = t5;
        goto L_100cd71a;
    }
    eax = rd32(sp0 - 0x24u);
    ecx = t4;
L_100cd5a9: ;
    COW_AT(100cd5a9)
    t6 = rd8(rd32(rd32(eax + 0x14u)) + 0x23u);
    t7 = rd32(rd32(eax + 0x14u));
    t8 = rd32(eax + 0x14u);
    wr8(sp0 - 0x3eu, (uint8_t)t6);
    if ((int32_t)ebx >= 5)
    {
        eax = (eax & 0xffffff00u) | t6;
        edx = t7;
        ebp = ebx;
        edi = t8;
    }
    else
    {
        eax = (eax & 0xffffff00u) | t6;
        edx = t7;
        edi = t8;
    COW_AT(100cd5bc)
        wr32(sp0 - 0x54u, sp0 - 0x3eu);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x50u;
        t9 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), sp0 - 0x3eu, 1, sp0 - 0x3eu);
        t10 = g->ecx;
        t11 = g->edx;
        eax = t9;
        ecx = t10;
        edx = t11;
        ebp = t9;
    }
    COW_AT(100cd5cb)
    if ((int32_t)ebp < 7)
    {
    COW_AT(100cd5e8)
        if (ebp != 2u) goto L_100cd626;
    COW_AT(100cd5ed)
        if (rd8(self + 0x881u) != 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0x881u);
            goto L_100cd626;
        }
        eax = (eax & 0xffffff00u) | rd8(self + 0x881u);
    COW_AT(100cd5f7)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x50u;
        t16 = cow_thiscall(g, COW_IMG(0x10084400u), self, 0);
        t17 = g->edx;
        if (t16 == 0u)
        {
            eax = t16;
            edx = t17;
            goto L_100cd6ff;
        }
        eax = t16;
        edx = t17;
    COW_AT(100cd606)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x50u;
        t18 = cow_thiscall(g, COW_IMG(0x10084400u), self, 0);
        t19 = g->edx;
        if (t18 == 1u)
        {
            eax = t18;
            edx = t19;
            goto L_100cd6ff;
        }
        eax = t18;
        edx = t19;
    COW_AT(100cd616)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x50u;
        t20 = cow_thiscall(g, COW_IMG(0x10084400u), self, 0);
        t21 = g->edx;
        if (t20 == 6u)
        {
            eax = t20;
            edx = t21;
            goto L_100cd6ff;
        }
        eax = t20;
        edx = t21;
L_100cd626: ;
    COW_AT(100cd626)
        if (rd8(sp0 - 0x3fu) == 0u)
        {
            cf = 0u;
            pf = PARITY(rd8(sp0 - 0x3fu));
            zf = rd8(sp0 - 0x3fu) == 0u;
            sf = (int8_t)rd8(sp0 - 0x3fu) < 0;
            of = 0u;
            goto L_100cd637;
        }
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x3fu);
    COW_AT(100cd62e)
        if (ebp == 1u) goto L_100cd6ff;
        cf = ebp < 1u;
        pf = PARITY((uint8_t)(ebp - 1u));
        zf = ebp == 1u;
        sf = (int32_t)(ebp - 1u) < 0;
        of = ((ebp ^ 1u) & (ebp ^ ebp - 1u)) >> 0x1fu;
L_100cd637: ;
    COW_AT(100cd637)
        t22 = 1u << (ebp & 0x1fu);
        t23 = rd32(COW_IMG(0x1048a38cu));
        wr32(sp0 + 0x20u, t22);
        if ((t23 & 1u << (ebp & 0x1fu)) != 0u)
        {
            eax = t22;
        }
        else
        {
    COW_AT(100cd650)
            if (arg9 == 0u)
            {
    COW_AT(100cd6a3)
                g->eax = arg9;
                g->edx = edx;
                g->esp = sp0 - 0x50u;
                t29 = cow_thiscall(g, COW_IMG(0x1002b5a0u), self + 0x674u, 0);
                t30 = g->edx;
                if (rd32(t29) == 0u)
                {
                    edx = t30;
                }
                else
                {
                    eax = t29;
                    edx = t30;
    COW_AT(100cd6ad)
                    g->eax = eax;
                    g->esp = sp0 - 0x50u;
                    t31 = cow_thiscall(g, COW_IMG(0x1002b5a0u), self + 0x674u, 0);
                    wr32(sp0 - 0x54u, arg11);
                    wr32(sp0 - 0x58u, arg10);
                    wr32(sp0 - 0x5cu, ebp);
                    wr32(sp0 - 0x60u, arg7);
                    wr32(sp0 - 0x64u, arg6);
                    wr32(sp0 - 0x68u, arg5);
                    t32 = rd32(sp0 + 0x10u);
                    wr32(sp0 - 0x6cu, t32);
                    wr32(sp0 - 0x70u, arg3);
                    wr32(sp0 - 0x74u, edi);
                    wr32(sp0 - 0x78u, self);
                    g->edx = arg3;
                    cow_thiscall(g, COW_IMG(0x1001a660u), rd32(t31) + 0x24u, 10, self, edi, arg3, t32, arg5, arg6, arg7, ebp, arg10, arg11);
                    t33 = g->edx;
                    edx = t33;
                }
            }
            else
            {
    COW_AT(100cd660)
                g->eax = arg9;
                g->edx = edx;
                g->esp = sp0 - 0x50u;
                t24 = cow_thiscall(g, COW_IMG(0x1002b5a0u), self + 0x674u, 0);
                t25 = g->edx;
                if (rd32(t24) == 0u)
                {
                    edx = t25;
                }
                else
                {
                    eax = t24;
                    edx = t25;
    COW_AT(100cd66a)
                    g->eax = eax;
                    g->esp = sp0 - 0x50u;
                    t26 = cow_thiscall(g, COW_IMG(0x1002b5a0u), self + 0x674u, 0);
                    wr32(sp0 - 0x54u, arg11);
                    wr32(sp0 - 0x58u, arg10);
                    wr32(sp0 - 0x5cu, ebp);
                    wr32(sp0 - 0x60u, arg7);
                    wr32(sp0 - 0x64u, arg6);
                    wr32(sp0 - 0x68u, arg5);
                    t27 = rd32(sp0 + 0x10u);
                    wr32(sp0 - 0x6cu, t27);
                    wr32(sp0 - 0x70u, arg3);
                    wr32(sp0 - 0x74u, edi);
                    wr32(sp0 - 0x78u, self);
                    g->edx = t27;
                    cow_thiscall(g, COW_IMG(0x1001a6e0u), rd32(t26) + 0x24u, 10, self, edi, arg3, t27, arg5, arg6, arg7, ebp, arg10, arg11);
                    t28 = g->edx;
                    edx = t28;
                }
            }
    COW_AT(100cd6e4)
            t34 = rd32(COW_IMG(0x1048a38cu)) | rd32(sp0 + 0x20u);
            t35 = rd32(sp0 + 0x20u);
            t36 = rd32(sp0 - 0x3cu);
            wr32(COW_IMG(0x1048a38cu), t34);
            wr8(sp0 - 0x40u, 1u);
            eax = t35;
            ebx = t36;
        }
    }
    else
    {
    COW_AT(100cd5d0)
        t12 = rd32(rd32(edi) + 0x20u);
        wr32(sp0 - 0x54u, t12);
        wr32(sp0 - 0x58u, COW_IMG(0x1035f850u));
        g->eax = t12;
        g->edx = rd32(edi);
        t13 = rd32(edi);
        g->esp = sp0 - 0x58u;
        t14 = cow_stdcall(g, COW_IMG(0x10017d20u), 0);
        t15 = g->edx;
        eax = t14;
        edx = t15;
    }
L_100cd6ff: ;
    COW_AT(100cd6ff)
    wr32(sp0 - 0x54u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x50u;
    cow_thiscall(g, COW_IMG(0x100745c0u), sp0 - 0x38u, 1, 0u);
    t37 = g->ecx;
    t38 = g->edx;
    if (rd32(sp0 - 0x24u) != 0u)
    {
        eax = rd32(sp0 - 0x24u);
        ecx = t37;
        goto L_100cd5a9;
    }
    eax = rd32(sp0 - 0x24u);
    edx = t38;
    COW_AT(100cd716)
    edi = rd32(sp0 + 4u);
L_100cd71a: ;
    COW_AT(100cd71a)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x50u;
    t39 = cow_thiscall(g, COW_IMG(0x10072270u), rd32(edi), 0);
    t40 = g->edx;
    if (t39 == 0u)
    {
        eax = t39;
        edx = t40;
        goto L_100cd740;
    }
    eax = t39;
    edx = t40;
    COW_AT(100cd725)
    if (eax == rd32(edi)) goto L_100cd740;
    COW_AT(100cd729)
    t41 = rd32(eax + 0x14u);
    t42 = rd32(COW_IMG(0x1047d130u));
    wr32(sp0 + 4u, t41);
    wr32(COW_IMG(0x1047d130u), t42 - 1u);
    loc_44 = rd32(sp0 - 0x44u);
    loc_48 = rd32(sp0 - 0x48u);
    loc_4c = rd32(sp0 - 0x4cu);
    loc_50 = rd32(sp0 - 0x50u);
    loc_3c = rd32(sp0 - 0x3cu);
    goto L_100cd579;
L_100cd740: ;
    COW_AT(100cd740)
    t43 = rd8(sp0 - 0x3fu);
    d44 = fr(g, (double)rdf32(sp0 + 0x10u) * (double)rdf32(COW_IMG(0x1032df40u)));
    wr32(sp0 + 8u, ebp);
    wrf32(sp0 + 0x10u, (float)d44);
    if ((uint8_t)t43 == 0u)
    {
        eax = (eax & 0xffffff00u) | t43;
    }
    else
    {
    COW_AT(100cd75e)
        ebx = rd32(sp0 + 0x10u);
L_100cd762: ;
    COW_AT(100cd762)
        if (rd32(sp0 + 4u) == 0u)
        {
            edi = rd32(sp0 + 4u);
    COW_AT(100cd76e)
            eax = 0u;
        }
        else
        {
            edi = rd32(sp0 + 4u);
    COW_AT(100cd76a)
            eax = rd32(edi);
        }
    COW_AT(100cd770)
        wr32(sp0 - 0x54u, 0xffffffffu);
        wr32(sp0 - 0x58u, 0x316e7572u);
        wr32(sp0 - 0x5cu, 0x2bu);
        wr32(sp0 - 0x60u, eax);
        g->edx = edx;
        g->esp = sp0 - 0x50u;
        cow_thiscall(g, COW_IMG(0x100742b0u), sp0 - 0x1cu, 4, eax, 0x2bu, 0x316e7572u, 0xffffffffu);
        t45 = g->ecx;
        t46 = g->edx;
        if (rd32(sp0 - 8u) == 0u)
        {
            eax = rd32(sp0 - 8u);
            edx = t46;
            goto L_100cd8de;
        }
        eax = rd32(sp0 - 8u);
        ecx = t45;
L_100cd78f: ;
    COW_AT(100cd78f)
        t47 = rd32(rd32(eax + 0x14u));
        t48 = rd32(eax + 0x14u);
        wr8(sp0 - 0x3eu, rd8(t47 + 0x23u));
        if ((int32_t)ebp >= 5)
        {
            eax = ebp;
            edx = t47;
            edi = t48;
        }
        else
        {
            eax = ebp;
            edx = t47;
            edi = t48;
    COW_AT(100cd7a2)
            wr32(sp0 - 0x54u, sp0 - 0x3eu);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x50u;
            t49 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), sp0 - 0x3eu, 1, sp0 - 0x3eu);
            t50 = g->ecx;
            t51 = g->edx;
            eax = t49;
            ecx = t50;
            edx = t51;
        }
    COW_AT(100cd7af)
        if ((int32_t)eax < 7)
        {
    COW_AT(100cd7cc)
            if (eax != 2u)
            {
    COW_AT(100cd80a)
                if (eax == 1u)
                {
    COW_AT(100cd813)
                    if ((rd8(COW_IMG(0x1048a38cu)) & 2u) == 0u)
                    {
    COW_AT(100cd820)
                        if (arg9 == 0u)
                        {
    COW_AT(100cd870)
                            g->eax = arg9;
                            g->edx = edx;
                            g->esp = sp0 - 0x50u;
                            t66 = cow_thiscall(g, COW_IMG(0x1002b5a0u), self + 0x674u, 0);
                            t67 = g->edx;
                            if (rd32(t66) == 0u)
                            {
                                edx = t67;
                            }
                            else
                            {
                                eax = t66;
                                edx = t67;
    COW_AT(100cd87a)
                                g->eax = eax;
                                g->esp = sp0 - 0x50u;
                                t68 = cow_thiscall(g, COW_IMG(0x1002b5a0u), self + 0x674u, 0);
                                wr32(sp0 - 0x54u, arg11);
                                wr32(sp0 - 0x58u, arg10);
                                wr32(sp0 - 0x5cu, 1u);
                                wr32(sp0 - 0x60u, arg7);
                                wr32(sp0 - 0x64u, arg6);
                                wr32(sp0 - 0x68u, arg5);
                                wr32(sp0 - 0x6cu, ebx);
                                wr32(sp0 - 0x70u, arg3);
                                wr32(sp0 - 0x74u, edi);
                                wr32(sp0 - 0x78u, self);
                                g->edx = arg3;
                                cow_thiscall(g, COW_IMG(0x1001a660u), rd32(t68) + 0x24u, 10, self, edi, arg3, ebx, arg5, arg6, arg7, 1u, arg10, arg11);
                                t69 = g->edx;
                                edx = t69;
                            }
                        }
                        else
                        {
    COW_AT(100cd830)
                            g->eax = arg9;
                            g->edx = edx;
                            g->esp = sp0 - 0x50u;
                            t62 = cow_thiscall(g, COW_IMG(0x1002b5a0u), self + 0x674u, 0);
                            t63 = g->edx;
                            if (rd32(t62) == 0u)
                            {
                                edx = t63;
                            }
                            else
                            {
                                eax = t62;
                                edx = t63;
    COW_AT(100cd83a)
                                g->eax = eax;
                                g->esp = sp0 - 0x50u;
                                t64 = cow_thiscall(g, COW_IMG(0x1002b5a0u), self + 0x674u, 0);
                                wr32(sp0 - 0x54u, arg11);
                                wr32(sp0 - 0x58u, arg10);
                                wr32(sp0 - 0x5cu, 1u);
                                wr32(sp0 - 0x60u, arg7);
                                wr32(sp0 - 0x64u, arg6);
                                wr32(sp0 - 0x68u, arg5);
                                wr32(sp0 - 0x6cu, ebx);
                                wr32(sp0 - 0x70u, arg3);
                                wr32(sp0 - 0x74u, edi);
                                wr32(sp0 - 0x78u, self);
                                g->edx = arg3;
                                cow_thiscall(g, COW_IMG(0x1001a6e0u), rd32(t64) + 0x24u, 10, self, edi, arg3, ebx, arg5, arg6, arg7, 1u, arg10, arg11);
                                t65 = g->edx;
                                edx = t65;
                            }
                        }
    COW_AT(100cd8ae)
                        t70 = rd32(COW_IMG(0x1048a38cu));
                        t71 = rd32(sp0 + 8u);
                        wr8(sp0 - 0x40u, 1u);
                        t72 = (t70 & 0xffffff00u) | (uint8_t)(t70 | 2u);
                        wr32(COW_IMG(0x1048a38cu), t72);
                        eax = t72;
                        ebp = t71;
                    }
                }
            }
            else
            {
    COW_AT(100cd7d1)
                if (rd8(self + 0x881u) != 0u)
                {
                    eax = (eax & 0xffffff00u) | rd8(self + 0x881u);
                }
                else
                {
                    eax = (eax & 0xffffff00u) | rd8(self + 0x881u);
    COW_AT(100cd7df)
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x50u;
                    t56 = cow_thiscall(g, COW_IMG(0x10084400u), self, 0);
                    t57 = g->edx;
                    if (t56 == 0u)
                    {
                        eax = t56;
                        edx = t57;
                    }
                    else
                    {
                        eax = t56;
                        edx = t57;
    COW_AT(100cd7ee)
                        g->eax = eax;
                        g->edx = edx;
                        g->esp = sp0 - 0x50u;
                        t58 = cow_thiscall(g, COW_IMG(0x10084400u), self, 0);
                        t59 = g->edx;
                        if (t58 == 1u)
                        {
                            eax = t58;
                            edx = t59;
                        }
                        else
                        {
                            eax = t58;
                            edx = t59;
    COW_AT(100cd7fe)
                            g->eax = eax;
                            g->edx = edx;
                            g->esp = sp0 - 0x50u;
                            t60 = cow_thiscall(g, COW_IMG(0x10084400u), self, 0);
                            t61 = g->edx;
                            eax = t60;
                            edx = t61;
                        }
                    }
                }
            }
        }
        else
        {
    COW_AT(100cd7b4)
            t52 = rd32(rd32(edi) + 0x20u);
            wr32(sp0 - 0x54u, t52);
            wr32(sp0 - 0x58u, COW_IMG(0x1035f850u));
            g->eax = t52;
            g->edx = rd32(edi);
            t53 = rd32(edi);
            g->esp = sp0 - 0x58u;
            t54 = cow_stdcall(g, COW_IMG(0x10017d20u), 0);
            t55 = g->edx;
            eax = t54;
            edx = t55;
        }
    COW_AT(100cd8c3)
        wr32(sp0 - 0x54u, 0u);
        g->edx = edx;
        g->esp = sp0 - 0x50u;
        cow_thiscall(g, COW_IMG(0x100745c0u), sp0 - 0x1cu, 1, 0u);
        t73 = g->ecx;
        t74 = g->edx;
        if (rd32(sp0 - 8u) != 0u)
        {
            eax = rd32(sp0 - 8u);
            ecx = t73;
            goto L_100cd78f;
        }
        eax = rd32(sp0 - 8u);
        edx = t74;
    COW_AT(100cd8da)
        edi = rd32(sp0 + 4u);
L_100cd8de: ;
    COW_AT(100cd8de)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x50u;
        t75 = cow_thiscall(g, COW_IMG(0x10072270u), rd32(edi), 0);
        t76 = g->edx;
        if (t75 == 0u)
        {
            eax = t75;
            goto L_100cd904;
        }
        eax = t75;
        edx = t76;
    COW_AT(100cd8e9)
        if (eax == rd32(edi)) goto L_100cd904;
    COW_AT(100cd8ed)
        t77 = rd32(eax + 0x14u);
        wr32(sp0 + 4u, t77);
        t78 = rd32(COW_IMG(0x1047d130u)) - 1u;
        wr32(COW_IMG(0x1047d130u), t78);
        goto L_100cd762;
    }
L_100cd904: ;
    COW_AT(100cd904)
    g->ebx = rd32(sp0 - 0x44u);
    g->esi = rd32(sp0 - 0x4cu);
    g->edi = rd32(sp0 - 0x50u);
    g->ebp = rd32(sp0 - 0x48u);
    return (eax & 0xffffff00u) | rd8(sp0 - 0x40u);
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100cd540(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100cd579u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x100cd581u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x100cd585u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x100cd587u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x100cd5a9u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x100cd5bcu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x100cd5cbu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x100cd5d0u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x100cd5e8u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x100cd5edu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x100cd5f7u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x100cd606u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x100cd616u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x100cd626u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x100cd62eu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x100cd637u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x100cd650u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x100cd660u:
    {
        const uint32_t arg9 = rd32(sp0 + 0x24u);
        uint32_t cf;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        g->eax = arg9;
        g->ecx = self + 0x674u;
        g->ebx = self + 0x674u;
        (void)sp0;
        return 1;
    }
    case 0x100cd66au:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        g->ebx = self + 0x674u;
        (void)sp0;
        return 1;
    }
    case 0x100cd6a3u:
    {
        const uint32_t arg9 = rd32(sp0 + 0x24u);
        uint32_t cf;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        g->eax = arg9;
        g->ecx = self + 0x674u;
        g->ebx = self + 0x674u;
        (void)sp0;
        return 1;
    }
    case 0x100cd6adu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        g->ebx = self + 0x674u;
        (void)sp0;
        return 1;
    }
    case 0x100cd6e4u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x100cd6ffu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x100cd716u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x100cd71au:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x100cd725u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x100cd729u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x100cd740u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x100cd75eu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x100cd762u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x100cd76au:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x100cd76eu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x100cd770u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x100cd78fu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x100cd7a2u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x100cd7afu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x100cd7b4u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x100cd7ccu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x100cd7d1u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x100cd7dfu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x100cd7eeu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x100cd7feu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x100cd80au:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x100cd813u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x100cd820u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x100cd830u:
    {
        const uint32_t arg9 = rd32(sp0 + 0x24u);
        uint32_t cf;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        g->eax = arg9;
        g->ecx = self + 0x674u;
        g->ebp = self + 0x674u;
        (void)sp0;
        return 1;
    }
    case 0x100cd83au:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        g->ebp = self + 0x674u;
        (void)sp0;
        return 1;
    }
    case 0x100cd870u:
    {
        const uint32_t arg9 = rd32(sp0 + 0x24u);
        uint32_t cf;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        g->eax = arg9;
        g->ecx = self + 0x674u;
        g->ebp = self + 0x674u;
        (void)sp0;
        return 1;
    }
    case 0x100cd87au:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        g->ebp = self + 0x674u;
        (void)sp0;
        return 1;
    }
    case 0x100cd8aeu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x100cd8c3u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x100cd8dau:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x100cd8deu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x100cd8e9u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x100cd8edu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x100cd904u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
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
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100cd540(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100cd540(g);
    g->esp = sp0;
    rt_return(g, r, 44u);
}
/* COW_ADAPTER END */
