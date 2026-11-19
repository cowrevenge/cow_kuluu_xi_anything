/* f_0x10215120 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10215120(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_2060;
    uint32_t loc_2064;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 8312u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10215142u: ecx = g->ecx; self = g->esi; in_edi = g->edi; zf = g->zf; sf = g->sf; in_esi = rd32(sp0 - 0x2064u); in_ebx = rd32(sp0 - 0x2060u); g->ebx = rd32(sp0 - 0x2060u); g->esi = rd32(sp0 - 0x2064u); goto E_10215142;
    case 0x10215149u: ecx = g->ecx; self = g->esi; in_edi = g->edi; zf = g->zf; sf = g->sf; in_esi = rd32(sp0 - 0x2064u); in_ebx = rd32(sp0 - 0x2060u); g->ebx = rd32(sp0 - 0x2060u); g->esi = rd32(sp0 - 0x2064u); goto E_10215149;
    case 0x10215150u: eax = g->eax; ecx = g->ecx; self = g->esi; in_edi = g->edi; zf = g->zf; sf = g->sf; in_esi = rd32(sp0 - 0x2064u); in_ebx = rd32(sp0 - 0x2060u); g->ebx = rd32(sp0 - 0x2060u); g->esi = rd32(sp0 - 0x2064u); goto E_10215150;
    case 0x1021519fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021519f;
    case 0x102151a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; zf = g->zf; sf = g->sf; goto E_102151a5;
    case 0x102151d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; zf = g->zf; sf = g->sf; goto E_102151d5;
    case 0x102151e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; zf = g->zf; sf = g->sf; goto E_102151e0;
    case 0x102151e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; zf = g->zf; sf = g->sf; goto E_102151e4;
    case 0x102151eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; zf = g->zf; sf = g->sf; goto E_102151ee;
    case 0x102151f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; zf = g->zf; sf = g->sf; goto E_102151f1;
    case 0x102151fau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; zf = g->zf; sf = g->sf; goto E_102151fa;
    case 0x10215215u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_10215215;
    case 0x10215226u: eax = g->eax; ecx = g->ecx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_10215226;
    case 0x1021522bu: eax = g->eax; ecx = g->ecx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021522b;
    case 0x10215239u: eax = g->eax; ecx = g->ecx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_10215239;
    case 0x1021527au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021527a;
    case 0x10215292u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_10215292;
    case 0x102152bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_102152bb;
    case 0x102152cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_102152cd;
    case 0x10215318u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_10215318;
    case 0x10215322u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_10215322;
    case 0x10215348u: ecx = g->ecx; self = g->esi; in_edi = g->edi; zf = g->zf; sf = g->sf; in_esi = rd32(sp0 - 0x2064u); in_ebx = rd32(sp0 - 0x2060u); g->ebx = rd32(sp0 - 0x2060u); g->esi = rd32(sp0 - 0x2064u); goto E_10215348;
    case 0x10215354u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; zf = g->zf; sf = g->sf; goto E_10215354;
    case 0x1021536du: ecx = g->ecx; self = g->esi; in_edi = g->edi; zf = g->zf; sf = g->sf; in_esi = rd32(sp0 - 0x2064u); in_ebx = rd32(sp0 - 0x2060u); g->ebx = rd32(sp0 - 0x2060u); g->esi = rd32(sp0 - 0x2064u); goto E_1021536d;
    case 0x10215378u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; zf = g->zf; sf = g->sf; goto E_10215378;
    case 0x1021537fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021537f;
    case 0x10215386u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; zf = g->zf; sf = g->sf; goto E_10215386;
    case 0x1021538au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021538a;
    case 0x1021538cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; zf = g->zf; sf = g->sf; goto E_1021538c;
    case 0x1021538fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; zf = g->zf; sf = g->sf; loc_2064 = rd32(sp0 - 0x2064u); loc_2060 = rd32(sp0 - 0x2060u); goto E_1021538f;
    default: break;
    }
#endif

    COW_AT(10215120)
    wr32(sp0 - 0x2060u, in_ebx);
    wr32(sp0 - 0x2064u, in_esi);
    if (rd8(self + 0x114u) == 0u) goto L_1021536d;
    ecx = rd8(self + 0x114u);
    COW_AT(10215142)
    if (ecx == 1u) goto L_10215348;
    ecx = ecx - 1u;
    COW_AT(10215149)
    if (ecx != 1u)
    {
        eax = 0u;
        loc_2060 = in_ebx;
        loc_2064 = in_esi;
        goto L_1021538f;
    }
    COW_AT(10215150)
    wr32(sp0 - 0x2068u, 0u);
    wr32(sp0 - 0x206cu, sp0 - 0x205cu);
    wr32(sp0 - 0x205cu, COW_IMG(0x1033bcf0u));
    wr32(sp0 - 0x2054u, 0u);
    wr32(sp0 - 0x2050u, 0u);
    wr32(sp0 - 0x204cu, 0u);
    t1 = rd32(self + 0x138u);
    wr16(sp0 - 0x2048u, 0u);
    wr16(sp0 - 0x2046u, 0u);
    wr8(sp0 - 0x2044u, 0u);
    wr8(sp0 - 0x1f44u, 0u);
    wr8(sp0 - 0xfa4u, 0u);
    wr32(sp0 - 0x2058u, t1);
    g->esp = sp0 - 0x2064u;
    t2 = cow_call_regs(g, COW_IMG(0x102160a0u), t1, self, g->edx, 0, 2, sp0 - 0x205cu, 0u);
    t3 = g->ecx;
    if ((int32_t)t2 < 0)
    {
        eax = t2;
        goto L_1021538c;
    }
    eax = t2;
    ecx = t3;
    zf = t2 == 0u;
    sf = (int32_t)t2 < 0;
    COW_AT(1021519f)
    if (zf || sf)
    {
        loc_2060 = rd32(sp0 - 0x2060u);
        loc_2064 = rd32(sp0 - 0x2064u);
        goto L_1021538f;
    }
    COW_AT(102151a5)
    wr32(sp0 - 0x2068u, 0xfa0u);
    wr32(sp0 - 0x206cu, sp0 - 0x1f44u);
    wr32(sp0 - 0x2070u, sp0 - 0xfa0u);
    wr32(self + 0x144u, 1u);
    g->esp = sp0 - 0x2064u;
    t4 = cow_call_regs(g, COW_IMG(0x10312090u), sp0 - 0xfa0u, g->ecx, g->edx, 1, 3, sp0 - 0xfa0u, sp0 - 0x1f44u, 0xfa0u);
    eax = t4;
    ecx = 0u;
    edx = sp0 - 0x1f44u;
L_102151d5: ;
    COW_AT(102151d5)
    if (rd8(ecx + sp0 - 0xfa0u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(ecx + sp0 - 0xfa0u);
        goto L_102151fa;
    }
    eax = (eax & 0xffffff00u) | rd8(ecx + sp0 - 0xfa0u);
    COW_AT(102151e0)
    if ((uint8_t)eax != 0xdu) goto L_102151ee;
    COW_AT(102151e4)
    if (rd8(ecx + sp0 - 0xf9fu) == 0xau) goto L_102151f1;
L_102151ee: ;
    COW_AT(102151ee)
    wr8(edx, (uint8_t)eax);
    edx = edx + 1u;
L_102151f1: ;
    COW_AT(102151f1)
    if ((int32_t)(ecx + 1u) < 3998)
    {
        ecx = ecx + 1u;
        goto L_102151d5;
    }
L_102151fa: ;
    COW_AT(102151fa)
    wr32(sp0 - 0x2068u, in_edi);
    wr32(sp0 - 0x206cu, 0xau);
    wr32(sp0 - 0x2070u, sp0 - 0x1f44u);
    wr8(edx, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x2064u;
    t5 = cow_thiscall_cdecl(g, COW_IMG(0x10315210u), sp0 - 0x1f44u, 3, sp0 - 0x1f44u, 0xau, in_edi);
    t6 = g->edx;
    if (t5 == 0u)
    {
        edx = t6;
        goto L_10215292;
    }
    edi = t5;
L_10215215: ;
    COW_AT(10215215)
    wr8(edi, 0u);
    if (edi - 1u <= sp0 - 0x1f44u)
    {
        edi = edi + 1u;
        goto L_10215239;
    }
    eax = edi - 1u;
    edi = edi + 1u;
L_10215226: ;
    COW_AT(10215226)
    if (rd8(eax) != 0x20u) goto L_10215239;
    COW_AT(1021522b)
    wr8(eax, 0u);
    if (eax - 1u > sp0 - 0x1f44u)
    {
        eax = eax - 1u;
        goto L_10215226;
    }
L_10215239: ;
    COW_AT(10215239)
    wr32(sp0 - 0x206cu, sp0 - 0x205cu);
    g->eax = rd32(self + 0x144u);
    g->edx = sp0 - 0x205cu;
    t7 = rd32(self + 0x144u);
    g->esp = sp0 - 0x2068u;
    t8 = cow_thiscall(g, COW_IMG(0x10212160u), rd32(self + t7 * 4u + 0x8cu), 1, sp0 - 0x205cu);
    t9 = g->edx;
    wr32(sp0 - 0x206cu, 0xfa0u);
    wr32(sp0 - 0x2070u, edi);
    wr32(sp0 - 0x2074u, sp0 - 0x1f44u);
    g->edx = t9;
    cow_call_regs(g, COW_IMG(0x10312090u), t8, g->ecx, g->edx, 1, 3, sp0 - 0x1f44u, edi, 0xfa0u);
    t10 = g->edx;
    t11 = rd32(self + 0x144u) + 1u;
    wr32(self + 0x144u, t11);
    if ((int32_t)t11 >= 29)
    {
        edx = t10;
        goto L_10215292;
    }
    eax = t11;
    ecx = t11;
    COW_AT(1021527a)
    wr32(sp0 - 0x206cu, 0xau);
    wr32(sp0 - 0x2070u, sp0 - 0x1f44u);
    g->eax = eax;
    g->edx = sp0 - 0x1f44u;
    g->esp = sp0 - 0x2064u;
    t12 = cow_thiscall_cdecl(g, COW_IMG(0x10315210u), ecx, 3, sp0 - 0x1f44u, 0xau, rd32(sp0 - 0x2068u));
    t13 = g->edx;
    if (t12 != 0u)
    {
        edi = t12;
        goto L_10215215;
    }
    edx = t13;
L_10215292: ;
    COW_AT(10215292)
    wr32(sp0 - 0x206cu, sp0 - 0x205cu);
    t14 = rd32(self + rd32(self + 0x144u) * 4u + 0x8cu);
    g->esp = sp0 - 0x2068u;
    cow_thiscall(g, COW_IMG(0x10212160u), t14, 1, sp0 - 0x205cu);
    t15 = g->ecx;
    t16 = rd32(self + 0x144u) + 1u;
    t17 = rd32(sp0 - 0x2068u);
    wr32(self + 0x144u, t16);
    eax = 0u;
    ecx = t15;
    edx = t16;
    edi = t17;
L_102152bb: ;
    COW_AT(102152bb)
    t18 = rd8(COW_IMG(0x10350e4cu) + eax);
    wr8(eax + sp0 - 0x1f44u, (uint8_t)t18);
    if ((uint8_t)t18 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t18;
        goto L_102152bb;
    }
    COW_AT(102152cd)
    wr32(sp0 - 0x2068u, sp0 - 0x205cu);
    g->edx = edx;
    g->esp = sp0 - 0x2064u;
    cow_thiscall(g, COW_IMG(0x10212160u), rd32(edx * 4u + self + 0x8cu), 1, sp0 - 0x205cu);
    t19 = g->edx;
    wr32(sp0 - 0x2068u, 4u);
    t20 = rd32(self + rd32(self + 0x144u) * 4u + 0x8cu);
    t21 = rd8(rd32(self + rd32(self + 0x144u) * 4u + 0x8cu) + 0x29u);
    wr8(t20 + 0x29u, (t21 & 0xfeu) ^ 1u);
    t22 = rd32(self + 0x144u) + 1u;
    wr32(self + 0x144u, t22);
    g->eax = t20;
    g->ecx = rd32(COW_IMG(0x10664530u));
    t23 = rd32(COW_IMG(0x10664530u));
    t24 = cow_stdcall(g, COW_IMG(0x10216a50u), 1, 4u);
    t25 = g->ecx;
    eax = t24;
    ecx = t25;
    edx = sp0 - 0x1f44u;
L_10215318: ;
    COW_AT(10215318)
    t26 = rd8(eax);
    wr8(edx, (uint8_t)t26);
    if ((uint8_t)t26 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t26;
        edx = edx + 1u;
        goto L_10215318;
    }
    edx = edx + 1u;
    COW_AT(10215322)
    wr32(sp0 - 0x2068u, sp0 - 0x205cu);
    wr32(sp0 - 0x2058u, 0x7fffffffu);
    g->esp = sp0 - 0x2064u;
    cow_thiscall(g, COW_IMG(0x10212160u), rd32(self + 0x8cu), 1, sp0 - 0x205cu);
    g->ebx = rd32(sp0 - 0x2060u);
    g->esi = rd32(sp0 - 0x2064u);
    g->edi = edi;
    return 1u;
L_10215348: ;
    COW_AT(10215348)
    wr32(sp0 - 0x2068u, 0u);
    g->eax = 0u;
    g->ecx = self;
    g->esp = sp0 - 0x2064u;
    t27 = cow_stdcall(g, COW_IMG(0x10216090u), 1, 0u);
    t28 = g->ecx;
    if (t27 == 0u)
    {
        eax = t27;
        goto L_1021538c;
    }
    ecx = t28;
L_10215354: ;
    COW_AT(10215354)
    wr8(self + 0x114u, (uint8_t)(rd8(self + 0x114u) + 1u));
    g->ebx = rd32(sp0 - 0x2060u);
    g->esi = rd32(sp0 - 0x2064u);
    g->edi = in_edi;
    return 0u;
L_1021536d: ;
    COW_AT(1021536d)
    g->esp = sp0 - 0x2064u;
    t29 = cow_call_regs(g, COW_IMG(0x10216080u), 0u, self, g->edx, 1, 0);
    t30 = g->ecx;
    if ((int32_t)t29 < 0)
    {
        eax = t29;
        goto L_1021538c;
    }
    eax = t29;
    ecx = t30;
    COW_AT(10215378)
    if (eax == 0x7ffffffeu) goto L_1021538c;
    COW_AT(1021537f)
    if (eax == 0x7fffffffu) goto L_1021538c;
    COW_AT(10215386)
    if ((int32_t)eax <= 0)
    {
        loc_2060 = rd32(sp0 - 0x2060u);
        loc_2064 = rd32(sp0 - 0x2064u);
        goto L_1021538f;
    }
    COW_AT(1021538a)
    goto L_10215354;
L_1021538c: ;
    COW_AT(1021538c)
    eax = 0xffffffffu;
    loc_2060 = rd32(sp0 - 0x2060u);
    loc_2064 = rd32(sp0 - 0x2064u);
L_1021538f: ;
    COW_AT(1021538f)
    g->ebx = loc_2060;
    g->esi = loc_2064;
    g->edi = in_edi;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10215120(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10215142u:
    {
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        self = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        in_esi = rd32(sp0 - 0x2064u);
        in_ebx = rd32(sp0 - 0x2060u);
        g->esp = sp0 - 0x2064u;
        g->eax = 0u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10215149u:
    {
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        self = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        in_esi = rd32(sp0 - 0x2064u);
        in_ebx = rd32(sp0 - 0x2060u);
        g->esp = sp0 - 0x2064u;
        g->eax = 0u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10215150u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        self = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        in_esi = rd32(sp0 - 0x2064u);
        in_ebx = rd32(sp0 - 0x2060u);
        g->esp = sp0 - 0x2064u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021519fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x2064u;
        g->ebx = 0u;
        g->of = (uint8_t)(0u);
        wr32(sp0 - 0x206cu, sp0 - 0x205cu);
        (void)sp0;
        return 1;
    }
    case 0x102151a5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x2064u;
        g->ebx = 0u;
        wr32(sp0 - 0x206cu, sp0 - 0x205cu);
        (void)sp0;
        return 1;
    }
    case 0x102151d5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x2064u;
        g->ebx = 0u;
        wr32(sp0 - 0x2070u, sp0 - 0xfa0u);
        wr32(sp0 - 0x206cu, sp0 - 0x1f44u);
        (void)sp0;
        return 1;
    }
    case 0x102151e0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x2064u;
        g->ebx = 0u;
        wr32(sp0 - 0x2070u, sp0 - 0xfa0u);
        wr32(sp0 - 0x206cu, sp0 - 0x1f44u);
        (void)sp0;
        return 1;
    }
    case 0x102151e4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x2064u;
        g->ebx = 0u;
        wr32(sp0 - 0x2070u, sp0 - 0xfa0u);
        wr32(sp0 - 0x206cu, sp0 - 0x1f44u);
        (void)sp0;
        return 1;
    }
    case 0x102151eeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x2064u;
        g->ebx = 0u;
        wr32(sp0 - 0x2070u, sp0 - 0xfa0u);
        wr32(sp0 - 0x206cu, sp0 - 0x1f44u);
        (void)sp0;
        return 1;
    }
    case 0x102151f1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x2064u;
        g->ebx = 0u;
        wr32(sp0 - 0x2070u, sp0 - 0xfa0u);
        wr32(sp0 - 0x206cu, sp0 - 0x1f44u);
        (void)sp0;
        return 1;
    }
    case 0x102151fau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x2064u;
        g->ebx = 0u;
        wr32(sp0 - 0x2070u, sp0 - 0xfa0u);
        wr32(sp0 - 0x206cu, sp0 - 0x1f44u);
        (void)sp0;
        return 1;
    }
    case 0x10215215u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x2068u;
        g->ebx = 0u;
        wr32(sp0 - 0x2070u, sp0 - 0x1f44u);
        (void)sp0;
        return 1;
    }
    case 0x10215226u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x2068u;
        g->edx = sp0 - 0x1f44u;
        g->ebx = 0u;
        wr32(sp0 - 0x2070u, sp0 - 0x1f44u);
        (void)sp0;
        return 1;
    }
    case 0x1021522bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x2068u;
        g->edx = sp0 - 0x1f44u;
        g->ebx = 0u;
        wr32(sp0 - 0x2070u, sp0 - 0x1f44u);
        (void)sp0;
        return 1;
    }
    case 0x10215239u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x2068u;
        g->edx = sp0 - 0x1f44u;
        g->ebx = 0u;
        wr32(sp0 - 0x2070u, sp0 - 0x1f44u);
        (void)sp0;
        return 1;
    }
    case 0x1021527au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x2068u;
        g->ebx = 0u;
        wr32(sp0 - 0x2074u, sp0 - 0x1f44u);
        (void)sp0;
        return 1;
    }
    case 0x10215292u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x2068u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102152bbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x2064u;
        g->ebx = 0u;
        wr32(sp0 - 0x206cu, sp0 - 0x205cu);
        (void)sp0;
        return 1;
    }
    case 0x102152cdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x2064u;
        g->ebx = 0u;
        wr32(sp0 - 0x206cu, sp0 - 0x205cu);
        (void)sp0;
        return 1;
    }
    case 0x10215318u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x2064u;
        g->ebx = 0u;
        wr32(sp0 - 0x206cu, sp0 - 0x205cu);
        (void)sp0;
        return 1;
    }
    case 0x10215322u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x2064u;
        wr32(sp0 - 0x206cu, sp0 - 0x205cu);
        (void)sp0;
        return 1;
    }
    case 0x10215348u:
    {
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        self = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        in_esi = rd32(sp0 - 0x2064u);
        in_ebx = rd32(sp0 - 0x2060u);
        g->esp = sp0 - 0x2064u;
        g->eax = 0u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10215354u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x2064u;
        (void)sp0;
        return 1;
    }
    case 0x1021536du:
    {
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        self = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        in_esi = rd32(sp0 - 0x2064u);
        in_ebx = rd32(sp0 - 0x2060u);
        g->esp = sp0 - 0x2064u;
        g->eax = 0u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10215378u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x2064u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021537fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x2064u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10215386u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x2064u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021538au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x2064u;
        (void)sp0;
        return 1;
    }
    case 0x1021538cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x2064u;
        (void)sp0;
        return 1;
    }
    case 0x1021538fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t loc_2060;
        uint32_t loc_2064;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_2064 = rd32(sp0 - 0x2064u);
        loc_2060 = rd32(sp0 - 0x2060u);
        g->esp = sp0 - 0x2064u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10215120(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10215120(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
