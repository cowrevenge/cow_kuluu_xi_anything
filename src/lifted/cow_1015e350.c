/* f_0x1015e350 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1015e350(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
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
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 60u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1015e369u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1015e369;
    case 0x1015e37au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; self = g->edi; goto E_1015e37a;
    case 0x1015e382u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1015e382;
    case 0x1015e38du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; self = g->edi; goto E_1015e38d;
    case 0x1015e399u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_1015e399;
    case 0x1015e39du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1015e39d;
    case 0x1015e3a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_1015e3a8;
    case 0x1015e3b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_1015e3b4;
    case 0x1015e3bau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1015e3ba;
    case 0x1015e3c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_1015e3c3;
    case 0x1015e3cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_1015e3cf;
    case 0x1015e3d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_1015e3d9;
    case 0x1015e3e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_1015e3e6;
    case 0x1015e3edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_1015e3ed;
    case 0x1015e3f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_1015e3f3;
    case 0x1015e3fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_1015e3fa;
    case 0x1015e405u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_1015e405;
    case 0x1015e40au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_1015e40a;
    case 0x1015e412u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_1015e412;
    case 0x1015e417u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_1015e417;
    case 0x1015e41eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_1015e41e;
    case 0x1015e425u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_1015e425;
    case 0x1015e42au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_1015e42a;
    case 0x1015e43au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_1015e43a;
    case 0x1015e449u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_1015e449;
    case 0x1015e451u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_1015e451;
    case 0x1015e45du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1015e45d;
    case 0x1015e468u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_1015e468;
    case 0x1015e472u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_1015e472;
    case 0x1015e479u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_1015e479;
    case 0x1015e480u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_1015e480;
    case 0x1015e486u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1015e486;
    case 0x1015e491u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_1015e491;
    case 0x1015e49eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_1015e49e;
    case 0x1015e4a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_1015e4a6;
    case 0x1015e4b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_1015e4b7;
    case 0x1015e4beu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_1015e4be;
    case 0x1015e4c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_1015e4c5;
    case 0x1015e4ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_1015e4cc;
    case 0x1015e4d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_1015e4d1;
    case 0x1015e4d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_1015e4d9;
    case 0x1015e4e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_1015e4e8;
    case 0x1015e4ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_1015e4ec;
    case 0x1015e4f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_1015e4f5;
    case 0x1015e4fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_1015e4fd;
    case 0x1015e505u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_1015e505;
    case 0x1015e50du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_1015e50d;
    case 0x1015e517u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1015e517;
    default: break;
    }
#endif

    COW_AT(1015e350)
    wr32(sp0 - 0x24u, in_ebx);
    wr32(sp0 - 0x28u, in_esi);
    wr32(sp0 - 0x2cu, in_edi);
    t1 = rd32(sp0 + 4u);
    wr32(sp0 - 0x30u, t1);
    wr32(sp0 - 0x34u, sp0 - 0x20u);
    g->esp = sp0 - 0x2cu;
    cow_call_regs(g, COW_IMG(0x10160760u), t1, self, g->edx, 0, 2, sp0 - 0x20u, t1);
    COW_AT(1015e369)
    wr32(sp0 - 0x30u, sp0 + 4u);
    wr32(sp0 - 0x34u, sp0 - 0x20u);
    g->edx = sp0 + 4u;
    g->esp = sp0 - 0x2cu;
    t2 = cow_call_regs(g, COW_IMG(0x1015dc70u), sp0 - 0x20u, g->ecx, g->edx, 0, 2, sp0 - 0x20u, sp0 + 4u);
    t3 = g->edx;
    eax = t2;
    edx = t3;
    COW_AT(1015e37a)
    if (rd8(sp0 + 4u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 + 4u);
        goto L_1015e38d;
    }
    COW_AT(1015e382)
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    return 0u;
L_1015e38d: ;
    COW_AT(1015e38d)
    wr32(sp0 - 0x30u, sp0 - 0x20u);
    g->eax = eax;
    g->esp = sp0 - 0x2cu;
    t4 = cow_thiscall(g, COW_IMG(0x1015e0f0u), self, 1, sp0 - 0x20u);
    eax = t4;
    COW_AT(1015e399)
    if ((uint8_t)eax != 0u) goto L_1015e3a8;
    COW_AT(1015e39d)
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    return 0u;
L_1015e3a8: ;
    COW_AT(1015e3a8)
    wr32(sp0 - 0x30u, sp0 - 0x20u);
    g->eax = eax;
    g->edx = sp0 - 0x20u;
    g->esp = sp0 - 0x2cu;
    t5 = cow_thiscall(g, COW_IMG(0x1015e030u), self, 1, sp0 - 0x20u);
    t6 = g->edx;
    eax = t5;
    edx = t6;
    COW_AT(1015e3b4)
    if (eax != 0u)
    {
        ebx = eax;
        goto L_1015e3c3;
    }
    COW_AT(1015e3ba)
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    return eax;
L_1015e3c3: ;
    COW_AT(1015e3c3)
    wr32(sp0 - 0x30u, sp0 - 0x20u);
    g->eax = sp0 - 0x20u;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t7 = cow_thiscall(g, COW_IMG(0x1015dc10u), self, 1, sp0 - 0x20u);
    t8 = g->ecx;
    t9 = g->edx;
    eax = t7;
    ecx = t8;
    edx = t9;
    COW_AT(1015e3cf)
    if (eax == 0u) goto L_1015e468;
    esi = eax;
    COW_AT(1015e3d9)
    wr32(sp0 - 0x30u, sp0 - 0x20u);
    wr32(sp0 - 0x34u, esi);
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t10 = cow_call_regs(g, COW_IMG(0x1015e950u), eax, self, g->edx, 0, 2, esi, sp0 - 0x20u);
    t11 = g->edx;
    eax = t10;
    edx = t11;
    COW_AT(1015e3e6)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t12 = cow_thiscall_cdecl(g, COW_IMG(0x10118870u), esi, 3, rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u));
    t13 = g->edx;
    eax = t12;
    edx = t13;
    COW_AT(1015e3ed)
    if (rd32(esi + 0x10u) == 0xeu) goto L_1015e417;
    COW_AT(1015e3f3)
    if (rd8(esi + 0x6eu) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi + 0x6eu);
        goto L_1015e417;
    }
    eax = (eax & 0xffffff00u) | rd8(esi + 0x6eu);
    COW_AT(1015e3fa)
    if (rd32(esi + 0xcu) != 0u)
    {
        ecx = rd32(esi + 0xcu);
    COW_AT(1015e405)
        g->edx = rd32(ecx);
        t14 = rd32(ecx);
        g->esp = sp0 - 0x2cu;
        cow_thiscall(g, rd32(t14 + 4u), ecx, 0);
        t15 = g->edx;
        edx = t15;
    COW_AT(1015e40a)
        g->eax = rd32(rd32(esi + 0xcu));
        g->edx = edx;
        t16 = rd32(rd32(esi + 0xcu));
        g->esp = sp0 - 0x2cu;
        t17 = cow_thiscall(g, rd32(t16 + 0x14u), rd32(esi + 0xcu), 0);
        t18 = g->edx;
        eax = t17;
        edx = t18;
    COW_AT(1015e412)
    }
L_1015e50d: ;
    COW_AT(1015e50d)
    wr32(sp0 - 0x30u, 0u);
    wr32(sp0 - 0x34u, esi);
    g->esp = sp0 - 0x2cu;
    cow_fastcall(g, COW_IMG(0x1015db80u), self, edx, 2, esi, 0u);
L_1015e517: ;
    COW_AT(1015e517)
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    return esi;
L_1015e417: ;
    COW_AT(1015e417)
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0x2cu;
    t19 = cow_fastcall(g, COW_IMG(0x10117ee0u), esi, edx, 0);
    t20 = g->edx;
    eax = t19;
    edx = t20;
    COW_AT(1015e41e)
    if (rd32(esi + 0xcu) != 0u)
    {
        ecx = rd32(esi + 0xcu);
    COW_AT(1015e425)
        g->eax = eax;
        g->edx = rd32(ecx);
        t21 = rd32(ecx);
        g->esp = sp0 - 0x2cu;
        t22 = cow_thiscall(g, rd32(t21 + 4u), ecx, 0);
        t23 = g->edx;
        eax = t22;
        edx = t23;
    }
    COW_AT(1015e42a)
    t24 = rd8(sp0 + 0xcu);
    wr8(esi + 0x6eu, 0u);
    if ((uint8_t)t24 == 0u)
    {
        eax = (eax & 0xffffff00u) | t24;
        goto L_1015e4fd;
    }
    eax = (eax & 0xffffff00u) | t24;
    COW_AT(1015e43a)
    wr32(sp0 - 0x30u, 0u);
    wr32(sp0 - 0x34u, esi);
    t25 = (eax & 0xffff0000u) | rd16(esi + 0x38u);
    wr32(sp0 - 0x38u, t25);
    g->ebx = ebx;
    g->eax = t25;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t26 = cow_thiscall(g, COW_IMG(0x1015ed10u), self, 3, t25, esi, 0u);
    t27 = g->edx;
    eax = t26;
    edx = t27;
    COW_AT(1015e449)
    if ((uint8_t)eax == 0u) goto L_1015e4fd;
    COW_AT(1015e451)
    wr32(sp0 - 0x30u, esi);
    wr8(esi + 0x75u, 1u);
    g->esp = sp0 - 0x2cu;
    cow_stdcall(g, COW_IMG(0x1015db70u), 1, esi);
    COW_AT(1015e45d)
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    return esi;
L_1015e468: ;
    COW_AT(1015e468)
    wr32(sp0 - 0x30u, 0xd4u);
    g->eax = eax;
    g->esp = sp0 - 0x24u;
    t28 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0xd4u, rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u));
    t29 = g->edx;
    eax = t28;
    edx = t29;
    COW_AT(1015e472)
    if (eax == 0u) goto L_1015e486;
    COW_AT(1015e479)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t30 = cow_thiscall(g, COW_IMG(0x101172c0u), eax, 0);
    t31 = g->edx;
    eax = t30;
    edx = t31;
    COW_AT(1015e480)
    if (eax != 0u)
    {
        esi = eax;
        goto L_1015e491;
    }
L_1015e486: ;
    COW_AT(1015e486)
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    return 0u;
L_1015e491: ;
    COW_AT(1015e491)
    wr32(sp0 - 0x30u, sp0 - 0x20u);
    wr32(sp0 - 0x34u, esi);
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t32 = cow_call_regs(g, COW_IMG(0x1015e950u), eax, self, g->edx, 0, 2, esi, sp0 - 0x20u);
    t33 = g->edx;
    eax = t32;
    edx = t33;
    COW_AT(1015e49e)
    wr32(sp0 - 0x30u, ebx);
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    cow_thiscall(g, COW_IMG(0x10117f40u), esi, 1, ebx);
    t34 = g->edx;
    edx = t34;
    COW_AT(1015e4a6)
    t35 = rd32(esi + 0x34u);
    wr32(esi + 0x10u, 0xeu);
    if ((t35 & 0x200000u) == 0u)
    {
        eax = t35;
    }
    else
    {
        eax = t35;
    COW_AT(1015e4b7)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x2cu;
        t36 = cow_thiscall(g, COW_IMG(0x101190f0u), esi, 0);
        t37 = g->edx;
        eax = t36;
        edx = t37;
    }
    COW_AT(1015e4be)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t38 = cow_thiscall_cdecl(g, COW_IMG(0x10118870u), esi, 3, rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u));
    t39 = g->edx;
    eax = t38;
    edx = t39;
    COW_AT(1015e4c5)
    if (rd32(esi + 0xcu) != 0u)
    {
        ecx = rd32(esi + 0xcu);
    COW_AT(1015e4cc)
        g->eax = eax;
        g->edx = rd32(ecx);
        t40 = rd32(ecx);
        g->esp = sp0 - 0x2cu;
        t41 = cow_thiscall(g, rd32(t40 + 4u), ecx, 0);
        t42 = g->edx;
        eax = t41;
        edx = t42;
    }
    COW_AT(1015e4d1)
    if (rd8(sp0 + 0xcu) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 + 0xcu);
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 + 0xcu);
    COW_AT(1015e4d9)
        wr32(sp0 - 0x30u, 0u);
        wr32(sp0 - 0x34u, esi);
        t43 = (eax & 0xffff0000u) | rd16(esi + 0x38u);
        wr32(sp0 - 0x38u, t43);
        g->ebx = ebx;
        g->eax = t43;
        g->edx = edx;
        g->esp = sp0 - 0x2cu;
        t44 = cow_thiscall(g, COW_IMG(0x1015ed10u), self, 3, t43, esi, 0u);
        t45 = g->edx;
        eax = t44;
        edx = t45;
    COW_AT(1015e4e8)
        if ((uint8_t)eax != 0u)
        {
    COW_AT(1015e4ec)
            wr8(esi + 0x75u, 1u);
            wr8(sp0 + 8u, 0u);
        }
    }
    COW_AT(1015e4f5)
    wr32(sp0 - 0x30u, esi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t46 = cow_thiscall(g, COW_IMG(0x1015db10u), self, 1, esi);
    t47 = g->edx;
    eax = t46;
    edx = t47;
L_1015e4fd: ;
    COW_AT(1015e4fd)
    if (rd8(sp0 + 8u) == 0u) goto L_1015e517;
    eax = (eax & 0xffffff00u) | rd8(sp0 + 8u);
    COW_AT(1015e505)
    wr32(sp0 - 0x30u, esi);
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t48 = cow_call_regs(g, COW_IMG(0x1015e530u), eax, self, g->edx, 0, 1, esi);
    t49 = g->edx;
    eax = t48;
    edx = t49;
    goto L_1015e50d;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1015e350(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1015e369u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        wr32(sp0 - 0x24u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1015e37au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        wr32(sp0 - 0x30u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1015e382u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        wr32(sp0 - 0x30u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1015e38du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        wr32(sp0 - 0x30u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1015e399u:
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
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        wr32(sp0 - 0x30u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1015e39du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        wr32(sp0 - 0x30u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1015e3a8u:
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
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        wr32(sp0 - 0x30u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1015e3b4u:
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
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        wr32(sp0 - 0x30u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1015e3bau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        wr32(sp0 - 0x30u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1015e3c3u:
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
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        wr32(sp0 - 0x30u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1015e3cfu:
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
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        wr32(sp0 - 0x30u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1015e3d9u:
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
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        wr32(sp0 - 0x30u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1015e3e6u:
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
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x30u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1015e3edu:
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
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x30u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1015e3f3u:
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
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x30u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1015e3fau:
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
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x30u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1015e405u:
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
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x30u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1015e40au:
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
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x30u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1015e412u:
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
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x30u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1015e417u:
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
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x30u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1015e41eu:
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
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x30u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1015e425u:
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
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x30u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1015e42au:
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
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x30u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1015e43au:
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
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x30u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1015e449u:
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
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1015e451u:
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
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1015e45du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1015e468u:
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
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        wr32(sp0 - 0x30u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1015e472u:
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
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1015e479u:
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
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1015e480u:
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
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1015e486u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1015e491u:
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
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1015e49eu:
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
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x30u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1015e4a6u:
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
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1015e4b7u:
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
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1015e4beu:
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
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1015e4c5u:
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
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1015e4ccu:
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
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1015e4d1u:
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
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1015e4d9u:
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
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1015e4e8u:
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
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1015e4ecu:
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
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1015e4f5u:
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
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1015e4fdu:
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
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1015e505u:
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
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1015e50du:
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
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1015e517u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1015e350(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1015e350(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
