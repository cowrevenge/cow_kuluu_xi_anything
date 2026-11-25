/* f_0x102c4adb - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102c4adb(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_308;
    uint32_t loc_30c;
    uint32_t loc_310;
    uint32_t loc_314;
    uint32_t loc_318;
    uint32_t loc_31c;
    uint32_t loc_4;
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
    uint32_t t4;
    uint32_t t5;
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
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 812u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102c4af1u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x310u); in_esi = rd32(sp0 - 0x30cu); in_ebx = rd32(sp0 - 0x308u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x308u); g->edi = rd32(sp0 - 0x310u); g->esi = rd32(sp0 - 0x30cu); goto E_102c4af1;
    case 0x102c4af8u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x310u); in_esi = rd32(sp0 - 0x30cu); in_ebx = rd32(sp0 - 0x308u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x308u); g->edi = rd32(sp0 - 0x310u); g->esi = rd32(sp0 - 0x30cu); goto E_102c4af8;
    case 0x102c4afcu: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x310u); in_esi = rd32(sp0 - 0x30cu); in_ebx = rd32(sp0 - 0x308u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x308u); g->edi = rd32(sp0 - 0x310u); g->esi = rd32(sp0 - 0x30cu); goto E_102c4afc;
    case 0x102c4b01u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_314 = rd32(sp0 - 0x314u); loc_310 = rd32(sp0 - 0x310u); loc_30c = rd32(sp0 - 0x30cu); loc_308 = rd32(sp0 - 0x308u); loc_4 = rd32(sp0 - 4u); goto E_102c4b01;
    case 0x102c4b07u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102c4b07;
    case 0x102c4b0au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_31c = rd32(sp0 - 0x31cu); goto E_102c4b0a;
    case 0x102c4b10u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102c4b10;
    case 0x102c4b18u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x310u); in_esi = rd32(sp0 - 0x30cu); in_ebx = rd32(sp0 - 0x308u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x308u); g->edi = rd32(sp0 - 0x310u); g->esi = rd32(sp0 - 0x30cu); goto E_102c4b18;
    case 0x102c4b1cu: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x310u); in_esi = rd32(sp0 - 0x30cu); in_ebx = rd32(sp0 - 0x308u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x308u); g->edi = rd32(sp0 - 0x310u); g->esi = rd32(sp0 - 0x30cu); goto E_102c4b1c;
    case 0x102c4b21u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_314 = rd32(sp0 - 0x314u); in_edi = rd32(sp0 - 0x310u); in_esi = rd32(sp0 - 0x30cu); in_ebx = rd32(sp0 - 0x308u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x308u); g->edi = rd32(sp0 - 0x310u); g->esi = rd32(sp0 - 0x30cu); goto E_102c4b21;
    case 0x102c4b27u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102c4b27;
    case 0x102c4b29u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_310 = rd32(sp0 - 0x310u); loc_30c = rd32(sp0 - 0x30cu); loc_308 = rd32(sp0 - 0x308u); loc_4 = rd32(sp0 - 4u); goto E_102c4b29;
    case 0x102c4b38u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102c4b38;
    case 0x102c4b3fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102c4b3f;
    case 0x102c4b4au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102c4b4a;
    case 0x102c4b57u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_314 = rd32(sp0 - 0x314u); goto E_102c4b57;
    case 0x102c4b62u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_318 = rd32(sp0 - 0x318u); goto E_102c4b62;
    case 0x102c4b67u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102c4b67;
    case 0x102c4b6au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_318 = rd32(sp0 - 0x318u); goto E_102c4b6a;
    case 0x102c4b6fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102c4b6f;
    case 0x102c4b71u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_314 = rd32(sp0 - 0x314u); goto E_102c4b71;
    case 0x102c4b7fu: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_314 = rd32(sp0 - 0x314u); goto E_102c4b7f;
    case 0x102c4b88u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_318 = rd32(sp0 - 0x318u); loc_314 = rd32(sp0 - 0x314u); goto E_102c4b88;
    case 0x102c4b94u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_314 = rd32(sp0 - 0x314u); goto E_102c4b94;
    case 0x102c4bb0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_318 = rd32(sp0 - 0x318u); loc_314 = rd32(sp0 - 0x314u); goto E_102c4bb0;
    case 0x102c4bb8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_314 = rd32(sp0 - 0x314u); goto E_102c4bb8;
    case 0x102c4bcau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102c4bca;
    case 0x102c4bd6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102c4bd6;
    case 0x102c4bdau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102c4bda;
    case 0x102c4be0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102c4be0;
    case 0x102c4bebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102c4beb;
    case 0x102c4bf6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102c4bf6;
    case 0x102c4bfbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102c4bfb;
    case 0x102c4c04u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102c4c04;
    case 0x102c4c0fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102c4c0f;
    case 0x102c4c15u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102c4c15;
    default: break;
    }
#endif

    COW_AT(102c4adb)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x308u, in_ebx);
    wr32(sp0 - 0x30cu, in_esi);
    wr32(sp0 - 0x310u, in_edi);
    if (rd32(rd32(sp0 + 4u) + 0x68u) & 1u)
    {
        eax = rd32(rd32(sp0 + 4u) + 0x68u);
        esi = rd32(sp0 + 4u);
        goto L_102c4af8;
    }
    eax = rd32(rd32(sp0 + 4u) + 0x68u);
    esi = rd32(sp0 + 4u);
    COW_AT(102c4af1)
    wr32(sp0 - 0x314u, COW_IMG(0x103c88e8u));
    loc_314 = COW_IMG(0x103c88e8u);
L_102c4b21: ;
    COW_AT(102c4b21)
    wr32(sp0 - 0x318u, esi);
    g->eax = eax;
    g->esp = sp0 - 0x308u;
    t1 = cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, in_edx, 1, 4, esi, loc_314, in_edi, in_esi);
    t2 = g->edx;
    eax = t1;
    edx = t2;
    COW_AT(102c4b27)
    ecx = rd32(sp0 - 0x314u);
    loc_4 = rd32(sp0 - 4u);
    loc_308 = rd32(sp0 - 0x308u);
    loc_30c = rd32(sp0 - 0x30cu);
    loc_310 = rd32(sp0 - 0x310u);
L_102c4b29: ;
    COW_AT(102c4b29)
    t3 = rd32(esi + 0x68u);
    t4 = rd8(esi + 0x126u);
    wr32(esi + 0x68u, t3 | 2u);
    if ((t4 & 2u) != 0u)
    {
        ecx = (ecx & 0xffffff00u) | t4;
        goto L_102c4b3f;
    }
    ecx = (ecx & 0xffffff00u) | t4;
    COW_AT(102c4b38)
    wr32(sp0 - 0x314u, COW_IMG(0x103c8890u));
    loc_4 = rd32(sp0 - 4u);
    loc_308 = rd32(sp0 - 0x308u);
    loc_30c = rd32(sp0 - 0x30cu);
    loc_310 = rd32(sp0 - 0x310u);
    loc_314 = COW_IMG(0x103c8890u);
L_102c4b01: ;
    COW_AT(102c4b01)
    wr32(sp0 - 0x318u, esi);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x310u;
    t5 = cow_cdecl(g, COW_IMG(0x102bca0au), 2, esi, loc_314);
    t6 = g->ecx;
    t7 = g->edx;
    eax = t5;
    ecx = t6;
    edx = t7;
    COW_AT(102c4b07)
    t8 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x31cu, t8);
    loc_31c = t8;
L_102c4b0a: ;
    COW_AT(102c4b0a)
    wr32(sp0 - 0x320u, esi);
    g->esp = sp0 - 0x30cu;
    cow_call_regs(g, COW_IMG(0x102c45b9u), g->eax, g->ecx, edx, 1, 5, esi, loc_31c, rd32(sp0 - 0x318u), rd32(sp0 - 0x314u), rd32(sp0 - 0x310u));
    COW_AT(102c4b10)
L_102c4c15: ;
    COW_AT(102c4c15)
    g->ebx = rd32(sp0 - 0x308u);
    g->esi = rd32(sp0 - 0x30cu);
    g->edi = rd32(sp0 - 0x310u);
    g->ebp = rd32(sp0 - 4u);
    return;
L_102c4af8: ;
    COW_AT(102c4af8)
    if ((eax & 4u) == 0u) goto L_102c4b18;
    COW_AT(102c4afc)
    wr32(sp0 - 0x314u, COW_IMG(0x103c88d0u));
    ecx = self;
    edx = in_edx;
    loc_4 = in_ebp;
    loc_308 = in_ebx;
    loc_30c = in_esi;
    loc_310 = in_edi;
    loc_314 = COW_IMG(0x103c88d0u);
    goto L_102c4b01;
L_102c4b18: ;
    COW_AT(102c4b18)
    if ((eax & 2u) == 0u)
    {
        ecx = self;
        edx = in_edx;
        loc_4 = in_ebp;
        loc_308 = in_ebx;
        loc_30c = in_esi;
        loc_310 = in_edi;
        goto L_102c4b29;
    }
    COW_AT(102c4b1c)
    wr32(sp0 - 0x314u, COW_IMG(0x103c88b8u));
    loc_314 = COW_IMG(0x103c88b8u);
    goto L_102c4b21;
L_102c4b3f: ;
    COW_AT(102c4b3f)
    if (rd32(sp0 + 0xcu) > 0x300u)
    {
        edi = rd32(sp0 + 0xcu);
        goto L_102c4b57;
    }
    edi = rd32(sp0 + 0xcu);
    COW_AT(102c4b4a)
    wr32(sp0 - 0x314u, 3u);
    t9 = cow_divu(g, edi, 3u);
    t10 = cow_modu(g, edi, 3u);
    if (t10 == 0u) goto L_102c4b71;
    eax = t9;
    edx = t10;
L_102c4b57: ;
    COW_AT(102c4b57)
    wr32(sp0 - 0x314u, COW_IMG(0x103c8878u));
    wr32(sp0 - 0x318u, esi);
    if ((uint8_t)ecx == 3u)
    {
        loc_318 = esi;
        goto L_102c4b6a;
    }
    loc_318 = esi;
    COW_AT(102c4b62)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x310u;
    t11 = cow_cdecl(g, COW_IMG(0x102bca0au), 2, loc_318, COW_IMG(0x103c8878u));
    t12 = g->ecx;
    t13 = g->edx;
    eax = t11;
    ecx = t12;
    edx = t13;
    COW_AT(102c4b67)
    wr32(sp0 - 0x31cu, edi);
    loc_31c = edi;
    goto L_102c4b0a;
L_102c4b6a: ;
    COW_AT(102c4b6a)
    g->esp = sp0 - 0x308u;
    cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, edx, 1, 4, loc_318, COW_IMG(0x103c8878u), rd32(sp0 - 0x310u), rd32(sp0 - 0x30cu));
    COW_AT(102c4b6f)
L_102c4b71: ;
    COW_AT(102c4b71)
    wr32(sp0 - 0x314u, 3u);
    t14 = cow_divs(g, edi, 3u);
    t15 = cow_mods(g, edi, 3u);
    if ((int32_t)t14 <= 0)
    {
        eax = t14;
        ecx = 3u;
        edx = t15;
        ebx = t14;
    }
    else
    {
        edx = t15;
        ebx = t14;
    COW_AT(102c4b7f)
        wr32(sp0 + 4u, ebx);
        ecx = 3u;
        edi = sp0 - 0x302u;
L_102c4b88: ;
    COW_AT(102c4b88)
        wr32(sp0 - 0x314u, 3u);
        wr32(sp0 - 0x318u, sp0 + 0xcu);
        wr32(sp0 - 0x31cu, esi);
        g->eax = sp0 + 0xcu;
        g->ecx = ecx;
        g->esp = sp0 - 0x308u;
        t16 = cow_call_regs(g, COW_IMG(0x102c4595u), g->eax, g->ecx, edx, 1, 5, esi, sp0 + 0xcu, 3u, rd32(sp0 - 0x310u), rd32(sp0 - 0x30cu));
        t17 = g->ecx;
        t18 = g->edx;
        eax = t16;
        ecx = t17;
        edx = t18;
    COW_AT(102c4b94)
        t19 = rd8(sp0 + 0xcu);
        wr8(edi - 2u, (uint8_t)t19);
        t20 = rd8(sp0 + 0xdu);
        wr8(edi - 1u, (uint8_t)t20);
        t21 = rd8(sp0 + 0xeu);
        wr8(edi, (uint8_t)t21);
        t22 = rd32(sp0 + 4u);
        wr32(sp0 + 4u, t22 - 1u);
        if (t22 != 1u)
        {
            edi = edi + 3u;
            goto L_102c4b88;
        }
        eax = ((eax | t19 | t20) & 0xffffff00u) | t21;
    }
    COW_AT(102c4bb0)
    wr32(sp0 - 0x314u, 0u);
    wr32(sp0 - 0x318u, esi);
    g->ecx = ecx;
    g->esp = sp0 - 0x304u;
    cow_call_regs(g, COW_IMG(0x102c45b9u), g->eax, g->ecx, edx, 1, 5, esi, 0u, rd32(sp0 - 0x310u), rd32(sp0 - 0x30cu), rd32(sp0 - 0x308u));
    t23 = g->ecx;
    t24 = g->edx;
    ecx = t23;
    edx = t24;
    COW_AT(102c4bb8)
    wr32(sp0 - 0x31cu, ebx);
    wr32(sp0 - 0x320u, sp0 - 0x304u);
    wr32(sp0 - 0x324u, arg2);
    wr32(sp0 - 0x328u, esi);
    g->eax = sp0 - 0x304u;
    g->esp = sp0 - 0x314u;
    t25 = cow_call_regs(g, COW_IMG(0x102c845au), g->eax, ecx, edx, 1, 5, esi, arg2, sp0 - 0x304u, ebx, rd32(sp0 - 0x318u));
    t26 = g->ecx;
    t27 = g->edx;
    eax = t25;
    ecx = t26;
    edx = t27;
    COW_AT(102c4bca)
    t28 = rd8(esi + 0x126u);
    if ((uint8_t)t28 == 3u)
    {
    COW_AT(102c4bd6)
        if (arg2 != 0u)
        {
    COW_AT(102c4bda)
            t29 = rd8(arg2 + 8u);
            if ((t29 & 0x10u) != 0u)
            {
    COW_AT(102c4be0)
                t30 = rd16(esi + 0x11au);
                if ((uint16_t)t30 > (uint16_t)ebx)
                {
                    edi = esi + 0x11au;
    COW_AT(102c4beb)
                    wr32(sp0 - 0x314u, COW_IMG(0x103c8850u));
                    wr32(sp0 - 0x318u, esi);
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x310u;
                    t31 = cow_cdecl(g, COW_IMG(0x102bca0au), 2, esi, COW_IMG(0x103c8850u));
                    t32 = g->edx;
                    eax = t31;
                    edx = t32;
    COW_AT(102c4bf6)
                    wr16(edi, (uint16_t)ebx);
                    ecx = rd32(sp0 - 0x314u);
                }
    COW_AT(102c4bfb)
                t33 = rd16(arg2 + 0x16u);
                if ((uint16_t)t33 > (uint16_t)ebx)
                {
    COW_AT(102c4c04)
                    wr32(sp0 - 0x314u, COW_IMG(0x103c8824u));
                    wr32(sp0 - 0x318u, esi);
                    g->esp = sp0 - 0x310u;
                    cow_cdecl(g, COW_IMG(0x102bca0au), 2, esi, COW_IMG(0x103c8824u));
    COW_AT(102c4c0f)
                    wr16(arg2 + 0x16u, (uint16_t)ebx);
                }
            }
        }
    }
    goto L_102c4c15;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102c4adb(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102c4af1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
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
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x310u);
        in_esi = rd32(sp0 - 0x30cu);
        in_ebx = rd32(sp0 - 0x308u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x310u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c4af8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
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
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x310u);
        in_esi = rd32(sp0 - 0x30cu);
        in_ebx = rd32(sp0 - 0x308u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x310u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c4afcu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
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
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x310u);
        in_esi = rd32(sp0 - 0x30cu);
        in_ebx = rd32(sp0 - 0x308u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x310u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c4b01u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_308;
        uint32_t loc_30c;
        uint32_t loc_310;
        uint32_t loc_314;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_314 = rd32(sp0 - 0x314u);
        loc_310 = rd32(sp0 - 0x310u);
        loc_30c = rd32(sp0 - 0x30cu);
        loc_308 = rd32(sp0 - 0x308u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x314u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c4b07u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x318u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c4b0au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_31c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_31c = rd32(sp0 - 0x31cu);
        g->esp = sp0 - 0x31cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c4b10u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x320u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c4b18u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
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
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x310u);
        in_esi = rd32(sp0 - 0x30cu);
        in_ebx = rd32(sp0 - 0x308u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x310u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c4b1cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
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
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x310u);
        in_esi = rd32(sp0 - 0x30cu);
        in_ebx = rd32(sp0 - 0x308u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x310u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c4b21u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_314;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_314 = rd32(sp0 - 0x314u);
        in_edi = rd32(sp0 - 0x310u);
        in_esi = rd32(sp0 - 0x30cu);
        in_ebx = rd32(sp0 - 0x308u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x314u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c4b27u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x318u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c4b29u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_308;
        uint32_t loc_30c;
        uint32_t loc_310;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_310 = rd32(sp0 - 0x310u);
        loc_30c = rd32(sp0 - 0x30cu);
        loc_308 = rd32(sp0 - 0x308u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x310u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c4b38u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x310u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c4b3fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x310u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c4b4au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x310u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c4b57u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_314;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_314 = rd32(sp0 - 0x314u);
        g->esp = sp0 - 0x310u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c4b62u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_318;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_318 = rd32(sp0 - 0x318u);
        g->esp = sp0 - 0x318u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x314u, COW_IMG(0x103c8878u));
        (void)sp0;
        return 1;
    }
    case 0x102c4b67u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x318u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c4b6au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_318;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_318 = rd32(sp0 - 0x318u);
        g->esp = sp0 - 0x318u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x314u, COW_IMG(0x103c8878u));
        (void)sp0;
        return 1;
    }
    case 0x102c4b6fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x318u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c4b71u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_314;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_314 = rd32(sp0 - 0x314u);
        g->esp = sp0 - 0x310u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c4b7fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_314;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_314 = rd32(sp0 - 0x314u);
        g->esp = sp0 - 0x310u;
        g->ecx = 3u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c4b88u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_314;
        uint32_t loc_318;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_318 = rd32(sp0 - 0x318u);
        loc_314 = rd32(sp0 - 0x314u);
        g->esp = sp0 - 0x310u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c4b94u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_314;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_314 = rd32(sp0 - 0x314u);
        g->esp = sp0 - 0x31cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x318u, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x102c4bb0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_314;
        uint32_t loc_318;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_318 = rd32(sp0 - 0x318u);
        loc_314 = rd32(sp0 - 0x314u);
        g->esp = sp0 - 0x310u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c4bb8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_314;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_314 = rd32(sp0 - 0x314u);
        g->esp = sp0 - 0x318u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c4bcau:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->esp = sp0 - 0x328u;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        wr32(sp0 - 0x320u, sp0 - 0x304u);
        (void)sp0;
        return 1;
    }
    case 0x102c4bd6u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->esp = sp0 - 0x310u;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        wr32(sp0 - 0x320u, sp0 - 0x304u);
        (void)sp0;
        return 1;
    }
    case 0x102c4bdau:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->esp = sp0 - 0x310u;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        wr32(sp0 - 0x320u, sp0 - 0x304u);
        (void)sp0;
        return 1;
    }
    case 0x102c4be0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x310u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x320u, sp0 - 0x304u);
        (void)sp0;
        return 1;
    }
    case 0x102c4bebu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x310u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x320u, sp0 - 0x304u);
        (void)sp0;
        return 1;
    }
    case 0x102c4bf6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x318u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x320u, sp0 - 0x304u);
        wr32(sp0 - 0x314u, COW_IMG(0x103c8850u));
        (void)sp0;
        return 1;
    }
    case 0x102c4bfbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x310u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c4c04u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->esp = sp0 - 0x310u;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102c4c0fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->esp = sp0 - 0x318u;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        wr32(sp0 - 0x314u, COW_IMG(0x103c8824u));
        (void)sp0;
        return 1;
    }
    case 0x102c4c15u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x310u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102c4adb(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102c4adb(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
