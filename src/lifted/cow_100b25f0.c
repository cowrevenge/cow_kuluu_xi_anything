/* f_0x100b25f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100b25f0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_5e4;
    uint32_t loc_5e8;
    uint32_t loc_5ec;
    uint32_t loc_5f0;
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
    uint32_t t3;
    uint32_t t4;
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
    cow_frame(g, sp0, 1552u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100b2603u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x5fcu); in_ebp = rd32(sp0 - 0x5f8u); g->ebp = rd32(sp0 - 0x5f8u); g->esi = rd32(sp0 - 0x5fcu); goto E_100b2603;
    case 0x100b260cu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x5fcu); in_ebp = rd32(sp0 - 0x5f8u); g->ebp = rd32(sp0 - 0x5f8u); g->esi = rd32(sp0 - 0x5fcu); goto E_100b260c;
    case 0x100b264fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x5fcu); in_ebp = rd32(sp0 - 0x5f8u); g->ebp = rd32(sp0 - 0x5f8u); g->esi = rd32(sp0 - 0x5fcu); goto E_100b264f;
    case 0x100b2668u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x5fcu); in_ebp = rd32(sp0 - 0x5f8u); g->ebp = rd32(sp0 - 0x5f8u); g->esi = rd32(sp0 - 0x5fcu); goto E_100b2668;
    case 0x100b267du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; goto E_100b267d;
    case 0x100b268fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; in_edi = g->edi; goto E_100b268f;
    case 0x100b26d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_5f0 = rd32(sp0 - 0x5f0u); loc_5ec = rd32(sp0 - 0x5ecu); loc_5e8 = rd32(sp0 - 0x5e8u); loc_5e4 = rd32(sp0 - 0x5e4u); goto E_100b26d6;
    case 0x100b26dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_5f0 = rd32(sp0 - 0x5f0u); loc_5ec = rd32(sp0 - 0x5ecu); loc_5e8 = rd32(sp0 - 0x5e8u); loc_5e4 = rd32(sp0 - 0x5e4u); goto E_100b26dc;
    case 0x100b26e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_5f0 = rd32(sp0 - 0x5f0u); loc_5ec = rd32(sp0 - 0x5ecu); loc_5e8 = rd32(sp0 - 0x5e8u); loc_5e4 = rd32(sp0 - 0x5e4u); goto E_100b26e3;
    case 0x100b26e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_5f0 = rd32(sp0 - 0x5f0u); loc_5ec = rd32(sp0 - 0x5ecu); loc_5e8 = rd32(sp0 - 0x5e8u); loc_5e4 = rd32(sp0 - 0x5e4u); goto E_100b26e6;
    case 0x100b26e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_5f0 = rd32(sp0 - 0x5f0u); loc_5ec = rd32(sp0 - 0x5ecu); loc_5e8 = rd32(sp0 - 0x5e8u); loc_5e4 = rd32(sp0 - 0x5e4u); goto E_100b26e7;
    case 0x100b26ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_5f0 = rd32(sp0 - 0x5f0u); loc_5ec = rd32(sp0 - 0x5ecu); loc_5e8 = rd32(sp0 - 0x5e8u); loc_5e4 = rd32(sp0 - 0x5e4u); goto E_100b26ec;
    case 0x100b26f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_5f0 = rd32(sp0 - 0x5f0u); loc_5ec = rd32(sp0 - 0x5ecu); loc_5e8 = rd32(sp0 - 0x5e8u); loc_5e4 = rd32(sp0 - 0x5e4u); goto E_100b26f1;
    case 0x100b26feu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_5f0 = rd32(sp0 - 0x5f0u); loc_5ec = rd32(sp0 - 0x5ecu); loc_5e8 = rd32(sp0 - 0x5e8u); loc_5e4 = rd32(sp0 - 0x5e4u); goto E_100b26fe;
    case 0x100b270du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_5f0 = rd32(sp0 - 0x5f0u); loc_5ec = rd32(sp0 - 0x5ecu); loc_5e8 = rd32(sp0 - 0x5e8u); loc_5e4 = rd32(sp0 - 0x5e4u); goto E_100b270d;
    case 0x100b2714u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_5f0 = rd32(sp0 - 0x5f0u); loc_5ec = rd32(sp0 - 0x5ecu); loc_5e8 = rd32(sp0 - 0x5e8u); loc_5e4 = rd32(sp0 - 0x5e4u); goto E_100b2714;
    case 0x100b272au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_5f0 = rd32(sp0 - 0x5f0u); loc_5ec = rd32(sp0 - 0x5ecu); loc_5e8 = rd32(sp0 - 0x5e8u); loc_5e4 = rd32(sp0 - 0x5e4u); goto E_100b272a;
    case 0x100b2731u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_5f0 = rd32(sp0 - 0x5f0u); loc_5ec = rd32(sp0 - 0x5ecu); loc_5e8 = rd32(sp0 - 0x5e8u); loc_5e4 = rd32(sp0 - 0x5e4u); goto E_100b2731;
    case 0x100b2752u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100b2752;
    case 0x100b2764u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100b2764;
    case 0x100b2768u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_5f0 = rd32(sp0 - 0x5f0u); loc_5ec = rd32(sp0 - 0x5ecu); loc_5e8 = rd32(sp0 - 0x5e8u); loc_5e4 = rd32(sp0 - 0x5e4u); goto E_100b2768;
    case 0x100b278du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_5f0 = rd32(sp0 - 0x5f0u); loc_5ec = rd32(sp0 - 0x5ecu); loc_5e8 = rd32(sp0 - 0x5e8u); loc_5e4 = rd32(sp0 - 0x5e4u); goto E_100b278d;
    case 0x100b2795u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_5f0 = rd32(sp0 - 0x5f0u); loc_5ec = rd32(sp0 - 0x5ecu); loc_5e8 = rd32(sp0 - 0x5e8u); loc_5e4 = rd32(sp0 - 0x5e4u); goto E_100b2795;
    case 0x100b27a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_5f0 = rd32(sp0 - 0x5f0u); loc_5ec = rd32(sp0 - 0x5ecu); loc_5e8 = rd32(sp0 - 0x5e8u); loc_5e4 = rd32(sp0 - 0x5e4u); goto E_100b27a2;
    case 0x100b27b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_5f0 = rd32(sp0 - 0x5f0u); loc_5ec = rd32(sp0 - 0x5ecu); loc_5e8 = rd32(sp0 - 0x5e8u); loc_5e4 = rd32(sp0 - 0x5e4u); goto E_100b27b1;
    case 0x100b27b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_5f0 = rd32(sp0 - 0x5f0u); loc_5ec = rd32(sp0 - 0x5ecu); loc_5e8 = rd32(sp0 - 0x5e8u); loc_5e4 = rd32(sp0 - 0x5e4u); goto E_100b27b9;
    case 0x100b27c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_5f0 = rd32(sp0 - 0x5f0u); loc_5ec = rd32(sp0 - 0x5ecu); loc_5e8 = rd32(sp0 - 0x5e8u); loc_5e4 = rd32(sp0 - 0x5e4u); goto E_100b27c1;
    case 0x100b27c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_5f0 = rd32(sp0 - 0x5f0u); loc_5ec = rd32(sp0 - 0x5ecu); loc_5e8 = rd32(sp0 - 0x5e8u); loc_5e4 = rd32(sp0 - 0x5e4u); goto E_100b27c9;
    case 0x100b27d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_5f0 = rd32(sp0 - 0x5f0u); loc_5ec = rd32(sp0 - 0x5ecu); loc_5e8 = rd32(sp0 - 0x5e8u); loc_5e4 = rd32(sp0 - 0x5e4u); goto E_100b27d0;
    case 0x100b27e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_5f0 = rd32(sp0 - 0x5f0u); loc_5ec = rd32(sp0 - 0x5ecu); loc_5e8 = rd32(sp0 - 0x5e8u); loc_5e4 = rd32(sp0 - 0x5e4u); goto E_100b27e2;
    case 0x100b27e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_5f0 = rd32(sp0 - 0x5f0u); loc_5ec = rd32(sp0 - 0x5ecu); loc_5e8 = rd32(sp0 - 0x5e8u); loc_5e4 = rd32(sp0 - 0x5e4u); goto E_100b27e9;
    case 0x100b280au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100b280a;
    case 0x100b281cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_5f0 = rd32(sp0 - 0x5f0u); loc_5ec = rd32(sp0 - 0x5ecu); loc_5e8 = rd32(sp0 - 0x5e8u); loc_5e4 = rd32(sp0 - 0x5e4u); goto E_100b281c;
    default: break;
    }
#endif

    COW_AT(100b25f0)
    wr32(sp0 - 0x5f8u, in_ebp);
    wr32(sp0 - 0x5fcu, in_esi);
    if (rd8(COW_IMG(0x104898f8u)) != 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x104898f8u));
        goto L_100b2668;
    }
    eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x104898f8u));
    COW_AT(100b2603)
    if (rd8(COW_IMG(0x104897f4u)) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x104897f4u));
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x104897f4u));
    COW_AT(100b260c)
        wr8(sp0 - 0x5f4u, 0x99u);
        wr8(sp0 - 0x5f3u, 2u);
        wr8(sp0 - 0x5f2u, 0u);
        g->edx = in_edx;
        g->esp = sp0 - 0x5fcu;
        t1 = cow_call_regs(g, COW_IMG(0x100ae3a0u), eax, g->ecx, g->edx, 1, 0);
        t2 = g->edx;
        wr32(sp0 - 0x600u, 1u);
        g->edx = t2;
        t3 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 1u);
        t4 = g->ecx;
        t5 = g->edx;
        wr32(sp0 - 0x600u, t3);
        wr32(sp0 - 0x604u, 1u);
        t6 = cow_call_regs(g, COW_IMG(0x100964a0u), g->eax, g->ecx, t5, 1, 2, 1u, t3);
        t7 = g->edx;
        wr16(COW_IMG(0x10482f40u), 0u);
        wr16(COW_IMG(0x104855aau), 0u);
        wr32(sp0 - 0x608u, sp0 - 0x5f4u);
        wr32(sp0 - 0x60cu, t6);
        g->esp = sp0 - 0x604u;
        t8 = cow_call_regs(g, COW_IMG(0x100ad750u), t6, sp0 - 0x5f4u, t7, 1, 2, t6, sp0 - 0x5f4u);
        eax = t8;
    }
    COW_AT(100b264f)
    wr8(COW_IMG(0x104897f4u), 1u);
    wr8(self + 0x25au, 1u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return eax & 0xffffff00u;
L_100b2668: ;
    COW_AT(100b2668)
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x5fcu;
    t9 = cow_thiscall(g, COW_IMG(0x1015eaa0u), COW_IMG(0x10621838u), 0);
    t10 = g->edx;
    wr32(COW_IMG(0x1047d3e8u), t9);
    if (t9 != 0u)
    {
        eax = t9;
        edx = t10;
        goto L_100b268f;
    }
    eax = t9;
    COW_AT(100b267d)
    wr8(self + 0x25au, 1u);
    g->ebx = in_ebx;
    g->esi = rd32(sp0 - 0x5fcu);
    g->edi = in_edi;
    g->ebp = rd32(sp0 - 0x5f8u);
    return eax & 0xffffff00u;
L_100b268f: ;
    COW_AT(100b268f)
    wr32(sp0 - 0x600u, in_ebx);
    wr32(sp0 - 0x604u, in_edi);
    t11 = (edx & 0xffff0000u) | (uint16_t)(uint32_t)(int8_t)rd8(COW_IMG(0x104886f4u));
    wr32(sp0 - 0x608u, t11);
    g->edx = t11;
    g->esp = sp0 - 0x604u;
    t12 = cow_call_regs(g, COW_IMG(0x1014e210u), eax, eax, g->edx, 0, 1, t11);
    t13 = g->edx;
    wr32(sp0 - 0x608u, 3u);
    wr32(sp0 - 0x5ecu, 0u);
    wr32(sp0 - 0x5f0u, 0u);
    g->edx = t13;
    t14 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 3u);
    t15 = g->edx;
    wr32(sp0 - 0x608u, 5u);
    wr32(sp0 - 0x5e0u, t14);
    t16 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 5u);
    wr32(sp0 - 0x5e4u, t16);
    wr32(sp0 - 0x5e8u, 1u);
    eax = t16;
    ebx = in_ebx & 0xffffff00u;
    esi = COW_IMG(0x10489108u);
    edi = sp0 - 0x5dcu;
    loc_5e4 = t16;
    loc_5e8 = 1u;
    loc_5ec = 0u;
    loc_5f0 = 0u;
L_100b26d6: ;
    COW_AT(100b26d6)
    if ((int8_t)rd8(esi) >= 0)
    {
        eax = (eax & 0xffffff00u) | rd8(esi);
        goto L_100b26f1;
    }
    eax = (eax & 0xffffff00u) | rd8(esi);
    COW_AT(100b26dc)
    wr8(edi, (uint8_t)eax);
    eax = (eax & 0xffffff00u) | rd8(esi + 1u);
    esi = esi + 1u;
    edi = edi + 1u;
L_100b26e3: ;
    COW_AT(100b26e3)
    wr8(edi, (uint8_t)eax);
    edi = edi + 1u;
L_100b26e6: ;
    COW_AT(100b26e6)
    esi = esi + 1u;
L_100b26e7: ;
    COW_AT(100b26e7)
    if ((uint8_t)ebx != 0xffu) goto L_100b26d6;
    COW_AT(100b26ec)
L_100b281c: ;
    COW_AT(100b281c)
    t27 = rd32(sp0 - 0x604u);
    wr8(COW_IMG(0x1047d3ecu), 1u);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 7u));
    g->ebx = rd32(sp0 - 0x600u);
    g->esi = rd32(sp0 - 0x5fcu);
    g->edi = t27;
    g->ebp = rd32(sp0 - 0x5f8u);
    return (eax & 0xffffff00u) | 1u;
L_100b26f1: ;
    COW_AT(100b26f1)
    if ((uint8_t)eax > 0x7fu) goto L_100b26e3;
    ecx = (uint8_t)eax;
    COW_AT(100b26fe)
    t17 = rd32(COW_IMG(0x100b2838u) + rd8(COW_IMG(0x100b284cu) + ecx) * 4u);
    switch (t17 - RD)
    {
    case 0x100b26e3u: goto L_100b26e3;
    case 0x100b270du: edx = rd8(COW_IMG(0x100b284cu) + ecx); goto L_100b270d;
    case 0x100b278du: goto L_100b278d;
    case 0x100b2795u: goto L_100b2795;
    case 0x100b27c9u: edx = rd8(COW_IMG(0x100b284cu) + ecx); goto L_100b27c9;
    default: rt_fatal(g, COW_IMG(0x100b2706u), "switch");
    }
    return 0;
L_100b270d: ;
    COW_AT(100b270d)
    wr8(edi, 0u);
    if ((uint8_t)ebx != 0u)
    {
    COW_AT(100b272a)
        if (!(loc_5e4 & 1u))
        {
    COW_AT(100b2731)
            wr32(sp0 - 0x608u, loc_5e8);
            wr32(sp0 - 0x60cu, sp0 - 0x5dcu);
            g->ebp = self;
            g->edx = sp0 - 0x5dcu;
            g->esp = sp0 - 0x604u;
            cow_thiscall(g, COW_IMG(0x1014df90u), rd32(COW_IMG(0x1047d3e8u)), 2, sp0 - 0x5dcu, loc_5e8);
            t24 = g->edx;
            if (rd32(sp0 - 0x5e0u) == rd32(sp0 - 0x5f0u))
            {
                eax = rd32(sp0 - 0x5e0u);
                edx = t24;
    COW_AT(100b2752)
                wr32(sp0 - 0x608u, 0u);
                t25 = rd32(sp0 - 0x5ecu);
                wr32(sp0 - 0x60cu, t25);
                g->esp = sp0 - 0x604u;
                cow_fastcall(g, COW_IMG(0x1014e0f0u), rd32(COW_IMG(0x1047d3e8u)), edx, 2, t25, 0u);
            }
    COW_AT(100b2764)
            t26 = rd32(sp0 - 0x5ecu) + 1u;
            wr32(sp0 - 0x5ecu, t26);
            loc_5e4 = rd32(sp0 - 0x5e4u);
            loc_5e8 = rd32(sp0 - 0x5e8u);
            loc_5ec = t26;
            loc_5f0 = rd32(sp0 - 0x5f0u);
        }
    COW_AT(100b2768)
        wr32(sp0 - 0x5f0u, loc_5f0 + 1u);
        wr32(sp0 - 0x5e4u, (uint32_t)((int32_t)loc_5e4 >> 1u));
        wr32(sp0 - 0x5e8u, loc_5e8 + 1u);
        eax = loc_5e8 + 1u;
        edi = sp0 - 0x5dcu;
        loc_5e4 = (uint32_t)((int32_t)loc_5e4 >> 1u);
        loc_5e8 = loc_5e8 + 1u;
        loc_5f0 = loc_5f0 + 1u;
    }
    else
    {
    COW_AT(100b2714)
        wr32(sp0 - 0x608u, sp0 - 0x5dcu);
        g->eax = sp0 - 0x5dcu;
        g->esp = sp0 - 0x604u;
        t23 = cow_thiscall(g, COW_IMG(0x1014df50u), rd32(COW_IMG(0x1047d3e8u)), 1, sp0 - 0x5dcu);
        eax = t23;
        edi = sp0 - 0x5dcu;
        loc_5e4 = rd32(sp0 - 0x5e4u);
        loc_5e8 = rd32(sp0 - 0x5e8u);
        loc_5ec = rd32(sp0 - 0x5ecu);
        loc_5f0 = rd32(sp0 - 0x5f0u);
    }
    goto L_100b26e6;
L_100b278d: ;
    COW_AT(100b278d)
    ebx = (ebx & 0xffffff00u) | 1u;
    esi = esi + 1u;
    goto L_100b26d6;
L_100b2795: ;
    COW_AT(100b2795)
    if (rd8(esi + 1u) - 0x34u > 0x5eu)
    {
        eax = rd8(esi + 1u) - 0x34u;
        goto L_100b27c1;
    }
    eax = rd8(esi + 1u) - 0x34u;
    COW_AT(100b27a2)
    t22 = rd32(COW_IMG(0x100b28ccu) + rd8(COW_IMG(0x100b28d8u) + eax) * 4u);
    switch (t22 - RD)
    {
    case 0x100b27b1u: goto L_100b27b1;
    case 0x100b27b9u: goto L_100b27b9;
    case 0x100b27c1u: goto L_100b27c1;
    default: rt_fatal(g, COW_IMG(0x100b27aau), "switch");
    }
    return 0;
L_100b27b1: ;
    COW_AT(100b27b1)
    esi = esi + 4u;
    goto L_100b26e7;
L_100b27b9: ;
    COW_AT(100b27b9)
    esi = esi + 3u;
    goto L_100b26e7;
L_100b27c1: ;
    COW_AT(100b27c1)
    esi = esi + 2u;
    goto L_100b26e7;
L_100b27c9: ;
    COW_AT(100b27c9)
    wr8(edi, 0u);
    if ((uint8_t)ebx != 0u)
    {
    COW_AT(100b27e2)
        if (!(loc_5e4 & 1u))
        {
    COW_AT(100b27e9)
            wr32(sp0 - 0x608u, loc_5e8);
            wr32(sp0 - 0x60cu, sp0 - 0x5dcu);
            g->ebp = self;
            g->edx = sp0 - 0x5dcu;
            g->esp = sp0 - 0x604u;
            cow_thiscall(g, COW_IMG(0x1014df90u), rd32(COW_IMG(0x1047d3e8u)), 2, sp0 - 0x5dcu, loc_5e8);
            t19 = g->edx;
            if (rd32(sp0 - 0x5e0u) != rd32(sp0 - 0x5f0u))
            {
                eax = rd32(sp0 - 0x5f0u);
            }
            else
            {
                eax = rd32(sp0 - 0x5f0u);
                edx = t19;
    COW_AT(100b280a)
                wr32(sp0 - 0x608u, 0u);
                t20 = rd32(sp0 - 0x5ecu);
                wr32(sp0 - 0x60cu, t20);
                g->eax = eax;
                g->esp = sp0 - 0x604u;
                t21 = cow_fastcall(g, COW_IMG(0x1014e0f0u), rd32(COW_IMG(0x1047d3e8u)), edx, 2, t20, 0u);
                eax = t21;
            }
        }
    }
    else
    {
    COW_AT(100b27d0)
        wr32(sp0 - 0x608u, sp0 - 0x5dcu);
        g->eax = sp0 - 0x5dcu;
        g->esp = sp0 - 0x604u;
        t18 = cow_thiscall(g, COW_IMG(0x1014df50u), rd32(COW_IMG(0x1047d3e8u)), 1, sp0 - 0x5dcu);
        eax = t18;
    }
    goto L_100b281c;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100b25f0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100b2603u:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x5fcu);
        in_ebp = rd32(sp0 - 0x5f8u);
        g->esp = sp0 - 0x5fcu;
        g->ebp = self;
        (void)sp0;
        return 1;
    }
    case 0x100b260cu:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x5fcu);
        in_ebp = rd32(sp0 - 0x5f8u);
        g->esp = sp0 - 0x5fcu;
        g->ebp = self;
        (void)sp0;
        return 1;
    }
    case 0x100b264fu:
    {
        uint32_t eax;
        uint32_t ecx;
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
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x5fcu);
        in_ebp = rd32(sp0 - 0x5f8u);
        g->esp = sp0 - 0x5fcu;
        (void)sp0;
        return 1;
    }
    case 0x100b2668u:
    {
        uint32_t eax;
        uint32_t ecx;
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
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x5fcu);
        in_ebp = rd32(sp0 - 0x5f8u);
        g->esp = sp0 - 0x5fcu;
        (void)sp0;
        return 1;
    }
    case 0x100b267du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x5fcu;
        (void)sp0;
        return 1;
    }
    case 0x100b268fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        in_edi = g->edi;
        g->esp = sp0 - 0x5fcu;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100b26d6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_5e4;
        uint32_t loc_5e8;
        uint32_t loc_5ec;
        uint32_t loc_5f0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_5f0 = rd32(sp0 - 0x5f0u);
        loc_5ec = rd32(sp0 - 0x5ecu);
        loc_5e8 = rd32(sp0 - 0x5e8u);
        loc_5e4 = rd32(sp0 - 0x5e4u);
        g->esp = sp0 - 0x604u;
        (void)sp0;
        return 1;
    }
    case 0x100b26dcu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_5e4;
        uint32_t loc_5e8;
        uint32_t loc_5ec;
        uint32_t loc_5f0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_5f0 = rd32(sp0 - 0x5f0u);
        loc_5ec = rd32(sp0 - 0x5ecu);
        loc_5e8 = rd32(sp0 - 0x5e8u);
        loc_5e4 = rd32(sp0 - 0x5e4u);
        g->esp = sp0 - 0x604u;
        (void)sp0;
        return 1;
    }
    case 0x100b26e3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_5e4;
        uint32_t loc_5e8;
        uint32_t loc_5ec;
        uint32_t loc_5f0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_5f0 = rd32(sp0 - 0x5f0u);
        loc_5ec = rd32(sp0 - 0x5ecu);
        loc_5e8 = rd32(sp0 - 0x5e8u);
        loc_5e4 = rd32(sp0 - 0x5e4u);
        g->esp = sp0 - 0x604u;
        (void)sp0;
        return 1;
    }
    case 0x100b26e6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_5e4;
        uint32_t loc_5e8;
        uint32_t loc_5ec;
        uint32_t loc_5f0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_5f0 = rd32(sp0 - 0x5f0u);
        loc_5ec = rd32(sp0 - 0x5ecu);
        loc_5e8 = rd32(sp0 - 0x5e8u);
        loc_5e4 = rd32(sp0 - 0x5e4u);
        g->esp = sp0 - 0x604u;
        (void)sp0;
        return 1;
    }
    case 0x100b26e7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_5e4;
        uint32_t loc_5e8;
        uint32_t loc_5ec;
        uint32_t loc_5f0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_5f0 = rd32(sp0 - 0x5f0u);
        loc_5ec = rd32(sp0 - 0x5ecu);
        loc_5e8 = rd32(sp0 - 0x5e8u);
        loc_5e4 = rd32(sp0 - 0x5e4u);
        g->esp = sp0 - 0x604u;
        (void)sp0;
        return 1;
    }
    case 0x100b26ecu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_5e4;
        uint32_t loc_5e8;
        uint32_t loc_5ec;
        uint32_t loc_5f0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_5f0 = rd32(sp0 - 0x5f0u);
        loc_5ec = rd32(sp0 - 0x5ecu);
        loc_5e8 = rd32(sp0 - 0x5e8u);
        loc_5e4 = rd32(sp0 - 0x5e4u);
        g->esp = sp0 - 0x604u;
        (void)sp0;
        return 1;
    }
    case 0x100b26f1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_5e4;
        uint32_t loc_5e8;
        uint32_t loc_5ec;
        uint32_t loc_5f0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_5f0 = rd32(sp0 - 0x5f0u);
        loc_5ec = rd32(sp0 - 0x5ecu);
        loc_5e8 = rd32(sp0 - 0x5e8u);
        loc_5e4 = rd32(sp0 - 0x5e4u);
        g->esp = sp0 - 0x604u;
        (void)sp0;
        return 1;
    }
    case 0x100b26feu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_5e4;
        uint32_t loc_5e8;
        uint32_t loc_5ec;
        uint32_t loc_5f0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_5f0 = rd32(sp0 - 0x5f0u);
        loc_5ec = rd32(sp0 - 0x5ecu);
        loc_5e8 = rd32(sp0 - 0x5e8u);
        loc_5e4 = rd32(sp0 - 0x5e4u);
        g->esp = sp0 - 0x604u;
        (void)sp0;
        return 1;
    }
    case 0x100b270du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_5e4;
        uint32_t loc_5e8;
        uint32_t loc_5ec;
        uint32_t loc_5f0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_5f0 = rd32(sp0 - 0x5f0u);
        loc_5ec = rd32(sp0 - 0x5ecu);
        loc_5e8 = rd32(sp0 - 0x5e8u);
        loc_5e4 = rd32(sp0 - 0x5e4u);
        g->esp = sp0 - 0x604u;
        (void)sp0;
        return 1;
    }
    case 0x100b2714u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_5e4;
        uint32_t loc_5e8;
        uint32_t loc_5ec;
        uint32_t loc_5f0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_5f0 = rd32(sp0 - 0x5f0u);
        loc_5ec = rd32(sp0 - 0x5ecu);
        loc_5e8 = rd32(sp0 - 0x5e8u);
        loc_5e4 = rd32(sp0 - 0x5e4u);
        g->esp = sp0 - 0x604u;
        (void)sp0;
        return 1;
    }
    case 0x100b272au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_5e4;
        uint32_t loc_5e8;
        uint32_t loc_5ec;
        uint32_t loc_5f0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_5f0 = rd32(sp0 - 0x5f0u);
        loc_5ec = rd32(sp0 - 0x5ecu);
        loc_5e8 = rd32(sp0 - 0x5e8u);
        loc_5e4 = rd32(sp0 - 0x5e4u);
        g->esp = sp0 - 0x604u;
        (void)sp0;
        return 1;
    }
    case 0x100b2731u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_5e4;
        uint32_t loc_5e8;
        uint32_t loc_5ec;
        uint32_t loc_5f0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_5f0 = rd32(sp0 - 0x5f0u);
        loc_5ec = rd32(sp0 - 0x5ecu);
        loc_5e8 = rd32(sp0 - 0x5e8u);
        loc_5e4 = rd32(sp0 - 0x5e4u);
        g->esp = sp0 - 0x604u;
        (void)sp0;
        return 1;
    }
    case 0x100b2752u:
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
        g->esp = sp0 - 0x604u;
        wr32(sp0 - 0x60cu, sp0 - 0x5dcu);
        (void)sp0;
        return 1;
    }
    case 0x100b2764u:
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
        g->esp = sp0 - 0x604u;
        (void)sp0;
        return 1;
    }
    case 0x100b2768u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_5e4;
        uint32_t loc_5e8;
        uint32_t loc_5ec;
        uint32_t loc_5f0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_5f0 = rd32(sp0 - 0x5f0u);
        loc_5ec = rd32(sp0 - 0x5ecu);
        loc_5e8 = rd32(sp0 - 0x5e8u);
        loc_5e4 = rd32(sp0 - 0x5e4u);
        g->esp = sp0 - 0x604u;
        (void)sp0;
        return 1;
    }
    case 0x100b278du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_5e4;
        uint32_t loc_5e8;
        uint32_t loc_5ec;
        uint32_t loc_5f0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_5f0 = rd32(sp0 - 0x5f0u);
        loc_5ec = rd32(sp0 - 0x5ecu);
        loc_5e8 = rd32(sp0 - 0x5e8u);
        loc_5e4 = rd32(sp0 - 0x5e4u);
        g->esp = sp0 - 0x604u;
        (void)sp0;
        return 1;
    }
    case 0x100b2795u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_5e4;
        uint32_t loc_5e8;
        uint32_t loc_5ec;
        uint32_t loc_5f0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_5f0 = rd32(sp0 - 0x5f0u);
        loc_5ec = rd32(sp0 - 0x5ecu);
        loc_5e8 = rd32(sp0 - 0x5e8u);
        loc_5e4 = rd32(sp0 - 0x5e4u);
        g->esp = sp0 - 0x604u;
        (void)sp0;
        return 1;
    }
    case 0x100b27a2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_5e4;
        uint32_t loc_5e8;
        uint32_t loc_5ec;
        uint32_t loc_5f0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_5f0 = rd32(sp0 - 0x5f0u);
        loc_5ec = rd32(sp0 - 0x5ecu);
        loc_5e8 = rd32(sp0 - 0x5e8u);
        loc_5e4 = rd32(sp0 - 0x5e4u);
        g->esp = sp0 - 0x604u;
        (void)sp0;
        return 1;
    }
    case 0x100b27b1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_5e4;
        uint32_t loc_5e8;
        uint32_t loc_5ec;
        uint32_t loc_5f0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_5f0 = rd32(sp0 - 0x5f0u);
        loc_5ec = rd32(sp0 - 0x5ecu);
        loc_5e8 = rd32(sp0 - 0x5e8u);
        loc_5e4 = rd32(sp0 - 0x5e4u);
        g->esp = sp0 - 0x604u;
        (void)sp0;
        return 1;
    }
    case 0x100b27b9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_5e4;
        uint32_t loc_5e8;
        uint32_t loc_5ec;
        uint32_t loc_5f0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_5f0 = rd32(sp0 - 0x5f0u);
        loc_5ec = rd32(sp0 - 0x5ecu);
        loc_5e8 = rd32(sp0 - 0x5e8u);
        loc_5e4 = rd32(sp0 - 0x5e4u);
        g->esp = sp0 - 0x604u;
        (void)sp0;
        return 1;
    }
    case 0x100b27c1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_5e4;
        uint32_t loc_5e8;
        uint32_t loc_5ec;
        uint32_t loc_5f0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_5f0 = rd32(sp0 - 0x5f0u);
        loc_5ec = rd32(sp0 - 0x5ecu);
        loc_5e8 = rd32(sp0 - 0x5e8u);
        loc_5e4 = rd32(sp0 - 0x5e4u);
        g->esp = sp0 - 0x604u;
        (void)sp0;
        return 1;
    }
    case 0x100b27c9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_5e4;
        uint32_t loc_5e8;
        uint32_t loc_5ec;
        uint32_t loc_5f0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_5f0 = rd32(sp0 - 0x5f0u);
        loc_5ec = rd32(sp0 - 0x5ecu);
        loc_5e8 = rd32(sp0 - 0x5e8u);
        loc_5e4 = rd32(sp0 - 0x5e4u);
        g->esp = sp0 - 0x604u;
        (void)sp0;
        return 1;
    }
    case 0x100b27d0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_5e4;
        uint32_t loc_5e8;
        uint32_t loc_5ec;
        uint32_t loc_5f0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_5f0 = rd32(sp0 - 0x5f0u);
        loc_5ec = rd32(sp0 - 0x5ecu);
        loc_5e8 = rd32(sp0 - 0x5e8u);
        loc_5e4 = rd32(sp0 - 0x5e4u);
        g->esp = sp0 - 0x604u;
        (void)sp0;
        return 1;
    }
    case 0x100b27e2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_5e4;
        uint32_t loc_5e8;
        uint32_t loc_5ec;
        uint32_t loc_5f0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_5f0 = rd32(sp0 - 0x5f0u);
        loc_5ec = rd32(sp0 - 0x5ecu);
        loc_5e8 = rd32(sp0 - 0x5e8u);
        loc_5e4 = rd32(sp0 - 0x5e4u);
        g->esp = sp0 - 0x604u;
        (void)sp0;
        return 1;
    }
    case 0x100b27e9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_5e4;
        uint32_t loc_5e8;
        uint32_t loc_5ec;
        uint32_t loc_5f0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_5f0 = rd32(sp0 - 0x5f0u);
        loc_5ec = rd32(sp0 - 0x5ecu);
        loc_5e8 = rd32(sp0 - 0x5e8u);
        loc_5e4 = rd32(sp0 - 0x5e4u);
        g->esp = sp0 - 0x604u;
        (void)sp0;
        return 1;
    }
    case 0x100b280au:
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
        g->esp = sp0 - 0x604u;
        wr32(sp0 - 0x60cu, sp0 - 0x5dcu);
        (void)sp0;
        return 1;
    }
    case 0x100b281cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_5e4;
        uint32_t loc_5e8;
        uint32_t loc_5ec;
        uint32_t loc_5f0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_5f0 = rd32(sp0 - 0x5f0u);
        loc_5ec = rd32(sp0 - 0x5ecu);
        loc_5e8 = rd32(sp0 - 0x5e8u);
        loc_5e4 = rd32(sp0 - 0x5e4u);
        g->esp = sp0 - 0x604u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100b25f0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100b25f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
