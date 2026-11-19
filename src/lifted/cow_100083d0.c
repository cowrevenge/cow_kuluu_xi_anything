/* f_0x100083d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100083d0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_80;
    uint32_t loc_84;
    uint32_t loc_88;
    uint32_t loc_8c;
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
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 164u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100083e4u: eax = g->eax; self = g->ecx; in_edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x8cu); in_esi = rd32(sp0 - 0x88u); in_ebp = rd32(sp0 - 0x84u); in_ebx = rd32(sp0 - 0x80u); g->ebp = rd32(sp0 - 0x84u); g->ebx = rd32(sp0 - 0x80u); g->edi = rd32(sp0 - 0x8cu); g->esi = rd32(sp0 - 0x88u); goto E_100083e4;
    case 0x100083f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100083f7;
    case 0x100083feu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); goto E_100083fe;
    case 0x1000841bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); goto E_1000841b;
    case 0x10008438u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); goto E_10008438;
    case 0x10008440u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); goto E_10008440;
    case 0x1000845au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); goto E_1000845a;
    case 0x1000845eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); goto E_1000845e;
    case 0x1000846eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); goto E_1000846e;
    case 0x10008482u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); goto E_10008482;
    case 0x100084a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100084a9;
    case 0x100084b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100084b0;
    case 0x100084e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100084e8;
    case 0x100084f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100084f8;
    case 0x1000850du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1000850d;
    case 0x1000851du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1000851d;
    case 0x1000854fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1000854f;
    case 0x1000855fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1000855f;
    case 0x10008674u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10008674;
    case 0x10008680u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10008680;
    case 0x100086a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100086a0;
    case 0x100086abu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100086ab;
    case 0x100086b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100086b6;
    case 0x10008752u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); goto E_10008752;
    default: break;
    }
#endif

    COW_AT(100083d0)
    wr32(sp0 - 0x80u, in_ebx);
    wr32(sp0 - 0x84u, in_ebp);
    wr32(sp0 - 0x88u, in_esi);
    wr32(sp0 - 0x8cu, in_edi);
    if (rd8(COW_IMG(0x10455c38u)) == 0u)
    {
        ecx = self;
        edx = in_edx;
        loc_80 = in_ebx;
        loc_84 = in_ebp;
        loc_88 = in_esi;
        loc_8c = in_edi;
        goto L_100083fe;
    }
    eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x10455c38u));
    COW_AT(100083e4)
    g->ebx = 0u;
    g->edx = in_edx;
    g->esp = sp0 - 0x8cu;
    t1 = cow_call_regs(g, COW_IMG(0x10008d90u), eax, self, g->edx, 1, 0);
    t2 = g->edx;
    wr8(self + 0xc9au, (uint8_t)t1);
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        loc_80 = in_ebx;
        loc_84 = in_ebp;
        loc_88 = in_esi;
        loc_8c = in_edi;
        goto L_10008752;
    }
    eax = t1;
    edx = t2;
    COW_AT(100083f7)
    g->esp = sp0 - 0x8cu;
    cow_call_regs(g, COW_IMG(0x10008e10u), eax, self, edx, 1, 0);
    t3 = g->ecx;
    t4 = g->edx;
    ecx = t3;
    edx = t4;
    loc_80 = rd32(sp0 - 0x80u);
    loc_84 = rd32(sp0 - 0x84u);
    loc_88 = rd32(sp0 - 0x88u);
    loc_8c = rd32(sp0 - 0x8cu);
L_100083fe: ;
    COW_AT(100083fe)
    wr32(COW_IMG(0x10455c28u), 0u);
    wr32(self + 0x90u, 0u);
    t5 = rd8(COW_IMG(0x10455c39u));
    wr8(sp0 - 0x79u, 1u);
    if ((uint8_t)t5 == 0u)
    {
        eax = 0u;
        ecx = (ecx & 0xffffff00u) | t5;
        goto L_10008438;
    }
    COW_AT(1000841b)
    wr32(sp0 - 0x90u, 0x101u);
    wr32(sp0 - 0x94u, 0u);
    wr32(sp0 - 0x98u, COW_IMG(0x100057d0u));
    wr32(sp0 - 0x9cu, 4u);
    t6 = rd32(self + 0x84u);
    wr32(sp0 - 0xa0u, t6);
    g->eax = t6;
    t7 = rd32(rd32(self + 0x84u));
    g->esp = sp0 - 0x8cu;
    t8 = cow_thiscall(g, rd32(t7 + 0x10u), t7, 5, t6, 4u, COW_IMG(0x100057d0u), 0u, 0x101u);
    t9 = g->ecx;
    if ((int32_t)t8 < 0)
    {
        ecx = t9;
        loc_80 = rd32(sp0 - 0x80u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_8c = rd32(sp0 - 0x8cu);
        goto L_10008440;
    }
    eax = t8;
    ecx = t9;
    loc_80 = rd32(sp0 - 0x80u);
    loc_84 = rd32(sp0 - 0x84u);
    loc_88 = rd32(sp0 - 0x88u);
    loc_8c = rd32(sp0 - 0x8cu);
L_10008438: ;
    COW_AT(10008438)
    if (rd32(self + 0x90u) != 0u) goto L_1000845a;
L_10008440: ;
    COW_AT(10008440)
    wr32(sp0 - 0x90u, 1u);
    wr32(sp0 - 0x94u, 0u);
    wr32(sp0 - 0x98u, COW_IMG(0x100057d0u));
    wr32(sp0 - 0x9cu, 4u);
    t10 = rd32(self + 0x84u);
    wr32(sp0 - 0xa0u, t10);
    t11 = rd32(rd32(self + 0x84u));
    wr8(sp0 - 0x79u, 0u);
    g->eax = t10;
    g->esp = sp0 - 0x8cu;
    t12 = cow_thiscall(g, rd32(t11 + 0x10u), ecx, 5, t10, 4u, COW_IMG(0x100057d0u), 0u, 1u);
    eax = t12;
    loc_80 = rd32(sp0 - 0x80u);
    loc_84 = rd32(sp0 - 0x84u);
    loc_88 = rd32(sp0 - 0x88u);
    loc_8c = rd32(sp0 - 0x8cu);
L_1000845a: ;
    COW_AT(1000845a)
    if ((int32_t)eax >= 0) goto L_1000846e;
    COW_AT(1000845e)
    wr32(self + 0x90u, 0u);
    g->ebx = loc_80;
    g->esi = loc_88;
    g->edi = loc_8c;
    g->ebp = loc_84;
    return eax & 0xffffff00u;
L_1000846e: ;
    COW_AT(1000846e)
    t13 = rd32(self + 0x90u);
    wr8(self + 0xc98u, 0u);
    if (t13 == 0u) goto L_10008752;
    edx = t13;
    COW_AT(10008482)
    edi = sp0 - 0x38u;
    eax = 0u;
    ecx = 0xbu;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x38u, 0x2cu);
    wr32(sp0 - 0x90u, sp0 - 0x38u);
    wr32(sp0 - 0x94u, edx);
    g->esp = sp0 - 0x8cu;
    cow_thiscall(g, rd32(rd32(edx) + 0xcu), sp0 - 0x38u, 2, edx, sp0 - 0x38u);
    if ((rd8(sp0 - 0x34u) & 0xau) != 0u)
    {
    COW_AT(100084a9)
        wr8(self + 0xc98u, 1u);
    }
    COW_AT(100084b0)
    wr32(sp0 - 0x64u, 0x14u);
    wr32(sp0 - 0x60u, 0x10u);
    wr32(sp0 - 0x5cu, 0u);
    wr32(sp0 - 0x58u, 0u);
    wr32(sp0 - 0x54u, 0x140u);
    wr32(sp0 - 0x90u, sp0 - 0x64u);
    wr32(sp0 - 0x94u, 1u);
    t14 = rd32(self + 0x90u);
    wr32(sp0 - 0x98u, t14);
    g->eax = t14;
    g->edx = rd32(rd32(self + 0x90u));
    t15 = rd32(rd32(self + 0x90u));
    g->esp = sp0 - 0x8cu;
    t16 = cow_thiscall(g, rd32(t15 + 0x18u), sp0 - 0x64u, 3, t14, 1u, sp0 - 0x64u);
    t17 = g->ecx;
    t18 = g->edx;
    if ((int32_t)t16 >= 0)
    {
        ecx = t17;
        goto L_100084f8;
    }
    eax = t16;
    edx = t18;
    COW_AT(100084e8)
    wr32(sp0 - 0x90u, eax);
    g->eax = eax;
    g->esp = sp0 - 0x8cu;
    t19 = cow_fastcall(g, COW_IMG(0x10008770u), self, edx, 1, eax);
    g->ebx = rd32(sp0 - 0x80u);
    g->esi = rd32(sp0 - 0x88u);
    g->edi = rd32(sp0 - 0x8cu);
    g->ebp = rd32(sp0 - 0x84u);
    return t19;
L_100084f8: ;
    COW_AT(100084f8)
    wr32(sp0 - 0x90u, COW_IMG(0x1034a0fcu));
    t20 = rd32(self + 0x90u);
    wr32(sp0 - 0x94u, t20);
    g->eax = t20;
    g->edx = rd32(t20);
    t21 = rd32(t20);
    g->esp = sp0 - 0x8cu;
    t22 = cow_thiscall(g, rd32(t21 + 0x2cu), ecx, 2, t20, COW_IMG(0x1034a0fcu));
    t23 = g->edx;
    if ((int32_t)t22 >= 0)
    {
        edx = t23;
        goto L_1000851d;
    }
    eax = t22;
    edx = t23;
    COW_AT(1000850d)
    wr32(sp0 - 0x90u, eax);
    g->eax = eax;
    g->esp = sp0 - 0x8cu;
    t24 = cow_fastcall(g, COW_IMG(0x10008770u), self, edx, 1, eax);
    g->ebx = rd32(sp0 - 0x80u);
    g->esi = rd32(sp0 - 0x88u);
    g->edi = rd32(sp0 - 0x8cu);
    g->ebp = rd32(sp0 - 0x84u);
    return t24;
L_1000851d: ;
    COW_AT(1000851d)
    t25 = (rd8(COW_IMG(0x10455c37u)) != 0u) * 4u + 4u | 1u;
    wr32(sp0 - 0x90u, t25);
    t26 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x94u, t26);
    t27 = rd32(self + 0x90u);
    wr32(sp0 - 0x98u, t27);
    g->eax = t27;
    g->edx = rd32(rd32(self + 0x90u));
    t28 = rd32(rd32(self + 0x90u));
    g->esp = sp0 - 0x8cu;
    t29 = cow_thiscall(g, rd32(t28 + 0x34u), t26, 3, t27, t26, t25);
    t30 = g->edx;
    if ((int32_t)t29 >= 0) goto L_1000855f;
    eax = t29;
    edx = t30;
    COW_AT(1000854f)
    wr32(sp0 - 0x90u, eax);
    g->eax = eax;
    g->esp = sp0 - 0x8cu;
    t31 = cow_fastcall(g, COW_IMG(0x10008770u), self, edx, 1, eax);
    g->ebx = rd32(sp0 - 0x80u);
    g->esi = rd32(sp0 - 0x88u);
    g->edi = rd32(sp0 - 0x8cu);
    g->ebp = rd32(sp0 - 0x84u);
    return t31;
L_1000855f: ;
    COW_AT(1000855f)
    edi = sp0 - 0x50u;
    eax = 0u;
    ecx = 6u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x50u, 0x18u);
    wr32(sp0 - 0x4cu, 0x10u);
    wr32(sp0 - 0x44u, 1u);
    wr32(sp0 - 0x40u, 0xffffff81u);
    wr32(sp0 - 0x3cu, 0x7fu);
    wr32(sp0 - 0x48u, 0u);
    wr32(sp0 - 0x90u, sp0 - 0x50u);
    wr32(sp0 - 0x94u, 4u);
    t32 = rd32(self + 0x90u);
    wr32(sp0 - 0x98u, t32);
    g->esp = sp0 - 0x8cu;
    cow_thiscall(g, rd32(rd32(rd32(self + 0x90u)) + 0x18u), sp0 - 0x50u, 3, t32, 4u, sp0 - 0x50u);
    wr32(sp0 - 0x48u, 4u);
    wr32(sp0 - 0x90u, sp0 - 0x50u);
    wr32(sp0 - 0x94u, 4u);
    t33 = rd32(self + 0x90u);
    wr32(sp0 - 0x98u, t33);
    cow_thiscall(g, rd32(rd32(rd32(self + 0x90u)) + 0x18u), sp0 - 0x50u, 3, t33, 4u, sp0 - 0x50u);
    wr32(sp0 - 0x48u, 8u);
    wr32(sp0 - 0x90u, sp0 - 0x50u);
    wr32(sp0 - 0x94u, 4u);
    t34 = rd32(self + 0x90u);
    wr32(sp0 - 0x98u, t34);
    cow_thiscall(g, rd32(rd32(rd32(self + 0x90u)) + 0x18u), sp0 - 0x50u, 3, t34, 4u, sp0 - 0x50u);
    wr32(sp0 - 0x48u, 0xcu);
    wr32(sp0 - 0x90u, sp0 - 0x50u);
    wr32(sp0 - 0x94u, 4u);
    t35 = rd32(self + 0x90u);
    wr32(sp0 - 0x98u, t35);
    cow_thiscall(g, rd32(rd32(rd32(self + 0x90u)) + 0x18u), sp0 - 0x50u, 3, t35, 4u, sp0 - 0x50u);
    wr32(sp0 - 0x48u, 0x10u);
    wr32(sp0 - 0x90u, sp0 - 0x50u);
    wr32(sp0 - 0x94u, 4u);
    t36 = rd32(self + 0x90u);
    wr32(sp0 - 0x98u, t36);
    cow_thiscall(g, rd32(rd32(rd32(self + 0x90u)) + 0x18u), sp0 - 0x50u, 3, t36, 4u, sp0 - 0x50u);
    wr32(sp0 - 0x48u, 0x14u);
    wr32(sp0 - 0x90u, sp0 - 0x50u);
    wr32(sp0 - 0x94u, 4u);
    t37 = rd32(self + 0x90u);
    wr32(sp0 - 0x98u, t37);
    cow_thiscall(g, rd32(rd32(rd32(self + 0x90u)) + 0x18u), sp0 - 0x50u, 3, t37, 4u, sp0 - 0x50u);
    wr32(sp0 - 0x48u, 0x18u);
    wr32(sp0 - 0x90u, sp0 - 0x50u);
    wr32(sp0 - 0x94u, 4u);
    t38 = rd32(self + 0x90u);
    wr32(sp0 - 0x98u, t38);
    cow_thiscall(g, rd32(rd32(rd32(self + 0x90u)) + 0x18u), sp0 - 0x50u, 3, t38, 4u, sp0 - 0x50u);
    wr32(sp0 - 0x48u, 0x1cu);
    wr32(sp0 - 0x90u, sp0 - 0x50u);
    wr32(sp0 - 0x94u, 4u);
    t39 = rd32(self + 0x90u);
    wr32(sp0 - 0x98u, t39);
    cow_thiscall(g, rd32(rd32(rd32(self + 0x90u)) + 0x18u), sp0 - 0x50u, 3, t39, 4u, sp0 - 0x50u);
    t40 = g->ecx;
    t41 = rd32(self + 0x90u);
    wr32(sp0 - 0x90u, t41);
    g->eax = t41;
    g->edx = rd32(t41);
    t42 = rd32(t41);
    t43 = cow_thiscall(g, rd32(t42 + 0x1cu), t40, 1, t41);
    t44 = g->edx;
    if (rd8(sp0 - 0x79u) == 0u)
    {
        eax = t43;
        loc_80 = rd32(sp0 - 0x80u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_8c = rd32(sp0 - 0x8cu);
    }
    else
    {
        eax = t43;
        edx = t44;
    COW_AT(10008674)
        if (rd8(COW_IMG(0x10455c39u)) == 0u)
        {
            loc_80 = rd32(sp0 - 0x80u);
            loc_84 = rd32(sp0 - 0x84u);
            loc_88 = rd32(sp0 - 0x88u);
            loc_8c = rd32(sp0 - 0x8cu);
        }
        else
        {
    COW_AT(10008680)
            wr32(sp0 - 0x90u, 3u);
            wr32(sp0 - 0x94u, COW_IMG(0x10455c24u));
            wr32(sp0 - 0x98u, COW_IMG(0x100083b0u));
            t45 = rd32(self + 0x90u);
            wr32(sp0 - 0x9cu, t45);
            g->eax = t45;
            g->esp = sp0 - 0x8cu;
            t46 = cow_thiscall(g, rd32(rd32(rd32(self + 0x90u)) + 0x10u), rd32(rd32(self + 0x90u)), 4, t45, COW_IMG(0x100083b0u), COW_IMG(0x10455c24u), 3u);
            if ((int32_t)t46 < 0)
            {
                eax = t46;
                loc_80 = rd32(sp0 - 0x80u);
                loc_84 = rd32(sp0 - 0x84u);
                loc_88 = rd32(sp0 - 0x88u);
                loc_8c = rd32(sp0 - 0x8cu);
            }
            else
            {
    COW_AT(100086a0)
                if (rd32(COW_IMG(0x10455c24u)) <= 2u)
                {
                    edx = rd32(COW_IMG(0x10455c24u));
                }
                else
                {
    COW_AT(100086ab)
                    wr32(COW_IMG(0x10455c24u), 2u);
                    edx = 2u;
                }
    COW_AT(100086b6)
                t47 = rd32(self + 0x90u);
                edi = sp0 - 0x38u;
                eax = 0u;
                ecx = 0xeu;
                while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                wr32(sp0 - 0x1cu, edx);
                wr32(sp0 - 0x30u, 0xffffffffu);
                wr32(sp0 - 0x24u, 0xffffffffu);
                wr32(sp0 - 0x14u, sp0 - 0x6cu);
                wr32(sp0 - 0x90u, 0u);
                wr32(sp0 - 0x94u, COW_IMG(0x10455c28u));
                wr32(sp0 - 0x74u, 0u);
                wr32(sp0 - 0x70u, 4u);
                wr32(sp0 - 0x6cu, 0u);
                wr32(sp0 - 0x68u, 0u);
                wr32(sp0 - 0x78u, 0u);
                wr32(sp0 - 0x38u, 0x38u);
                wr32(sp0 - 0x34u, 0x12u);
                wr32(sp0 - 0x2cu, 0u);
                wr32(sp0 - 0x28u, 0x2710u);
                wr32(sp0 - 0x20u, 0u);
                wr32(sp0 - 0x18u, sp0 - 0x74u);
                wr32(sp0 - 0x10u, 0u);
                wr32(sp0 - 0xcu, 4u);
                wr32(sp0 - 8u, sp0 - 0x78u);
                wr32(sp0 - 4u, 0u);
                wr32(sp0 - 0x98u, sp0 - 0x38u);
                wr32(sp0 - 0x9cu, COW_IMG(0x10341d4cu));
                wr32(sp0 - 0xa0u, t47);
                g->eax = sp0 - 0x38u;
                g->esp = sp0 - 0x8cu;
                t48 = cow_thiscall(g, rd32(rd32(t47) + 0x48u), sp0 - 0x78u, 5, t47, COW_IMG(0x10341d4cu), sp0 - 0x38u, COW_IMG(0x10455c28u), 0u);
                eax = t48;
                loc_80 = rd32(sp0 - 0x80u);
                loc_84 = rd32(sp0 - 0x84u);
                loc_88 = rd32(sp0 - 0x88u);
                loc_8c = rd32(sp0 - 0x8cu);
            }
        }
    }
L_10008752: ;
    COW_AT(10008752)
    g->ebx = loc_80;
    g->esi = loc_88;
    g->edi = loc_8c;
    g->ebp = loc_84;
    return (eax & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100083d0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100083e4u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x8cu);
        in_esi = rd32(sp0 - 0x88u);
        in_ebp = rd32(sp0 - 0x84u);
        in_ebx = rd32(sp0 - 0x80u);
        g->esp = sp0 - 0x8cu;
        g->ebx = 0u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x100083f7u:
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
        g->esp = sp0 - 0x8cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100083feu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_8c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        g->esp = sp0 - 0x8cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1000841bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_8c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        g->esp = sp0 - 0x8cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10008438u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_8c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        g->esp = sp0 - 0x8cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10008440u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_8c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        g->esp = sp0 - 0x8cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1000845au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_8c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        g->esp = sp0 - 0x8cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1000845eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_8c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        g->esp = sp0 - 0x8cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1000846eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_8c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        g->esp = sp0 - 0x8cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10008482u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_8c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        g->esp = sp0 - 0x8cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100084a9u:
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
        g->esp = sp0 - 0x8cu;
        g->ebx = 0u;
        wr32(sp0 - 0x90u, sp0 - 0x38u);
        (void)sp0;
        return 1;
    }
    case 0x100084b0u:
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
        g->esp = sp0 - 0x8cu;
        g->ebx = 0u;
        wr32(sp0 - 0x90u, sp0 - 0x38u);
        (void)sp0;
        return 1;
    }
    case 0x100084e8u:
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
        g->esp = sp0 - 0x8cu;
        wr32(sp0 - 0x90u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x100084f8u:
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
        g->esp = sp0 - 0x8cu;
        g->ebx = 0u;
        g->ebp = 0x10u;
        wr32(sp0 - 0x90u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x1000850du:
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
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x1000851du:
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
        g->esp = sp0 - 0x8cu;
        g->ebx = 0u;
        g->ebp = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1000854fu:
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
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x1000855fu:
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
        g->esp = sp0 - 0x8cu;
        g->ebx = 0u;
        g->ebp = 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x10008674u:
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
        g->esp = sp0 - 0x8cu;
        g->ebx = 0u;
        g->ebp = 4u;
        (void)sp0;
        return 1;
    }
    case 0x10008680u:
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
        g->esp = sp0 - 0x8cu;
        g->ebx = 0u;
        g->ebp = 4u;
        (void)sp0;
        return 1;
    }
    case 0x100086a0u:
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
        g->esp = sp0 - 0x8cu;
        g->ebx = 0u;
        g->ebp = 4u;
        (void)sp0;
        return 1;
    }
    case 0x100086abu:
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
        g->esp = sp0 - 0x8cu;
        g->ebx = 0u;
        g->ebp = 4u;
        (void)sp0;
        return 1;
    }
    case 0x100086b6u:
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
        g->esp = sp0 - 0x8cu;
        g->ebx = 0u;
        g->ebp = 4u;
        (void)sp0;
        return 1;
    }
    case 0x10008752u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_8c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100083d0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100083d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
