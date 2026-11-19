/* f_0x101c3400 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101c3400(Guest* g)
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
    uint32_t t79;
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
    cow_frame(g, sp0, 608u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101c346eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x244u); in_esi = rd32(sp0 - 0x240u); in_ebp = rd32(sp0 - 0x23cu); in_ebx = rd32(sp0 - 0x238u); g->ebp = rd32(sp0 - 0x23cu); g->ebx = rd32(sp0 - 0x238u); g->edi = rd32(sp0 - 0x244u); g->esi = rd32(sp0 - 0x240u); goto E_101c346e;
    case 0x101c347cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x244u); in_esi = rd32(sp0 - 0x240u); in_ebp = rd32(sp0 - 0x23cu); in_ebx = rd32(sp0 - 0x238u); g->ebp = rd32(sp0 - 0x23cu); g->ebx = rd32(sp0 - 0x238u); g->edi = rd32(sp0 - 0x244u); g->esi = rd32(sp0 - 0x240u); goto E_101c347c;
    case 0x101c34e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; self = g->edi - 0xc4u; goto E_101c34e1;
    case 0x101c34fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_101c34fc;
    case 0x101c352fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_101c352f;
    case 0x101c3597u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_101c3597;
    case 0x101c3599u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_101c3599;
    case 0x101c35afu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_101c35af;
    case 0x101c35cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_101c35cb;
    case 0x101c3606u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_101c3606;
    case 0x101c3644u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_101c3644;
    case 0x101c364eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_101c364e;
    case 0x101c3656u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_101c3656;
    case 0x101c3660u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_101c3660;
    case 0x101c3666u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101c3666;
    case 0x101c3668u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101c3668;
    case 0x101c366bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101c366b;
    case 0x101c367du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_101c367d;
    case 0x101c3685u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_101c3685;
    case 0x101c368au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_101c368a;
    case 0x101c368fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_101c368f;
    case 0x101c3694u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_101c3694;
    case 0x101c369bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_101c369b;
    case 0x101c36a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101c36a3;
    case 0x101c36a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_101c36a8;
    case 0x101c36b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_101c36b0;
    case 0x101c36b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101c36b5;
    case 0x101c36bau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_101c36ba;
    case 0x101c36bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_101c36bd;
    case 0x101c36c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_101c36c7;
    case 0x101c3718u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_101c3718;
    case 0x101c3784u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_101c3784;
    case 0x101c3790u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_101c3790;
    case 0x101c379du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_101c379d;
    case 0x101c37b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_101c37b5;
    case 0x101c37c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_101c37c0;
    case 0x101c37cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_101c37cd;
    case 0x101c37f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_101c37f1;
    case 0x101c37f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_101c37f5;
    case 0x101c3801u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_101c3801;
    case 0x101c3808u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_101c3808;
    case 0x101c380cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_101c380c;
    case 0x101c3818u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_101c3818;
    case 0x101c381fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_101c381f;
    case 0x101c3823u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_101c3823;
    case 0x101c3829u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_101c3829;
    case 0x101c3839u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_101c3839;
    case 0x101c3880u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_101c3880;
    default: break;
    }
#endif

    COW_AT(101c3400)
    wr32(sp0 - 0x238u, in_ebx);
    wr32(sp0 - 0x23cu, in_ebp);
    wr32(sp0 - 0x240u, in_esi);
    wr32(sp0 - 0x244u, in_edi);
    wr32(sp0 - 0x224u, COW_IMG(0x10337200u));
    wr32(sp0 - 0x220u, 0u);
    wr32(sp0 - 0x248u, COW_IMG(0x1037cca4u));
    edi = sp0 - 0x21cu;
    eax = 0u;
    ecx = 0x40u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x11cu, 0u);
    wr32(sp0 - 0x118u, 0u);
    wr32(sp0 - 0x114u, 0u);
    wr32(sp0 - 0x110u, 0u);
    wr32(sp0 - 0x10cu, 0u);
    wr32(sp0 - 0x108u, 0u);
    wr32(sp0 - 0x104u, 0u);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x244u;
    t1 = cow_thiscall(g, COW_IMG(0x101c3a00u), self, 1, COW_IMG(0x1037cca4u));
    t2 = g->ecx;
    t3 = g->edx;
    wr32(self + 0xccu, t1);
    if ((int32_t)t1 >= 0)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        goto L_101c347c;
    }
    eax = t1;
    COW_AT(101c346e)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return 0xffffffffu;
L_101c347c: ;
    COW_AT(101c347c)
    wr32(sp0 - 0x248u, COW_IMG(0x1037cc98u));
    t4 = (eax + 1u & 0xffffff00u) | (eax + 1u & 0xfeu);
    wr32(sp0 - 0x24cu, t4);
    wr32(sp0 - 0x250u, self + 0xc4u);
    wr32(sp0 - 0x228u, self + 0xc4u);
    g->edx = edx;
    g->esp = sp0 - 0x240u;
    cow_cdecl(g, COW_IMG(0x101907a0u), 4, self + 0xc4u, t4, COW_IMG(0x1037cc98u), in_edi);
    t5 = g->edx;
    wr32(sp0 - 0x248u, COW_IMG(0x1037cca4u));
    wr32(sp0 - 0x24cu, 0x100u);
    wr32(sp0 - 0x250u, sp0 - 0x21cu);
    wr32(sp0 - 0x220u, 1u);
    g->ebx = 1u;
    g->esp = sp0 - 0x244u;
    cow_thiscall(g, COW_IMG(0x101c3e90u), self, 3, sp0 - 0x21cu, 0x100u, COW_IMG(0x1037cca4u));
    t6 = rd32(self + 0xc4u);
    wr32(sp0 - 0x118u, t6);
    wr32(sp0 - 0x248u, sp0 - 0x224u);
    t7 = rd32(self + 0xccu);
    wr32(sp0 - 0x114u, t7);
    g->eax = sp0 - 0x224u;
    t8 = cow_fastcall(g, COW_IMG(0x1019f960u), rd32(self + 0x1f0u), t7, 1, sp0 - 0x224u);
    t9 = g->edx;
    if ((int32_t)t8 >= 0)
    {
        eax = t8;
        goto L_101c34fc;
    }
    eax = t8;
    edx = t9;
    COW_AT(101c34e1)
    t10 = rd32(self + 0xc4u);
    wr32(sp0 - 0x248u, t10);
    g->eax = eax;
    g->esp = sp0 - 0x244u;
    t11 = cow_call_regs(g, COW_IMG(0x101907d0u), g->eax, t10, edx, 1, 1, t10);
    wr32(self + 0xc4u, 0u);
    g->ebx = rd32(sp0 - 0x238u);
    g->esi = rd32(sp0 - 0x240u);
    g->edi = rd32(sp0 - 0x244u);
    g->ebp = rd32(sp0 - 0x23cu);
    return 0xffffffffu;
L_101c34fc: ;
    COW_AT(101c34fc)
    wr32(sp0 - 0x248u, COW_IMG(0x1037cc8cu));
    t12 = (uint32_t)((int32_t)rd32(self + 0xccu) >> 1u);
    wr32(self + 0xc8u, t12);
    g->eax = eax;
    g->edx = t12;
    g->esp = sp0 - 0x244u;
    t13 = cow_thiscall(g, COW_IMG(0x101c3a00u), self, 1, COW_IMG(0x1037cc8cu));
    t14 = g->ecx;
    t15 = g->edx;
    wr32(self + 0xc0u, t13);
    wr32(sp0 - 0x248u, COW_IMG(0x1037cc7cu));
    wr32(sp0 - 0x22cu, self + 0xbcu);
    if ((int32_t)t13 < 0)
    {
        ecx = t14;
        edx = t15;
        goto L_101c3599;
    }
    eax = t13;
    ecx = t14;
    edx = t15;
    COW_AT(101c352f)
    wr32(sp0 - 0x24cu, eax);
    wr32(sp0 - 0x250u, self + 0xbcu);
    g->esp = sp0 - 0x240u;
    cow_cdecl(g, COW_IMG(0x101907a0u), 4, self + 0xbcu, eax, COW_IMG(0x1037cc7cu), rd32(sp0 - 0x244u));
    t16 = rd32(self + 0xc0u);
    t17 = rd32(self + 0xbcu);
    edi = t17;
    eax = 0u;
    ecx = t16 >> 2u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = t16 & 3u;
    while (ecx) { wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    wr32(sp0 - 0x248u, COW_IMG(0x1037cc8cu));
    wr32(sp0 - 0x24cu, 0x100u);
    wr32(sp0 - 0x250u, sp0 - 0x21cu);
    wr32(sp0 - 0x220u, 1u);
    g->ebx = 1u;
    g->esp = sp0 - 0x244u;
    cow_thiscall(g, COW_IMG(0x101c3e90u), self, 3, sp0 - 0x21cu, 0x100u, COW_IMG(0x1037cc8cu));
    t18 = rd32(self + 0xbcu);
    wr32(sp0 - 0x118u, t18);
    wr32(sp0 - 0x248u, sp0 - 0x224u);
    t19 = rd32(self + 0xc0u);
    wr32(sp0 - 0x114u, t19);
    g->eax = sp0 - 0x224u;
    t20 = cow_fastcall(g, COW_IMG(0x1019f960u), rd32(self + 0x1f0u), t19, 1, sp0 - 0x224u);
    t21 = g->edx;
    if ((int32_t)t20 >= 0)
    {
        edx = t21;
        goto L_101c35cb;
    }
    COW_AT(101c3597)
L_101c35af: ;
    COW_AT(101c35af)
    t23 = rd32(self + 0xc0u);
    t24 = rd32(self + 0xbcu);
    edi = t24;
    eax = 0x1010101u;
    ecx = t23 >> 2u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = t23 & 3u;
    while (ecx) { wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    edx = t23;
L_101c35cb: ;
    COW_AT(101c35cb)
    wr32(sp0 - 0x248u, COW_IMG(0x1037cc70u));
    t25 = (rd32(self + 0xccu) + 1u & 0xffffff00u) | (rd32(self + 0xccu) + 1u & 0xfeu);
    wr32(sp0 - 0x24cu, t25);
    wr32(sp0 - 0x250u, sp0 - 0x230u);
    g->ecx = sp0 - 0x230u;
    g->esp = sp0 - 0x240u;
    cow_cdecl(g, COW_IMG(0x101907a0u), 4, sp0 - 0x230u, t25, COW_IMG(0x1037cc70u), rd32(sp0 - 0x244u));
    t26 = g->ecx;
    wr32(sp0 - 0x254u, COW_IMG(0x1037cc5cu));
    t27 = rd32(self + 0xc0u);
    wr32(sp0 - 0x258u, t27);
    wr32(sp0 - 0x25cu, sp0 - 0x234u);
    g->eax = sp0 - 0x234u;
    g->edx = t27;
    g->esp = sp0 - 0x24cu;
    t28 = cow_cdecl(g, COW_IMG(0x101907a0u), 4, sp0 - 0x234u, t27, COW_IMG(0x1037cc5cu), sp0 - 0x230u);
    t29 = g->edx;
    wr32(self + 0x80u, 1u);
    eax = t28;
    edx = t29;
    ebp = self + 0xbcu;
    edi = 0xffffffffu;
L_101c3606: ;
    COW_AT(101c3606)
    t30 = rd32(self + 0x80u) + 1u;
    wr32(self + 0x80u, t30);
    wr32(sp0 - 0x248u, edi + 3u);
    wr32(sp0 - 0x24cu, edi + 3u);
    wr32(sp0 - 0x250u, COW_IMG(0x1037cc48u));
    wr32(sp0 - 0x254u, sp0 - 0x100u);
    g->ebx = edi + 3u;
    g->eax = eax;
    g->esp = sp0 - 0x240u;
    t31 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x1037cc48u), edi + 3u, edi + 3u, rd32(sp0 - 0x244u));
    wr32(sp0 - 0x248u, sp0 - 0x100u);
    g->esp = sp0 - 0x244u;
    t32 = cow_thiscall(g, COW_IMG(0x101c3a00u), self, 1, sp0 - 0x100u);
    t33 = g->ecx;
    if ((int32_t)t32 < 0)
    {
        eax = t32;
        ecx = t33;
        goto L_101c37c0;
    }
    ebx = edi + 3u;
    COW_AT(101c3644)
    if ((int32_t)ebx >= 9)
    {
        eax = rd32(COW_IMG(0x10456a28u));
        goto L_101c368f;
    }
    eax = rd32(COW_IMG(0x10456a28u));
    COW_AT(101c364e)
    if (edi - 3u > 5u)
    {
        cf = edi - 3u < 5u;
        pf = PARITY((uint8_t)(edi - 8u));
        zf = edi == 8u;
        sf = (int32_t)(edi - 8u) < 0;
        of = ((edi - 3u ^ 5u) & (edi - 3u ^ edi - 8u)) >> 0x1fu;
        goto L_101c368a;
    }
    COW_AT(101c3656)
    t34 = rd32(COW_IMG(0x101c38c8u) + edi * 4u - 0xcu);
    switch (t34 - RD)
    {
    case 0x101c3660u: goto L_101c3660;
    case 0x101c367du: goto L_101c367d;
    default: rt_fatal(g, COW_IMG(0x101c3659u), "switch");
    }
    return 0;
L_101c3599: ;
    COW_AT(101c3599)
    t22 = rd32(self + 0xc8u);
    wr32(sp0 - 0x24cu, t22);
    wr32(sp0 - 0x250u, self + 0xbcu);
    wr32(self + 0xc0u, t22);
    g->esp = sp0 - 0x240u;
    cow_cdecl(g, COW_IMG(0x101907a0u), 4, self + 0xbcu, t22, COW_IMG(0x1037cc7cu), rd32(sp0 - 0x244u));
    goto L_101c35af;
L_101c3660: ;
    COW_AT(101c3660)
    edx = rd32(eax + 0x10u);
    pf = PARITY(rd32(eax + 0x10u) & 2u);
    zf = (rd32(eax + 0x10u) & 2u) == 0u;
    sf = (int8_t)(rd32(eax + 0x10u) & 2u) < 0;
L_101c3666: ;
    COW_AT(101c3666)
    if (zf) goto L_101c36c7;
    COW_AT(101c3668)
    ecx = edi + 2u;
L_101c366b: ;
    COW_AT(101c366b)
    t36 = 1u << (ecx & 0x1fu) | edx;
    wr32(eax + 0x10u, t36);
    ebp = rd32(sp0 - 0x22cu);
L_101c36c7: ;
    COW_AT(101c36c7)
    wr32(sp0 - 0x248u, sp0 - 0x100u);
    wr32(sp0 - 0x24cu, 0x100u);
    wr32(sp0 - 0x250u, sp0 - 0x21cu);
    wr32(sp0 - 0x220u, 1u);
    g->ebx = ebx;
    g->esp = sp0 - 0x244u;
    cow_thiscall(g, COW_IMG(0x101c3e90u), self, 3, sp0 - 0x21cu, 0x100u, sp0 - 0x100u);
    t37 = rd32(sp0 - 0x230u);
    wr32(sp0 - 0x118u, t37);
    wr32(sp0 - 0x248u, sp0 - 0x224u);
    t38 = rd32(self + 0xccu);
    wr32(sp0 - 0x114u, t38);
    g->eax = t38;
    t39 = rd32(self + 0x1f0u);
    t40 = cow_fastcall(g, COW_IMG(0x1019f960u), t39, t37, 1, sp0 - 0x224u);
    t41 = g->ecx;
    t42 = g->edx;
    if ((int32_t)t40 < 0)
    {
        ecx = t41;
        edx = t42;
        goto L_101c3839;
    }
    eax = t40;
    ecx = t41;
    COW_AT(101c3718)
    wr32(sp0 - 0x248u, ebx);
    wr32(sp0 - 0x24cu, ebx);
    wr32(sp0 - 0x250u, COW_IMG(0x1037cc34u));
    wr32(sp0 - 0x254u, sp0 - 0x100u);
    wr32(sp0 - 0x220u, 1u);
    g->ebx = ebx;
    g->edx = sp0 - 0x100u;
    g->esp = sp0 - 0x240u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x1037cc34u), ebx, ebx, rd32(sp0 - 0x244u));
    t43 = g->edx;
    wr32(sp0 - 0x248u, sp0 - 0x100u);
    wr32(sp0 - 0x24cu, 0x100u);
    wr32(sp0 - 0x250u, sp0 - 0x21cu);
    g->ebx = ebx;
    g->esp = sp0 - 0x244u;
    cow_thiscall(g, COW_IMG(0x101c3e90u), self, 3, sp0 - 0x21cu, 0x100u, sp0 - 0x100u);
    t44 = rd32(sp0 - 0x234u);
    wr32(sp0 - 0x118u, t44);
    wr32(sp0 - 0x248u, sp0 - 0x224u);
    t45 = rd32(self + 0xc0u);
    wr32(sp0 - 0x114u, t45);
    g->eax = t45;
    t46 = cow_fastcall(g, COW_IMG(0x1019f960u), rd32(self + 0x1f0u), t44, 1, sp0 - 0x224u);
    t47 = g->edx;
    if (t46 != rd32(self + 0xc0u))
    {
        eax = t46;
        edx = t47;
        goto L_101c3880;
    }
    COW_AT(101c3784)
    if ((int32_t)rd32(self + 0xc8u) <= 0)
    {
        eax = 0u;
        ecx = rd32(self + 0xc8u);
        goto L_101c37c0;
    }
    eax = 0u;
L_101c3790: ;
    COW_AT(101c3790)
    if (rd8(eax + rd32(sp0 - 0x234u)) == ebx)
    {
    COW_AT(101c379d)
        t48 = rd32(sp0 - 0x228u);
        wr8(eax + rd32(ebp), (uint8_t)ebx);
        wr16(eax * 2u + rd32(t48), rd16(eax * 2u + rd32(sp0 - 0x230u)));
    }
    COW_AT(101c37b5)
    if ((int32_t)(eax + 1u) < (int32_t)rd32(self + 0xc8u))
    {
        eax = eax + 1u;
        goto L_101c3790;
    }
    eax = eax + 1u;
    ecx = rd32(self + 0xc8u);
L_101c37c0: ;
    COW_AT(101c37c0)
    if ((int32_t)(edi + 4u) < 14)
    {
        edx = edi + 4u;
        edi = edi + 1u;
        goto L_101c3606;
    }
    COW_AT(101c37cd)
    t73 = rd32(sp0 - 0x230u);
    wr32(sp0 - 0x248u, t73);
    g->esp = sp0 - 0x244u;
    cow_call_regs(g, COW_IMG(0x101907d0u), g->eax, ecx, t73, 1, 1, t73);
    t74 = g->ecx;
    t75 = g->edx;
    t76 = rd32(sp0 - 0x234u);
    wr32(sp0 - 0x24cu, t76);
    g->esp = sp0 - 0x248u;
    cow_call_regs(g, COW_IMG(0x101907d0u), g->eax, t74, t75, 1, 1, t76);
    if ((rd32(rd32(COW_IMG(0x10456a28u)) + 0x10u) & 2u) == 0u)
    {
        ecx = rd32(COW_IMG(0x10456a28u));
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x10456a28u)) + 0x10u);
        ecx = rd32(COW_IMG(0x10456a28u));
    COW_AT(101c37f1)
        if ((eax & 0x10u) != 0u)
        {
    COW_AT(101c37f5)
            t77 = (eax & 0xffff00ffu) | (uint32_t)(uint8_t)(eax >> 8u | 1u) << 8u;
            wr32(ecx + 0x10u, t77);
            ecx = rd32(COW_IMG(0x10456a28u));
        }
    }
    COW_AT(101c3801)
    if ((rd32(ecx + 0x10u) & 2u) != 0u)
    {
        eax = rd32(ecx + 0x10u);
    COW_AT(101c3808)
        if ((eax & 0x10u) != 0u)
        {
    COW_AT(101c380c)
            t78 = (eax & 0xffff00ffu) | (uint32_t)(uint8_t)(eax >> 8u | 2u) << 8u;
            wr32(ecx + 0x10u, t78);
            ecx = rd32(COW_IMG(0x10456a28u));
        }
    }
    COW_AT(101c3818)
    if ((rd32(ecx + 0x10u) & 2u) != 0u)
    {
        eax = rd32(ecx + 0x10u);
    COW_AT(101c381f)
        if ((eax & 0x10u) != 0u)
        {
    COW_AT(101c3823)
            t79 = (eax & 0xffff00ffu) | (uint32_t)(uint8_t)(eax >> 8u | 4u) << 8u;
            wr32(ecx + 0x10u, t79);
        }
    }
    COW_AT(101c3829)
    g->ebx = rd32(sp0 - 0x238u);
    g->esi = rd32(sp0 - 0x240u);
    g->edi = rd32(sp0 - 0x244u);
    g->ebp = rd32(sp0 - 0x23cu);
    return 1u;
L_101c367d: ;
    COW_AT(101c367d)
    if ((rd32(eax + 0x10u) & 2u) == 0u)
    {
        edx = rd32(eax + 0x10u);
        goto L_101c36c7;
    }
    edx = rd32(eax + 0x10u);
    COW_AT(101c3685)
    pf = PARITY(edx & 0x10u);
    zf = (edx & 0x10u) == 0u;
    sf = (int8_t)(edx & 0x10u) < 0;
    goto L_101c3666;
L_101c368a: ;
    COW_AT(101c368a)
    ecx = edi + 2u;
L_101c36bd: ;
    COW_AT(101c36bd)
    wr32(eax + 0x10u, rd32(eax + 0x10u) | 1u << (ecx & 0x1fu));
    edx = 1u << (ecx & 0x1fu);
    goto L_101c36c7;
L_101c368f: ;
    COW_AT(101c368f)
    if (edi > 5u)
    {
        cf = edi < 5u;
        pf = PARITY((uint8_t)(edi - 5u));
        zf = edi == 5u;
        sf = (int32_t)(edi - 5u) < 0;
        of = ((edi ^ 5u) & (edi ^ edi - 5u)) >> 0x1fu;
        goto L_101c36ba;
    }
    COW_AT(101c3694)
    t35 = rd32(COW_IMG(0x101c38e0u) + edi * 4u);
    switch (t35 - RD)
    {
    case 0x101c369bu: goto L_101c369b;
    case 0x101c36a8u: goto L_101c36a8;
    default: rt_fatal(g, COW_IMG(0x101c3694u), "switch");
    }
    return 0;
L_101c369b: ;
    COW_AT(101c369b)
    if ((rd32(eax + 0x10u) & 2u) == 0u)
    {
        edx = rd32(eax + 0x10u);
        goto L_101c36c7;
    }
    edx = rd32(eax + 0x10u);
    pf = PARITY(rd32(eax + 0x10u) & 2u);
    zf = (rd32(eax + 0x10u) & 2u) == 0u;
    sf = (int8_t)(rd32(eax + 0x10u) & 2u) < 0;
    COW_AT(101c36a3)
    ecx = edi + 5u;
    goto L_101c366b;
L_101c36a8: ;
    COW_AT(101c36a8)
    if ((rd32(eax + 0x10u) & 2u) == 0u)
    {
        edx = rd32(eax + 0x10u);
        goto L_101c36c7;
    }
    edx = rd32(eax + 0x10u);
    COW_AT(101c36b0)
    if ((edx & 0x10u) == 0u) goto L_101c36c7;
    pf = PARITY(edx & 0x10u);
    zf = (edx & 0x10u) == 0u;
    sf = (int8_t)(edx & 0x10u) < 0;
    COW_AT(101c36b5)
    ecx = edi + 5u;
    goto L_101c366b;
L_101c36ba: ;
    COW_AT(101c36ba)
    ecx = edi + 5u;
    goto L_101c36bd;
L_101c3839: ;
    COW_AT(101c3839)
    t61 = rd32(rd32(sp0 - 0x228u));
    wr32(sp0 - 0x248u, t61);
    g->eax = t61;
    t62 = rd32(sp0 - 0x228u);
    g->esp = sp0 - 0x244u;
    t63 = cow_call_regs(g, COW_IMG(0x101907d0u), g->eax, ecx, edx, 1, 1, t61);
    t64 = g->edx;
    t65 = rd32(ebp);
    wr32(t62, 0u);
    wr32(sp0 - 0x24cu, t65);
    g->esp = sp0 - 0x248u;
    t66 = cow_call_regs(g, COW_IMG(0x101907d0u), g->eax, t65, t64, 1, 1, t65);
    t67 = g->ecx;
    t68 = rd32(sp0 - 0x230u);
    wr32(ebp, 0u);
    wr32(sp0 - 0x250u, t68);
    g->esp = sp0 - 0x24cu;
    cow_call_regs(g, COW_IMG(0x101907d0u), g->eax, t67, t68, 1, 1, t68);
    t69 = g->ecx;
    t70 = g->edx;
    t71 = rd32(sp0 - 0x234u);
    wr32(sp0 - 0x254u, t71);
    g->eax = t71;
    g->esp = sp0 - 0x250u;
    t72 = cow_call_regs(g, COW_IMG(0x101907d0u), g->eax, t69, t70, 1, 1, t71);
    g->ebx = rd32(sp0 - 0x238u);
    g->esi = rd32(sp0 - 0x240u);
    g->edi = rd32(sp0 - 0x244u);
    g->ebp = rd32(sp0 - 0x23cu);
    return 0xffffffffu;
L_101c3880: ;
    COW_AT(101c3880)
    t49 = rd32(rd32(sp0 - 0x228u));
    wr32(sp0 - 0x248u, t49);
    g->eax = eax;
    t50 = rd32(sp0 - 0x228u);
    g->esp = sp0 - 0x244u;
    t51 = cow_call_regs(g, COW_IMG(0x101907d0u), g->eax, t49, edx, 1, 1, t49);
    t52 = g->ecx;
    t53 = rd32(ebp);
    wr32(t50, 0u);
    wr32(sp0 - 0x24cu, t53);
    g->esp = sp0 - 0x248u;
    cow_call_regs(g, COW_IMG(0x101907d0u), g->eax, t52, t53, 1, 1, t53);
    t54 = g->ecx;
    t55 = g->edx;
    t56 = rd32(sp0 - 0x230u);
    wr32(ebp, 0u);
    wr32(sp0 - 0x250u, t56);
    g->eax = t56;
    g->esp = sp0 - 0x24cu;
    t57 = cow_call_regs(g, COW_IMG(0x101907d0u), g->eax, t54, t55, 1, 1, t56);
    t58 = g->edx;
    t59 = rd32(sp0 - 0x234u);
    wr32(sp0 - 0x254u, t59);
    g->esp = sp0 - 0x250u;
    t60 = cow_call_regs(g, COW_IMG(0x101907d0u), g->eax, t59, t58, 1, 1, t59);
    g->ebx = rd32(sp0 - 0x238u);
    g->esi = rd32(sp0 - 0x240u);
    g->edi = rd32(sp0 - 0x244u);
    g->ebp = rd32(sp0 - 0x23cu);
    return 0xffffffffu;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101c3400(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101c346eu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
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
        in_edi = rd32(sp0 - 0x244u);
        in_esi = rd32(sp0 - 0x240u);
        in_ebp = rd32(sp0 - 0x23cu);
        in_ebx = rd32(sp0 - 0x238u);
        g->esp = sp0 - 0x244u;
        (void)sp0;
        return 1;
    }
    case 0x101c347cu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
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
        in_edi = rd32(sp0 - 0x244u);
        in_esi = rd32(sp0 - 0x240u);
        in_ebp = rd32(sp0 - 0x23cu);
        in_ebx = rd32(sp0 - 0x238u);
        g->esp = sp0 - 0x244u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101c34e1u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
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
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        self = g->edi - 0xc4u;
        g->esp = sp0 - 0x244u;
        g->ebp = 0u;
        wr32(sp0 - 0x250u, sp0 - 0x21cu);
        wr32(sp0 - 0x248u, sp0 - 0x224u);
        (void)sp0;
        return 1;
    }
    case 0x101c34fcu:
    {
        uint32_t cf;
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x244u;
        g->ebx = 1u;
        g->ebp = 0u;
        wr32(sp0 - 0x250u, sp0 - 0x21cu);
        wr32(sp0 - 0x248u, sp0 - 0x224u);
        (void)sp0;
        return 1;
    }
    case 0x101c352fu:
    {
        uint32_t cf;
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x248u;
        g->ebx = 1u;
        g->ebp = self + 0xbcu;
        wr32(sp0 - 0x250u, sp0 - 0x21cu);
        wr32(sp0 - 0x248u, COW_IMG(0x1037cc7cu));
        wr32(sp0 - 0x22cu, self + 0xbcu);
        (void)sp0;
        return 1;
    }
    case 0x101c3597u:
    {
        uint32_t cf;
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x244u;
        g->ebx = 1u;
        g->ebp = self + 0xbcu;
        wr32(sp0 - 0x250u, sp0 - 0x21cu);
        wr32(sp0 - 0x248u, sp0 - 0x224u);
        (void)sp0;
        return 1;
    }
    case 0x101c3599u:
    {
        uint32_t cf;
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x248u;
        g->ebx = 1u;
        g->ebp = self + 0xbcu;
        wr32(sp0 - 0x250u, sp0 - 0x21cu);
        wr32(sp0 - 0x248u, COW_IMG(0x1037cc7cu));
        wr32(sp0 - 0x22cu, self + 0xbcu);
        (void)sp0;
        return 1;
    }
    case 0x101c35afu:
    {
        uint32_t cf;
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x244u;
        g->ebx = 1u;
        g->ebp = self + 0xbcu;
        (void)sp0;
        return 1;
    }
    case 0x101c35cbu:
    {
        uint32_t cf;
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x244u;
        g->ebx = 1u;
        g->ebp = self + 0xbcu;
        (void)sp0;
        return 1;
    }
    case 0x101c3606u:
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
        g->esp = sp0 - 0x244u;
        wr32(sp0 - 0x25cu, sp0 - 0x234u);
        (void)sp0;
        return 1;
    }
    case 0x101c3644u:
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
        g->esp = sp0 - 0x244u;
        wr32(sp0 - 0x25cu, sp0 - 0x234u);
        wr32(sp0 - 0x254u, sp0 - 0x100u);
        wr32(sp0 - 0x248u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x101c364eu:
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
        g->esp = sp0 - 0x244u;
        wr32(sp0 - 0x25cu, sp0 - 0x234u);
        wr32(sp0 - 0x254u, sp0 - 0x100u);
        wr32(sp0 - 0x248u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x101c3656u:
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
        g->esp = sp0 - 0x244u;
        wr32(sp0 - 0x25cu, sp0 - 0x234u);
        wr32(sp0 - 0x254u, sp0 - 0x100u);
        wr32(sp0 - 0x248u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x101c3660u:
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
        g->esp = sp0 - 0x244u;
        wr32(sp0 - 0x25cu, sp0 - 0x234u);
        wr32(sp0 - 0x254u, sp0 - 0x100u);
        wr32(sp0 - 0x248u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x101c3666u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
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
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x244u;
        g->cf = (uint8_t)(0u);
        g->of = (uint8_t)(0u);
        wr32(sp0 - 0x25cu, sp0 - 0x234u);
        wr32(sp0 - 0x254u, sp0 - 0x100u);
        wr32(sp0 - 0x248u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x101c3668u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
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
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x244u;
        g->cf = (uint8_t)(0u);
        g->of = (uint8_t)(0u);
        wr32(sp0 - 0x25cu, sp0 - 0x234u);
        wr32(sp0 - 0x254u, sp0 - 0x100u);
        wr32(sp0 - 0x248u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x101c366bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
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
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x244u;
        g->cf = (uint8_t)(0u);
        g->of = (uint8_t)(0u);
        wr32(sp0 - 0x25cu, sp0 - 0x234u);
        wr32(sp0 - 0x254u, sp0 - 0x100u);
        wr32(sp0 - 0x248u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x101c367du:
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
        g->esp = sp0 - 0x244u;
        wr32(sp0 - 0x25cu, sp0 - 0x234u);
        wr32(sp0 - 0x254u, sp0 - 0x100u);
        wr32(sp0 - 0x248u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x101c3685u:
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
        g->esp = sp0 - 0x244u;
        wr32(sp0 - 0x25cu, sp0 - 0x234u);
        wr32(sp0 - 0x254u, sp0 - 0x100u);
        wr32(sp0 - 0x248u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x101c368au:
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
        g->esp = sp0 - 0x244u;
        wr32(sp0 - 0x25cu, sp0 - 0x234u);
        wr32(sp0 - 0x254u, sp0 - 0x100u);
        wr32(sp0 - 0x248u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x101c368fu:
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
        g->esp = sp0 - 0x244u;
        wr32(sp0 - 0x25cu, sp0 - 0x234u);
        wr32(sp0 - 0x254u, sp0 - 0x100u);
        wr32(sp0 - 0x248u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x101c3694u:
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
        g->esp = sp0 - 0x244u;
        wr32(sp0 - 0x25cu, sp0 - 0x234u);
        wr32(sp0 - 0x254u, sp0 - 0x100u);
        wr32(sp0 - 0x248u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x101c369bu:
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
        g->esp = sp0 - 0x244u;
        wr32(sp0 - 0x25cu, sp0 - 0x234u);
        wr32(sp0 - 0x254u, sp0 - 0x100u);
        wr32(sp0 - 0x248u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x101c36a3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
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
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x244u;
        g->cf = (uint8_t)(0u);
        g->of = (uint8_t)(0u);
        wr32(sp0 - 0x25cu, sp0 - 0x234u);
        wr32(sp0 - 0x254u, sp0 - 0x100u);
        wr32(sp0 - 0x248u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x101c36a8u:
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
        g->esp = sp0 - 0x244u;
        wr32(sp0 - 0x25cu, sp0 - 0x234u);
        wr32(sp0 - 0x254u, sp0 - 0x100u);
        wr32(sp0 - 0x248u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x101c36b0u:
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
        g->esp = sp0 - 0x244u;
        wr32(sp0 - 0x25cu, sp0 - 0x234u);
        wr32(sp0 - 0x254u, sp0 - 0x100u);
        wr32(sp0 - 0x248u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x101c36b5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
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
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x244u;
        g->cf = (uint8_t)(0u);
        g->of = (uint8_t)(0u);
        wr32(sp0 - 0x25cu, sp0 - 0x234u);
        wr32(sp0 - 0x254u, sp0 - 0x100u);
        wr32(sp0 - 0x248u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x101c36bau:
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
        g->esp = sp0 - 0x244u;
        wr32(sp0 - 0x25cu, sp0 - 0x234u);
        wr32(sp0 - 0x254u, sp0 - 0x100u);
        wr32(sp0 - 0x248u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x101c36bdu:
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
        g->esp = sp0 - 0x244u;
        wr32(sp0 - 0x25cu, sp0 - 0x234u);
        wr32(sp0 - 0x254u, sp0 - 0x100u);
        wr32(sp0 - 0x248u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x101c36c7u:
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
        g->esp = sp0 - 0x244u;
        wr32(sp0 - 0x25cu, sp0 - 0x234u);
        wr32(sp0 - 0x254u, sp0 - 0x100u);
        wr32(sp0 - 0x248u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x101c3718u:
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
        g->esp = sp0 - 0x244u;
        wr32(sp0 - 0x25cu, sp0 - 0x234u);
        wr32(sp0 - 0x254u, sp0 - 0x100u);
        wr32(sp0 - 0x250u, sp0 - 0x21cu);
        wr32(sp0 - 0x248u, sp0 - 0x224u);
        (void)sp0;
        return 1;
    }
    case 0x101c3784u:
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
        g->esp = sp0 - 0x244u;
        wr32(sp0 - 0x25cu, sp0 - 0x234u);
        wr32(sp0 - 0x254u, sp0 - 0x100u);
        wr32(sp0 - 0x250u, sp0 - 0x21cu);
        wr32(sp0 - 0x248u, sp0 - 0x224u);
        (void)sp0;
        return 1;
    }
    case 0x101c3790u:
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
        g->esp = sp0 - 0x244u;
        wr32(sp0 - 0x25cu, sp0 - 0x234u);
        wr32(sp0 - 0x254u, sp0 - 0x100u);
        wr32(sp0 - 0x250u, sp0 - 0x21cu);
        wr32(sp0 - 0x248u, sp0 - 0x224u);
        (void)sp0;
        return 1;
    }
    case 0x101c379du:
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
        g->esp = sp0 - 0x244u;
        wr32(sp0 - 0x25cu, sp0 - 0x234u);
        wr32(sp0 - 0x254u, sp0 - 0x100u);
        wr32(sp0 - 0x250u, sp0 - 0x21cu);
        wr32(sp0 - 0x248u, sp0 - 0x224u);
        (void)sp0;
        return 1;
    }
    case 0x101c37b5u:
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
        g->esp = sp0 - 0x244u;
        wr32(sp0 - 0x25cu, sp0 - 0x234u);
        wr32(sp0 - 0x254u, sp0 - 0x100u);
        wr32(sp0 - 0x250u, sp0 - 0x21cu);
        wr32(sp0 - 0x248u, sp0 - 0x224u);
        (void)sp0;
        return 1;
    }
    case 0x101c37c0u:
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
        g->esp = sp0 - 0x244u;
        wr32(sp0 - 0x25cu, sp0 - 0x234u);
        wr32(sp0 - 0x254u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x101c37cdu:
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
        g->esp = sp0 - 0x244u;
        wr32(sp0 - 0x25cu, sp0 - 0x234u);
        wr32(sp0 - 0x254u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x101c37f1u:
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
        g->esp = sp0 - 0x244u;
        wr32(sp0 - 0x25cu, sp0 - 0x234u);
        wr32(sp0 - 0x254u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x101c37f5u:
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
        g->esp = sp0 - 0x244u;
        wr32(sp0 - 0x25cu, sp0 - 0x234u);
        wr32(sp0 - 0x254u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x101c3801u:
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
        g->esp = sp0 - 0x244u;
        wr32(sp0 - 0x25cu, sp0 - 0x234u);
        wr32(sp0 - 0x254u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x101c3808u:
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
        g->esp = sp0 - 0x244u;
        wr32(sp0 - 0x25cu, sp0 - 0x234u);
        wr32(sp0 - 0x254u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x101c380cu:
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
        g->esp = sp0 - 0x244u;
        wr32(sp0 - 0x25cu, sp0 - 0x234u);
        wr32(sp0 - 0x254u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x101c3818u:
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
        g->esp = sp0 - 0x244u;
        wr32(sp0 - 0x25cu, sp0 - 0x234u);
        wr32(sp0 - 0x254u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x101c381fu:
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
        g->esp = sp0 - 0x244u;
        wr32(sp0 - 0x25cu, sp0 - 0x234u);
        wr32(sp0 - 0x254u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x101c3823u:
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
        g->esp = sp0 - 0x244u;
        wr32(sp0 - 0x25cu, sp0 - 0x234u);
        wr32(sp0 - 0x254u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x101c3829u:
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
        g->esp = sp0 - 0x244u;
        wr32(sp0 - 0x25cu, sp0 - 0x234u);
        wr32(sp0 - 0x254u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x101c3839u:
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
        g->esp = sp0 - 0x244u;
        wr32(sp0 - 0x25cu, sp0 - 0x234u);
        wr32(sp0 - 0x254u, sp0 - 0x100u);
        wr32(sp0 - 0x250u, sp0 - 0x21cu);
        wr32(sp0 - 0x248u, sp0 - 0x224u);
        (void)sp0;
        return 1;
    }
    case 0x101c3880u:
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
        g->esp = sp0 - 0x244u;
        wr32(sp0 - 0x25cu, sp0 - 0x234u);
        wr32(sp0 - 0x254u, sp0 - 0x100u);
        wr32(sp0 - 0x250u, sp0 - 0x21cu);
        wr32(sp0 - 0x248u, sp0 - 0x224u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101c3400(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101c3400(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
