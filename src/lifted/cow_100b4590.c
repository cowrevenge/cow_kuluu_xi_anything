/* f_0x100b4590 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_100b4590(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 56u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100b45c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_100b45c2;
    case 0x100b45e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100b45e7;
    case 0x100b45ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100b45ff;
    case 0x100b4618u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100b4618;
    case 0x100b4638u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100b4638;
    case 0x100b4642u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100b4642;
    case 0x100b4654u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100b4654;
    case 0x100b4666u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100b4666;
    case 0x100b468au: eax = g->eax; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100b468a;
    case 0x100b4691u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100b4691;
    case 0x100b46b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100b46b6;
    case 0x100b46dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100b46df;
    case 0x100b4704u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100b4704;
    case 0x100b4729u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100b4729;
    case 0x100b474eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100b474e;
    case 0x100b4773u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100b4773;
    case 0x100b4798u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100b4798;
    case 0x100b47bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100b47bd;
    case 0x100b47e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100b47e2;
    case 0x100b4807u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100b4807;
    case 0x100b482cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100b482c;
    case 0x100b4851u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100b4851;
    case 0x100b4862u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_100b4862;
    default: break;
    }
#endif

    COW_AT(100b4590)
    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_ebp);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, in_edi);
    wr32(sp0 - 0x24u, sp0 + 4u);
    wr32(sp0 - 0x28u, sp0 - 8u);
    wr32(sp0 - 0x2cu, arg1 + 3u);
    g->eax = sp0 + 4u;
    g->edx = arg1 + 3u;
    g->esp = sp0 - 0x28u;
    t1 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, arg1 + 3u);
    t2 = g->edx;
    wr32(sp0 - 0x2cu, t1);
    g->esp = sp0 - 0x20u;
    t3 = cow_fastcall(g, COW_IMG(0x100afb00u), self, t2, 3, t1, sp0 - 8u, sp0 + 4u);
    if ((uint8_t)t3 != 1u)
    {
        loc_14 = in_ebx;
        loc_18 = in_ebp;
        loc_1c = in_esi;
        loc_20 = in_edi;
        goto L_100b4862;
    }
    COW_AT(100b45c2)
    wr32(sp0 - 0x24u, sp0 - 0x10u);
    wr32(sp0 - 0x28u, sp0 - 4u);
    wr32(sp0 - 0x2cu, arg1 + 7u);
    g->eax = sp0 - 0x10u;
    g->edx = arg1 + 7u;
    g->esp = sp0 - 0x28u;
    t4 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, arg1 + 7u);
    t5 = g->edx;
    wr32(sp0 - 0x2cu, t4);
    g->esp = sp0 - 0x20u;
    t6 = cow_fastcall(g, COW_IMG(0x100afb00u), self, t5, 3, t4, sp0 - 4u, sp0 - 0x10u);
    if ((uint8_t)t6 != 1u)
    {
        loc_14 = in_ebx;
        loc_18 = in_ebp;
        loc_1c = in_esi;
        loc_20 = in_edi;
        goto L_100b4862;
    }
    COW_AT(100b45e7)
    if (rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u) == 0u)
    {
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_20 = rd32(sp0 - 0x20u);
        goto L_100b4862;
    }
    ecx = rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u);
    COW_AT(100b45ff)
    if (rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 0x10u) * 4u) == 0u)
    {
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_20 = rd32(sp0 - 0x20u);
        goto L_100b4862;
    }
    eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 0x10u) * 4u);
    COW_AT(100b4618)
    t7 = rd32(ecx + 0x74u);
    wr32(sp0 - 0x10u, t7);
    t8 = rd32(eax + 0x74u);
    wr32(sp0 - 0x10u, t8);
    if (rd32(ecx + 0x78u) != rd32(sp0 - 8u))
    {
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_20 = rd32(sp0 - 0x20u);
        goto L_100b4862;
    }
    esi = rd32(eax + 0x78u);
    COW_AT(100b4638)
    if (esi != rd32(sp0 - 4u))
    {
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_20 = rd32(sp0 - 0x20u);
        goto L_100b4862;
    }
    COW_AT(100b4642)
    if (!(rd32(ecx + 0x120u) >> 9u & 1u))
    {
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_20 = rd32(sp0 - 0x20u);
        goto L_100b4862;
    }
    COW_AT(100b4654)
    if (!(rd32(eax + 0x120u) >> 9u & 1u))
    {
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_20 = rd32(sp0 - 0x20u);
        goto L_100b4862;
    }
    edx = rd32(eax + 0x120u) >> 9u;
    COW_AT(100b4666)
    wr32(sp0 - 0x24u, arg1 + 1u);
    g->eax = arg1 + 1u;
    t9 = rd32(ecx + 0xa0u);
    t10 = rd32(eax + 0xa0u);
    g->esp = sp0 - 0x20u;
    t11 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, arg1 + 1u);
    if (arg2 > 0x12u)
    {
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_20 = rd32(sp0 - 0x20u);
        goto L_100b4862;
    }
    eax = t11;
    esi = t9;
    edi = t10;
    COW_AT(100b468a)
    t12 = rd32(COW_IMG(0x100b4878u) + arg2 * 4u);
    switch (t12 - RD)
    {
    case 0x100b4691u: goto L_100b4691;
    case 0x100b46b6u: goto L_100b46b6;
    case 0x100b46dfu: goto L_100b46df;
    case 0x100b4704u: goto L_100b4704;
    case 0x100b4729u: goto L_100b4729;
    case 0x100b474eu: goto L_100b474e;
    case 0x100b4773u: goto L_100b4773;
    case 0x100b4798u: goto L_100b4798;
    case 0x100b47bdu: goto L_100b47bd;
    case 0x100b47e2u: goto L_100b47e2;
    case 0x100b4807u: goto L_100b4807;
    case 0x100b482cu: goto L_100b482c;
    case 0x100b4851u: goto L_100b4851;
    case 0x100b4862u: loc_14 = rd32(sp0 - 0x14u); loc_18 = rd32(sp0 - 0x18u); loc_1c = rd32(sp0 - 0x1cu); loc_20 = rd32(sp0 - 0x20u); goto L_100b4862;
    default: rt_fatal(g, COW_IMG(0x100b468au), "switch");
    }
    return;
L_100b4691: ;
    COW_AT(100b4691)
    wr32(sp0 - 0x24u, 0x6e69616du);
    wr32(sp0 - 0x28u, edi);
    wr32(sp0 - 0x2cu, eax);
    g->esp = sp0 - 0x20u;
    cow_thiscall(g, rd32(rd32(esi) + 0x2d0u), esi, 3, eax, edi, 0x6e69616du);
    t24 = rd32(sp0 - 0x20u);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + (uint16_t)(arg1 + 0xbu)));
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = t24;
    g->ebp = rd32(sp0 - 0x18u);
    return;
L_100b46b6: ;
    COW_AT(100b46b6)
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x2cu, 0x6e69616du);
    wr32(sp0 - 0x30u, edi);
    wr32(sp0 - 0x34u, eax);
    g->esp = sp0 - 0x20u;
    cow_thiscall(g, rd32(rd32(esi) + 0x2c4u), esi, 5, eax, edi, 0x6e69616du, 0u, 0u);
    t23 = rd32(sp0 - 0x20u);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + (uint16_t)(arg1 + 0xbu)));
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = t23;
    g->ebp = rd32(sp0 - 0x18u);
    return;
L_100b46df: ;
    COW_AT(100b46df)
    wr32(sp0 - 0x24u, 0x6e69616du);
    wr32(sp0 - 0x28u, edi);
    wr32(sp0 - 0x2cu, eax);
    g->esp = sp0 - 0x20u;
    cow_thiscall(g, rd32(rd32(esi) + 0x2ccu), esi, 3, eax, edi, 0x6e69616du);
    t22 = rd32(sp0 - 0x20u);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + (uint16_t)(arg1 + 0xbu)));
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = t22;
    g->ebp = rd32(sp0 - 0x18u);
    return;
L_100b4704: ;
    COW_AT(100b4704)
    wr32(sp0 - 0x24u, 0x6e69616du);
    wr32(sp0 - 0x28u, edi);
    wr32(sp0 - 0x2cu, eax);
    g->esp = sp0 - 0x20u;
    cow_thiscall(g, rd32(rd32(esi) + 0x2d4u), esi, 3, eax, edi, 0x6e69616du);
    t21 = rd32(sp0 - 0x20u);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + (uint16_t)(arg1 + 0xbu)));
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = t21;
    g->ebp = rd32(sp0 - 0x18u);
    return;
L_100b4729: ;
    COW_AT(100b4729)
    wr32(sp0 - 0x24u, 0x6e69616du);
    wr32(sp0 - 0x28u, edi);
    wr32(sp0 - 0x2cu, eax);
    g->esp = sp0 - 0x20u;
    cow_thiscall(g, rd32(rd32(esi) + 0x2d8u), esi, 3, eax, edi, 0x6e69616du);
    t20 = rd32(sp0 - 0x20u);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + (uint16_t)(arg1 + 0xbu)));
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = t20;
    g->ebp = rd32(sp0 - 0x18u);
    return;
L_100b474e: ;
    COW_AT(100b474e)
    wr32(sp0 - 0x24u, 0x6e69616du);
    wr32(sp0 - 0x28u, edi);
    wr32(sp0 - 0x2cu, eax);
    g->esp = sp0 - 0x20u;
    cow_thiscall(g, rd32(rd32(esi) + 0x2dcu), esi, 3, eax, edi, 0x6e69616du);
    t19 = rd32(sp0 - 0x20u);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + (uint16_t)(arg1 + 0xbu)));
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = t19;
    g->ebp = rd32(sp0 - 0x18u);
    return;
L_100b4773: ;
    COW_AT(100b4773)
    wr32(sp0 - 0x24u, 0x6e69616du);
    wr32(sp0 - 0x28u, edi);
    wr32(sp0 - 0x2cu, eax);
    g->esp = sp0 - 0x20u;
    cow_thiscall(g, rd32(rd32(esi) + 0x2e0u), esi, 3, eax, edi, 0x6e69616du);
    t18 = rd32(sp0 - 0x20u);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + (uint16_t)(arg1 + 0xbu)));
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = t18;
    g->ebp = rd32(sp0 - 0x18u);
    return;
L_100b4798: ;
    COW_AT(100b4798)
    wr32(sp0 - 0x24u, 0x6e69616du);
    wr32(sp0 - 0x28u, edi);
    wr32(sp0 - 0x2cu, eax);
    g->esp = sp0 - 0x20u;
    cow_thiscall(g, rd32(rd32(esi) + 0x2e4u), esi, 3, eax, edi, 0x6e69616du);
    t17 = rd32(sp0 - 0x20u);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + (uint16_t)(arg1 + 0xbu)));
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = t17;
    g->ebp = rd32(sp0 - 0x18u);
    return;
L_100b47bd: ;
    COW_AT(100b47bd)
    wr32(sp0 - 0x24u, 0x6e69616du);
    wr32(sp0 - 0x28u, edi);
    wr32(sp0 - 0x2cu, eax);
    g->esp = sp0 - 0x20u;
    cow_thiscall(g, rd32(rd32(esi) + 0x2e8u), esi, 3, eax, edi, 0x6e69616du);
    t16 = rd32(sp0 - 0x20u);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + (uint16_t)(arg1 + 0xbu)));
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = t16;
    g->ebp = rd32(sp0 - 0x18u);
    return;
L_100b47e2: ;
    COW_AT(100b47e2)
    wr32(sp0 - 0x24u, 0x6e69616du);
    wr32(sp0 - 0x28u, edi);
    wr32(sp0 - 0x2cu, eax);
    g->esp = sp0 - 0x20u;
    cow_thiscall(g, rd32(rd32(esi) + 0x2ecu), esi, 3, eax, edi, 0x6e69616du);
    t15 = rd32(sp0 - 0x20u);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + (uint16_t)(arg1 + 0xbu)));
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = t15;
    g->ebp = rd32(sp0 - 0x18u);
    return;
L_100b4807: ;
    COW_AT(100b4807)
    wr32(sp0 - 0x24u, 0x6e69616du);
    wr32(sp0 - 0x28u, edi);
    wr32(sp0 - 0x2cu, eax);
    g->esp = sp0 - 0x20u;
    cow_thiscall(g, rd32(rd32(esi) + 0x2f0u), esi, 3, eax, edi, 0x6e69616du);
    t14 = rd32(sp0 - 0x20u);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + (uint16_t)(arg1 + 0xbu)));
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = t14;
    g->ebp = rd32(sp0 - 0x18u);
    return;
L_100b482c: ;
    COW_AT(100b482c)
    wr32(sp0 - 0x24u, 0x6e69616du);
    wr32(sp0 - 0x28u, edi);
    wr32(sp0 - 0x2cu, eax);
    g->esp = sp0 - 0x20u;
    cow_thiscall(g, rd32(rd32(esi) + 0x2f8u), esi, 3, eax, edi, 0x6e69616du);
    t13 = rd32(sp0 - 0x20u);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + (uint16_t)(arg1 + 0xbu)));
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = t13;
    g->ebp = rd32(sp0 - 0x18u);
    return;
L_100b4851: ;
    COW_AT(100b4851)
    wr32(sp0 - 0x24u, 0x6e69616du);
    wr32(sp0 - 0x28u, edi);
    wr32(sp0 - 0x2cu, eax);
    g->esp = sp0 - 0x20u;
    cow_thiscall(g, rd32(rd32(esi) + 0x2f4u), esi, 3, eax, edi, 0x6e69616du);
    loc_14 = rd32(sp0 - 0x14u);
    loc_18 = rd32(sp0 - 0x18u);
    loc_1c = rd32(sp0 - 0x1cu);
    loc_20 = rd32(sp0 - 0x20u);
L_100b4862: ;
    COW_AT(100b4862)
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + (uint16_t)(arg1 + 0xbu)));
    g->ebx = loc_14;
    g->esi = loc_1c;
    g->edi = loc_20;
    g->ebp = loc_18;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100b4590(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100b45c2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x20u;
        g->ebx = arg1;
        wr32(sp0 - 0x28u, sp0 - 8u);
        wr32(sp0 - 0x24u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x100b45e7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = arg1;
        wr32(sp0 - 0x28u, sp0 - 4u);
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100b45ffu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = arg1;
        wr32(sp0 - 0x28u, sp0 - 4u);
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100b4618u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = arg1;
        wr32(sp0 - 0x28u, sp0 - 4u);
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100b4638u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = arg1;
        wr32(sp0 - 0x28u, sp0 - 4u);
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100b4642u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = arg1;
        wr32(sp0 - 0x28u, sp0 - 4u);
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100b4654u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = arg1;
        wr32(sp0 - 0x28u, sp0 - 4u);
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100b4666u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = arg1;
        wr32(sp0 - 0x28u, sp0 - 4u);
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100b468au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ecx = arg2;
        g->ebx = arg1;
        wr32(sp0 - 0x28u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x100b4691u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = arg1;
        wr32(sp0 - 0x28u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x100b46b6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = arg1;
        wr32(sp0 - 0x28u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x100b46dfu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = arg1;
        wr32(sp0 - 0x28u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x100b4704u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = arg1;
        wr32(sp0 - 0x28u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x100b4729u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = arg1;
        wr32(sp0 - 0x28u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x100b474eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = arg1;
        wr32(sp0 - 0x28u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x100b4773u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = arg1;
        wr32(sp0 - 0x28u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x100b4798u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = arg1;
        wr32(sp0 - 0x28u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x100b47bdu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = arg1;
        wr32(sp0 - 0x28u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x100b47e2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = arg1;
        wr32(sp0 - 0x28u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x100b4807u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = arg1;
        wr32(sp0 - 0x28u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x100b482cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = arg1;
        wr32(sp0 - 0x28u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x100b4851u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = arg1;
        wr32(sp0 - 0x28u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x100b4862u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x20u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100b4590(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_100b4590(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
