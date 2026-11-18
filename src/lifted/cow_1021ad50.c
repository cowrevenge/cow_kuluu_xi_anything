/* f_0x1021ad50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1021ad50(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_68;
    uint32_t loc_6c;
    uint32_t loc_70;
    uint32_t loc_74;
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
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 172u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1021ad69u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x84u); in_esi = rd32(sp0 - 0x80u); in_ebp = rd32(sp0 - 0x7cu); in_ebx = rd32(sp0 - 0x78u); g->ebp = rd32(sp0 - 0x7cu); g->ebx = rd32(sp0 - 0x78u); g->edi = rd32(sp0 - 0x84u); g->esi = rd32(sp0 - 0x80u); goto E_1021ad69;
    case 0x1021adc8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1021adc8;
    case 0x1021ae42u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1021ae42;
    case 0x1021ae4eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1021ae4e;
    case 0x1021ae8du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1021ae8d;
    case 0x1021aea1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1021aea1;
    case 0x1021aea9u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x84u); in_esi = rd32(sp0 - 0x80u); in_ebp = rd32(sp0 - 0x7cu); in_ebx = rd32(sp0 - 0x78u); g->ebp = rd32(sp0 - 0x7cu); g->ebx = rd32(sp0 - 0x78u); g->edi = rd32(sp0 - 0x84u); g->esi = rd32(sp0 - 0x80u); goto E_1021aea9;
    case 0x1021aeb3u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x84u); in_esi = rd32(sp0 - 0x80u); in_ebp = rd32(sp0 - 0x7cu); in_ebx = rd32(sp0 - 0x78u); g->ebp = rd32(sp0 - 0x7cu); g->ebx = rd32(sp0 - 0x78u); g->edi = rd32(sp0 - 0x84u); g->esi = rd32(sp0 - 0x80u); goto E_1021aeb3;
    case 0x1021aebcu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x84u); in_esi = rd32(sp0 - 0x80u); in_ebp = rd32(sp0 - 0x7cu); in_ebx = rd32(sp0 - 0x78u); g->ebp = rd32(sp0 - 0x7cu); g->ebx = rd32(sp0 - 0x78u); g->edi = rd32(sp0 - 0x84u); g->esi = rd32(sp0 - 0x80u); goto E_1021aebc;
    case 0x1021aec0u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x84u); in_esi = rd32(sp0 - 0x80u); in_ebp = rd32(sp0 - 0x7cu); in_ebx = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); g->ebp = rd32(sp0 - 0x7cu); g->ebx = rd32(sp0 - 0x78u); g->edi = rd32(sp0 - 0x84u); g->esi = rd32(sp0 - 0x80u); goto E_1021aec0;
    case 0x1021af14u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); goto E_1021af14;
    case 0x1021af30u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); goto E_1021af30;
    case 0x1021af3au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); goto E_1021af3a;
    case 0x1021af48u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); goto E_1021af48;
    case 0x1021af67u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_68 = rd32(sp0 - 0x68u); goto E_1021af67;
    case 0x1021af71u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_68 = rd32(sp0 - 0x68u); goto E_1021af71;
    case 0x1021afa4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_68 = rd32(sp0 - 0x68u); goto E_1021afa4;
    case 0x1021afd8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1021afd8;
    case 0x1021afdau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1021afda;
    case 0x1021b013u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1021b013;
    case 0x1021b06bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1021b06b;
    case 0x1021b079u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1021b079;
    case 0x1021b08du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1021b08d;
    case 0x1021b091u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); goto E_1021b091;
    case 0x1021b13du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1021b13d;
    case 0x1021b149u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; goto E_1021b149;
    case 0x1021b188u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1021b188;
    case 0x1021b1b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_70 = rd32(sp0 - 0x70u); goto E_1021b1b2;
    case 0x1021b1bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_68 = rd32(sp0 - 0x68u); goto E_1021b1bb;
    case 0x1021b1c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); goto E_1021b1c5;
    default: break;
    }
#endif

    COW_AT(1021ad50)
    wr32(sp0 - 0x78u, in_ebx);
    wr32(sp0 - 0x7cu, in_ebp);
    wr32(sp0 - 0x80u, in_esi);
    wr32(sp0 - 0x84u, in_edi);
    if ((int32_t)rd32(self + 0x36cu) >= 0)
    {
        eax = rd32(self + 0x36cu);
        goto L_1021aea9;
    }
    eax = rd32(self + 0x36cu);
    COW_AT(1021ad69)
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x84u;
    t1 = cow_thiscall(g, COW_IMG(0x1021b330u), sp0 - 0x60u, 0);
    t2 = g->edx;
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x1021b330u), sp0 - 0x50u, 0);
    t4 = g->ecx;
    t5 = g->edx;
    t6 = rd16(self + 0x36u);
    t7 = rd16(self + 0x50u);
    t8 = rd16(self + 0x32u);
    wr16(self + 0x64u, (uint16_t)t8);
    wr16(self + 0x66u, (uint16_t)(t6 + t7));
    t9 = rd16(self + 0x52u);
    wr16(self + 0x60u, (uint16_t)((uint16_t)t8 + t9));
    wr16(self + 0x62u, (uint16_t)(rd16(self + 0x54u) + (uint16_t)(t6 + t7)));
    t10 = rd16(self + 0x5au);
    t11 = rd16(self + 0x34u);
    t12 = rd16(self + 0x32u);
    wr16(self + 0x6au, 0u);
    wr16(self + 0x68u, (uint16_t)((uint16_t)(t10 - t11) - t12));
    if (rd16(self + 0x34au) == 0u) goto L_1021b1c5;
    edx = (t5 & 0xffff0000u) | (uint16_t)((uint16_t)(t10 - t11) - t12);
    ebp = 0u;
    esi = 0u;
L_1021adc8: ;
    COW_AT(1021adc8)
    t13 = rd32(self + (uint16_t)ebp * 4u + 0x34cu);
    wr32(sp0 - 0x88u, t13);
    wr32(sp0 - 0x8cu, COW_IMG(0x1036c084u));
    wr32(sp0 - 0x90u, sp0 - 0x40u);
    g->ebx = self;
    g->eax = t13;
    g->ecx = sp0 - 0x40u;
    g->edx = edx;
    g->esp = sp0 - 0x7cu;
    t14 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x40u, COW_IMG(0x1036c084u), t13, rd32(sp0 - 0x84u), rd32(sp0 - 0x80u));
    t15 = g->ecx;
    t16 = g->edx;
    t17 = rd16(self + 0x3cu);
    t18 = rd16(self + 0x62u);
    t19 = rd16(self + 0x60u);
    wr16(sp0 - 0x60u, (uint16_t)(t17 + t19));
    t20 = rd16(self + 0x68u);
    wr16(sp0 - 0x5cu, (uint16_t)t17);
    wr32(sp0 - 0x88u, self + 0x52u);
    t21 = rd16(self + 0x3eu);
    wr16(sp0 - 0x5eu, (uint16_t)((uint16_t)esi + (uint16_t)t18));
    wr32(sp0 - 0x8cu, sp0 - 0x40u);
    wr32(sp0 - 0x90u, self);
    wr16(sp0 - 0x5au, (uint16_t)esi);
    wr16(sp0 - 0x58u, (uint16_t)((uint16_t)((uint16_t)t20 - (uint16_t)t17) - t21));
    wr16(sp0 - 0x56u, 0u);
    g->eax = sp0 - 0x40u;
    g->edx = ((t16 | t20) & 0xffff0000u) | (uint16_t)((uint16_t)((uint16_t)t20 - (uint16_t)t17) - t21);
    g->esp = sp0 - 0x84u;
    t22 = cow_thiscall(g, COW_IMG(0x1021ba80u), sp0 - 0x60u, 3, self, sp0 - 0x40u, self + 0x52u);
    t23 = g->edx;
    if ((uint16_t)ebp == (uint32_t)(int16_t)rd16(self + 0x14u))
    {
        eax = t22;
        edx = t23;
    COW_AT(1021ae42)
        if (rd32(self + 0x2acu) != 0u)
        {
            ecx = rd32(self + 0x2acu);
    COW_AT(1021ae4e)
            t24 = rd16(self + 0x62u);
            t25 = rd16(self + 0x60u);
            wr16(sp0 - 0x50u, (uint16_t)t25);
            wr16(sp0 - 0x4eu, (uint16_t)((uint16_t)esi + t24));
            wr32(sp0 - 0x88u, 0u);
            wr32(sp0 - 0x8cu, 0u);
            wr32(sp0 - 0x90u, 0x80808080u);
            t26 = (uint32_t)(int16_t)((uint16_t)esi + t24);
            wr32(sp0 - 0x94u, t26);
            wr32(sp0 - 0x98u, (uint32_t)(int16_t)t25);
            wr16(sp0 - 0x4cu, 0u);
            wr16(sp0 - 0x4au, (uint16_t)esi);
            wr16(sp0 - 0x48u, 0x64u);
            wr16(sp0 - 0x46u, 0u);
            g->esp = sp0 - 0x84u;
            cow_thiscall(g, COW_IMG(0x1011fb60u), ecx, 5, (uint32_t)(int16_t)t25, t26, 0x80808080u, 0u, 0u);
        }
    }
    COW_AT(1021ae8d)
    if ((uint16_t)(ebp + 1u) < rd16(self + 0x34au))
    {
        edx = rd32(sp0 - 0x56u);
        ebp = ebp + 1u;
        esi = esi + rd32(sp0 - 0x56u);
        goto L_1021adc8;
    }
    COW_AT(1021aea1)
    g->ebx = rd32(sp0 - 0x78u);
    g->esi = rd32(sp0 - 0x80u);
    g->edi = rd32(sp0 - 0x84u);
    g->ebp = rd32(sp0 - 0x7cu);
    return;
L_1021aea9: ;
    COW_AT(1021aea9)
    if ((int16_t)rd16(self + 0x14u) <= 5)
    {
        eax = (eax & 0xffff0000u) | rd16(self + 0x14u);
    COW_AT(1021aebc)
        wr32(sp0 - 0x74u, 0u);
        loc_74 = 0u;
    }
    else
    {
        eax = (eax & 0xffff0000u) | rd16(self + 0x14u);
    COW_AT(1021aeb3)
        wr32(sp0 - 0x74u, eax - 5u);
        loc_74 = eax - 5u;
        eax = eax - 5u;
    }
    COW_AT(1021aec0)
    wr32(sp0 - 0x70u, 0u);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x84u;
    t27 = cow_thiscall(g, COW_IMG(0x1021b330u), sp0 - 0x60u, 0);
    t28 = g->edx;
    g->edx = t28;
    t29 = cow_thiscall(g, COW_IMG(0x1021b330u), sp0 - 0x50u, 0);
    t30 = g->ecx;
    t31 = g->edx;
    t32 = rd16(self + 0x36u);
    t33 = rd16(self + 0x50u);
    t34 = rd16(self + 0x32u);
    wr16(self + 0x64u, (uint16_t)t34);
    wr16(self + 0x66u, (uint16_t)(t32 + t33));
    t35 = rd16(self + 0x52u);
    wr16(self + 0x60u, (uint16_t)((uint16_t)t34 + t35));
    t36 = rd16(self + 0x54u);
    wr16(self + 0x62u, (uint16_t)(t36 + (uint16_t)(t32 + t33)));
    t37 = rd16(self + 0x5au);
    t38 = rd16(self + 0x34u);
    t39 = rd16(self + 0x32u);
    wr16(self + 0x6au, 0u);
    wr16(self + 0x68u, (uint16_t)((uint16_t)(t37 - t38) - t39));
    ecx = ((t30 | t34) & 0xffff0000u) | (uint16_t)(t36 + (uint16_t)(t32 + t33));
    edx = (t31 & 0xffff0000u) | (uint16_t)((uint16_t)(t37 - t38) - t39);
    ebp = 0u;
    loc_70 = 0u;
    loc_74 = rd32(sp0 - 0x74u);
L_1021af14: ;
    COW_AT(1021af14)
    wr32(sp0 - 0x6cu, (uint16_t)loc_74);
    if ((int32_t)(uint16_t)loc_74 < (int32_t)rd32(self + 0x370u))
    {
        edi = (uint16_t)loc_74;
        goto L_1021b091;
    }
    edi = (uint16_t)loc_74;
    loc_6c = (uint16_t)loc_74;
    COW_AT(1021af30)
    if (rd32(self + 0x374u) != 0u)
    {
        ebp = rd32(self + 0x374u);
        goto L_1021af48;
    }
    ebp = rd32(self + 0x374u);
    COW_AT(1021af3a)
    if (rd32(self + 0x378u) != 0u) goto L_1021b1c5;
L_1021af48: ;
    COW_AT(1021af48)
    t40 = ebp * 0x48u + 0x480u;
    wr32(sp0 - 0x88u, t40);
    g->eax = t40;
    g->esp = sp0 - 0x7cu;
    t41 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, t40, rd32(sp0 - 0x84u), rd32(sp0 - 0x80u));
    wr32(sp0 - 0x68u, t41);
    if (t41 == 0u) goto L_1021b1bb;
    eax = t41;
    ebp = ebp + 0x10u;
    loc_68 = t41;
    COW_AT(1021af67)
    if ((int32_t)rd32(self + 0x370u) > 0)
    {
        ecx = rd32(self + 0x370u);
    COW_AT(1021af71)
        t42 = rd32(self + 0x378u);
        esi = t42;
        edi = eax;
        ecx = ecx * 0x48u >> 2u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        ecx = ecx * 0x48u & 3u;
        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        t43 = rd32(self + 0x378u);
        wr32(sp0 - 0x88u, t43);
        g->esp = sp0 - 0x84u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, ecx * 0x48u, 1, 1, t43);
        eax = rd32(sp0 - 0x68u);
        edi = rd32(sp0 - 0x6cu);
    }
    COW_AT(1021afa4)
    t44 = rd32(self + 0x370u);
    wr32(self + 0x374u, ebp);
    wr32(sp0 - 0x88u, t44);
    wr32(self + 0x378u, eax);
    wr32(sp0 - 0x8cu, ebp - t44);
    t45 = eax + t44 * 0x48u;
    wr32(sp0 - 0x90u, t45);
    t46 = rd32(self + 0x36cu);
    wr32(sp0 - 0x94u, t46);
    g->ebx = self;
    g->eax = t46;
    g->esp = sp0 - 0x84u;
    t47 = cow_cdecl(g, COW_IMG(0x10114a60u), 4, t46, t45, ebp - t44, t44);
    if ((int32_t)t47 <= 0) goto L_1021b1bb;
    eax = t47;
    COW_AT(1021afd8)
    ebp = eax;
L_1021afda: ;
    COW_AT(1021afda)
    wr32(sp0 - 0x88u, sp0 - 0x64u);
    t48 = rd32(rd32(self + 0x370u) * 0x48u + rd32(self + 0x378u));
    wr32(sp0 - 0x64u, t48);
    g->eax = t48;
    g->esp = sp0 - 0x7cu;
    t49 = cow_call_regs(g, COW_IMG(0x10314dd1u), g->eax, sp0 - 0x64u, rd32(self + 0x378u), 1, 3, sp0 - 0x64u, rd32(sp0 - 0x84u), rd32(sp0 - 0x80u));
    if (t49 == 0u)
    {
        esi = rd32(self + 0x370u) * 0x48u + rd32(self + 0x378u);
    COW_AT(1021b06b)
        t55 = (rd32(esi) & 0xfc420000u) | 0x420000u;
        wr32(esi, t55);
    }
    else
    {
        eax = t49;
        esi = rd32(self + 0x370u) * 0x48u + rd32(self + 0x378u);
    COW_AT(1021b013)
        t50 = (((rd32(eax + 0x10u) + 1u) << 0x16u ^ rd32(esi)) & 0x3c00000u) ^ rd32(esi);
        wr32(esi, t50);
        t51 = ((rd32(eax + 0xcu) << 0x11u ^ t50) & 0x3e0000u) ^ t50;
        wr32(esi, t51);
        t52 = ((rd32(eax + 8u) << 0xcu ^ t51) & 0x1f000u) ^ t51;
        wr32(esi, t52);
        t53 = ((rd32(eax + 4u) << 6u ^ t52) & 0xfc0u) ^ t52;
        wr32(esi, t53);
        t54 = ((rd32(eax) ^ t53) & 0x3fu) ^ t53;
        wr32(esi, t54);
    }
    COW_AT(1021b079)
    t56 = rd32(self + 0x370u) + 1u;
    wr32(self + 0x370u, t56);
    if (ebp != 1u)
    {
        ebp = ebp - 1u;
        goto L_1021afda;
    }
    COW_AT(1021b08d)
    ebp = rd32(sp0 - 0x70u);
    loc_74 = rd32(sp0 - 0x74u);
L_1021b091: ;
    COW_AT(1021b091)
    t57 = (uint32_t)(int16_t)rd16(edi * 0x48u + rd32(self + 0x378u) + 4u);
    wr32(sp0 - 0x88u, t57);
    t58 = rd32(edi * 0x48u + rd32(self + 0x378u));
    wr32(sp0 - 0x8cu, (uint16_t)t57);
    wr32(sp0 - 0x90u, t58 & 0x3fu);
    t59 = t58 >> 6u & 0x3fu;
    wr32(sp0 - 0x94u, t59);
    t60 = t58 >> 0xcu & 0x1fu;
    wr32(sp0 - 0x98u, t60);
    t61 = t58 >> 0x11u & 0x1fu;
    wr32(sp0 - 0x9cu, t61);
    t62 = t58 >> 0x16u & 0xfu;
    wr32(sp0 - 0xa0u, t62);
    wr32(sp0 - 0xa4u, COW_IMG(0x10385de0u));
    wr32(sp0 - 0xa8u, sp0 - 0x40u);
    g->ebx = self;
    g->eax = sp0 - 0x40u;
    g->ecx = t60;
    g->edx = t61;
    g->esp = sp0 - 0x94u;
    t63 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x40u, COW_IMG(0x10385de0u), t62, t61, t60);
    t64 = g->ecx;
    t65 = g->edx;
    t66 = rd16(self + 0x3cu);
    t67 = rd16(self + 0x60u);
    t68 = rd16(self + 0x62u);
    wr16(sp0 - 0x60u, (uint16_t)(t66 + t67));
    t69 = rd16(self + 0x68u);
    t70 = rd16(self + 0x3eu);
    wr16(sp0 - 0x5eu, (uint16_t)((uint16_t)ebp + (uint16_t)t68));
    wr32(sp0 - 0x88u, self + 0x52u);
    wr16(sp0 - 0x58u, (uint16_t)(((t64 & 0xffff0000u) | (uint16_t)(t69 - t70)) - ((t63 & 0xffff0000u) | t66)));
    wr32(sp0 - 0x8cu, sp0 - 0x40u);
    wr32(sp0 - 0x90u, self);
    wr16(sp0 - 0x5cu, (uint16_t)t66);
    wr16(sp0 - 0x5au, (uint16_t)ebp);
    wr16(sp0 - 0x56u, 0u);
    g->edx = sp0 - 0x40u;
    g->esp = sp0 - 0x84u;
    cow_thiscall(g, COW_IMG(0x1021ba80u), sp0 - 0x60u, 3, self, sp0 - 0x40u, self + 0x52u);
    t71 = g->edx;
    if (edi == (uint32_t)(int16_t)rd16(self + 0x14u))
    {
        eax = (uint32_t)(int16_t)rd16(self + 0x14u);
        edx = t71;
    COW_AT(1021b13d)
        if (rd32(self + 0x2acu) != 0u)
        {
            ecx = rd32(self + 0x2acu);
    COW_AT(1021b149)
            t72 = rd16(self + 0x62u);
            t73 = rd16(self + 0x60u);
            wr16(sp0 - 0x50u, (uint16_t)t73);
            wr16(sp0 - 0x4eu, (uint16_t)((uint16_t)ebp + t72));
            wr32(sp0 - 0x88u, 0u);
            wr32(sp0 - 0x8cu, 0u);
            wr32(sp0 - 0x90u, 0x80808080u);
            t74 = (uint32_t)(int16_t)((uint16_t)ebp + t72);
            wr32(sp0 - 0x94u, t74);
            wr32(sp0 - 0x98u, (uint32_t)(int16_t)t73);
            wr16(sp0 - 0x4cu, 0u);
            wr16(sp0 - 0x4au, (uint16_t)ebp);
            wr16(sp0 - 0x48u, 0x64u);
            wr16(sp0 - 0x46u, 0u);
            g->esp = sp0 - 0x84u;
            cow_thiscall(g, COW_IMG(0x1011fb60u), ecx, 5, (uint32_t)(int16_t)t73, t74, 0x80808080u, 0u, 0u);
        }
    }
    COW_AT(1021b188)
    t75 = ebp + rd32(sp0 - 0x56u);
    wr32(sp0 - 0x70u, t75);
    if ((int32_t)(rd16(self + 0x38u) + (uint32_t)(int16_t)(rd32(sp0 - 0x56u) + rd32(sp0 - 0x5eu))) > (int16_t)(rd16(self + 0x54u) + rd16(self + 0x5cu))) goto L_1021b1c5;
    ecx = (rd32(sp0 - 0x5eu) & 0xffff0000u) | (uint16_t)(rd16(self + 0x54u) + rd16(self + 0x5cu));
    edx = rd16(self + 0x38u) + (uint32_t)(int16_t)(rd32(sp0 - 0x56u) + rd32(sp0 - 0x5eu));
    ebp = t75;
    loc_70 = t75;
    COW_AT(1021b1b2)
    t76 = rd32(sp0 - 0x74u) + 1u;
    wr32(sp0 - 0x74u, t76);
    loc_74 = t76;
    goto L_1021af14;
L_1021b1bb: ;
    COW_AT(1021b1bb)
    wr32(self + 0x374u, 0u);
L_1021b1c5: ;
    COW_AT(1021b1c5)
    g->ebx = rd32(sp0 - 0x78u);
    g->esi = rd32(sp0 - 0x80u);
    g->edi = rd32(sp0 - 0x84u);
    g->ebp = rd32(sp0 - 0x7cu);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1021ad50(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1021ad69u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x84u);
        in_esi = rd32(sp0 - 0x80u);
        in_ebp = rd32(sp0 - 0x7cu);
        in_ebx = rd32(sp0 - 0x78u);
        g->esp = sp0 - 0x84u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021adc8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x84u;
        (void)sp0;
        return 1;
    }
    case 0x1021ae42u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x84u;
        wr32(sp0 - 0x8cu, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x1021ae4eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x84u;
        g->edi = 0u;
        wr32(sp0 - 0x8cu, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x1021ae8du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x84u;
        (void)sp0;
        return 1;
    }
    case 0x1021aea1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x84u;
        (void)sp0;
        return 1;
    }
    case 0x1021aea9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x84u);
        in_esi = rd32(sp0 - 0x80u);
        in_ebp = rd32(sp0 - 0x7cu);
        in_ebx = rd32(sp0 - 0x78u);
        g->esp = sp0 - 0x84u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021aeb3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x84u);
        in_esi = rd32(sp0 - 0x80u);
        in_ebp = rd32(sp0 - 0x7cu);
        in_ebx = rd32(sp0 - 0x78u);
        g->esp = sp0 - 0x84u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021aebcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x84u);
        in_esi = rd32(sp0 - 0x80u);
        in_ebp = rd32(sp0 - 0x7cu);
        in_ebx = rd32(sp0 - 0x78u);
        g->esp = sp0 - 0x84u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021aec0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_74;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x84u);
        in_esi = rd32(sp0 - 0x80u);
        in_ebp = rd32(sp0 - 0x7cu);
        in_ebx = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        g->esp = sp0 - 0x84u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021af14u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_70;
        uint32_t loc_74;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x84u;
        (void)sp0;
        return 1;
    }
    case 0x1021af30u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x84u;
        (void)sp0;
        return 1;
    }
    case 0x1021af3au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x84u;
        (void)sp0;
        return 1;
    }
    case 0x1021af48u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x84u;
        (void)sp0;
        return 1;
    }
    case 0x1021af67u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        g->esp = sp0 - 0x84u;
        (void)sp0;
        return 1;
    }
    case 0x1021af71u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        g->esp = sp0 - 0x84u;
        (void)sp0;
        return 1;
    }
    case 0x1021afa4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        g->esp = sp0 - 0x84u;
        (void)sp0;
        return 1;
    }
    case 0x1021afd8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x84u;
        (void)sp0;
        return 1;
    }
    case 0x1021afdau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x84u;
        (void)sp0;
        return 1;
    }
    case 0x1021b013u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x84u;
        wr32(sp0 - 0x88u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x1021b06bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x84u;
        wr32(sp0 - 0x88u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x1021b079u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x84u;
        wr32(sp0 - 0x88u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x1021b08du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x84u;
        wr32(sp0 - 0x88u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x1021b091u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x84u;
        (void)sp0;
        return 1;
    }
    case 0x1021b13du:
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
        g->esp = sp0 - 0x84u;
        g->esi = self + 0x52u;
        wr32(sp0 - 0xa8u, sp0 - 0x40u);
        wr32(sp0 - 0x8cu, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x1021b149u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        g->esp = sp0 - 0x84u;
        g->esi = self + 0x52u;
        g->edi = 0u;
        wr32(sp0 - 0xa8u, sp0 - 0x40u);
        wr32(sp0 - 0x8cu, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x1021b188u:
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
        g->esp = sp0 - 0x84u;
        g->esi = self + 0x52u;
        wr32(sp0 - 0xa8u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x1021b1b2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_70;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x84u;
        wr32(sp0 - 0xa8u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x1021b1bbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        g->esp = sp0 - 0x84u;
        (void)sp0;
        return 1;
    }
    case 0x1021b1c5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_68;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        g->esp = sp0 - 0x84u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1021ad50(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1021ad50(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
