/* f_0x10072a70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10072a70(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 32u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10072a81u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10072a81;
    case 0x10072a88u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10072a88;
    case 0x10072a8bu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10072a8b;
    case 0x10072a96u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10072a96;
    case 0x10072a9cu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10072a9c;
    case 0x10072ab7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_10 = rd32(sp0 - 0x10u); goto E_10072ab7;
    case 0x10072ac2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_10 = rd32(sp0 - 0x10u); goto E_10072ac2;
    case 0x10072acdu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_10 = rd32(sp0 - 0x10u); goto E_10072acd;
    case 0x10072af7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10072af7;
    case 0x10072b01u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10072b01;
    case 0x10072b18u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_10 = rd32(sp0 - 0x10u); goto E_10072b18;
    case 0x10072b30u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10072b30;
    case 0x10072b36u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10072b36;
    case 0x10072b4du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10072b4d;
    case 0x10072b58u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10072b58;
    case 0x10072b62u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10072b62;
    case 0x10072b72u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10072b72;
    case 0x10072b89u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_10 = rd32(sp0 - 0x10u); goto E_10072b89;
    case 0x10072b94u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_10 = rd32(sp0 - 0x10u); goto E_10072b94;
    case 0x10072b9bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_10 = rd32(sp0 - 0x10u); goto E_10072b9b;
    case 0x10072ba9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_10 = rd32(sp0 - 0x10u); goto E_10072ba9;
    case 0x10072bb6u: eax = g->eax; self = g->ecx; in_edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10072bb6;
    case 0x10072bbdu: eax = g->eax; self = g->ecx; in_edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10072bbd;
    case 0x10072bc7u: eax = g->eax; self = g->ecx; in_edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10072bc7;
    case 0x10072bdbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_10 = rd32(sp0 - 0x10u); goto E_10072bdb;
    case 0x10072be4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_10 = rd32(sp0 - 0x10u); goto E_10072be4;
    case 0x10072be6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_10 = rd32(sp0 - 0x10u); goto E_10072be6;
    case 0x10072bedu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_10 = rd32(sp0 - 0x10u); goto E_10072bed;
    case 0x10072c01u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10072c01;
    case 0x10072c0cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_10072c0c;
    case 0x10072c13u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_10072c13;
    case 0x10072c16u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_10072c16;
    case 0x10072c21u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_10072c21;
    case 0x10072c2au: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_10072c2a;
    default: break;
    }
#endif

    COW_AT(10072a70)
    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, in_edi);
    if (rd32(self + 0x41u) == 0u)
    {
        eax = rd32(self + 0x41u);
        goto L_10072bb6;
    }
    eax = rd32(self + 0x41u);
    COW_AT(10072a81)
    if (eax == 1u) goto L_10072b36;
    eax = eax - 1u;
    COW_AT(10072a88)
    if (eax == 1u) goto L_10072a9c;
    COW_AT(10072a8b)
    if (rd32(self + 0x3du) == 0u)
    {
        eax = rd32(self + 0x3du);
        loc_4 = self;
        loc_8 = in_esi;
        loc_c = in_edi;
        goto L_10072c21;
    }
    eax = rd32(self + 0x3du);
    COW_AT(10072a96)
    wr32(sp0 - 0x10u, eax);
    edx = in_edx;
    loc_4 = self;
    loc_8 = in_esi;
    loc_c = in_edi;
    loc_10 = eax;
L_10072c16: ;
    COW_AT(10072c16)
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t40 = cow_thiscall(g, COW_IMG(0x10074180u), rd32(COW_IMG(0x1047d128u)), 1, loc_10);
    eax = t40;
    loc_4 = rd32(sp0 - 4u);
    loc_8 = rd32(sp0 - 8u);
    loc_c = rd32(sp0 - 0xcu);
L_10072c21: ;
    COW_AT(10072c21)
    wr32(sp0 - 0x10u, 1u);
    g->eax = eax;
    g->edx = rd32(self);
    t41 = rd32(self);
    g->esp = sp0 - 0xcu;
    t42 = cow_thiscall(g, rd32(t41 + 0x18u), self, 1, 1u);
    t43 = g->edx;
    eax = t42;
    edx = t43;
    loc_4 = rd32(sp0 - 4u);
    loc_8 = rd32(sp0 - 8u);
    loc_c = rd32(sp0 - 0xcu);
L_10072c2a: ;
    COW_AT(10072c2a)
    g->esi = loc_8;
    g->edi = loc_c;
    g->edx = edx;
    return eax;
L_10072a9c: ;
    COW_AT(10072a9c)
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, 0u);
    t1 = rd32(self + 0x34u);
    wr32(sp0 - 0x18u, t1);
    g->eax = t1;
    g->edx = in_edx;
    t2 = rd32(COW_IMG(0x10662dccu));
    g->esp = sp0 - 0xcu;
    t3 = cow_thiscall(g, COW_IMG(0x101c4a10u), t2, 3, t1, 0u, 0u);
    t4 = g->ecx;
    t5 = g->edx;
    if ((uint8_t)t3 != 0u)
    {
        eax = t3;
        edx = t5;
        loc_4 = self;
        loc_8 = in_esi;
        loc_c = in_edi;
        goto L_10072c2a;
    }
    eax = t3;
    ecx = t4;
    edx = t5;
    COW_AT(10072ab7)
    if (rd8(self + 0x3cu) != 0u)
    {
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        loc_c = rd32(sp0 - 0xcu);
        goto L_10072c0c;
    }
    COW_AT(10072ac2)
    t6 = rd32(self + 0x34u);
    wr32(sp0 - 0x10u, t6);
    if (rd32(self + 0x38u) == 0u)
    {
        eax = rd32(self + 0x38u);
        edx = t6;
        goto L_10072b18;
    }
    eax = rd32(self + 0x38u);
    edx = t6;
    loc_10 = t6;
    COW_AT(10072acd)
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x10074280u), 1, loc_10);
    t7 = rd32(self + 0x3du);
    wr32(sp0 - 0x10u, t7);
    t8 = rd32(self + 0x38u);
    wr32(sp0 - 0x14u, t8);
    wr32(sp0 - 0x18u, sp0 - 4u);
    g->eax = t7;
    t9 = cow_thiscall(g, COW_IMG(0x10073430u), rd32(COW_IMG(0x1047d128u)), 3, sp0 - 4u, t8, t7);
    if (rd32(t9) == 0u)
    {
        eax = rd32(t9);
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        loc_c = rd32(sp0 - 0xcu);
        goto L_10072c21;
    }
    eax = rd32(t9);
    COW_AT(10072af7)
    if (rd32(eax) == 0u)
    {
        eax = rd32(eax);
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        loc_c = rd32(sp0 - 0xcu);
        goto L_10072c21;
    }
    eax = rd32(eax);
    COW_AT(10072b01)
    wr8(eax + 0x1au, rd8(eax + 0x1au) | 1u);
    t10 = rd32(self + 0x34u);
    wr32(eax + 0x34u, t10);
    wr32(sp0 - 0x10u, 1u);
    g->eax = eax;
    g->edx = rd32(self);
    t11 = rd32(self);
    g->esp = sp0 - 0xcu;
    t12 = cow_thiscall(g, rd32(t11 + 0x18u), self, 1, 1u);
    t13 = g->edx;
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    g->edx = t13;
    return t12;
L_10072b18: ;
    COW_AT(10072b18)
    wr32(sp0 - 0x14u, COW_IMG(0x10354658u));
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    t14 = g->edx;
    if (rd32(self + 0x3du) == 0u)
    {
        eax = rd32(self + 0x3du);
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        loc_c = rd32(sp0 - 0xcu);
        goto L_10072c21;
    }
    eax = rd32(self + 0x3du);
    edx = t14;
    COW_AT(10072b30)
    wr32(sp0 - 0x10u, eax);
    loc_4 = rd32(sp0 - 4u);
    loc_8 = rd32(sp0 - 8u);
    loc_c = rd32(sp0 - 0xcu);
    loc_10 = eax;
    goto L_10072c16;
L_10072b36: ;
    COW_AT(10072b36)
    t15 = rd32(self + 0x34u);
    wr32(sp0 - 0x10u, t15);
    g->eax = t15;
    g->edx = in_edx;
    t16 = rd32(COW_IMG(0x10662dccu));
    g->esp = sp0 - 0xcu;
    t17 = cow_thiscall(g, COW_IMG(0x101c4ad0u), t16, 1, t15);
    t18 = g->ecx;
    t19 = g->edx;
    if ((uint8_t)t17 != 0u)
    {
        eax = t17;
        edx = t19;
        loc_4 = self;
        loc_8 = in_esi;
        loc_c = in_edi;
        goto L_10072c2a;
    }
    eax = t17;
    ecx = t18;
    edx = t19;
    COW_AT(10072b4d)
    if (rd8(self + 0x3cu) != 0u)
    {
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        loc_c = rd32(sp0 - 0xcu);
        goto L_10072c0c;
    }
    COW_AT(10072b58)
    if ((int32_t)rd32(rd32(self + 0x45u) + 4u) <= 0) goto L_10072b94;
    eax = rd32(self + 0x45u);
    edi = rd32(rd32(self + 0x45u) + 4u);
    COW_AT(10072b62)
    wr32(sp0 - 0x10u, edi);
    g->eax = eax;
    g->esp = sp0 - 4u;
    t20 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, edi, rd32(sp0 - 0xcu), rd32(sp0 - 8u));
    t21 = g->edx;
    wr32(self + 0x38u, t20);
    if (t20 == 0u)
    {
        edx = t21;
        goto L_10072b94;
    }
    eax = t20;
    edx = t21;
    COW_AT(10072b72)
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, edi);
    wr32(sp0 - 0x18u, eax);
    t22 = rd32(self + 0x34u);
    wr32(sp0 - 0x1cu, t22);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t23 = cow_thiscall(g, COW_IMG(0x101c46d0u), rd32(COW_IMG(0x10662dccu)), 4, t22, eax, edi, 0u);
    t24 = g->edx;
    if ((int32_t)t23 < 0)
    {
        edx = t24;
        goto L_10072b94;
    }
    edx = t24;
    COW_AT(10072b89)
    t25 = rd32(self + 0x41u) + 1u;
    t26 = rd32(sp0 - 0xcu);
    wr32(self + 0x41u, t25);
    g->esi = rd32(sp0 - 8u);
    g->edi = t26;
    g->edx = edx;
    return t25;
L_10072b94: ;
    COW_AT(10072b94)
    if (rd32(self + 0x3du) != 0u)
    {
        eax = rd32(self + 0x3du);
    COW_AT(10072b9b)
        wr32(sp0 - 0x10u, eax);
        g->edx = eax;
        g->esp = sp0 - 0xcu;
        cow_thiscall(g, COW_IMG(0x10074180u), rd32(COW_IMG(0x1047d128u)), 1, eax);
        t27 = g->edx;
        edx = t27;
    }
    COW_AT(10072ba9)
    wr32(sp0 - 0x10u, 1u);
    g->eax = rd32(self);
    g->edx = edx;
    t28 = rd32(self);
    g->esp = sp0 - 0xcu;
    t29 = cow_thiscall(g, rd32(t28 + 0x18u), self, 1, 1u);
    t30 = g->edx;
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    g->edx = t30;
    return t29;
L_10072bb6: ;
    COW_AT(10072bb6)
    if (rd8(self + 0x3cu) != 0u)
    {
        edx = in_edx;
        loc_4 = self;
        loc_8 = in_esi;
        loc_c = in_edi;
        goto L_10072c0c;
    }
    COW_AT(10072bbd)
    if ((int32_t)rd32(COW_IMG(0x1047d138u)) > 16)
    {
        eax = rd32(COW_IMG(0x1047d138u));
        edx = in_edx;
        loc_4 = self;
        loc_8 = in_esi;
        loc_c = in_edi;
        goto L_10072c2a;
    }
    eax = rd32(COW_IMG(0x1047d138u));
    COW_AT(10072bc7)
    wr32(sp0 - 0x10u, 0x20u);
    wr32(COW_IMG(0x1047d138u), eax + 1u);
    g->eax = eax + 1u;
    g->esp = sp0 - 4u;
    t31 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 3, 0x20u, in_edi, in_esi);
    t32 = g->edx;
    if (t31 == 0u)
    {
        edx = t32;
    COW_AT(10072be4)
        eax = 0u;
    }
    else
    {
        eax = t31;
        edx = t32;
    COW_AT(10072bdb)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t33 = cow_thiscall(g, COW_IMG(0x101be260u), eax, 0);
        t34 = g->edx;
        eax = t33;
        edx = t34;
    }
    COW_AT(10072be6)
    wr32(self + 0x45u, eax);
    if (eax == 0u)
    {
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        loc_c = rd32(sp0 - 0xcu);
        goto L_10072c0c;
    }
    COW_AT(10072bed)
    wr32(sp0 - 0x10u, eax);
    t35 = rd32(self + 0x34u);
    wr32(sp0 - 0x14u, t35);
    g->eax = t35;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t36 = cow_thiscall(g, COW_IMG(0x101c4bc0u), rd32(COW_IMG(0x10662dccu)), 2, t35, eax);
    t37 = g->edx;
    if ((int32_t)t36 < 0)
    {
        edx = t37;
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        loc_c = rd32(sp0 - 0xcu);
        goto L_10072c0c;
    }
    edx = t37;
    COW_AT(10072c01)
    t38 = rd32(self + 0x41u) + 1u;
    t39 = rd32(sp0 - 0xcu);
    wr32(self + 0x41u, t38);
    g->esi = rd32(sp0 - 8u);
    g->edi = t39;
    g->edx = edx;
    return t38;
L_10072c0c: ;
    COW_AT(10072c0c)
    if (rd32(self + 0x3du) == 0u)
    {
        eax = rd32(self + 0x3du);
        goto L_10072c21;
    }
    eax = rd32(self + 0x3du);
    COW_AT(10072c13)
    wr32(sp0 - 0x10u, eax);
    loc_10 = eax;
    goto L_10072c16;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10072a70(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10072a81u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x10072a88u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x10072a8bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x10072a96u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x10072a9cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x10072ab7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10072ac2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10072acdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x10072af7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 0x18u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x10072b01u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 0x18u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x10072b18u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x10072b30u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10072b36u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x10072b4du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10072b58u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10072b62u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10072b72u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10072b89u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10072b94u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10072b9bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10072ba9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10072bb6u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        g->esi = self;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x10072bbdu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        g->esi = self;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x10072bc7u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        g->esi = self;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x10072bdbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10072be4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10072be6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10072bedu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10072c01u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10072c0cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10072c13u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10072c16u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x10072c21u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10072c2au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10072a70(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10072a70(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
