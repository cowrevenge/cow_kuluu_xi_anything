/* f_0x1007b390 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1007b390(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 40u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1007b3a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_esi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x14u); goto E_1007b3a9;
    case 0x1007b3c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1007b3c7;
    case 0x1007b3d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1007b3d3;
    case 0x1007b3ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1007b3ec;
    case 0x1007b401u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1007b401;
    case 0x1007b41du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1007b41d;
    case 0x1007b429u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1007b429;
    case 0x1007b440u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1007b440;
    case 0x1007b44fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1007b44f;
    case 0x1007b45fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1007b45f;
    case 0x1007b46bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1007b46b;
    case 0x1007b48fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1007b48f;
    case 0x1007b4a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1007b4a9;
    case 0x1007b4c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1007b4c4;
    case 0x1007b4dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1007b4db;
    case 0x1007b4e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1007b4e4;
    case 0x1007b4edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1007b4ed;
    case 0x1007b4f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1007b4f4;
    case 0x1007b4fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1007b4fa;
    case 0x1007b501u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1007b501;
    case 0x1007b51cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1007b51c;
    case 0x1007b524u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1007b524;
    case 0x1007b53bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1007b53b;
    case 0x1007b547u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1007b547;
    case 0x1007b557u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_1007b557;
    default: break;
    }
#endif

    COW_AT(1007b390)
    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0x46u);
    g->esp = sp0 - 0x14u;
    t1 = cow_call_regs(g, COW_IMG(0x101cc0d0u), in_eax, g->ecx, in_edx, 1, 2, 0x46u, 0u);
    t2 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        edx = t2;
        loc_10 = in_ebx;
        loc_14 = in_esi;
        goto L_1007b557;
    }
    edx = t2;
    COW_AT(1007b3a9)
    t3 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    wr32(sp0 - 0x18u, t3);
    g->ecx = rd32(COW_IMG(0x105781a8u));
    g->edx = edx;
    t4 = rd32(COW_IMG(0x103551e0u));
    t5 = rd32(COW_IMG(0x105781a8u));
    g->esp = sp0 - 0x14u;
    t6 = cow_call_regs(g, COW_IMG(0x10132670u), t4, g->ecx, g->edx, 0, 1, t3);
    t7 = g->ecx;
    t8 = g->edx;
    wr8(sp0 - 4u, (uint8_t)t6);
    if ((int8_t)t6 >= 0)
    {
        eax = t6;
        ecx = t7;
        edx = t8;
        ebx = (in_ebx & 0xffffff00u) | (uint8_t)t6;
        goto L_1007b3d3;
    }
    edx = t8;
    COW_AT(1007b3c7)
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x14u);
    g->edx = edx;
    return -arg3;
L_1007b3d3: ;
    COW_AT(1007b3d3)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t9 = cow_stdcall(g, COW_IMG(0x100e48d0u), 0);
    t10 = g->edx;
    t11 = rd32(COW_IMG(0x103551e0u));
    wr8(sp0 - 9u, (uint8_t)t9 >= 1u);
    if (rd32(t11 + 8u) != 0u)
    {
        ecx = t11;
        edx = t10;
        goto L_1007b440;
    }
    eax = rd32(t11 + 8u);
    ecx = t11;
    COW_AT(1007b3ec)
    t12 = rd32(sp0 - 4u);
    wr32(sp0 - 0x18u, t12);
    g->esp = sp0 - 0x14u;
    t13 = cow_call_regs(g, COW_IMG(0x10132270u), eax, g->ecx, t12, 1, 1, t12);
    t14 = g->edx;
    if ((int32_t)t13 < 0)
    {
        edx = t14;
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        goto L_1007b557;
    }
    eax = t13;
    edx = t14;
    COW_AT(1007b401)
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, eax);
    wr32(sp0 - 0x20u, (uint32_t)(int8_t)ebx);
    wr32(sp0 - 0x24u, 0u);
    g->ebx = ebx;
    g->eax = (uint32_t)(int8_t)ebx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t15 = cow_stdcall(g, COW_IMG(0x101327d0u), 4, 0u, (uint32_t)(int8_t)ebx, eax, 1u);
    t16 = g->edx;
    if ((uint8_t)t15 == 0u)
    {
        eax = t15;
        edx = t16;
        goto L_1007b547;
    }
    eax = t15;
    edx = t16;
    COW_AT(1007b41d)
    if (rd8(sp0 - 9u) != 0u)
    {
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        goto L_1007b557;
    }
    eax = (eax & 0xffffff00u) | rd8(sp0 - 9u);
    COW_AT(1007b429)
    wr32(sp0 - 0x18u, 0x44u);
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x10129de0u), rd32(COW_IMG(0x10578158u)), 1, 0x44u);
    t17 = g->edx;
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x14u);
    g->edx = t17;
    return arg3;
L_1007b440: ;
    COW_AT(1007b440)
    wr32(sp0 - 8u, 0u);
    if (rd32(ecx + 0xcu) == 0u)
    {
        eax = rd32(ecx + 0xcu);
        goto L_1007b4a9;
    }
    eax = rd32(ecx + 0xcu);
    COW_AT(1007b44f)
    wr32(sp0 - 0x18u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t18 = cow_stdcall(g, COW_IMG(0x101326d0u), 1, eax);
    t19 = g->edx;
    if ((int32_t)t18 >= 0)
    {
        eax = t18;
        goto L_1007b46b;
    }
    edx = t19;
    COW_AT(1007b45f)
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x14u);
    g->edx = edx;
    return -arg3;
L_1007b46b: ;
    COW_AT(1007b46b)
    wr32(sp0 - 8u, eax);
    wr32(sp0 - 0x18u, eax);
    t20 = rd32(rd32(COW_IMG(0x103551e0u)) + 8u);
    wr32(sp0 - 0x1cu, t20);
    t21 = rd32(sp0 - 4u);
    wr32(sp0 - 0x20u, t21);
    g->edx = t20;
    g->esp = sp0 - 0x14u;
    t22 = cow_call_regs(g, COW_IMG(0x1007b1c0u), t21, g->ecx, g->edx, 1, 3, t21, t20, eax);
    t23 = g->edx;
    if ((uint8_t)t22 != 0u)
    {
        edx = t23;
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        goto L_1007b557;
    }
    COW_AT(1007b48f)
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, 1u);
    t24 = rd32(rd32(COW_IMG(0x103551e0u)) + 8u);
    wr32(sp0 - 0x20u, t24);
    t25 = rd32(sp0 - 8u);
    wr32(sp0 - 0x24u, t25);
    g->ebx = ebx;
    g->eax = t25;
    g->edx = t24;
    g->esp = sp0 - 0x14u;
    t26 = cow_cdecl(g, COW_IMG(0x101f0060u), 4, t25, t24, 1u, 1u);
    t27 = g->edx;
    eax = t26;
    edx = t27;
L_1007b4db: ;
    COW_AT(1007b4db)
    if (eax == 0u)
    {
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        goto L_1007b557;
    }
    esi = eax;
    COW_AT(1007b4e4)
    if (rd32(COW_IMG(0x1057817cu)) == 0u)
    {
        eax = rd32(COW_IMG(0x1057817cu));
        goto L_1007b4fa;
    }
    eax = rd32(COW_IMG(0x1057817cu));
    COW_AT(1007b4ed)
    if (rd32(eax + 8u) == 0u) goto L_1007b4fa;
    COW_AT(1007b4f4)
    if (rd32(eax + 0x20u) == 1u) goto L_1007b547;
L_1007b4fa: ;
    COW_AT(1007b4fa)
    if (rd8(esi + 8u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi + 8u);
        goto L_1007b547;
    }
    COW_AT(1007b501)
    wr32(sp0 - 0x18u, 1u);
    t36 = rd32(sp0 - 8u);
    wr32(sp0 - 0x1cu, t36);
    wr32(sp0 - 0x20u, (uint32_t)(int8_t)ebx);
    wr32(sp0 - 0x24u, esi);
    g->ebx = ebx;
    g->eax = t36;
    g->ecx = rd32(COW_IMG(0x105781a8u));
    g->edx = edx;
    t37 = rd32(COW_IMG(0x105781a8u));
    g->esp = sp0 - 0x14u;
    t38 = cow_stdcall(g, COW_IMG(0x101327d0u), 4, esi, (uint32_t)(int8_t)ebx, t36, 1u);
    t39 = g->ecx;
    t40 = g->edx;
    if ((uint8_t)t38 == 0u)
    {
        eax = t38;
        ecx = t39;
        edx = t40;
        goto L_1007b53b;
    }
    eax = t38;
    edx = t40;
    COW_AT(1007b51c)
    if (rd8(sp0 - 9u) != 0u)
    {
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        goto L_1007b557;
    }
    eax = (eax & 0xffffff00u) | rd8(sp0 - 9u);
    COW_AT(1007b524)
    wr32(sp0 - 0x18u, 0x43u);
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x10129de0u), rd32(COW_IMG(0x10578158u)), 1, 0x43u);
    t41 = g->edx;
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x14u);
    g->edx = t41;
    return arg3;
L_1007b4a9: ;
    COW_AT(1007b4a9)
    wr32(sp0 - 0x18u, 0xffffffffu);
    t28 = rd32(ecx + 8u);
    wr32(sp0 - 0x1cu, t28);
    t29 = rd32(sp0 - 4u);
    wr32(sp0 - 0x20u, t29);
    g->edx = t29;
    g->esp = sp0 - 0x14u;
    t30 = cow_call_regs(g, COW_IMG(0x1007b1c0u), eax, g->ecx, g->edx, 1, 3, t29, t28, 0xffffffffu);
    t31 = g->edx;
    if ((uint8_t)t30 != 0u)
    {
        edx = t31;
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        goto L_1007b557;
    }
    COW_AT(1007b4c4)
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, 1u);
    t32 = rd32(rd32(COW_IMG(0x103551e0u)) + 8u);
    wr32(sp0 - 0x20u, t32);
    wr32(sp0 - 0x24u, sp0 - 8u);
    g->eax = rd32(COW_IMG(0x103551e0u));
    g->edx = sp0 - 8u;
    t33 = rd32(COW_IMG(0x103551e0u));
    g->esp = sp0 - 0x14u;
    t34 = cow_thiscall_cdecl(g, COW_IMG(0x101efff0u), t32, 4, sp0 - 8u, t32, 1u, 1u);
    t35 = g->edx;
    eax = t34;
    edx = t35;
    goto L_1007b4db;
L_1007b53b: ;
    COW_AT(1007b53b)
    t42 = (edx & 0xffffff00u) | rd8(esi + 2u);
    wr32(sp0 - 0x18u, t42);
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t43 = cow_call_regs(g, COW_IMG(0x101f0240u), g->eax, g->ecx, t42, 1, 1, t42);
    t44 = g->edx;
    eax = t43;
    edx = t44;
L_1007b547: ;
    COW_AT(1007b547)
    wr32(sp0 - 0x18u, 0x8eu);
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0x8eu);
    t45 = g->edx;
    edx = t45;
    loc_10 = rd32(sp0 - 0x10u);
    loc_14 = rd32(sp0 - 0x14u);
L_1007b557: ;
    COW_AT(1007b557)
    g->ebx = loc_10;
    g->esi = loc_14;
    g->edx = edx;
    return arg3;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1007b390(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1007b3a9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x10u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1007b3c7u:
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
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1007b3d3u:
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
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1007b3ecu:
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
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1007b401u:
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
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1007b41du:
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
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1007b429u:
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
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1007b440u:
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
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1007b44fu:
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
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1007b45fu:
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
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1007b46bu:
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
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1007b48fu:
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
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1007b4a9u:
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
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1007b4c4u:
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
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1007b4dbu:
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
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1007b4e4u:
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
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1007b4edu:
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
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1007b4f4u:
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
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1007b4fau:
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
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1007b501u:
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
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1007b51cu:
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
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1007b524u:
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
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1007b53bu:
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
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1007b547u:
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
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1007b557u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1007b390(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1007b390(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
