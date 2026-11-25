/* f_0x10075280 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10075280(Guest* g)
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 88u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100752a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebp = rd32(sp0 - 0x30u); in_ebx = rd32(sp0 - 0x2cu); g->ebp = rd32(sp0 - 0x30u); g->ebx = rd32(sp0 - 0x2cu); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_100752a6;
    case 0x100752bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100752bd;
    case 0x100752d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100752d4;
    case 0x100752ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100752eb;
    case 0x10075303u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10075303;
    case 0x10075320u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10075320;
    case 0x1007532cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1007532c;
    case 0x10075352u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10075352;
    case 0x10075361u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_10075361;
    case 0x1007538bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1007538b;
    case 0x10075393u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10075393;
    case 0x10075395u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10075395;
    case 0x100753a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100753a5;
    case 0x100753b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100753b9;
    case 0x100753d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100753d3;
    case 0x10075406u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10075406;
    case 0x10075413u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10075413;
    case 0x10075427u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10075427;
    case 0x10075436u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10075436;
    case 0x10075440u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10075440;
    case 0x10075442u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10075442;
    case 0x1007544cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1007544c;
    case 0x10075466u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10075466;
    case 0x1007546eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1007546e;
    case 0x10075479u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10075479;
    case 0x1007547fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1007547f;
    case 0x10075486u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10075486;
    default: break;
    }
#endif

    COW_AT(10075280)
    wr32(sp0 - 0x2cu, in_ebx);
    wr32(sp0 - 0x30u, in_ebp);
    wr32(sp0 - 0x34u, in_esi);
    t1 = rd32(COW_IMG(0x1047bfa8u));
    wr32(COW_IMG(0x1047d158u), 0u);
    wr32(sp0 - 0x38u, in_edi);
    wr32(sp0 - 0x3cu, 0u);
    wr32(sp0 - 0x40u, 0x1bu);
    t2 = rd32(t1 + 0xebcu);
    wr32(sp0 - 0x44u, t2);
    t3 = rd32(rd32(t1 + 0xebcu));
    g->esp = sp0 - 0x38u;
    cow_thiscall(g, rd32(t3 + 0xc8u), t3, 3, t2, 0x1bu, 0u);
    t4 = g->ecx;
    ecx = t4;
    COW_AT(100752a6)
    wr32(sp0 - 0x3cu, 0u);
    wr32(sp0 - 0x40u, 0xeu);
    t5 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    wr32(sp0 - 0x44u, t5);
    g->edx = rd32(t5);
    t6 = rd32(t5);
    g->esp = sp0 - 0x38u;
    cow_thiscall(g, rd32(t6 + 0xc8u), ecx, 3, t5, 0xeu, 0u);
    t7 = g->edx;
    edx = t7;
    COW_AT(100752bd)
    wr32(sp0 - 0x3cu, 0u);
    wr32(sp0 - 0x40u, 7u);
    t8 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    wr32(sp0 - 0x44u, t8);
    t9 = rd32(t8);
    g->esp = sp0 - 0x38u;
    cow_thiscall(g, rd32(t9 + 0xc8u), t9, 3, t8, 7u, 0u);
    t10 = g->ecx;
    ecx = t10;
    COW_AT(100752d4)
    wr32(sp0 - 0x3cu, 0u);
    wr32(sp0 - 0x40u, 0xfu);
    t11 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    wr32(sp0 - 0x44u, t11);
    g->edx = rd32(t11);
    t12 = rd32(t11);
    g->esp = sp0 - 0x38u;
    cow_thiscall(g, rd32(t12 + 0xc8u), ecx, 3, t11, 0xfu, 0u);
    t13 = g->edx;
    edx = t13;
    COW_AT(100752eb)
    wr32(sp0 - 0x3cu, 1u);
    wr32(sp0 - 0x40u, 0x16u);
    t14 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    wr32(sp0 - 0x44u, t14);
    g->esp = sp0 - 0x38u;
    cow_thiscall(g, rd32(rd32(t14) + 0xc8u), rd32(t14), 3, t14, 0x16u, 1u);
    COW_AT(10075303)
    wr32(sp0 - 0x3cu, sp0 - 0x20u);
    t15 = rd32(rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xdc8u) + 0x90u);
    wr32(sp0 - 0x40u, t15);
    g->edx = sp0 - 0x20u;
    g->esp = sp0 - 0x38u;
    cow_thiscall(g, rd32(rd32(t15) + 0x20u), rd32(t15), 2, t15, sp0 - 0x20u);
    t16 = g->edx;
    edx = t16;
    COW_AT(10075320)
    wr32(COW_IMG(0x1047d14cu), 3u);
    ebp = 0u;
    cf = 0u;
    pf = PARITY(0u);
    zf = 1u;
    sf = 0u;
    of = 0u;
L_1007532c: ;
    COW_AT(1007532c)
    t17 = rd32(COW_IMG(0x1045666cu));
    wr32(COW_IMG(0x1047d168u) + ebp * 4u, 0u);
    wr32(COW_IMG(0x1047d15cu) + ebp * 4u, 0u);
    t18 = 0x20u << (ebp & 0x1fu);
    wr32(sp0 - 0x3cu, t18);
    wr32(sp0 - 0x40u, t18);
    g->eax = t18;
    g->esp = sp0 - 0x38u;
    t19 = cow_thiscall(g, COW_IMG(0x1000ad70u), t17, 2, t18, t18);
    eax = t19;
    edi = COW_IMG(0x1047d15cu) + ebp * 4u;
    COW_AT(10075352)
    wr32(COW_IMG(0x1047d168u) + ebp * 4u, eax);
    if (eax == 0u) goto L_10075486;
    pf = PARITY((uint8_t)eax);
    zf = eax == 0u;
    sf = (int32_t)eax < 0;
    COW_AT(10075361)
    wr32(sp0 - 0x3cu, edi);
    wr32(sp0 - 0x40u, 0u);
    t20 = rd32(sp0 - 0x20u);
    wr32(sp0 - 0x44u, t20);
    wr32(sp0 - 0x48u, 1u);
    wr32(sp0 - 0x4cu, 1u);
    t21 = 0x20u << (ebp & 0x1fu);
    wr32(sp0 - 0x50u, t21);
    t22 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    wr32(sp0 - 0x54u, t22);
    wr32(sp0 - 0x24u, t21);
    g->edx = t21;
    t23 = rd32(rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu));
    g->esp = sp0 - 0x38u;
    cow_thiscall(g, rd32(t23 + 0x58u), t23, 7, t22, t21, 1u, 1u, t20, 0u, edi);
    t24 = g->ecx;
    t25 = g->edx;
    ecx = t24;
    edx = t25;
    COW_AT(1007538b)
    t26 = rd32(edi);
    if (t26 == 0u) goto L_1007546e;
    COW_AT(10075393)
    ebx = 0u;
L_10075395: ;
    COW_AT(10075395)
    if (rd32(COW_IMG(0x103546a0u) + ebx * 4u) != 5u)
    {
        ecx = rd32(COW_IMG(0x103546a0u) + ebx * 4u);
    COW_AT(100753a5)
        wr32(sp0 - 0x28u, 0u);
        wr32(sp0 - 0x3cu, sp0 - 0x28u);
        wr32(sp0 - 0x40u, 0u);
        wr32(sp0 - 0x44u, ecx);
        wr32(sp0 - 0x48u, rd32(edi));
        g->edx = rd32(rd32(edi));
        t27 = rd32(rd32(edi));
        g->esp = sp0 - 0x38u;
        cow_thiscall(g, rd32(t27 + 0x3cu), ecx, 4, rd32(edi), ecx, 0u, sp0 - 0x28u);
        t28 = g->edx;
        edx = t28;
    COW_AT(100753b9)
        t29 = rd32(COW_IMG(0x1047d168u) + ebp * 4u);
        wr32(sp0 - 0x3cu, t29);
        wr32(sp0 - 0x40u, 0u);
        t30 = rd32(sp0 - 0x28u);
        wr32(sp0 - 0x44u, t30);
        g->ebx = ebx;
        t31 = rd32(COW_IMG(0x1047bfa8u));
        g->esp = sp0 - 0x38u;
        cow_fastcall(g, COW_IMG(0x1006a070u), t31, edx, 3, t30, 0u, t29);
        t32 = g->ecx;
        ecx = t32;
    COW_AT(100753d3)
        wr32(sp0 - 0x3cu, 0x44u);
        t33 = rd32(COW_IMG(0x1047bfa8u));
        t34 = rd32(sp0 - 0x24u);
        wrf32(COW_IMG(0x103546f8u), (float)(double)(int32_t)t34);
        wrf32(COW_IMG(0x103546f4u), (float)(double)(int32_t)t34);
        wrf32(COW_IMG(0x103546e4u), (float)(double)(int32_t)t34);
        wrf32(COW_IMG(0x103546ccu), (float)(double)(int32_t)t34);
        t35 = rd32(t33 + 0xebcu);
        wr32(sp0 - 0x40u, t35);
        g->eax = t35;
        g->edx = rd32(t35);
        t36 = rd32(t35);
        g->esp = sp0 - 0x38u;
        t37 = cow_thiscall(g, rd32(t36 + 0x130u), ecx, 2, t35, 0x44u);
        t38 = g->ecx;
        t39 = g->edx;
        eax = t37;
        ecx = t38;
        edx = t39;
        esi = t33;
    COW_AT(10075406)
        wr32(sp0 - 0x3cu, 0x44u);
        g->eax = eax;
        g->edx = edx;
        t40 = rd32(esi + 0xdc8u);
        g->esp = sp0 - 0x38u;
        t41 = cow_cdecl(g, COW_IMG(0x1006a560u), 1, 0x44u);
        t42 = g->edx;
        eax = t41;
        edx = t42;
        esi = t40;
    COW_AT(10075413)
        wr32(sp0 - 0x3cu, eax);
        wr32(sp0 - 0x40u, COW_IMG(0x103546b8u));
        wr32(sp0 - 0x44u, 2u);
        wr32(sp0 - 0x48u, 5u);
        g->ebx = ebx;
        g->edx = edx;
        g->esp = sp0 - 0x38u;
        cow_thiscall(g, COW_IMG(0x1000cd00u), esi, 4, 5u, 2u, COW_IMG(0x103546b8u), eax);
        t43 = g->edx;
        edx = t43;
    COW_AT(10075427)
        wr32(sp0 - 0x3cu, ebx);
        wr32(sp0 - 0x40u, rd32(edi));
        g->esp = sp0 - 0x38u;
        cow_fastcall(g, COW_IMG(0x1006a0e0u), rd32(COW_IMG(0x1047bfa8u)), edx, 2, rd32(edi), ebx);
        t44 = g->edx;
        edx = t44;
    COW_AT(10075436)
        t45 = rd32(sp0 - 0x28u);
        wr32(sp0 - 0x3cu, t45);
        g->edx = edx;
        g->esp = sp0 - 0x38u;
        cow_thiscall(g, rd32(rd32(t45) + 8u), rd32(t45), 1, t45);
        t46 = g->edx;
        edx = t46;
    COW_AT(10075440)
    }
    COW_AT(10075442)
    if ((int32_t)(ebx + 1u) < 6)
    {
        ebx = ebx + 1u;
        goto L_10075395;
    }
    COW_AT(1007544c)
    t47 = rd32(COW_IMG(0x1047d14cu));
    wr32(COW_IMG(0x1047d200u), 0u);
    wr32(COW_IMG(0x1047d150u), 0u);
    if ((int32_t)(ebp + 1u) < (int32_t)t47)
    {
        cf = ebp + 1u < t47;
        pf = PARITY((uint8_t)(ebp + 1u - t47));
        zf = ebp + 1u == t47;
        sf = (int32_t)(ebp + 1u - t47) < 0;
        of = ((ebp + 1u ^ t47) & (ebp + 1u ^ ebp + 1u - t47)) >> 0x1fu;
        ebp = ebp + 1u;
        goto L_1007532c;
    }
    eax = t47;
    COW_AT(10075466)
    g->ebx = rd32(sp0 - 0x2cu);
    g->esi = rd32(sp0 - 0x34u);
    g->edi = rd32(sp0 - 0x38u);
    g->ebp = rd32(sp0 - 0x30u);
    return eax;
L_1007546e: ;
    COW_AT(1007546e)
    if (rd32(COW_IMG(0x1047d168u) + ebp * 4u) == 0u)
    {
        eax = rd32(COW_IMG(0x1047d168u) + ebp * 4u);
    }
    else
    {
        eax = rd32(COW_IMG(0x1047d168u) + ebp * 4u);
    COW_AT(10075479)
        wr32(sp0 - 0x3cu, eax);
        g->eax = eax;
        g->esp = sp0 - 0x38u;
        t48 = cow_thiscall(g, rd32(rd32(eax) + 8u), ecx, 1, eax);
        eax = t48;
    COW_AT(1007547f)
        wr32(COW_IMG(0x1047d168u) + ebp * 4u, 0u);
    }
L_10075486: ;
    COW_AT(10075486)
    g->ebx = rd32(sp0 - 0x2cu);
    g->esi = rd32(sp0 - 0x34u);
    g->edi = rd32(sp0 - 0x38u);
    g->ebp = rd32(sp0 - 0x30u);
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10075280(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100752a6u:
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
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebp = rd32(sp0 - 0x30u);
        in_ebx = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x38u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100752bdu:
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
        g->esp = sp0 - 0x38u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100752d4u:
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
        g->esp = sp0 - 0x38u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100752ebu:
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
        g->esp = sp0 - 0x38u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10075303u:
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
        g->esp = sp0 - 0x38u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10075320u:
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
        g->esp = sp0 - 0x38u;
        g->esi = 0u;
        wr32(sp0 - 0x3cu, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1007532cu:
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
        g->esp = sp0 - 0x38u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10075352u:
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
        g->esp = sp0 - 0x38u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10075361u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x38u;
        g->esi = 0u;
        g->cf = (uint8_t)(0u);
        g->of = (uint8_t)(0u);
        (void)sp0;
        return 1;
    }
    case 0x1007538bu:
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
        g->esp = sp0 - 0x38u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10075393u:
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
        g->esp = sp0 - 0x38u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10075395u:
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
        g->esp = sp0 - 0x38u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100753a5u:
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
        g->esp = sp0 - 0x38u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100753b9u:
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
        g->esp = sp0 - 0x38u;
        g->esi = sp0 - 0x28u;
        wr32(sp0 - 0x3cu, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x100753d3u:
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
        g->esp = sp0 - 0x38u;
        g->esi = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10075406u:
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
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x10075413u:
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
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10075427u:
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
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x10075436u:
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
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x10075440u:
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
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x10075442u:
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
        g->esp = sp0 - 0x38u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1007544cu:
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
        g->esp = sp0 - 0x38u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10075466u:
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
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x1007546eu:
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
        g->esp = sp0 - 0x38u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10075479u:
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
        g->esp = sp0 - 0x38u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1007547fu:
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
        g->esp = sp0 - 0x38u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10075486u:
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
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10075280(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10075280(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
