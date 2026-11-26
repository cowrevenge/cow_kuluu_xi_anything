/* f_0x1023aef0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
void cow_fn_1023aef0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    cow_frame(g, sp0, 152u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1023af00u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x6cu); in_esi = rd32(sp0 - 0x68u); in_ebp = rd32(sp0 - 0x64u); in_ebx = rd32(sp0 - 0x60u); g->ebp = rd32(sp0 - 0x64u); g->ebx = rd32(sp0 - 0x60u); g->edi = rd32(sp0 - 0x6cu); g->esi = rd32(sp0 - 0x68u); goto E_1023af00;
    case 0x1023af0du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023af0d;
    case 0x1023af1au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023af1a;
    case 0x1023af27u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023af27;
    case 0x1023af34u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023af34;
    case 0x1023af4au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023af4a;
    case 0x1023af68u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1023af68;
    case 0x1023af8eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023af8e;
    case 0x1023afadu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023afad;
    case 0x1023afb7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023afb7;
    case 0x1023afe2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023afe2;
    case 0x1023aff0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023aff0;
    case 0x1023affdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023affd;
    case 0x1023b01au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023b01a;
    case 0x1023b028u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023b028;
    case 0x1023b035u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023b035;
    case 0x1023b052u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023b052;
    case 0x1023b060u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023b060;
    case 0x1023b06du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023b06d;
    case 0x1023b0a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023b0a7;
    case 0x1023b0bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023b0bc;
    case 0x1023b0cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023b0cd;
    case 0x1023b0d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023b0d9;
    default: break;
    }
#endif

    COW_AT(1023aef0)
    wr32(sp0 - 0x60u, in_ebx);
    wr32(sp0 - 0x64u, in_ebp);
    wr32(sp0 - 0x68u, in_esi);
    wr32(sp0 - 0x6cu, in_edi);
    wr32(sp0 - 0x70u, 8u);
    wr32(sp0 - 0x74u, 1u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x6cu;
    COW_RET(0x1023af00u);
    t1 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 1u, 8u);
    t2 = g->ecx;
    t3 = g->edx;
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(1023af00)
    wr32(sp0 - 0x78u, 9u);
    wr32(sp0 - 0x7cu, 1u);
    wr32(sp0 - 0x4cu, eax);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x74u;
    COW_RET(0x1023af0du);
    t4 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 1u, 9u);
    t5 = g->ecx;
    t6 = g->edx;
    eax = t4;
    ecx = t5;
    edx = t6;
    COW_AT(1023af0d)
    wr32(sp0 - 0x80u, 0xau);
    wr32(sp0 - 0x84u, 1u);
    wr32(sp0 - 0x48u, eax);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x7cu;
    COW_RET(0x1023af1au);
    t7 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 1u, 0xau);
    t8 = g->ecx;
    t9 = g->edx;
    eax = t7;
    ecx = t8;
    edx = t9;
    COW_AT(1023af1a)
    wr32(sp0 - 0x88u, 0xbu);
    wr32(sp0 - 0x8cu, 1u);
    wr32(sp0 - 0x44u, eax);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x84u;
    COW_RET(0x1023af27u);
    t10 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 1u, 0xbu);
    t11 = g->ecx;
    t12 = g->edx;
    eax = t10;
    ecx = t11;
    edx = t12;
    COW_AT(1023af27)
    wr32(sp0 - 0x90u, 0xcu);
    wr32(sp0 - 0x94u, 1u);
    wr32(sp0 - 0x54u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x8cu;
    COW_RET(0x1023af34u);
    t13 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 1u, 0xcu);
    t14 = g->edx;
    eax = t13;
    edx = t14;
    COW_AT(1023af34)
    wr32(sp0 - 0x50u, eax);
    wr32(sp0 - 0x70u, COW_IMG(0x1036c19cu));
    g->eax = eax;
    g->esp = sp0 - 0x6cu;
    COW_RET(0x1023af4au);
    t15 = cow_fastcall(g, COW_IMG(0x10120450u), COW_IMG(0x104e1bf8u), edx, 1, COW_IMG(0x1036c19cu));
    t16 = g->edx;
    eax = t15;
    edx = t16;
    COW_AT(1023af4a)
    wr32(sp0 - 0x70u, 1u);
    wr32(sp0 - 0x74u, 0u);
    wr32(sp0 - 0x78u, sp0 - 0x5cu);
    wr32(sp0 - 0x5cu, 0u);
    wr32(sp0 - 0x58u, 0u);
    g->esp = sp0 - 0x6cu;
    COW_RET(0x1023af68u);
    cow_thiscall(g, COW_IMG(0x101602f0u), COW_IMG(0x10621838u), 3, sp0 - 0x5cu, 0u, 1u);
    esi = eax;
    COW_AT(1023af68)
    wr32(sp0 - 0x70u, 0x14u);
    wr32(sp0 - 0x74u, 0u);
    wr32(sp0 - 0x78u, 0u);
    wr32(sp0 - 0x7cu, 0x80808080u);
    t17 = rd32(sp0 - 0x58u) + 0xd8u;
    wr32(sp0 - 0x80u, t17);
    t18 = rd32(sp0 - 0x5cu) + 0x38u;
    wr32(sp0 - 0x84u, t18);
    g->eax = rd32(esi);
    t19 = rd32(esi);
    g->esp = sp0 - 0x6cu;
    COW_RET(0x1023af8eu);
    t20 = cow_fastcall(g, COW_IMG(0x1011fbf0u), rd32(t19 + 0x2cu), t18, 6, t18, t17, 0x80808080u, 0u, 0u, 0x14u);
    eax = t20;
    COW_AT(1023af8e)
    t21 = rd32(sp0 - 0x58u) + 0xb8u;
    wr32(sp0 - 0x70u, t21);
    t22 = rd32(sp0 - 0x5cu) + 0x28u;
    wr32(sp0 - 0x74u, t22);
    t23 = rd32(sp0 + 4u);
    wr32(sp0 - 0x78u, t23);
    wr32(sp0 - 0x7cu, 6u);
    g->eax = eax;
    g->ecx = t21;
    g->edx = t22;
    g->esp = sp0 - 0x74u;
    COW_RET(0x1023afadu);
    t24 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 6u, t23);
    t25 = g->ecx;
    t26 = g->edx;
    eax = t24;
    ecx = t25;
    edx = t26;
    ebp = t23;
    COW_AT(1023afad)
    wr32(sp0 - 0x78u, eax);
    wr32(sp0 - 0x7cu, esi);
    g->edx = edx;
    g->esp = sp0 - 0x6cu;
    COW_RET(0x1023afb7u);
    cow_thiscall_cdecl(g, COW_IMG(0x1023b0f0u), ecx, 4, esi, eax, rd32(sp0 - 0x74u), rd32(sp0 - 0x70u));
    t27 = g->edx;
    edx = t27;
    COW_AT(1023afb7)
    t28 = (uint32_t)(int8_t)(rd8(sp0 + 8u) + 0x31u);
    wr32(sp0 - 0x70u, t28);
    wr32(sp0 - 0x74u, 5u);
    wr32(sp0 - 0x78u, 1u);
    g->eax = t28;
    g->edx = (edx & 0xffffff00u) | (uint8_t)(rd8(sp0 + 8u) + 0x31u);
    t29 = rd8(sp0 + 8u);
    t30 = rd32(sp0 - 0x5cu);
    t31 = rd32(sp0 - 0x58u);
    g->esp = sp0 - 0x70u;
    COW_RET(0x1023afe2u);
    t32 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 1u, 5u);
    t33 = g->edx;
    eax = t32;
    edx = t33;
    ebx = t30 + 0x1eu;
    edi = t31 + 0x156u;
    COW_AT(1023afe2)
    wr32(sp0 - 0x74u, eax);
    wr32(sp0 - 0x78u, sp0 - 0x40u);
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = sp0 - 0x40u;
    g->esp = sp0 - 0x6cu;
    COW_RET(0x1023aff0u);
    t34 = cow_cdecl(g, COW_IMG(0x10312031u), 3, sp0 - 0x40u, eax, rd32(sp0 - 0x70u));
    t35 = g->ecx;
    eax = t34;
    ecx = t35;
    COW_AT(1023aff0)
    wr32(sp0 - 0x7cu, edi);
    wr32(sp0 - 0x80u, ebx);
    wr32(sp0 - 0x84u, sp0 - 0x40u);
    wr32(sp0 - 0x88u, esi);
    g->eax = eax;
    g->edx = sp0 - 0x40u;
    g->esp = sp0 - 0x78u;
    COW_RET(0x1023affdu);
    t36 = cow_thiscall_cdecl(g, COW_IMG(0x1023b0f0u), ecx, 4, esi, sp0 - 0x40u, ebx, edi);
    t37 = g->edx;
    eax = t36;
    edx = t37;
    COW_AT(1023affd)
    t38 = rd32(sp0 + rd32(sp0 + 0xcu) * 4u - 0x54u);
    wr32(sp0 - 0x70u, t38);
    wr32(sp0 - 0x74u, 6u);
    wr32(sp0 - 0x78u, 1u);
    g->eax = rd32(sp0 + 0xcu);
    g->ecx = t38;
    t39 = rd32(sp0 + 0xcu);
    g->esp = sp0 - 0x70u;
    COW_RET(0x1023b01au);
    t40 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 1u, 6u);
    t41 = g->ecx;
    ecx = t41;
    ebx = eax + 0xau;
    eax = t40;
    COW_AT(1023b01a)
    wr32(sp0 - 0x74u, eax);
    wr32(sp0 - 0x78u, sp0 - 0x40u);
    g->ebx = ebx;
    g->ecx = ecx;
    g->edx = sp0 - 0x40u;
    g->esp = sp0 - 0x6cu;
    COW_RET(0x1023b028u);
    cow_cdecl(g, COW_IMG(0x10312031u), 3, sp0 - 0x40u, eax, rd32(sp0 - 0x70u));
    t42 = g->ecx;
    t43 = g->edx;
    ecx = t42;
    edx = t43;
    COW_AT(1023b028)
    wr32(sp0 - 0x7cu, edi);
    wr32(sp0 - 0x80u, ebx);
    wr32(sp0 - 0x84u, sp0 - 0x40u);
    wr32(sp0 - 0x88u, esi);
    g->eax = sp0 - 0x40u;
    g->esp = sp0 - 0x78u;
    COW_RET(0x1023b035u);
    t44 = cow_thiscall_cdecl(g, COW_IMG(0x1023b0f0u), ecx, 4, esi, sp0 - 0x40u, ebx, edi);
    eax = t44;
    COW_AT(1023b035)
    t45 = rd32(sp0 + rd32(sp0 + 0x10u) * 4u - 0x4cu);
    wr32(sp0 - 0x70u, t45);
    wr32(sp0 - 0x74u, 7u);
    wr32(sp0 - 0x78u, 1u);
    g->eax = eax;
    g->ecx = rd32(sp0 + 0x10u);
    g->edx = t45;
    t46 = rd32(sp0 + 0x10u);
    g->esp = sp0 - 0x70u;
    COW_RET(0x1023b052u);
    t47 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 1u, 7u);
    t48 = g->ecx;
    t49 = g->edx;
    ecx = t48;
    edx = t49;
    ebx = eax + 0xau;
    eax = t47;
    COW_AT(1023b052)
    wr32(sp0 - 0x74u, eax);
    wr32(sp0 - 0x78u, sp0 - 0x40u);
    g->ebx = ebx;
    g->eax = sp0 - 0x40u;
    g->edx = edx;
    g->esp = sp0 - 0x6cu;
    COW_RET(0x1023b060u);
    t50 = cow_cdecl(g, COW_IMG(0x10312031u), 3, sp0 - 0x40u, eax, rd32(sp0 - 0x70u));
    t51 = g->edx;
    eax = t50;
    edx = t51;
    COW_AT(1023b060)
    wr32(sp0 - 0x7cu, edi);
    wr32(sp0 - 0x80u, ebx);
    wr32(sp0 - 0x84u, sp0 - 0x40u);
    wr32(sp0 - 0x88u, esi);
    g->esp = sp0 - 0x78u;
    COW_RET(0x1023b06du);
    cow_thiscall_cdecl(g, COW_IMG(0x1023b0f0u), sp0 - 0x40u, 4, esi, sp0 - 0x40u, ebx, edi);
    COW_AT(1023b06d)
    t52 = rd32(sp0 - 0x5cu) + 0x54u;
    t53 = rd32(sp0 - 0x58u);
    wr32(sp0 + 4u, t52);
    ecx = ebp * 0x30u + rd32(sp0 + 0x14u) * 8u - (ebp * 6u + rd32(sp0 + 0x14u));
    ebx = t53 + 0xd8u;
    ebp = COW_IMG(0x103881c8u) + ebp * 0x2au + rd32(sp0 + 0x14u) * 7u;
    edi = 0u;
L_1023b0a7: ;
    COW_AT(1023b0a7)
    t54 = rd8(ebp + edi);
    wr32(sp0 - 0x70u, t54);
    wr32(sp0 - 0x74u, COW_IMG(0x1036f9d0u));
    wr32(sp0 - 0x78u, sp0 - 0x40u);
    g->ebx = ebx;
    g->eax = sp0 - 0x40u;
    g->esp = sp0 - 0x6cu;
    COW_RET(0x1023b0bcu);
    t55 = cow_cdecl(g, COW_IMG(0x10312031u), 3, sp0 - 0x40u, COW_IMG(0x1036f9d0u), t54);
    eax = t55;
    COW_AT(1023b0bc)
    wr32(sp0 - 0x7cu, ebx);
    t56 = rd32(sp0 + 4u);
    wr32(sp0 - 0x80u, t56);
    wr32(sp0 - 0x84u, sp0 - 0x40u);
    wr32(sp0 - 0x88u, esi);
    g->esp = sp0 - 0x78u;
    COW_RET(0x1023b0cdu);
    cow_thiscall_cdecl(g, COW_IMG(0x1023b0f0u), t56, 4, esi, sp0 - 0x40u, t56, ebx);
    t57 = g->ecx;
    ecx = t57;
    COW_AT(1023b0cd)
    if ((int32_t)(edi + 1u) < 7)
    {
        ebx = ebx + 0x10u;
        edi = edi + 1u;
        goto L_1023b0a7;
    }
    COW_AT(1023b0d9)
    g->ebx = rd32(sp0 - 0x60u);
    g->esi = rd32(sp0 - 0x68u);
    g->edi = rd32(sp0 - 0x6cu);
    g->ebp = rd32(sp0 - 0x64u);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1023aef0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1023af00u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x6cu);
        in_esi = rd32(sp0 - 0x68u);
        in_ebp = rd32(sp0 - 0x64u);
        in_ebx = rd32(sp0 - 0x60u);
        g->esp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x1023af0du:
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
        g->esp = sp0 - 0x7cu;
        (void)sp0;
        return 1;
    }
    case 0x1023af1au:
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
        g->esp = sp0 - 0x84u;
        (void)sp0;
        return 1;
    }
    case 0x1023af27u:
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
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x1023af34u:
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
        g->esp = sp0 - 0x94u;
        (void)sp0;
        return 1;
    }
    case 0x1023af4au:
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
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x1023af68u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x6cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023af8eu:
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
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x1023afadu:
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
        g->esp = sp0 - 0x7cu;
        (void)sp0;
        return 1;
    }
    case 0x1023afb7u:
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
        g->esp = sp0 - 0x7cu;
        (void)sp0;
        return 1;
    }
    case 0x1023afe2u:
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
        g->esp = sp0 - 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x1023aff0u:
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
        g->esp = sp0 - 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x1023affdu:
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
        g->esp = sp0 - 0x88u;
        (void)sp0;
        return 1;
    }
    case 0x1023b01au:
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
        g->esp = sp0 - 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x1023b028u:
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
        g->esp = sp0 - 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x1023b035u:
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
        g->esp = sp0 - 0x88u;
        (void)sp0;
        return 1;
    }
    case 0x1023b052u:
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
        g->esp = sp0 - 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x1023b060u:
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
        g->esp = sp0 - 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x1023b06du:
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
        g->esp = sp0 - 0x88u;
        (void)sp0;
        return 1;
    }
    case 0x1023b0a7u:
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
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x1023b0bcu:
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
        g->esp = sp0 - 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x1023b0cdu:
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
        g->esp = sp0 - 0x88u;
        (void)sp0;
        return 1;
    }
    case 0x1023b0d9u:
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
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1023aef0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1023aef0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
