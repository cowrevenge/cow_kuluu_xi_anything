/* f_0x10219f70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10219f70(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_34;
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
    cow_frame(g, sp0, 96u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10219fc2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); in_ebp = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); loc_c = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x2cu); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x34u); g->esi = rd32(sp0 - 0x30u); goto E_10219fc2;
    case 0x10219fd0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); in_ebp = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); loc_c = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x2cu); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x34u); g->esi = rd32(sp0 - 0x30u); goto E_10219fd0;
    case 0x10219fd8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); in_ebp = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); loc_c = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x2cu); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x34u); g->esi = rd32(sp0 - 0x30u); goto E_10219fd8;
    case 0x10219fe2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); in_ebp = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); loc_c = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x2cu); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x34u); g->esi = rd32(sp0 - 0x30u); goto E_10219fe2;
    case 0x10219fecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); in_ebp = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); loc_c = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x2cu); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x34u); g->esi = rd32(sp0 - 0x30u); goto E_10219fec;
    case 0x10219ff1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); in_ebp = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); loc_c = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x2cu); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x34u); g->esi = rd32(sp0 - 0x30u); goto E_10219ff1;
    case 0x1021a02fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); in_ebp = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); loc_c = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x2cu); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x34u); g->esi = rd32(sp0 - 0x30u); goto E_1021a02f;
    case 0x1021a038u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); in_ebp = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); loc_c = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x2cu); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x34u); g->esi = rd32(sp0 - 0x30u); goto E_1021a038;
    case 0x1021a043u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1021a043;
    case 0x1021a05au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1021a05a;
    case 0x1021a05fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1021a05f;
    case 0x1021a065u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1021a065;
    case 0x1021a07cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1021a07c;
    case 0x1021a086u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1021a086;
    case 0x1021a096u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1021a096;
    case 0x1021a09fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1021a09f;
    case 0x1021a0a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1021a0a7;
    case 0x1021a0b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1021a0b0;
    case 0x1021a0b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1021a0b9;
    case 0x1021a0c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1021a0c3;
    case 0x1021a0cau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1021a0ca;
    case 0x1021a103u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1021a103;
    case 0x1021a109u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1021a109;
    case 0x1021a116u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1021a116;
    case 0x1021a12eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_c = rd32(sp0 - 0xcu); goto E_1021a12e;
    case 0x1021a142u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); goto E_1021a142;
    case 0x1021a149u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); goto E_1021a149;
    case 0x1021a151u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); goto E_1021a151;
    case 0x1021a159u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); goto E_1021a159;
    case 0x1021a15fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); goto E_1021a15f;
    case 0x1021a16eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1021a16e;
    case 0x1021a181u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1021a181;
    case 0x1021a1a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1021a1a2;
    case 0x1021a1a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1021a1a8;
    case 0x1021a1b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1021a1b5;
    case 0x1021a1c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1021a1c6;
    case 0x1021a1d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); goto E_1021a1d0;
    case 0x1021a1dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1021a1dc;
    case 0x1021a1ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1021a1ec;
    case 0x1021a1f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1021a1f4;
    case 0x1021a1f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1021a1f9;
    case 0x1021a209u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1021a209;
    case 0x1021a219u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); in_ebp = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); loc_c = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x2cu); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x34u); g->esi = rd32(sp0 - 0x30u); goto E_1021a219;
    case 0x1021a222u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); in_ebp = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); loc_c = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x2cu); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x34u); g->esi = rd32(sp0 - 0x30u); goto E_1021a222;
    case 0x1021a229u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_c = rd32(sp0 - 0xcu); goto E_1021a229;
    default: break;
    }
#endif

    COW_AT(10219f70)
    wr32(sp0 - 0x28u, in_ebx);
    wr32(sp0 - 0x2cu, in_ebp);
    wr32(sp0 - 0x30u, in_esi);
    wr32(sp0 - 0x34u, in_edi);
    wr32(sp0 - 0x38u, 0x79u);
    wr32(sp0 - 0x3cu, 9u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x34u;
    t1 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x79u);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x40u, 0x7au);
    wr32(sp0 - 0x44u, 9u);
    g->ecx = t2;
    g->edx = t3;
    g->esp = sp0 - 0x3cu;
    t4 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x7au);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0x48u, 0x7cu);
    wr32(sp0 - 0x4cu, 9u);
    g->ecx = t5;
    g->edx = t6;
    g->esp = sp0 - 0x44u;
    t7 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x7cu);
    t8 = g->ecx;
    t9 = g->edx;
    wr32(sp0 - 0x50u, 0x7du);
    wr32(sp0 - 0x54u, 9u);
    g->ecx = t8;
    g->edx = t9;
    g->esp = sp0 - 0x4cu;
    t10 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x7du);
    t11 = g->ecx;
    t12 = g->edx;
    wr32(sp0 - 0x58u, 0x7eu);
    wr32(sp0 - 0x5cu, 9u);
    g->edx = t12;
    g->esp = sp0 - 0x54u;
    t13 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x7eu);
    t14 = g->edx;
    wr32(sp0 - 0xcu, t13);
    if (rd32(rd32(self + 8u) + 0x88u) == 0u)
    {
        eax = rd32(rd32(self + 8u) + 0x88u);
        edx = t14;
        ebp = rd32(COW_IMG(0x104e170cu));
        loc_c = t13;
    }
    else
    {
        eax = rd32(rd32(self + 8u) + 0x88u);
        edx = t14;
        ebp = rd32(COW_IMG(0x104e170cu));
        loc_c = t13;
    COW_AT(10219fc2)
        wr32(eax + 0x14u, 0u);
        wr32(eax + 0x10u, 0x64u);
        wr32(eax + 0xcu, 0x64u);
    }
    COW_AT(10219fd0)
    if (ebp == 0u) goto L_1021a219;
    COW_AT(10219fd8)
    if (rd16(self + 0x4cu) != 0u) goto L_1021a219;
    COW_AT(10219fe2)
    if ((int32_t)rd32(ebp + 0x8e8u) < 0)
    {
        edi = rd32(ebp + 0x8e8u);
    }
    else
    {
        edi = rd32(ebp + 0x8e8u);
    COW_AT(10219fec)
        if ((int32_t)edi <= 3)
        {
    COW_AT(10219ff1)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x34u;
            t15 = cow_thiscall(g, COW_IMG(0x1010a2d0u), ebp, 0);
            t16 = g->ecx;
            t17 = g->edx;
            wr8(self + 0x4au, 1u);
            wr8(self + 0x4bu, rd8(self + 0x4bu) & 0xf0u);
            wr16(self + 0x4eu, 1u);
            wr16(self + 0x14u, 1u);
            wr16(self + 0x50u, 0u);
            wr32(self + 0x2a0u, 0u);
            wr32(self + 0x2a4u, 0u);
            wr32(self + 0x18u, 0u);
            t18 = rd16(COW_IMG(0x1066469cu));
            wr8(self + 0x20u, 0u);
            wr16(self + 0x1cu, (uint16_t)t18);
            eax = 1u;
            edx = t17;
            edi = t15;
            loc_c = rd32(sp0 - 0xcu);
        }
    }
    COW_AT(1021a02f)
    if (edi == 5u)
    {
        loc_28 = in_ebx;
        loc_2c = in_ebp;
        loc_30 = in_esi;
        loc_34 = in_edi;
        goto L_1021a12e;
    }
    COW_AT(1021a038)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t19 = cow_thiscall(g, COW_IMG(0x1010a4d0u), ebp, 0);
    t20 = g->edx;
    if (t19 == 0u)
    {
        eax = t19;
        edx = t20;
        goto L_1021a05a;
    }
    eax = t19;
    edx = t20;
    COW_AT(1021a043)
    g->eax = eax;
    g->esp = sp0 - 0x34u;
    t21 = cow_thiscall(g, COW_IMG(0x1010a4d0u), ebp, 0);
    g->edx = rd32(t21);
    t22 = rd32(t21);
    t23 = cow_thiscall(g, rd32(t22 + 0x10u), t21, 0);
    t24 = g->edx;
    if (t23 == 1u)
    {
        eax = t23;
        edx = t24;
        loc_28 = rd32(sp0 - 0x28u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_34 = rd32(sp0 - 0x34u);
        goto L_1021a12e;
    }
    eax = t23;
    edx = t24;
L_1021a05a: ;
    COW_AT(1021a05a)
    if (edi != 4u) goto L_1021a096;
    COW_AT(1021a05f)
    if (rd16(self + 0x4eu) != 0u)
    {
    COW_AT(1021a065)
        wr16(self + 0x14u, 1u);
        wr16(self + 0x50u, 0u);
        wr16(self + 0x4eu, 0u);
        if (rd32(COW_IMG(0x105781f8u)) == 0u)
        {
            eax = rd32(COW_IMG(0x105781f8u));
        }
        else
        {
            eax = rd32(COW_IMG(0x105781f8u));
    COW_AT(1021a07c)
            wr32(sp0 - 0x38u, 8u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x34u;
            t25 = cow_thiscall(g, COW_IMG(0x10221300u), eax + 0x20u, 1, 8u);
            t26 = g->edx;
            eax = t25;
            edx = t26;
        }
    }
    COW_AT(1021a086)
    wr32(sp0 - 0x38u, ebp);
    g->ebx = 0u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t27 = cow_thiscall(g, COW_IMG(0x102185d0u), self, 1, ebp);
    t28 = g->edx;
    g->ebx = rd32(sp0 - 0x28u);
    g->esi = rd32(sp0 - 0x30u);
    g->edi = rd32(sp0 - 0x34u);
    g->ebp = rd32(sp0 - 0x2cu);
    g->edx = t28;
    return t27;
L_1021a096: ;
    COW_AT(1021a096)
    if (edi == 1u)
    {
        loc_28 = rd32(sp0 - 0x28u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_34 = rd32(sp0 - 0x34u);
        goto L_1021a229;
    }
    COW_AT(1021a09f)
    if (edi == 0u)
    {
        loc_28 = rd32(sp0 - 0x28u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_34 = rd32(sp0 - 0x34u);
        goto L_1021a229;
    }
    COW_AT(1021a0a7)
    if (edi == 2u)
    {
        loc_28 = rd32(sp0 - 0x28u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_34 = rd32(sp0 - 0x34u);
        goto L_1021a229;
    }
    COW_AT(1021a0b0)
    if (edi == 3u)
    {
        loc_28 = rd32(sp0 - 0x28u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_34 = rd32(sp0 - 0x34u);
        goto L_1021a229;
    }
    COW_AT(1021a0b9)
    if (rd16(self + 0x24u) < 0x258u)
    {
        eax = (eax & 0xffff0000u) | rd16(self + 0x24u);
        goto L_1021a109;
    }
    eax = (eax & 0xffff0000u) | rd16(self + 0x24u);
    COW_AT(1021a0c3)
    if (rd16(self + 0x22u) < 3u) goto L_1021a103;
    COW_AT(1021a0ca)
    wr32(sp0 - 0x38u, 0x80808080u);
    wr32(sp0 - 0x3cu, 0u);
    t29 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x40u, t29);
    t30 = rd16(self + 0x30u) + rd16(self + 0x36u);
    wr32(sp0 - 0x44u, t30);
    t31 = rd16(self + 0x2eu) + rd16(self + 0x32u);
    wr32(sp0 - 0x48u, t31);
    g->eax = t31;
    g->edx = rd16(self + 0x30u);
    t32 = rd16(self + 0x30u);
    g->esp = sp0 - 0x1cu;
    t33 = cow_cdecl(g, COW_IMG(0x10129f00u), 11, t31, t30, t29, 0u, 0x80808080u, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
    t34 = g->edx;
    g->ebx = rd32(sp0 - 0x28u);
    g->esi = rd32(sp0 - 0x30u);
    g->edi = rd32(sp0 - 0x34u);
    g->ebp = rd32(sp0 - 0x2cu);
    g->edx = t34;
    return t33;
L_1021a103: ;
    COW_AT(1021a103)
    if ((uint16_t)eax >= 0x258u) goto L_1021a116;
L_1021a109: ;
    COW_AT(1021a109)
    t37 = rd32(sp0 - 0x34u);
    wr16(self + 0x24u, (uint16_t)(eax + 1u));
    g->ebx = rd32(sp0 - 0x28u);
    g->esi = rd32(sp0 - 0x30u);
    g->edi = t37;
    g->ebp = rd32(sp0 - 0x2cu);
    g->edx = edx;
    return eax + 1u;
L_1021a116: ;
    COW_AT(1021a116)
    wr16(self + 0x22u, (uint16_t)(rd16(self + 0x22u) + 1u));
    wr32(sp0 - 0x38u, 0u);
    wr16(self + 0x24u, 0u);
    g->eax = eax;
    g->esp = sp0 - 0x34u;
    t35 = cow_fastcall(g, COW_IMG(0x1010a5f0u), ebp, edx, 1, 0u);
    t36 = g->edx;
    g->ebx = rd32(sp0 - 0x28u);
    g->esi = rd32(sp0 - 0x30u);
    g->edi = rd32(sp0 - 0x34u);
    g->ebp = rd32(sp0 - 0x2cu);
    g->edx = t36;
    return t35;
L_1021a12e: ;
    COW_AT(1021a12e)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t38 = cow_thiscall(g, COW_IMG(0x1010a4d0u), ebp, 0);
    t39 = g->edx;
    wr32(sp0 - 0x20u, t38);
    if (rd32(t38 + 0x14u) == 0u)
    {
        eax = rd32(t38 + 0x14u);
        edx = t39;
        edi = t38;
        loc_20 = t38;
        goto L_1021a151;
    }
    eax = rd32(t38 + 0x14u);
    edx = t39;
    edi = t38;
    loc_20 = t38;
    COW_AT(1021a142)
    if (rd32(eax + 4u) == 0u) goto L_1021a151;
    ecx = rd32(eax + 4u);
    COW_AT(1021a149)
    wr32(sp0 - 0x24u, ecx);
    edx = ecx;
    loc_24 = ecx;
L_1021a159: ;
    COW_AT(1021a159)
    if (rd16(self + 0x4eu) != 0u)
    {
    COW_AT(1021a15f)
        wr16(self + 0x14u, 0u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x34u;
        t40 = cow_thiscall(g, COW_IMG(0x1010a4d0u), ebp, 0);
        t41 = g->edx;
        if (t40 == 0u)
        {
            edx = t41;
        }
        else
        {
            eax = t40;
            edx = t41;
    COW_AT(1021a16e)
            g->eax = eax;
            g->esp = sp0 - 0x34u;
            t42 = cow_thiscall(g, COW_IMG(0x1010a4d0u), ebp, 0);
            g->edx = rd32(t42);
            t43 = rd32(t42);
            t44 = cow_thiscall(g, rd32(t43 + 0x10u), t42, 0);
            t45 = g->edx;
            if (t44 != 1u)
            {
                edx = t45;
            }
            else
            {
                eax = t44;
                edx = t45;
    COW_AT(1021a181)
                wr32(sp0 - 0x38u, 0u);
                wr32(sp0 - 0x3cu, eax);
                wr32(sp0 - 0x40u, 2u);
                t46 = rd32(ebp + 0x8f0u);
                wr32(sp0 - 0x44u, t46);
                g->eax = t46;
                g->edx = edx;
                g->esp = sp0 - 0x34u;
                t47 = cow_thiscall(g, COW_IMG(0x1010f350u), sp0 - 0x1cu, 4, t46, 2u, eax, 0u);
                t48 = g->edx;
                g->edx = t48;
                t49 = cow_call_regs(g, COW_IMG(0x1010f510u), t47, sp0 - 0x1cu, g->edx, 1, 0);
                t50 = g->edx;
                if ((uint8_t)t49 != 0u)
                {
                    eax = t49;
                    edx = t50;
                }
                else
                {
                    eax = t49;
                    edx = t50;
    COW_AT(1021a1a2)
                    wr16(self + 0x14u, 1u);
                }
    COW_AT(1021a1a8)
                g->edx = edx;
                g->esp = sp0 - 0x34u;
                cow_thiscall(g, COW_IMG(0x1010f340u), sp0 - 0x1cu, 0);
                t51 = g->edx;
                edx = t51;
                edi = rd32(sp0 - 0x20u);
            }
        }
    COW_AT(1021a1b5)
        wr16(self + 0x50u, 0u);
        wr16(self + 0x4eu, 0u);
        if (rd32(COW_IMG(0x105781f8u)) == 0u)
        {
            eax = rd32(COW_IMG(0x105781f8u));
            loc_24 = rd32(sp0 - 0x24u);
        }
        else
        {
            eax = rd32(COW_IMG(0x105781f8u));
    COW_AT(1021a1c6)
            wr32(sp0 - 0x38u, 8u);
            g->eax = eax;
            g->esp = sp0 - 0x34u;
            t52 = cow_thiscall(g, COW_IMG(0x10221300u), eax + 0x20u, 1, 8u);
            eax = t52;
            loc_24 = rd32(sp0 - 0x24u);
        }
    }
    COW_AT(1021a1d0)
    g->eax = eax;
    g->edx = rd32(edi);
    t53 = rd32(edi);
    g->esp = sp0 - 0x34u;
    t54 = cow_thiscall(g, rd32(t53 + 0x10u), edi, 0);
    t55 = g->edx;
    if (t54 != 1u)
    {
        edx = t55;
        goto L_1021a1ec;
    }
    eax = t54;
    edx = t55;
    COW_AT(1021a1dc)
    wr32(sp0 - 0x38u, ebp);
    g->ebp = ebp;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t56 = cow_thiscall(g, COW_IMG(0x10218ac0u), self, 1, ebp);
    t57 = g->edx;
    g->ebx = rd32(sp0 - 0x28u);
    g->esi = rd32(sp0 - 0x30u);
    g->edi = rd32(sp0 - 0x34u);
    g->ebp = rd32(sp0 - 0x2cu);
    g->edx = t57;
    return t56;
L_1021a151: ;
    COW_AT(1021a151)
    wr32(sp0 - 0x24u, COW_IMG(0x103d3c84u));
    loc_24 = COW_IMG(0x103d3c84u);
    goto L_1021a159;
L_1021a1ec: ;
    COW_AT(1021a1ec)
    if (rd32(sp0 - 0x24u) == 0u)
    {
        eax = rd32(sp0 - 0x24u);
        goto L_1021a209;
    }
    eax = rd32(sp0 - 0x24u);
    COW_AT(1021a1f4)
    if (rd8(eax) != 0x23u) goto L_1021a209;
    COW_AT(1021a1f9)
    wr32(sp0 - 0x38u, ebp);
    g->ebp = ebp;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t58 = cow_thiscall(g, COW_IMG(0x10219b80u), self, 1, ebp);
    t59 = g->edx;
    g->ebx = rd32(sp0 - 0x28u);
    g->esi = rd32(sp0 - 0x30u);
    g->edi = rd32(sp0 - 0x34u);
    g->ebp = rd32(sp0 - 0x2cu);
    g->edx = t59;
    return t58;
L_1021a209: ;
    COW_AT(1021a209)
    wr32(sp0 - 0x38u, ebp);
    g->edi = edi;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t60 = cow_thiscall(g, COW_IMG(0x102194a0u), self, 1, ebp);
    t61 = g->edx;
    g->ebx = rd32(sp0 - 0x28u);
    g->esi = rd32(sp0 - 0x30u);
    g->edi = rd32(sp0 - 0x34u);
    g->ebp = rd32(sp0 - 0x2cu);
    g->edx = t61;
    return t60;
L_1021a219: ;
    COW_AT(1021a219)
    if (rd16(self + 0x34au) == 0u)
    {
        loc_28 = in_ebx;
        loc_2c = in_ebp;
        loc_30 = in_esi;
        loc_34 = in_edi;
    }
    else
    {
    COW_AT(1021a222)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x34u;
        t62 = cow_thiscall(g, COW_IMG(0x1021ad50u), self, 0);
        t63 = g->edx;
        eax = t62;
        edx = t63;
        loc_28 = in_ebx;
        loc_2c = in_ebp;
        loc_30 = in_esi;
        loc_34 = in_edi;
    }
L_1021a229: ;
    COW_AT(1021a229)
    g->ebx = loc_28;
    g->esi = loc_30;
    g->edi = loc_34;
    g->ebp = loc_2c;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10219f70(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10219fc2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
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
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        in_ebp = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10219fd0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
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
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        in_ebp = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10219fd8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
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
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        in_ebp = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10219fe2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
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
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        in_ebp = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10219fecu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
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
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        in_ebp = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10219ff1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
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
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        in_ebp = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a02fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
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
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        in_ebp = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a038u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
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
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        in_ebp = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a043u:
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
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a05au:
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
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a05fu:
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
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a065u:
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
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a07cu:
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
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a086u:
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
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a096u:
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
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a09fu:
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
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a0a7u:
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
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a0b0u:
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
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a0b9u:
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
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a0c3u:
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
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a0cau:
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
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a103u:
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
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a109u:
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
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1021a116u:
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
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a12eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a142u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a149u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a151u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a159u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_20;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a15fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_20;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a16eu:
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
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a181u:
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
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a1a2u:
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
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a1a8u:
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
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a1b5u:
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
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a1c6u:
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
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a1d0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_20;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a1dcu:
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
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1021a1ecu:
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
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a1f4u:
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
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1021a1f9u:
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
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1021a209u:
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
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1021a219u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
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
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        in_ebp = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021a222u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
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
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        in_ebp = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1021a229u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10219f70(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10219f70(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
