/* f_0x100f2c80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100f2c80(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_188;
    uint32_t loc_18c;
    uint32_t loc_190;
    uint32_t loc_194;
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
    cow_frame(g, sp0, 428u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100f2c9eu: eax = g->eax; in_edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x194u); in_esi = rd32(sp0 - 0x190u); in_ebp = rd32(sp0 - 0x18cu); in_ebx = rd32(sp0 - 0x188u); g->ebp = rd32(sp0 - 0x18cu); g->ebx = rd32(sp0 - 0x188u); g->edi = rd32(sp0 - 0x194u); g->esi = rd32(sp0 - 0x190u); goto E_100f2c9e;
    case 0x100f2cb6u: eax = g->eax; in_edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x194u); in_esi = rd32(sp0 - 0x190u); in_ebp = rd32(sp0 - 0x18cu); in_ebx = rd32(sp0 - 0x188u); g->ebp = rd32(sp0 - 0x18cu); g->ebx = rd32(sp0 - 0x188u); g->edi = rd32(sp0 - 0x194u); g->esi = rd32(sp0 - 0x190u); goto E_100f2cb6;
    case 0x100f2d01u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_100f2d01;
    case 0x100f2d14u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_194 = rd32(sp0 - 0x194u); loc_190 = rd32(sp0 - 0x190u); loc_18c = rd32(sp0 - 0x18cu); loc_188 = rd32(sp0 - 0x188u); goto E_100f2d14;
    case 0x100f2d2au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_194 = rd32(sp0 - 0x194u); loc_190 = rd32(sp0 - 0x190u); loc_18c = rd32(sp0 - 0x18cu); loc_188 = rd32(sp0 - 0x188u); goto E_100f2d2a;
    case 0x100f2d34u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_194 = rd32(sp0 - 0x194u); loc_190 = rd32(sp0 - 0x190u); loc_18c = rd32(sp0 - 0x18cu); loc_188 = rd32(sp0 - 0x188u); goto E_100f2d34;
    case 0x100f2d3cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_194 = rd32(sp0 - 0x194u); loc_190 = rd32(sp0 - 0x190u); loc_18c = rd32(sp0 - 0x18cu); loc_188 = rd32(sp0 - 0x188u); goto E_100f2d3c;
    case 0x100f2d56u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_194 = rd32(sp0 - 0x194u); loc_190 = rd32(sp0 - 0x190u); loc_18c = rd32(sp0 - 0x18cu); loc_188 = rd32(sp0 - 0x188u); goto E_100f2d56;
    case 0x100f2d5au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_194 = rd32(sp0 - 0x194u); loc_190 = rd32(sp0 - 0x190u); loc_18c = rd32(sp0 - 0x18cu); loc_188 = rd32(sp0 - 0x188u); goto E_100f2d5a;
    case 0x100f2d6eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_194 = rd32(sp0 - 0x194u); loc_190 = rd32(sp0 - 0x190u); loc_18c = rd32(sp0 - 0x18cu); loc_188 = rd32(sp0 - 0x188u); goto E_100f2d6e;
    case 0x100f2d7au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_194 = rd32(sp0 - 0x194u); loc_190 = rd32(sp0 - 0x190u); loc_18c = rd32(sp0 - 0x18cu); loc_188 = rd32(sp0 - 0x188u); goto E_100f2d7a;
    case 0x100f2db2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100f2db2;
    case 0x100f2dbfu: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100f2dbf;
    case 0x100f2dcfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100f2dcf;
    case 0x100f2dd5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100f2dd5;
    case 0x100f2de7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100f2de7;
    case 0x100f2df7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100f2df7;
    case 0x100f2e07u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100f2e07;
    case 0x100f2e12u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100f2e12;
    case 0x100f2e2du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100f2e2d;
    case 0x100f2e31u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100f2e31;
    case 0x100f2e4bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100f2e4b;
    case 0x100f2e51u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100f2e51;
    case 0x100f2e53u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100f2e53;
    case 0x100f2e65u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100f2e65;
    case 0x100f2e75u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100f2e75;
    case 0x100f2e85u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100f2e85;
    case 0x100f2e90u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100f2e90;
    case 0x100f2eabu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100f2eab;
    case 0x100f2eafu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100f2eaf;
    case 0x100f2ec9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100f2ec9;
    case 0x100f2ed2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100f2ed2;
    case 0x100f2ef8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100f2ef8;
    case 0x100f2f17u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100f2f17;
    case 0x100f2f1bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100f2f1b;
    case 0x100f2f39u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100f2f39;
    case 0x100f2f3cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_194 = rd32(sp0 - 0x194u); loc_190 = rd32(sp0 - 0x190u); loc_18c = rd32(sp0 - 0x18cu); loc_188 = rd32(sp0 - 0x188u); goto E_100f2f3c;
    case 0x100f2f43u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_194 = rd32(sp0 - 0x194u); loc_190 = rd32(sp0 - 0x190u); loc_18c = rd32(sp0 - 0x18cu); loc_188 = rd32(sp0 - 0x188u); goto E_100f2f43;
    case 0x100f2f5bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100f2f5b;
    case 0x100f2f77u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100f2f77;
    case 0x100f2f81u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100f2f81;
    case 0x100f2f8au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100f2f8a;
    case 0x100f2f94u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100f2f94;
    case 0x100f2faeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100f2fae;
    case 0x100f2fb8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100f2fb8;
    case 0x100f2fdcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_194 = rd32(sp0 - 0x194u); loc_190 = rd32(sp0 - 0x190u); loc_18c = rd32(sp0 - 0x18cu); loc_188 = rd32(sp0 - 0x188u); goto E_100f2fdc;
    case 0x100f2fe6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_194 = rd32(sp0 - 0x194u); loc_190 = rd32(sp0 - 0x190u); loc_18c = rd32(sp0 - 0x18cu); loc_188 = rd32(sp0 - 0x188u); goto E_100f2fe6;
    case 0x100f2ff8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_194 = rd32(sp0 - 0x194u); loc_190 = rd32(sp0 - 0x190u); loc_18c = rd32(sp0 - 0x18cu); loc_188 = rd32(sp0 - 0x188u); goto E_100f2ff8;
    default: break;
    }
#endif

    COW_AT(100f2c80)
    wr32(sp0 - 0x188u, in_ebx);
    wr32(sp0 - 0x18cu, in_ebp);
    wr32(sp0 - 0x190u, in_esi);
    wr32(sp0 - 0x194u, in_edi);
    if ((uint8_t)arg1 != 0u)
    {
    COW_AT(100f2c9e)
        wr32(self + 0x104cu, 0u);
        wr32(self + 0x1050u, 0u);
        wr32(self + 0x1054u, 0u);
        wr32(self + 0x1048u, 0u);
    }
    COW_AT(100f2cb6)
    if (rd32(self + 0x105cu) == 0u)
    {
        eax = rd32(self + 0x105cu);
        edx = in_edx;
        loc_188 = in_ebx;
        loc_18c = in_ebp;
        loc_190 = in_esi;
        loc_194 = in_edi;
        goto L_100f2fd4;
    }
    eax = rd32(self + 0x105cu);
    ecx = 1u;
    loc_188 = in_ebx;
    loc_18c = in_ebp;
    loc_190 = in_esi;
    loc_194 = in_edi;
L_100f2cc4: ;
    COW_AT(100f2cc4)
    if (rd32(eax + rd16(self + 0x105au) * 4u) == 0u)
    {
        eax = rd32(eax + rd16(self + 0x105au) * 4u);
        edx = rd16(self + 0x105au);
        goto L_100f2d10;
    }
    eax = rd32(eax + rd16(self + 0x105au) * 4u);
    edx = rd16(self + 0x105au);
    COW_AT(100f2cd4)
    wr32(sp0 - 0x198u, ecx);
    wr32(sp0 - 0x19cu, self);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x19cu;
    t1 = cow_thiscall(g, eax, ecx, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0x17u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        edi = t1;
        goto L_100f2f52;
    }
    eax = t1;
    edx = t3;
    COW_AT(100f2ce6)
    if ((uint8_t)arg1 != 0u) goto L_100f2f5b;
    COW_AT(100f2cee)
    t4 = rd32(self + 0x105cu);
    wr16(self + 0x105au, (uint16_t)(rd16(self + 0x105au) + 1u));
    if (t4 != 0u)
    {
        eax = t4;
        ecx = 0u;
        loc_188 = rd32(sp0 - 0x188u);
        loc_18c = rd32(sp0 - 0x18cu);
        loc_190 = rd32(sp0 - 0x190u);
        loc_194 = rd32(sp0 - 0x194u);
        goto L_100f2cc4;
    }
    eax = t4;
    COW_AT(100f2d01)
    g->ebx = rd32(sp0 - 0x188u);
    g->esi = rd32(sp0 - 0x190u);
    g->edi = rd32(sp0 - 0x194u);
    g->ebp = rd32(sp0 - 0x18cu);
    return eax & 0xffffff00u;
L_100f2d10: ;
    COW_AT(100f2d10)
    if ((uint8_t)arg1 == 0u) goto L_100f2d2a;
    COW_AT(100f2d14)
    g->eax = eax;
    g->esp = sp0 - 0x194u;
    t16 = cow_fastcall(g, COW_IMG(0x100f2a70u), self, edx, 0);
    g->ebx = rd32(sp0 - 0x188u);
    g->esi = rd32(sp0 - 0x190u);
    g->edi = rd32(sp0 - 0x194u);
    g->ebp = rd32(sp0 - 0x18cu);
    return (t16 & 0xffffff00u) | 1u;
L_100f2d2a: ;
    COW_AT(100f2d2a)
    if (rd32(self + 0x104cu) == 0u)
    {
        eax = rd32(self + 0x104cu);
        goto L_100f2d6e;
    }
    eax = rd32(self + 0x104cu);
    COW_AT(100f2d34)
    if (rd32(self + 0xd0u) == 0u) goto L_100f2d56;
    COW_AT(100f2d3c)
    wr32(sp0 - 0x198u, self + 0x208u);
    wr32(sp0 - 0x19cu, 0u);
    wr32(sp0 - 0x1a0u, 0u);
    t17 = rd32(self + 0x1048u);
    wr32(sp0 - 0x1a4u, t17);
    g->eax = eax;
    g->edx = t17;
    g->esp = sp0 - 0x1a4u;
    t18 = cow_thiscall(g, eax, self + 0x208u, 0);
    t19 = g->edx;
    eax = t18;
    edx = t19;
    loc_188 = rd32(sp0 - 0x188u);
    loc_18c = rd32(sp0 - 0x18cu);
    loc_190 = rd32(sp0 - 0x190u);
    loc_194 = rd32(sp0 - 0x194u);
L_100f2f3c: ;
    COW_AT(100f2f3c)
    g->eax = eax;
    g->esp = sp0 - 0x194u;
    t52 = cow_fastcall(g, COW_IMG(0x100f2a70u), self, edx, 0);
    eax = t52;
    loc_188 = rd32(sp0 - 0x188u);
    loc_18c = rd32(sp0 - 0x18cu);
    loc_190 = rd32(sp0 - 0x190u);
    loc_194 = rd32(sp0 - 0x194u);
L_100f2f43: ;
    COW_AT(100f2f43)
    g->ebx = loc_188;
    g->esi = loc_190;
    g->edi = loc_194;
    g->ebp = loc_18c;
    return eax & 0xffffff00u;
L_100f2d56: ;
    COW_AT(100f2d56)
    if (eax == 0u) goto L_100f2d6e;
    COW_AT(100f2d5a)
    wr32(sp0 - 0x198u, 0u);
    wr32(sp0 - 0x19cu, 0u);
    wr32(sp0 - 0x1a0u, 0u);
    t20 = rd32(self + 0x1048u);
    wr32(sp0 - 0x1a4u, t20);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1a4u;
    t21 = cow_thiscall(g, eax, t20, 0);
    t22 = g->edx;
    eax = t21;
    edx = t22;
    loc_188 = rd32(sp0 - 0x188u);
    loc_18c = rd32(sp0 - 0x18cu);
    loc_190 = rd32(sp0 - 0x190u);
    loc_194 = rd32(sp0 - 0x194u);
    goto L_100f2f3c;
L_100f2d6e: ;
    COW_AT(100f2d6e)
    if (rd32(self + 0x1050u) == 0u) goto L_100f2f3c;
    COW_AT(100f2d7a)
    t23 = rd32(rd32(self + 0xa0u) + 0x30u);
    wr32(sp0 - 0x184u, t23);
    t24 = rd32(rd32(self + 0xa0u) + 0x34u);
    wr32(sp0 - 0x180u, t24);
    t25 = rd32(self + 0xa0u) + 0x10u;
    wr32(sp0 - 0x17cu, t25);
    t26 = rd32(self + 0xa0u);
    wr8(self + 0x68u, 0u);
    wr32(sp0 - 0x198u, sp0 - 0x164u);
    t27 = rd8(t26 + 0x3du);
    wr32(sp0 - 0x19cu, t27);
    g->eax = t26;
    g->edx = t27;
    g->esp = sp0 - 0x19cu;
    t28 = cow_stdcall(g, COW_IMG(0x1030ffb5u), 0);
    t29 = g->edx;
    if ((int32_t)t28 < 0)
    {
        eax = t28;
        edx = t29;
    }
    else
    {
        edx = t29;
    COW_AT(100f2db2)
        if (!(rd32(sp0 - 0x164u) & 1u))
        {
            eax = rd32(sp0 - 0x164u) & 1u;
        }
        else
        {
    COW_AT(100f2dbf)
            wr32(sp0 - 0x198u, 0x10u);
            wr32(sp0 - 0x19cu, sp0 - 0x15cu);
            wr32(sp0 - 0x1a0u, self + 0x68u);
            g->eax = sp0 - 0x15cu;
            g->edx = edx;
            g->esp = sp0 - 0x190u;
            t30 = cow_cdecl(g, COW_IMG(0x100f3010u), 4, self + 0x68u, sp0 - 0x15cu, 0x10u, rd32(sp0 - 0x194u));
            t31 = g->edx;
            eax = t30;
            edx = t31;
        }
    }
    COW_AT(100f2dcf)
    wr32(sp0 - 0x178u, self + 0x68u);
    ebx = 0u;
L_100f2dd5: ;
    COW_AT(100f2dd5)
    wr32(sp0 - 0x198u, sp0 - 0x13cu);
    wr32(sp0 - 0x19cu, ebx);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x19cu;
    t32 = cow_stdcall(g, COW_IMG(0x1030ff89u), 0);
    t33 = g->edx;
    if (t32 != 0u)
    {
        eax = t32;
        edx = t33;
    }
    else
    {
        edx = t33;
    COW_AT(100f2de7)
        if (!(rd32(sp0 - 0xa4u) & 1u))
        {
            eax = rd32(sp0 - 0xa4u) & 1u;
        }
        else
        {
    COW_AT(100f2df7)
            if (rd32(rd32(self + 0xa0u)) != rd32(sp0 - 0x13cu))
            {
                eax = rd32(self + 0xa0u);
                edx = rd32(rd32(self + 0xa0u));
            }
            else
            {
                eax = rd32(self + 0xa0u);
    COW_AT(100f2e07)
                if (rd32(eax + 4u) != rd32(sp0 - 0x138u))
                {
                    edx = rd32(sp0 - 0x138u);
                }
                else
                {
    COW_AT(100f2e12)
                    t34 = rd8(eax + 0x3cu);
                    if (t34 != (rd32(sp0 - 0xa0u) >> 0xdu & 0x3fu))
                    {
                        eax = t34;
                        edx = (uint32_t)((int32_t)t34 >> 0x1fu);
                    }
                    else
                    {
                        eax = t34;
                        ecx = rd32(sp0 - 0xa0u) >> 0xdu & 0x3fu;
                        edx = (uint32_t)((int32_t)t34 >> 0x1fu);
    COW_AT(100f2e2d)
                        if (edx == 0u)
                        {
    COW_AT(100f2e31)
                            wr32(sp0 - 0x198u, 0x10u);
                            wr32(sp0 - 0x19cu, sp0 - 0x9cu);
                            wr32(sp0 - 0x1a0u, self + 0x78u);
                            g->eax = sp0 - 0x9cu;
                            g->edx = edx;
                            g->esp = sp0 - 0x190u;
                            t35 = cow_cdecl(g, COW_IMG(0x100f3010u), 4, self + 0x78u, sp0 - 0x9cu, 0x10u, rd32(sp0 - 0x194u));
                            t36 = g->edx;
                            wr32(sp0 - 0x17cu, self + 0x78u);
                            eax = t35;
                            edx = t36;
                        }
                    }
                }
            }
        }
    }
    COW_AT(100f2e4b)
    if ((int32_t)(ebx + 1u) < 100)
    {
        ebx = ebx + 1u;
        goto L_100f2dd5;
    }
    COW_AT(100f2e51)
    ebx = 0u;
L_100f2e53: ;
    COW_AT(100f2e53)
    wr32(sp0 - 0x198u, sp0 - 0x13cu);
    wr32(sp0 - 0x19cu, ebx);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x19cu;
    t37 = cow_stdcall(g, COW_IMG(0x1030ff73u), 0);
    t38 = g->edx;
    if (t37 != 0u)
    {
        eax = t37;
        edx = t38;
    }
    else
    {
        edx = t38;
    COW_AT(100f2e65)
        if (!(rd32(sp0 - 0xa4u) & 1u))
        {
            eax = rd32(sp0 - 0xa4u) & 1u;
        }
        else
        {
    COW_AT(100f2e75)
            if (rd32(rd32(self + 0xa0u)) != rd32(sp0 - 0x13cu))
            {
                eax = rd32(self + 0xa0u);
                edx = rd32(rd32(self + 0xa0u));
            }
            else
            {
                eax = rd32(self + 0xa0u);
    COW_AT(100f2e85)
                if (rd32(eax + 4u) != rd32(sp0 - 0x138u))
                {
                    edx = rd32(sp0 - 0x138u);
                }
                else
                {
    COW_AT(100f2e90)
                    t39 = rd8(eax + 0x3cu);
                    if (t39 != (rd32(sp0 - 0xa0u) >> 0xdu & 0x3fu))
                    {
                        eax = t39;
                        edx = (uint32_t)((int32_t)t39 >> 0x1fu);
                    }
                    else
                    {
                        eax = t39;
                        ecx = rd32(sp0 - 0xa0u) >> 0xdu & 0x3fu;
                        edx = (uint32_t)((int32_t)t39 >> 0x1fu);
    COW_AT(100f2eab)
                        if (edx == 0u)
                        {
    COW_AT(100f2eaf)
                            wr32(sp0 - 0x198u, 0x10u);
                            wr32(sp0 - 0x19cu, sp0 - 0x9cu);
                            wr32(sp0 - 0x1a0u, self + 0x78u);
                            g->eax = sp0 - 0x9cu;
                            g->edx = edx;
                            g->esp = sp0 - 0x190u;
                            t40 = cow_cdecl(g, COW_IMG(0x100f3010u), 4, self + 0x78u, sp0 - 0x9cu, 0x10u, rd32(sp0 - 0x194u));
                            t41 = g->edx;
                            wr32(sp0 - 0x17cu, self + 0x78u);
                            eax = t40;
                            edx = t41;
                        }
                    }
                }
            }
        }
    }
    COW_AT(100f2ec9)
    if ((int32_t)(ebx + 1u) < 200)
    {
        ebx = ebx + 1u;
        goto L_100f2e53;
    }
    COW_AT(100f2ed2)
    t42 = rd32(self + 0xa0u);
    wr32(sp0 - 0x16cu, t42);
    wr32(sp0 - 0x198u, sp0 - 0x8cu);
    t43 = rd32(self + 0xa4u);
    wr32(sp0 - 0x19cu, t43);
    wr32(sp0 - 0x1a0u, t42);
    g->eax = t42;
    g->ecx = sp0 - 0x8cu;
    g->esp = sp0 - 0x1a0u;
    t44 = cow_stdcall(g, COW_IMG(0x10310393u), 0);
    t45 = g->ecx;
    if (t44 == 0u)
    {
        ecx = t45;
    COW_AT(100f2f17)
        wr32(sp0 - 0x198u, 0u);
        wr32(sp0 - 0x19cu, 0u);
        wr32(sp0 - 0x1a0u, 0x10u);
    }
    else
    {
    COW_AT(100f2ef8)
        wr32(sp0 - 0x198u, sp0 - 0x184u);
        wr32(sp0 - 0x19cu, 0u);
        wr32(sp0 - 0x174u, sp0 - 0x8cu);
        t46 = rd32(sp0 - 0xcu);
        wr32(sp0 - 0x170u, t46);
        wr32(sp0 - 0x1a0u, 0u);
        ecx = t46;
    }
    COW_AT(100f2f1b)
    t47 = rd16(rd32(self + 0xa0u) + 0x3eu) >> 7u & 0x1fu;
    wr32(sp0 - 0x1a4u, t47);
    t48 = rd32(self + 0x1048u);
    wr32(sp0 - 0x1a8u, t48);
    g->eax = rd32(self + 0xa0u);
    g->edx = t48;
    t49 = rd32(self + 0xa0u);
    g->esp = sp0 - 0x1a8u;
    t50 = cow_thiscall(g, rd32(self + 0x1050u), t47, 0);
    t51 = g->edx;
    eax = t50;
    edx = t51;
L_100f2f39: ;
    COW_AT(100f2f39)
    loc_188 = rd32(sp0 - 0x188u);
    loc_18c = rd32(sp0 - 0x18cu);
    loc_190 = rd32(sp0 - 0x190u);
    loc_194 = rd32(sp0 - 0x194u);
    goto L_100f2f3c;
L_100f2f52: ;
    COW_AT(100f2f52)
    if (edi == 0x16u)
    {
        loc_188 = rd32(sp0 - 0x188u);
        loc_18c = rd32(sp0 - 0x18cu);
        loc_190 = rd32(sp0 - 0x190u);
        loc_194 = rd32(sp0 - 0x194u);
        goto L_100f2fd4;
    }
    COW_AT(100f2f57)
    if ((uint8_t)arg1 == 0u) goto L_100f2f77;
L_100f2f5b: ;
    COW_AT(100f2f5b)
    wr32(self + 0x105cu, 0u);
    g->eax = eax;
    g->esp = sp0 - 0x194u;
    t5 = cow_fastcall(g, COW_IMG(0x100f2a70u), self, edx, 0);
    g->ebx = rd32(sp0 - 0x188u);
    g->esi = rd32(sp0 - 0x190u);
    g->edi = rd32(sp0 - 0x194u);
    g->ebp = rd32(sp0 - 0x18cu);
    return (t5 & 0xffffff00u) | 1u;
L_100f2f77: ;
    COW_AT(100f2f77)
    if ((int32_t)rd32(self + 8u) >= 0)
    {
        eax = rd32(self + 8u);
    }
    else
    {
        eax = rd32(self + 8u);
    COW_AT(100f2f81)
        wr32(sp0 - 0x198u, eax);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x194u;
        t6 = cow_cdecl(g, COW_IMG(0x100182e0u), 1, eax);
        t7 = g->edx;
        eax = t6;
        edx = t7;
    }
    COW_AT(100f2f8a)
    if (rd32(self + 0x104cu) == 0u) goto L_100f2fae;
    ecx = rd32(self + 0x104cu);
    COW_AT(100f2f94)
    t8 = -(edi != 0u) & self + 8u;
    wr32(sp0 - 0x198u, t8);
    wr32(sp0 - 0x19cu, edi);
    wr32(sp0 - 0x1a0u, 0u);
    t9 = rd32(self + 0x1048u);
    wr32(sp0 - 0x1a4u, t9);
    g->eax = t9;
    g->edx = edx;
    g->esp = sp0 - 0x1a4u;
    t10 = cow_thiscall(g, ecx, ecx, 0);
    t11 = g->edx;
    eax = t10;
    edx = t11;
    loc_188 = rd32(sp0 - 0x188u);
    loc_18c = rd32(sp0 - 0x18cu);
    loc_190 = rd32(sp0 - 0x190u);
    loc_194 = rd32(sp0 - 0x194u);
    goto L_100f2f3c;
L_100f2fae: ;
    COW_AT(100f2fae)
    if (rd32(self + 0x1050u) == 0u)
    {
        loc_188 = rd32(sp0 - 0x188u);
        loc_18c = rd32(sp0 - 0x18cu);
        loc_190 = rd32(sp0 - 0x190u);
        loc_194 = rd32(sp0 - 0x194u);
        goto L_100f2f3c;
    }
    ecx = rd32(self + 0x1050u);
    COW_AT(100f2fb8)
    t12 = -(edi != 0u) & self + 8u;
    wr32(sp0 - 0x198u, t12);
    wr32(sp0 - 0x19cu, 0u);
    wr32(sp0 - 0x1a0u, edi);
    wr32(sp0 - 0x1a4u, 0u);
    t13 = rd32(self + 0x1048u);
    wr32(sp0 - 0x1a8u, t13);
    g->eax = t12;
    g->edx = t13;
    g->esp = sp0 - 0x1a8u;
    t14 = cow_thiscall(g, ecx, ecx, 0);
    t15 = g->edx;
    eax = t14;
    edx = t15;
    goto L_100f2f39;
L_100f2fd4: ;
    COW_AT(100f2fd4)
    if ((uint8_t)arg1 == 0u) goto L_100f2f43;
    COW_AT(100f2fdc)
    if (rd32(self + 0x105cu) == 0u)
    {
        eax = rd32(self + 0x105cu);
        goto L_100f2ff8;
    }
    eax = rd32(self + 0x105cu);
    COW_AT(100f2fe6)
    if (rd32(eax + rd16(self + 0x105au) * 4u) != 0u) goto L_100f2f43;
L_100f2ff8: ;
    COW_AT(100f2ff8)
    g->eax = eax;
    g->esp = sp0 - 0x194u;
    t53 = cow_fastcall(g, COW_IMG(0x100f2a70u), self, edx, 0);
    g->ebx = rd32(sp0 - 0x188u);
    g->esi = rd32(sp0 - 0x190u);
    g->edi = rd32(sp0 - 0x194u);
    g->ebp = rd32(sp0 - 0x18cu);
    return (t53 & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100f2c80(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100f2c9eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x194u);
        in_esi = rd32(sp0 - 0x190u);
        in_ebp = rd32(sp0 - 0x18cu);
        in_ebx = rd32(sp0 - 0x188u);
        g->esp = sp0 - 0x194u;
        g->ecx = 1u;
        g->ebx = (in_ebx & 0xffffff00u) | (uint8_t)arg1;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100f2cb6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x194u);
        in_esi = rd32(sp0 - 0x190u);
        in_ebp = rd32(sp0 - 0x18cu);
        in_ebx = rd32(sp0 - 0x188u);
        g->esp = sp0 - 0x194u;
        g->ecx = 1u;
        g->ebx = (in_ebx & 0xffffff00u) | (uint8_t)arg1;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100f2d01u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x194u;
        (void)sp0;
        return 1;
    }
    case 0x100f2d14u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_188;
        uint32_t loc_18c;
        uint32_t loc_190;
        uint32_t loc_194;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_194 = rd32(sp0 - 0x194u);
        loc_190 = rd32(sp0 - 0x190u);
        loc_18c = rd32(sp0 - 0x18cu);
        loc_188 = rd32(sp0 - 0x188u);
        g->esp = sp0 - 0x194u;
        (void)sp0;
        return 1;
    }
    case 0x100f2d2au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_188;
        uint32_t loc_18c;
        uint32_t loc_190;
        uint32_t loc_194;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_194 = rd32(sp0 - 0x194u);
        loc_190 = rd32(sp0 - 0x190u);
        loc_18c = rd32(sp0 - 0x18cu);
        loc_188 = rd32(sp0 - 0x188u);
        g->esp = sp0 - 0x194u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100f2d34u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_188;
        uint32_t loc_18c;
        uint32_t loc_190;
        uint32_t loc_194;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_194 = rd32(sp0 - 0x194u);
        loc_190 = rd32(sp0 - 0x190u);
        loc_18c = rd32(sp0 - 0x18cu);
        loc_188 = rd32(sp0 - 0x188u);
        g->esp = sp0 - 0x194u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100f2d3cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_188;
        uint32_t loc_18c;
        uint32_t loc_190;
        uint32_t loc_194;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_194 = rd32(sp0 - 0x194u);
        loc_190 = rd32(sp0 - 0x190u);
        loc_18c = rd32(sp0 - 0x18cu);
        loc_188 = rd32(sp0 - 0x188u);
        g->esp = sp0 - 0x194u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100f2d56u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_188;
        uint32_t loc_18c;
        uint32_t loc_190;
        uint32_t loc_194;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_194 = rd32(sp0 - 0x194u);
        loc_190 = rd32(sp0 - 0x190u);
        loc_18c = rd32(sp0 - 0x18cu);
        loc_188 = rd32(sp0 - 0x188u);
        g->esp = sp0 - 0x194u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100f2d5au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_188;
        uint32_t loc_18c;
        uint32_t loc_190;
        uint32_t loc_194;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_194 = rd32(sp0 - 0x194u);
        loc_190 = rd32(sp0 - 0x190u);
        loc_18c = rd32(sp0 - 0x18cu);
        loc_188 = rd32(sp0 - 0x188u);
        g->esp = sp0 - 0x194u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100f2d6eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_188;
        uint32_t loc_18c;
        uint32_t loc_190;
        uint32_t loc_194;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_194 = rd32(sp0 - 0x194u);
        loc_190 = rd32(sp0 - 0x190u);
        loc_18c = rd32(sp0 - 0x18cu);
        loc_188 = rd32(sp0 - 0x188u);
        g->esp = sp0 - 0x194u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100f2d7au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_188;
        uint32_t loc_18c;
        uint32_t loc_190;
        uint32_t loc_194;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_194 = rd32(sp0 - 0x194u);
        loc_190 = rd32(sp0 - 0x190u);
        loc_18c = rd32(sp0 - 0x18cu);
        loc_188 = rd32(sp0 - 0x188u);
        g->esp = sp0 - 0x194u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100f2db2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x194u;
        g->ebp = 0u;
        g->edi = self + 0x68u;
        wr32(sp0 - 0x198u, sp0 - 0x164u);
        (void)sp0;
        return 1;
    }
    case 0x100f2dbfu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x194u;
        g->ecx = 0u;
        g->ebp = 0u;
        g->edi = self + 0x68u;
        wr32(sp0 - 0x198u, sp0 - 0x164u);
        (void)sp0;
        return 1;
    }
    case 0x100f2dcfu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x194u;
        g->ebp = 0u;
        g->edi = self + 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x100f2dd5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x194u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100f2de7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x194u;
        g->ebp = 0u;
        wr32(sp0 - 0x198u, sp0 - 0x13cu);
        (void)sp0;
        return 1;
    }
    case 0x100f2df7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x194u;
        g->ebp = 0u;
        wr32(sp0 - 0x198u, sp0 - 0x13cu);
        (void)sp0;
        return 1;
    }
    case 0x100f2e07u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x194u;
        g->ebp = 0u;
        wr32(sp0 - 0x198u, sp0 - 0x13cu);
        (void)sp0;
        return 1;
    }
    case 0x100f2e12u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x194u;
        g->ebp = 0u;
        wr32(sp0 - 0x198u, sp0 - 0x13cu);
        (void)sp0;
        return 1;
    }
    case 0x100f2e2du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x194u;
        g->ebp = 0u;
        g->edi = 0u;
        wr32(sp0 - 0x198u, sp0 - 0x13cu);
        (void)sp0;
        return 1;
    }
    case 0x100f2e31u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x194u;
        g->ebp = 0u;
        wr32(sp0 - 0x198u, sp0 - 0x13cu);
        (void)sp0;
        return 1;
    }
    case 0x100f2e4bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x194u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100f2e51u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x194u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100f2e53u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x194u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100f2e65u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x194u;
        g->ebp = 0u;
        wr32(sp0 - 0x198u, sp0 - 0x13cu);
        (void)sp0;
        return 1;
    }
    case 0x100f2e75u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x194u;
        g->ebp = 0u;
        wr32(sp0 - 0x198u, sp0 - 0x13cu);
        (void)sp0;
        return 1;
    }
    case 0x100f2e85u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x194u;
        g->ebp = 0u;
        wr32(sp0 - 0x198u, sp0 - 0x13cu);
        (void)sp0;
        return 1;
    }
    case 0x100f2e90u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x194u;
        g->ebp = 0u;
        wr32(sp0 - 0x198u, sp0 - 0x13cu);
        (void)sp0;
        return 1;
    }
    case 0x100f2eabu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x194u;
        g->ebp = 0u;
        g->edi = 0u;
        wr32(sp0 - 0x198u, sp0 - 0x13cu);
        (void)sp0;
        return 1;
    }
    case 0x100f2eafu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x194u;
        g->ebp = 0u;
        wr32(sp0 - 0x198u, sp0 - 0x13cu);
        (void)sp0;
        return 1;
    }
    case 0x100f2ec9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x194u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100f2ed2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x194u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100f2ef8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x194u;
        g->ebp = 0u;
        wr32(sp0 - 0x198u, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x100f2f17u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x194u;
        g->ebp = 0u;
        wr32(sp0 - 0x198u, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x100f2f1bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1a0u;
        (void)sp0;
        return 1;
    }
    case 0x100f2f39u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1a8u;
        (void)sp0;
        return 1;
    }
    case 0x100f2f3cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_188;
        uint32_t loc_18c;
        uint32_t loc_190;
        uint32_t loc_194;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_194 = rd32(sp0 - 0x194u);
        loc_190 = rd32(sp0 - 0x190u);
        loc_18c = rd32(sp0 - 0x18cu);
        loc_188 = rd32(sp0 - 0x188u);
        g->esp = sp0 - 0x194u;
        (void)sp0;
        return 1;
    }
    case 0x100f2f43u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_188;
        uint32_t loc_18c;
        uint32_t loc_190;
        uint32_t loc_194;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_194 = rd32(sp0 - 0x194u);
        loc_190 = rd32(sp0 - 0x190u);
        loc_18c = rd32(sp0 - 0x18cu);
        loc_188 = rd32(sp0 - 0x188u);
        g->esp = sp0 - 0x194u;
        (void)sp0;
        return 1;
    }
    case 0x100f2f5bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x194u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100f2f77u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x194u;
        (void)sp0;
        return 1;
    }
    case 0x100f2f81u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x194u;
        g->ebp = self + 8u;
        (void)sp0;
        return 1;
    }
    case 0x100f2f8au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x194u;
        g->ebp = self + 8u;
        (void)sp0;
        return 1;
    }
    case 0x100f2f94u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x194u;
        g->ebp = self + 8u;
        (void)sp0;
        return 1;
    }
    case 0x100f2faeu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x194u;
        g->ebp = self + 8u;
        (void)sp0;
        return 1;
    }
    case 0x100f2fb8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x194u;
        g->ebp = self + 8u;
        (void)sp0;
        return 1;
    }
    case 0x100f2fdcu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_188;
        uint32_t loc_18c;
        uint32_t loc_190;
        uint32_t loc_194;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_194 = rd32(sp0 - 0x194u);
        loc_190 = rd32(sp0 - 0x190u);
        loc_18c = rd32(sp0 - 0x18cu);
        loc_188 = rd32(sp0 - 0x188u);
        g->esp = sp0 - 0x194u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100f2fe6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_188;
        uint32_t loc_18c;
        uint32_t loc_190;
        uint32_t loc_194;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_194 = rd32(sp0 - 0x194u);
        loc_190 = rd32(sp0 - 0x190u);
        loc_18c = rd32(sp0 - 0x18cu);
        loc_188 = rd32(sp0 - 0x188u);
        g->esp = sp0 - 0x194u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100f2ff8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_188;
        uint32_t loc_18c;
        uint32_t loc_190;
        uint32_t loc_194;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_194 = rd32(sp0 - 0x194u);
        loc_190 = rd32(sp0 - 0x190u);
        loc_18c = rd32(sp0 - 0x18cu);
        loc_188 = rd32(sp0 - 0x188u);
        g->esp = sp0 - 0x194u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
/* blocks no state can start at, and why (the gittable lists their sites):
     100f2cc4: holds in_ebx, which no location here says
     100f2cd4: holds in_ebx, which no location here says
     100f2ce6: holds in_ebx, which no location here says
     100f2cee: holds in_ebx, which no location here says
     100f2d10: holds in_ebx, which no location here says
     100f2f52: holds in_ebx, which no location here says
     100f2f57: holds in_ebx, which no location here says
     100f2fd4: holds in_ebx, which no location here says
*/
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100f2c80(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100f2c80(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
