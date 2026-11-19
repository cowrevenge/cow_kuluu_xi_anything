/* f_0x10075c40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10075c40(Guest* g)
{
    uint32_t cf;
    double d32;
    double d33;
    double d34;
    double d35;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_c;
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
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 44u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10075c50u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; self = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0xcu); goto E_10075c50;
    case 0x10075c64u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; self = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x14u); goto E_10075c64;
    case 0x10075c71u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; self = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x14u); goto E_10075c71;
    case 0x10075c76u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; self = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x14u); goto E_10075c76;
    case 0x10075c78u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; self = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x14u); goto E_10075c78;
    case 0x10075c7cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; self = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x14u); goto E_10075c7c;
    case 0x10075c7fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; self = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x14u); goto E_10075c7f;
    case 0x10075cadu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10075cad;
    case 0x10075cceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10075cce;
    case 0x10075cdau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10075cda;
    case 0x10075ceeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10075cee;
    case 0x10075cf8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10075cf8;
    case 0x10075cfbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10075cfb;
    case 0x10075d0fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10075d0f;
    case 0x10075d2au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10075d2a;
    case 0x10075d33u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10075d33;
    case 0x10075d6fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10075d6f;
    case 0x10075d7fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10075d7f;
    case 0x10075d93u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10075d93;
    case 0x10075d95u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10075d95;
    case 0x10075d9eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10075d9e;
    case 0x10075da5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10075da5;
    case 0x10075dd1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10075dd1;
    case 0x10075e08u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10075e08;
    case 0x10075e3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10075e3e;
    case 0x10075e66u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10075e66;
    case 0x10075e7du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10075e7d;
    case 0x10075e93u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10075e93;
    case 0x10075eadu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10075ead;
    case 0x10075ebdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10075ebd;
    case 0x10075edeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10075ede;
    case 0x10075eedu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10075eed;
    case 0x10075ef7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10075ef7;
    case 0x10075f01u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10075f01;
    case 0x10075f0bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10075f0b;
    case 0x10075f20u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10075f20;
    case 0x10075f2au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10075f2a;
    case 0x10075f2du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10075f2d;
    case 0x10075f3cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10075f3c;
    case 0x10075f4bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10075f4b;
    case 0x10075f55u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10075f55;
    case 0x10075f71u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10075f71;
    case 0x10075f73u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_c = rd32(sp0 - 0xcu); goto E_10075f73;
    default: break;
    }
#endif

    COW_AT(10075c40)
    wr32(sp0 - 0xcu, in_edi);
    if (rd32(self) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
        ebx = in_ebx;
        ebp = in_ebp;
        esi = in_esi;
        loc_c = in_edi;
        goto L_10075f73;
    }
    ecx = rd32(self);
    COW_AT(10075c50)
    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_esi);
    if ((int32_t)rd32(COW_IMG(0x1047d14cu)) <= 0)
    {
        edx = rd32(COW_IMG(0x1047d14cu));
        cf = 0u;
        pf = PARITY((uint8_t)rd32(COW_IMG(0x1047d14cu)));
        zf = rd32(COW_IMG(0x1047d14cu)) == 0u;
        sf = (int32_t)rd32(COW_IMG(0x1047d14cu)) < 0;
        of = 0u;
        goto L_10075c7c;
    }
    eax = rd16(ecx + 0x24u);
    edx = rd32(COW_IMG(0x1047d14cu));
    esi = 0u;
    cf = 0u;
    pf = PARITY((uint8_t)rd32(COW_IMG(0x1047d14cu)));
    zf = rd32(COW_IMG(0x1047d14cu)) == 0u;
    sf = (int32_t)rd32(COW_IMG(0x1047d14cu)) < 0;
    of = 0u;
L_10075c64: ;
    COW_AT(10075c64)
    if ((int32_t)eax < (int32_t)(0x20u << (esi & 0x1fu))) goto L_10075c78;
    COW_AT(10075c71)
    if ((int32_t)(esi + 1u) < (int32_t)edx)
    {
        cf = esi + 1u < edx;
        pf = PARITY((uint8_t)(esi + 1u - edx));
        zf = esi + 1u == edx;
        sf = (int32_t)(esi + 1u - edx) < 0;
        of = ((esi + 1u ^ edx) & (esi + 1u ^ esi + 1u - edx)) >> 0x1fu;
        esi = esi + 1u;
        goto L_10075c64;
    }
    cf = esi + 1u < edx;
    pf = PARITY((uint8_t)(esi + 1u - edx));
    zf = esi + 1u == edx;
    sf = (int32_t)(esi + 1u - edx) < 0;
    of = ((esi + 1u ^ edx) & (esi + 1u ^ esi + 1u - edx)) >> 0x1fu;
    COW_AT(10075c76)
L_10075c7c: ;
    COW_AT(10075c7c)
    esi = edx - 1u;
L_10075c7f: ;
    COW_AT(10075c7f)
    wr32(sp0 - 0x18u, in_ebp);
    wr32(sp0 - 0x1cu, sp0 - 8u);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0x20u, 0u);
    t1 = 0x20u << (esi & 0x1fu);
    wr32(sp0 - 4u, t1);
    wr32(sp0 - 0x24u, 5u);
    t2 = rd32(COW_IMG(0x1047d15cu) + esi * 4u);
    wr32(sp0 - 0x28u, t2);
    g->edx = sp0 - 8u;
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, rd32(rd32(t2) + 0x3cu), rd32(t2), 5, t2, 5u, 0u, sp0 - 8u, in_ebp);
    t3 = g->edx;
    edx = t3;
    ebx = COW_IMG(0x1047d15cu) + esi * 4u;
    COW_AT(10075cad)
    t4 = rd32(COW_IMG(0x1047d168u) + esi * 4u);
    wr32(sp0 - 0x18u, t4);
    wr32(sp0 - 0x1cu, 0u);
    t5 = rd32(sp0 - 4u);
    wr32(sp0 - 0x20u, t5);
    g->ebx = ebx;
    g->eax = t4;
    t6 = rd32(COW_IMG(0x1047bfa8u));
    g->esp = sp0 - 0x14u;
    t7 = cow_fastcall(g, COW_IMG(0x1006a070u), t6, edx, 3, t5, 0u, t4);
    t8 = g->ecx;
    t9 = g->edx;
    eax = t7;
    ecx = t8;
    edx = t9;
    ebp = COW_IMG(0x1047d168u) + esi * 4u;
    COW_AT(10075cce)
    if (rd8(COW_IMG(0x1047d148u)) & 1u)
    {
        eax = (eax & 0xffffff00u) | 1u;
    }
    else
    {
        eax = (eax & 0xffffff00u) | 1u;
        ecx = (ecx & 0xffffff00u) | rd8(COW_IMG(0x1047d148u));
    COW_AT(10075cda)
        wr8(COW_IMG(0x1047d148u), (uint8_t)(ecx | eax));
        g->eax = eax;
        g->edx = (edx & 0xffffff00u) | (uint8_t)(ecx | eax);
        g->esp = sp0 - 0x14u;
        t10 = cow_thiscall(g, COW_IMG(0x1006ad90u), COW_IMG(0x1047d1f0u), 0);
        t11 = g->ecx;
        t12 = g->edx;
        eax = t10;
        ecx = t11;
        edx = t12;
    COW_AT(10075cee)
        wr32(sp0 - 0x18u, COW_IMG(0x10075fa0u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t13 = cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x10075fa0u));
        t14 = g->edx;
        eax = t13;
        edx = t14;
    COW_AT(10075cf8)
    }
    COW_AT(10075cfb)
    wr32(sp0 - 0x18u, COW_IMG(0x103548a8u));
    wr32(sp0 - 0x1cu, COW_IMG(0x10354944u));
    g->esp = sp0 - 0x14u;
    cow_fastcall(g, COW_IMG(0x1006ae30u), COW_IMG(0x1047d1f0u), edx, 2, COW_IMG(0x10354944u), COW_IMG(0x103548a8u));
    COW_AT(10075d0f)
    t15 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x18u, t15);
    wr32(sp0 - 0x1cu, 0x3cu);
    t16 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    wr32(sp0 - 0x20u, t16);
    g->eax = t16;
    g->edx = rd32(t16);
    t17 = rd32(t16);
    g->esp = sp0 - 0x14u;
    t18 = cow_thiscall(g, rd32(t17 + 0xc8u), t15, 3, t16, 0x3cu, t15);
    t19 = g->edx;
    eax = t18;
    edx = t19;
    COW_AT(10075d2a)
    wr32(sp0 - 0x18u, 0u);
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x10075960u), self, 1, 0u);
    t20 = g->ecx;
    ecx = t20;
    COW_AT(10075d33)
    wr32(sp0 - 0x18u, 0x144u);
    t21 = rd32(COW_IMG(0x1047bfa8u));
    t22 = rd32(sp0);
    wrf32(sp0 + 0xcu, (float)(double)(int32_t)t22);
    wrf32(COW_IMG(0x103549c4u), (float)(double)(int32_t)t22);
    wrf32(COW_IMG(0x1035498cu), (float)(double)(int32_t)t22);
    wrf32(COW_IMG(0x103549c8u), (float)(double)(int32_t)t22);
    wrf32(COW_IMG(0x103549acu), (float)(double)(int32_t)t22);
    t23 = rd32(t21 + 0xebcu);
    wr32(sp0 - 0x1cu, t23);
    g->eax = t23;
    g->edx = rd32(t23);
    t24 = rd32(t23);
    g->esp = sp0 - 0x18u;
    t25 = cow_thiscall(g, rd32(t24 + 0x130u), ecx, 1, t23);
    t26 = g->ecx;
    t27 = g->edx;
    eax = t25;
    ecx = t26;
    edx = t27;
    esi = t21;
    COW_AT(10075d6f)
    wr32(sp0 - 0x1cu, 0x144u);
    g->eax = eax;
    g->edx = edx;
    t28 = rd32(esi + 0xdc8u);
    g->esp = sp0 - 0x18u;
    t29 = cow_cdecl(g, COW_IMG(0x1006a560u), 1, 0x144u);
    t30 = g->edx;
    eax = t29;
    edx = t30;
    esi = t28;
    COW_AT(10075d7f)
    wr32(sp0 - 0x1cu, eax);
    wr32(sp0 - 0x20u, COW_IMG(0x10354970u));
    wr32(sp0 - 0x24u, 2u);
    wr32(sp0 - 0x28u, 5u);
    g->ebx = ebx;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x1000cd00u), esi, 4, 5u, 2u, COW_IMG(0x10354970u), eax);
    COW_AT(10075d93)
    esi = 0u;
L_10075d95: ;
    COW_AT(10075d95)
    if (esi > 3u) goto L_10075e66;
    COW_AT(10075d9e)
    t31 = rd32(COW_IMG(0x10075f7cu) + esi * 4u);
    switch (t31 - RD)
    {
    case 0x10075da5u: goto L_10075da5;
    case 0x10075dd1u: goto L_10075dd1;
    case 0x10075e08u: goto L_10075e08;
    case 0x10075e3eu: goto L_10075e3e;
    default: rt_fatal(g, COW_IMG(0x10075d9eu), "switch");
    }
    return 0;
L_10075c78: ;
    COW_AT(10075c78)
    if ((int32_t)esi < (int32_t)edx)
    {
        cf = esi < edx;
        pf = PARITY((uint8_t)(esi - edx));
        zf = esi == edx;
        sf = (int32_t)(esi - edx) < 0;
        of = ((esi ^ edx) & (esi ^ esi - edx)) >> 0x1fu;
        goto L_10075c7f;
    }
    cf = esi < edx;
    pf = PARITY((uint8_t)(esi - edx));
    zf = esi == edx;
    sf = (int32_t)(esi - edx) < 0;
    of = ((esi ^ edx) & (esi ^ esi - edx)) >> 0x1fu;
    goto L_10075c7c;
L_10075da5: ;
    COW_AT(10075da5)
    d35 = fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(COW_IMG(0x1032a378u)));
    wr32(COW_IMG(0x10354a48u), arg2);
    wr32(COW_IMG(0x10354a2cu), arg2);
    wrf32(COW_IMG(0x10354a44u), (float)d35);
    wrf32(COW_IMG(0x10354a0cu), (float)d35);
L_10075e66: ;
    COW_AT(10075e66)
    wr32(sp0 - 0x1cu, sp0 - 8u);
    wr32(sp0 - 0x20u, 0u);
    t36 = rd32(COW_IMG(0x103549e0u) + esi * 4u);
    wr32(sp0 - 0x24u, t36);
    wr32(sp0 - 0x28u, rd32(ebx));
    g->edx = t36;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, rd32(rd32(rd32(ebx)) + 0x3cu), rd32(rd32(ebx)), 4, rd32(ebx), t36, 0u, sp0 - 8u);
    t37 = g->edx;
    edx = t37;
    COW_AT(10075e7d)
    wr32(sp0 - 0x1cu, rd32(ebp));
    wr32(sp0 - 0x20u, 0u);
    t38 = rd32(sp0 - 8u);
    wr32(sp0 - 0x24u, t38);
    g->ebx = ebx;
    t39 = rd32(COW_IMG(0x1047bfa8u));
    g->esp = sp0 - 0x18u;
    cow_fastcall(g, COW_IMG(0x1006a070u), t39, edx, 3, t38, 0u, rd32(ebp));
    t40 = g->ecx;
    ecx = t40;
    COW_AT(10075e93)
    wr32(sp0 - 0x1cu, 0x144u);
    t41 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    wr32(sp0 - 0x20u, t41);
    g->eax = t41;
    g->edx = rd32(t41);
    t42 = rd32(t41);
    t43 = rd32(COW_IMG(0x1047bfa8u));
    g->esp = sp0 - 0x18u;
    t44 = cow_thiscall(g, rd32(t42 + 0x130u), ecx, 2, t41, 0x144u);
    t45 = g->ecx;
    t46 = g->edx;
    eax = t44;
    ecx = t45;
    edx = t46;
    edi = t43;
    COW_AT(10075ead)
    wr32(sp0 - 0x1cu, 0x144u);
    g->eax = eax;
    g->edx = edx;
    t47 = rd32(edi + 0xdc8u);
    g->esp = sp0 - 0x18u;
    t48 = cow_cdecl(g, COW_IMG(0x1006a560u), 1, 0x144u);
    t49 = g->edx;
    eax = t48;
    edx = t49;
    edi = t47;
    COW_AT(10075ebd)
    wr32(sp0 - 0x1cu, eax);
    t50 = COW_IMG(0x103549f0u) + esi * 0x70u;
    wr32(sp0 - 0x20u, t50);
    wr32(sp0 - 0x24u, 2u);
    wr32(sp0 - 0x28u, 5u);
    g->ebx = ebx;
    g->eax = t50;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t51 = cow_thiscall(g, COW_IMG(0x1000cd00u), edi, 4, 5u, 2u, t50, eax);
    t52 = g->edx;
    eax = t51;
    edx = t52;
    COW_AT(10075ede)
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, 0u);
    g->esp = sp0 - 0x18u;
    cow_fastcall(g, COW_IMG(0x1006a0e0u), rd32(COW_IMG(0x1047bfa8u)), edx, 2, 0u, 0u);
    t53 = g->edx;
    edx = t53;
    COW_AT(10075eed)
    t54 = rd32(sp0 - 8u);
    wr32(sp0 - 0x1cu, t54);
    g->eax = t54;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t55 = cow_thiscall(g, rd32(rd32(t54) + 8u), rd32(t54), 1, t54);
    t56 = g->edx;
    eax = t55;
    edx = t56;
    COW_AT(10075ef7)
    if ((int32_t)(esi + 1u) < 4)
    {
        esi = esi + 1u;
        goto L_10075d95;
    }
    COW_AT(10075f01)
    if ((rd8(COW_IMG(0x1047d148u)) & 2u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047d148u));
        ebp = rd32(sp0 - 0x18u);
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047d148u));
        ebp = rd32(sp0 - 0x18u);
    COW_AT(10075f0b)
        wr8(COW_IMG(0x1047d148u), (uint8_t)(eax | 2u));
        g->eax = eax;
        g->edx = (edx & 0xffffff00u) | (uint8_t)(eax | 2u);
        g->esp = sp0 - 0x14u;
        t57 = cow_thiscall(g, COW_IMG(0x1006ad90u), COW_IMG(0x1047d204u), 0);
        t58 = g->ecx;
        t59 = g->edx;
        eax = t57;
        ecx = t58;
        edx = t59;
    COW_AT(10075f20)
        wr32(sp0 - 0x18u, COW_IMG(0x10075f90u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t60 = cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x10075f90u));
        t61 = g->edx;
        eax = t60;
        edx = t61;
    COW_AT(10075f2a)
    }
    COW_AT(10075f2d)
    wr32(sp0 - 0x18u, COW_IMG(0x10354bb0u));
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t62 = cow_fastcall(g, COW_IMG(0x1006af00u), COW_IMG(0x1047d204u), edx, 1, COW_IMG(0x10354bb0u));
    t63 = g->edx;
    eax = t62;
    edx = t63;
    COW_AT(10075f3c)
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0u);
    t64 = rd32(COW_IMG(0x1047bfa8u));
    g->esp = sp0 - 0x14u;
    cow_fastcall(g, COW_IMG(0x1006a0e0u), t64, edx, 2, 0u, 0u);
    t65 = g->ecx;
    ecx = t65;
    COW_AT(10075f4b)
    t66 = rd32(sp0 - 8u);
    wr32(sp0 - 0x18u, t66);
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, rd32(rd32(t66) + 8u), ecx, 1, t66);
    COW_AT(10075f55)
    wr32(sp0 - 0x18u, rd32(ebx));
    wr32(sp0 - 0x1cu, arg1);
    t67 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    wr32(sp0 - 0x20u, t67);
    g->eax = t67;
    g->edx = arg1;
    g->esp = sp0 - 0x14u;
    t68 = cow_thiscall(g, rd32(rd32(t67) + 0xf4u), rd32(t67), 3, t67, arg1, rd32(ebx));
    t69 = g->edx;
    eax = t68;
    edx = t69;
    COW_AT(10075f71)
    ebx = rd32(sp0 - 0x10u);
    esi = rd32(sp0 - 0x14u);
    loc_c = rd32(sp0 - 0xcu);
L_10075f73: ;
    COW_AT(10075f73)
    g->ebx = ebx;
    g->esi = esi;
    g->edi = loc_c;
    g->ebp = ebp;
    g->edx = edx;
    return eax;
L_10075dd1: ;
    COW_AT(10075dd1)
    d34 = fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(COW_IMG(0x1032c9a4u)));
    wr32(COW_IMG(0x10354ab8u), arg2);
    wr32(COW_IMG(0x10354a9cu), arg2);
    wrf32(COW_IMG(0x10354a98u), (float)d34);
    wrf32(COW_IMG(0x10354a60u), (float)d34);
    wr32(COW_IMG(0x10354ab4u), arg2);
    wr32(COW_IMG(0x10354a7cu), arg2);
    goto L_10075e66;
L_10075e08: ;
    COW_AT(10075e08)
    d33 = fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(COW_IMG(0x1032c9a4u)));
    wr32(COW_IMG(0x10354b24u), arg2);
    wr32(COW_IMG(0x10354aecu), arg2);
    wrf32(COW_IMG(0x10354af0u), (float)d33);
    wrf32(COW_IMG(0x10354ad4u), (float)d33);
    wr32(COW_IMG(0x10354b28u), arg2);
    wr32(COW_IMG(0x10354b0cu), arg2);
    goto L_10075e66;
L_10075e3e: ;
    COW_AT(10075e3e)
    d32 = fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(COW_IMG(0x1032a378u)));
    wr32(COW_IMG(0x10354b94u), arg2);
    wr32(COW_IMG(0x10354b5cu), arg2);
    wrf32(COW_IMG(0x10354b98u), (float)d32);
    wrf32(COW_IMG(0x10354b7cu), (float)d32);
    goto L_10075e66;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10075c40(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10075c50u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
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
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        self = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10075c64u:
    {
        uint32_t cf;
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
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10075c71u:
    {
        uint32_t cf;
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
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10075c76u:
    {
        uint32_t cf;
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
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10075c78u:
    {
        uint32_t cf;
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
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10075c7cu:
    {
        uint32_t cf;
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
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10075c7fu:
    {
        uint32_t cf;
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
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10075cadu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
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
        esi = g->esi;
        self = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x1cu, sp0 - 8u);
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10075cceu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
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
        esi = g->esi;
        self = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10075cdau:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
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
        esi = g->esi;
        self = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10075ceeu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
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
        esi = g->esi;
        self = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10075cf8u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
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
        esi = g->esi;
        self = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10075cfbu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
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
        esi = g->esi;
        self = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10075d0fu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
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
        esi = g->esi;
        self = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10075d2au:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
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
        esi = g->esi;
        self = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10075d33u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10075d6fu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x18u, 0x144u);
        (void)sp0;
        return 1;
    }
    case 0x10075d7fu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x10075d93u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10075d95u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10075d9eu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10075da5u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10075dd1u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10075e08u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10075e3eu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10075e66u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10075e7du:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x1cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10075e93u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10075eadu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10075ebdu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x10075edeu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10075eedu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10075ef7u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10075f01u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10075f0bu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10075f20u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10075f2au:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10075f2du:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10075f3cu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10075f4bu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10075f55u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10075f71u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10075f73u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10075c40(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10075c40(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
