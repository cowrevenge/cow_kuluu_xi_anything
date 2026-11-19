/* f_0x102136d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_102136d0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
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
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 60u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102136e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 0x18u); goto E_102136e7;
    case 0x10213718u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 0x18u); goto E_10213718;
    case 0x10213721u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 0x18u); goto E_10213721;
    case 0x10213730u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 0x18u); goto E_10213730;
    case 0x1021373du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0x18u); loc_c = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x18u); goto E_1021373d;
    case 0x1021382du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; goto E_1021382d;
    case 0x10213835u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; goto E_10213835;
    case 0x1021383du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; goto E_1021383d;
    case 0x10213843u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; goto E_10213843;
    case 0x102138b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; goto E_102138b4;
    case 0x102138cau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; loc_14 = rd32(sp0 - 0x14u); goto E_102138ca;
    case 0x102138dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; loc_14 = rd32(sp0 - 0x14u); goto E_102138dc;
    case 0x102138e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; loc_14 = rd32(sp0 - 0x14u); goto E_102138e4;
    case 0x102138ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; loc_14 = rd32(sp0 - 0x14u); goto E_102138eb;
    case 0x102138f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; loc_14 = rd32(sp0 - 0x14u); goto E_102138f5;
    case 0x10213980u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_10213980;
    case 0x1021398eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_1021398e;
    case 0x10213996u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_10213996;
    case 0x102139a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_102139a0;
    case 0x102139a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_102139a8;
    case 0x102139aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_102139ae;
    case 0x102139c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_102139c8;
    case 0x10213a2au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_10213a2a;
    case 0x10213a8eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10213a8e;
    case 0x10213aa6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_10213aa6;
    case 0x10213aacu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_10213aac;
    case 0x10213ac7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_10213ac7;
    case 0x10213ae1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10213ae1;
    case 0x10213aeau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10213aea;
    case 0x10213af2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10213af2;
    case 0x10213b00u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10213b00;
    case 0x10213b0au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10213b0a;
    case 0x10213b18u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10213b18;
    case 0x10213b24u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10213b24;
    case 0x10213b2fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10213b2f;
    case 0x10213b36u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10213b36;
    case 0x10213b40u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10213b40;
    case 0x10213b4cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10213b4c;
    case 0x10213b56u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10213b56;
    case 0x10213b62u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10213b62;
    case 0x10213b6cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10213b6c;
    case 0x10213b78u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10213b78;
    case 0x10213b82u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10213b82;
    case 0x10213b8eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10213b8e;
    case 0x10213b98u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10213b98;
    case 0x10213ba4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10213ba4;
    case 0x10213baeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10213bae;
    case 0x10213bb3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10213bb3;
    default: break;
    }
#endif

    COW_AT(102136d0)
    wr32(sp0 - 0x18u, in_ebp);
    wr32(sp0 - 0x14u, 0u);
    if (rd32(COW_IMG(0x104e1d4cu)) == 0u)
    {
        eax = rd32(COW_IMG(0x104e1d4cu));
        ecx = self;
        edx = in_edx;
    }
    else
    {
        eax = rd32(COW_IMG(0x104e1d4cu));
    COW_AT(102136e7)
        t1 = rd32(eax + 4u);
        wr32(sp0 - 8u, t1);
        wr32(sp0 - 0x1cu, sp0 - 8u);
        t2 = rd32(eax + 8u);
        wr32(sp0 - 4u, t2);
        g->eax = sp0 - 8u;
        g->esp = sp0 - 0x18u;
        t3 = cow_fastcall(g, COW_IMG(0x10215050u), self, t2, 1, sp0 - 8u);
        t4 = g->ecx;
        t5 = g->edx;
        t6 = rd16(self + 0x178u);
        wr16(self + 0x178u, (uint16_t)(((t6 ^ t3) & 0xfu) ^ t6));
        eax = t3;
        ecx = (t4 & 0xffff0000u) | t6;
        edx = ((t6 ^ t3) & 0xfu) ^ ((t4 & 0xffff0000u) | t6);
    }
    COW_AT(10213718)
    if (rd8(self + 0x1c2u) != 1u)
    {
    COW_AT(10213730)
        wr32(sp0 - 0xcu, 0x80404040u);
        wr8(sp0 - 0x10u, 0u);
        loc_c = 0x80404040u;
    }
    else
    {
    COW_AT(10213721)
        wr32(sp0 - 0xcu, 0x80808080u);
        wr8(sp0 - 0x10u, 1u);
        loc_c = 0x80808080u;
    }
    COW_AT(1021373d)
    t7 = rd16(self + 0x16au);
    t8 = rd16(self + 0x17au);
    t9 = rd16(self + 0x166u);
    wr16(self + 0x18eu, (uint16_t)t9);
    wr32(sp0 - 0x1cu, in_ebx);
    wr32(sp0 - 0x20u, in_esi);
    wr16(self + 0x190u, (uint16_t)(t7 + t8));
    wr32(sp0 - 0x24u, in_edi);
    t10 = rd16(self + 0x17cu);
    wr16(self + 0x18au, (uint16_t)((uint16_t)t9 + t10));
    wr32(sp0 - 0x28u, 0u);
    wr16(self + 0x18cu, (uint16_t)(rd16(self + 0x17eu) + (uint16_t)(t7 + t8)));
    t11 = rd16(self + 0x16au);
    t12 = rd16(self + 0x186u);
    t13 = rd16(self + 0x16cu);
    t14 = rd16(self + 0x184u);
    t15 = rd16(self + 0x168u);
    t16 = rd16(self + 0x166u);
    wr16(self + 0x194u, (uint16_t)(t11 + (uint16_t)(t12 - t13)));
    wr16(self + 0x192u, (uint16_t)((uint16_t)(t14 - t15) - t16));
    g->eax = (eax & 0xffff0000u) | (uint16_t)(t11 + (uint16_t)(t12 - t13));
    t17 = rd32(self + 0xcu);
    g->esp = sp0 - 0x24u;
    t18 = cow_stdcall(g, COW_IMG(0x10216a50u), 1, 0u);
    t19 = rd32(t17 + 0xcu) - 1u;
    t20 = rd32(t17 + 8u);
    esi = t18;
    edi = t20;
    ecx = t19 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = t19 & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    t21 = rd32(t17 + 0xcu);
    t22 = rd32(t17 + 8u);
    wr8(t21 + t22 - 1u, 0u);
    wr16(t17 + 0x14u, 0u);
    wr16(t17 + 0x16u, 0u);
    t23 = rd16(self + 0x18au);
    wr16(t17 + 0x10u, (uint16_t)t23);
    wr16(t17 + 0x12u, rd16(self + 0x18cu));
    wr16(t17 + 0x18u, rd16(self + 0x192u));
    wr16(t17 + 0x1au, 0u);
    if (rd32(self + 0x128u) != 0u)
    {
        eax = t17 + 0x10u;
        ecx = rd32(self + 0x10u);
        edx = rd32(self + 0x128u);
        ebx = t17;
        goto L_1021383d;
    }
    eax = t17 + 0x10u;
    ecx = rd32(self + 0x10u);
    edx = rd32(self + 0x128u);
    ebx = t17;
    COW_AT(1021382d)
    if (rd32(self + 0x10cu) != 0u) goto L_1021383d;
    COW_AT(10213835)
    edx = (edx & 0xffffff00u) | rd8(ecx + 0x28u) | 2u;
L_10213843: ;
    COW_AT(10213843)
    wr8(ecx + 0x28u, (uint8_t)edx);
    t24 = rd16(self + 0x170u);
    t25 = rd16(self + 0x174u);
    t26 = rd16(eax + 0xau);
    t27 = rd16(eax + 6u);
    wr16(ecx + 0x14u, (uint16_t)t24);
    wr16(ecx + 0x16u, (uint16_t)(t25 + (uint16_t)(t26 + t27)));
    t28 = rd16(self + 0x18au);
    wr16(ecx + 0x10u, (uint16_t)((uint16_t)t24 + t28));
    wr16(ecx + 0x12u, (uint16_t)(rd16(self + 0x18cu) + (uint16_t)(t25 + (uint16_t)(t26 + t27))));
    t29 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x28u, t29);
    t30 = rd16(self + 0x192u);
    t31 = rd16(self + 0x172u);
    t32 = rd16(self + 0x170u);
    wr16(ecx + 0x1au, 0u);
    wr32(sp0 - 0x2cu, self + 0x17cu);
    wr16(ecx + 0x18u, (uint16_t)((uint16_t)(t30 - t31) - t32));
    g->eax = t29;
    g->esp = sp0 - 0x24u;
    t33 = cow_fastcall(g, COW_IMG(0x10212050u), ecx, (edx & 0xffff0000u) | (uint16_t)((uint16_t)(t30 - t31) - t32), 2, self + 0x17cu, t29);
    t34 = g->edx;
    if ((uint8_t)t33 != 1u)
    {
        ebx = (ebx & 0xffff0000u) | (uint16_t)((uint16_t)t24 + t28);
        esi = ecx + 0x10u;
        loc_14 = rd32(sp0 - 0x14u);
    }
    else
    {
        eax = t33;
        edx = t34;
        ebx = (ebx & 0xffff0000u) | (uint16_t)((uint16_t)t24 + t28);
        esi = ecx + 0x10u;
    COW_AT(102138b4)
        wr32(sp0 - 0x28u, 0u);
        wr32(sp0 - 0x2cu, esi);
        wr32(sp0 - 0x30u, esi);
        wr32(sp0 - 0x34u, sp0 - 8u);
        wr32(sp0 - 0x38u, 0u);
        g->eax = eax;
        g->esp = sp0 - 0x24u;
        t35 = cow_thiscall(g, COW_IMG(0x10214980u), self, 5, 0u, sp0 - 8u, esi, esi, 0u);
        wr32(sp0 - 0x14u, t35);
        loc_14 = t35;
    }
    COW_AT(102138ca)
    if (rd32(self + 0x10cu) != rd32(self + 0x108u))
    {
        eax = rd32(self + 0x10cu);
        ecx = rd32(self + 0x108u);
        edx = esi;
        goto L_102138eb;
    }
    eax = rd32(self + 0x10cu);
    ecx = rd32(self + 0x108u);
    edx = esi;
    COW_AT(102138dc)
    if (rd8(sp0 - 0x10u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x10u);
        goto L_102138eb;
    }
    eax = (eax & 0xffffff00u) | rd8(sp0 - 0x10u);
    COW_AT(102138e4)
    eax = (eax & 0xffffff00u) | rd8(ecx + 0x36u) | 2u;
L_102138f5: ;
    COW_AT(102138f5)
    wr8(ecx + 0x36u, (uint8_t)eax);
    t37 = rd16(self + 0x174u);
    t38 = rd16(edx + 0xau);
    t39 = rd16(edx + 6u);
    t40 = rd16(self + 0x170u);
    wr16(ecx + 0x14u, (uint16_t)(t40 * 2u));
    wr16(ecx + 0x16u, (uint16_t)(t37 + (uint16_t)(t38 + t39)));
    t41 = rd16(self + 0x18au);
    wr16(ecx + 0x10u, (uint16_t)(t41 + (uint16_t)(t40 * 2u)));
    t42 = rd16(self + 0x18cu);
    wr16(ecx + 0x12u, (uint16_t)(t42 + (uint16_t)(t37 + (uint16_t)(t38 + t39))));
    t43 = rd32(sp0 - 0x10u);
    wr32(sp0 - 0x28u, t43);
    t44 = rd16(self + 0x192u);
    t45 = rd16(self + 0x170u);
    t46 = rd16(self + 0x172u);
    wr16(ecx + 0x1au, 0u);
    wr16(ecx + 0x18u, (uint16_t)((uint16_t)(t44 - (uint16_t)(t45 * 2u)) - t46));
    t47 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x2cu, t47);
    wr32(sp0 - 0x30u, self + 0x17cu);
    g->esp = sp0 - 0x24u;
    cow_fastcall(g, COW_IMG(0x10211f00u), ecx, t47, 3, self + 0x17cu, t47, t43);
    wr32(sp0 - 0x10u, 1u);
    wr32(sp0 - 0xcu, self + 0x14u);
    eax = 1u;
    edx = ecx + 0x10u;
    ebx = (ebx & 0xffff0000u) | (uint16_t)(t41 + (uint16_t)(t40 * 2u));
    edi = 1u;
    loc_10 = 1u;
    loc_c = self + 0x14u;
    loc_14 = rd32(sp0 - 0x14u);
L_10213980: ;
    COW_AT(10213980)
    if (rd32(loc_c) != 0u)
    {
        ecx = rd32(loc_c);
    COW_AT(1021398e)
        if (eax != rd32(self + 0x128u)) goto L_102139a8;
    COW_AT(10213996)
        if (rd32(self + 0x10cu) != 0u) goto L_102139a8;
    COW_AT(102139a0)
        ebx = (ebx & 0xffffff00u) | rd8(ecx + 0x28u) | 2u;
L_102139ae: ;
    COW_AT(102139ae)
        wr8(ecx + 0x28u, (uint8_t)ebx);
        wr32(sp0 - 0x28u, 0x80808080u);
        if (eax != rd32(self + 0x124u) - 1u)
        {
            eax = (eax & 0xffff0000u) | rd16(edx + 0xau);
            ebx = rd32(self + 0x124u) - 1u;
            esi = ecx + 0x10u;
            goto L_10213a2a;
        }
        eax = (eax & 0xffff0000u) | rd16(edx + 0xau);
        ebx = rd32(self + 0x124u) - 1u;
        esi = ecx + 0x10u;
    COW_AT(102139c8)
        t48 = rd16(self + 0x174u);
        t49 = rd16(edx + 6u);
        t50 = rd16(self + 0x170u);
        wr16(esi + 4u, (uint16_t)t50);
        wr16(esi + 6u, (uint16_t)(t48 + (uint16_t)((uint16_t)eax + t49)));
        t51 = rd16(self + 0x18au);
        wr16(esi, (uint16_t)((uint16_t)t50 + t51));
        t52 = rd16(self + 0x18cu);
        wr16(esi + 2u, (uint16_t)(t52 + (uint16_t)(t48 + (uint16_t)((uint16_t)eax + t49))));
        t53 = rd16(self + 0x192u);
        t54 = rd16(self + 0x172u);
        t55 = rd16(self + 0x170u);
        wr16(esi + 0xau, 0u);
        wr16(esi + 8u, (uint16_t)((uint16_t)(t53 - t54) - t55));
        wr32(sp0 - 0x2cu, self + 0x17cu);
        g->eax = self + 0x17cu;
        g->esp = sp0 - 0x24u;
        t56 = cow_fastcall(g, COW_IMG(0x10212050u), ecx, ((edx | t50) & 0xffff0000u) | (uint16_t)(t52 + (uint16_t)(t48 + (uint16_t)((uint16_t)eax + t49))), 2, self + 0x17cu, 0x80808080u);
        eax = t56;
        ebx = (ebx & 0xffff0000u) | (uint16_t)((uint16_t)t50 + t51);
L_10213a8e: ;
    COW_AT(10213a8e)
        wr32(sp0 - 0x28u, edi);
        wr32(sp0 - 0x2cu, esi);
        wr32(sp0 - 0x30u, esi);
        wr32(sp0 - 0x34u, sp0 - 8u);
        t66 = rd32(sp0 - 0x14u);
        wr32(sp0 - 0x38u, t66);
        g->eax = eax;
        g->esp = sp0 - 0x24u;
        t67 = cow_thiscall(g, COW_IMG(0x10214980u), self, 5, t66, sp0 - 8u, esi, esi, edi);
        wr32(sp0 - 0x14u, t67);
        loc_14 = t67;
L_10213aa6: ;
    COW_AT(10213aa6)
        eax = rd32(sp0 - 0x10u);
        edx = esi;
        loc_c = rd32(sp0 - 0xcu);
    }
    COW_AT(10213aac)
    wr32(sp0 - 0x10u, eax + 1u);
    wr32(sp0 - 0xcu, loc_c + 4u);
    if ((int16_t)(edi + 1u) < 31)
    {
        edi = edi + 1u;
        loc_10 = eax + 1u;
        eax = eax + 1u;
        loc_c = loc_c + 4u;
        goto L_10213980;
    }
    eax = eax + 1u;
    esi = loc_c + 4u;
    edi = edi + 1u;
    COW_AT(10213ac7)
    g->esi = esi;
    g->edi = edi;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t68 = cow_call_regs(g, COW_IMG(0x10213bd0u), eax, self, g->edx, 1, 0);
    t69 = g->edx;
    g->edx = t69;
    cow_thiscall(g, COW_IMG(0x102147e0u), self, 0);
    t70 = g->edx;
    if (rd32(COW_IMG(0x104e1d4cu)) == 0u)
    {
        edx = t70;
        ebx = rd32(sp0 - 0x1cu);
        esi = rd32(sp0 - 0x20u);
        edi = rd32(sp0 - 0x24u);
    }
    else
    {
        eax = rd32(COW_IMG(0x104e1d4cu));
        edx = t70;
        ebx = rd32(sp0 - 0x1cu);
        esi = rd32(sp0 - 0x20u);
        edi = rd32(sp0 - 0x24u);
    COW_AT(10213ae1)
        if ((rd8(self + 0x178u) & 0xfu) != 0u)
        {
    COW_AT(10213aea)
            if (rd16(sp0 - 0x14u) == 0u)
            {
    COW_AT(10213af2)
                g->edx = edx;
                g->esp = sp0 - 0x18u;
                cow_thiscall(g, COW_IMG(0x10215030u), self, 0);
                t71 = g->edx;
                wr8(self + 0x178u, rd8(self + 0x178u) & 0xf0u);
                edx = t71;
            }
        }
    }
    COW_AT(10213b00)
    if (rd32(self + 0x10cu) == 0u)
    {
        eax = rd32(self + 0x10cu);
        goto L_10213b24;
    }
    eax = rd32(self + 0x10cu);
    COW_AT(10213b0a)
    if (rd32(COW_IMG(0x10664530u)) == 0u) goto L_10213bb3;
    ecx = rd32(COW_IMG(0x10664530u));
    COW_AT(10213b18)
    wr32(sp0 - 0x1cu, 0x11u);
    g->edi = edi;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x10216970u), ecx, 1, 0x11u);
    g->ebx = ebx;
    g->esi = esi;
    g->edi = edi;
    g->ebp = rd32(sp0 - 0x18u);
    return;
L_1021383d: ;
    COW_AT(1021383d)
    edx = (edx & 0xffffff00u) | (rd8(ecx + 0x28u) & 0xfdu);
    goto L_10213843;
L_102138eb: ;
    COW_AT(102138eb)
    t36 = rd8(ecx + 0x36u);
    wr8(sp0 - 0x10u, 0u);
    eax = ((eax | t36) & 0xffffff00u) | (t36 & 0xfdu);
    goto L_102138f5;
L_102139a8: ;
    COW_AT(102139a8)
    ebx = (ebx & 0xffffff00u) | (rd8(ecx + 0x28u) & 0xfdu);
    goto L_102139ae;
L_10213a2a: ;
    COW_AT(10213a2a)
    t57 = rd16(self + 0x174u);
    t58 = rd16(edx + 6u);
    t59 = rd16(self + 0x170u);
    wr16(esi + 4u, (uint16_t)t59);
    wr16(esi + 6u, (uint16_t)(t57 + (uint16_t)((uint16_t)eax + t58)));
    t60 = rd16(self + 0x18au);
    wr16(esi, (uint16_t)((uint16_t)t59 + t60));
    t61 = rd16(self + 0x18cu);
    wr16(esi + 2u, (uint16_t)(t61 + (uint16_t)(t57 + (uint16_t)((uint16_t)eax + t58))));
    t62 = rd16(self + 0x192u);
    t63 = rd16(self + 0x172u);
    t64 = rd16(self + 0x170u);
    wr16(esi + 0xau, 0u);
    wr16(esi + 8u, (uint16_t)((uint16_t)(t62 - t63) - t64));
    wr32(sp0 - 0x2cu, self + 0x17cu);
    g->eax = self + 0x17cu;
    g->esp = sp0 - 0x24u;
    t65 = cow_fastcall(g, COW_IMG(0x10212050u), ecx, ((edx | t59) & 0xffff0000u) | (uint16_t)(t61 + (uint16_t)(t57 + (uint16_t)((uint16_t)eax + t58))), 2, self + 0x17cu, 0x80808080u);
    if ((uint8_t)t65 != 1u)
    {
        ebx = (ebx & 0xffff0000u) | (uint16_t)((uint16_t)t59 + t60);
        loc_14 = rd32(sp0 - 0x14u);
        goto L_10213aa6;
    }
    eax = t65;
    ebx = (ebx & 0xffff0000u) | (uint16_t)((uint16_t)t59 + t60);
    goto L_10213a8e;
L_10213b24: ;
    COW_AT(10213b24)
    if (rd32(self + 0x128u) > 4u) goto L_10213ba4;
    ebp = rd32(self + 0x128u);
    COW_AT(10213b2f)
    t72 = rd32(COW_IMG(0x10213bb8u) + ebp * 4u);
    switch (t72 - RD)
    {
    case 0x10213b36u: goto L_10213b36;
    case 0x10213b4cu: goto L_10213b4c;
    case 0x10213b62u: goto L_10213b62;
    case 0x10213b78u: goto L_10213b78;
    case 0x10213b8eu: goto L_10213b8e;
    default: rt_fatal(g, COW_IMG(0x10213b2fu), "switch");
    }
    return;
L_10213b36: ;
    COW_AT(10213b36)
    if (rd32(COW_IMG(0x10664530u)) == 0u) goto L_10213bb3;
    ecx = rd32(COW_IMG(0x10664530u));
    COW_AT(10213b40)
    wr32(sp0 - 0x1cu, 0x10u);
    g->edi = edi;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x10216970u), ecx, 1, 0x10u);
    g->ebx = ebx;
    g->esi = esi;
    g->edi = edi;
    g->ebp = rd32(sp0 - 0x18u);
    return;
L_10213b4c: ;
    COW_AT(10213b4c)
    if (rd32(COW_IMG(0x10664530u)) == 0u) goto L_10213bb3;
    ecx = rd32(COW_IMG(0x10664530u));
    COW_AT(10213b56)
    wr32(sp0 - 0x1cu, 0x18u);
    g->edi = edi;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x10216970u), ecx, 1, 0x18u);
    g->ebx = ebx;
    g->esi = esi;
    g->edi = edi;
    g->ebp = rd32(sp0 - 0x18u);
    return;
L_10213b62: ;
    COW_AT(10213b62)
    if (rd32(COW_IMG(0x10664530u)) == 0u) goto L_10213bb3;
    ecx = rd32(COW_IMG(0x10664530u));
    COW_AT(10213b6c)
    wr32(sp0 - 0x1cu, 0x12u);
    g->edi = edi;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x10216970u), ecx, 1, 0x12u);
    g->ebx = ebx;
    g->esi = esi;
    g->edi = edi;
    g->ebp = rd32(sp0 - 0x18u);
    return;
L_10213b78: ;
    COW_AT(10213b78)
    if (rd32(COW_IMG(0x10664530u)) == 0u) goto L_10213bb3;
    ecx = rd32(COW_IMG(0x10664530u));
    COW_AT(10213b82)
    wr32(sp0 - 0x1cu, 0x13u);
    g->edi = edi;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x10216970u), ecx, 1, 0x13u);
    g->ebx = ebx;
    g->esi = esi;
    g->edi = edi;
    g->ebp = rd32(sp0 - 0x18u);
    return;
L_10213b8e: ;
    COW_AT(10213b8e)
    if (rd32(COW_IMG(0x10664530u)) == 0u) goto L_10213bb3;
    ecx = rd32(COW_IMG(0x10664530u));
    COW_AT(10213b98)
    wr32(sp0 - 0x1cu, 0x14u);
    g->edi = edi;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x10216970u), ecx, 1, 0x14u);
    g->ebx = ebx;
    g->esi = esi;
    g->edi = edi;
    g->ebp = rd32(sp0 - 0x18u);
    return;
L_10213ba4: ;
    COW_AT(10213ba4)
    if (rd32(COW_IMG(0x10664530u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10664530u));
    COW_AT(10213bae)
        g->esp = sp0 - 0x18u;
        cow_thiscall(g, COW_IMG(0x102169c0u), ecx, 0);
    }
L_10213bb3: ;
    COW_AT(10213bb3)
    g->ebx = ebx;
    g->esi = esi;
    g->edi = edi;
    g->ebp = rd32(sp0 - 0x18u);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102136d0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102136e7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x14u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10213718u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x14u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10213721u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x14u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10213730u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x14u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1021373du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0x18u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x14u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1021382du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x24u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10213835u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x24u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021383du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x24u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10213843u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x24u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102138b4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x24u;
        g->edi = self + 0x17cu;
        (void)sp0;
        return 1;
    }
    case 0x102138cau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x24u;
        g->edi = self + 0x17cu;
        (void)sp0;
        return 1;
    }
    case 0x102138dcu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x24u;
        g->edi = self + 0x17cu;
        (void)sp0;
        return 1;
    }
    case 0x102138e4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x24u;
        g->edi = self + 0x17cu;
        (void)sp0;
        return 1;
    }
    case 0x102138ebu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x24u;
        g->edi = self + 0x17cu;
        (void)sp0;
        return 1;
    }
    case 0x102138f5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x24u;
        g->edi = self + 0x17cu;
        (void)sp0;
        return 1;
    }
    case 0x10213980u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1021398eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10213996u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x102139a0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x102139a8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x102139aeu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x102139c8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x28u, 0x80808080u);
        (void)sp0;
        return 1;
    }
    case 0x10213a2au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x28u, 0x80808080u);
        (void)sp0;
        return 1;
    }
    case 0x10213a8eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10213aa6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10213aacu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10213ac7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10213ae1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10213aeau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10213af2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10213b00u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10213b0au:
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
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10213b18u:
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
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10213b24u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10213b2fu:
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
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10213b36u:
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
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10213b40u:
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
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10213b4cu:
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
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10213b56u:
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
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10213b62u:
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
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10213b6cu:
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
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10213b78u:
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
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10213b82u:
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
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10213b8eu:
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
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10213b98u:
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
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10213ba4u:
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
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10213baeu:
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
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10213bb3u:
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
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102136d0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102136d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
