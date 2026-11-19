/* f_0x100a3d00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100a3d00(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    cow_frame(g, sp0, 292u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100a3d11u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; goto E_100a3d11;
    case 0x100a3d16u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; goto E_100a3d16;
    case 0x100a3d1eu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; goto E_100a3d1e;
    case 0x100a3d2au: eax = g->eax; ecx = g->ecx; in_edx = g->edx; goto E_100a3d2a;
    case 0x100a3d37u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; goto E_100a3d37;
    case 0x100a3d4bu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100a3d4b;
    case 0x100a3d55u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100a3d55;
    case 0x100a3d5eu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100a3d5e;
    case 0x100a3dacu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; goto E_100a3dac;
    case 0x100a3e09u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100a3e09;
    case 0x100a3e3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100a3e3e;
    case 0x100a3e69u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; goto E_100a3e69;
    case 0x100a3e70u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; goto E_100a3e70;
    case 0x100a3e75u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; goto E_100a3e75;
    case 0x100a3e82u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100a3e82;
    case 0x100a3e89u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; goto E_100a3e89;
    case 0x100a3e92u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100a3e92;
    default: break;
    }
#endif

    COW_AT(100a3d00)
    eax = COW_IMG(0x10485bb4u);
    ecx = (self & 0xffffff00u) | rd8(COW_IMG(0x10487e48u));
L_100a3d11: ;
    COW_AT(100a3d11)
    if (rd8(eax) == 0u) goto L_100a3d1e;
    COW_AT(100a3d16)
    if ((uint8_t)ecx != 0u) goto L_100a3dac;
L_100a3d1e: ;
    COW_AT(100a3d1e)
    if ((int32_t)(eax + 0x140u) < (int32_t)COW_IMG(0x104860b4u))
    {
        eax = eax + 0x140u;
        goto L_100a3d11;
    }
    COW_AT(100a3d2a)
    if (rd32(COW_IMG(0x10487f0cu)) == 0u) goto L_100a3e69;
    eax = rd32(COW_IMG(0x10487f0cu));
    COW_AT(100a3d37)
    g->edx = in_edx;
    g->esp = sp0 - 0x100u;
    t14 = cow_call_regs(g, COW_IMG(0x1014e1c0u), eax, rd32(COW_IMG(0x10487f14u)), g->edx, 1, 0);
    t15 = g->edx;
    if ((uint16_t)t14 == 0u) goto L_100a3e92;
    eax = t14;
    edx = t15;
    COW_AT(100a3d4b)
    if ((uint16_t)eax == 0xffu) goto L_100a3e09;
    COW_AT(100a3d55)
    if ((int16_t)eax < 0) goto L_100a3e09;
    COW_AT(100a3d5e)
    t16 = rd32(COW_IMG(0x10485a90u) + (uint32_t)(int16_t)eax * 4u + rd32(COW_IMG(0x10487f10u)) * 0x140u);
    wr32(sp0 - 0x104u, t16);
    t17 = rd32(COW_IMG(0x10485a90u) + rd32(COW_IMG(0x10487f10u)) * 0x140u);
    wr32(sp0 - 0x108u, t17);
    g->ecx = t17;
    g->edx = t16;
    t18 = rd32(COW_IMG(0x10487f10u));
    g->esp = sp0 - 0x100u;
    t19 = cow_call_regs(g, COW_IMG(0x100a3ea0u), t18 * 0x140u, g->ecx, g->edx, 1, 2, t17, t16);
    t20 = g->ecx;
    t21 = g->edx;
    wr32(sp0 - 0x10cu, t19);
    wr32(sp0 - 0x110u, 0x86u);
    wr32(sp0 - 0x114u, 9u);
    g->ecx = t20;
    g->esp = sp0 - 0x10cu;
    t22 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x86u);
    t23 = g->ecx;
    wr32(sp0 - 0x110u, t22);
    wr32(sp0 - 0x114u, sp0 - 0x100u);
    g->edx = sp0 - 0x100u;
    g->esp = sp0 - 0x100u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, t22, rd32(sp0 - 0x10cu), rd32(sp0 - 0x108u), rd32(sp0 - 0x104u));
    t24 = g->edx;
    edx = t24;
L_100a3e3e: ;
    COW_AT(100a3e3e)
    wr32(sp0 - 0x104u, sp0 - 0x100u);
    wr32(sp0 - 0x108u, 0u);
    wr32(sp0 - 0x10cu, 3u);
    t33 = COW_IMG(0x10485a78u) + rd32(COW_IMG(0x10487f10u)) * 0x140u;
    wr32(sp0 - 0x110u, t33);
    g->ecx = t33;
    g->edx = edx;
    t34 = rd32(COW_IMG(0x10487f10u));
    g->esp = sp0 - 0xfcu;
    t35 = cow_call_regs(g, COW_IMG(0x100e3570u), t34, g->ecx, g->edx, 1, 5, t33, 3u, 0u, sp0 - 0x100u, rd32(sp0 - 0x100u));
    t36 = g->ecx;
    t37 = g->edx;
    g->esp = sp0;
    g->edx = t37;
    cow_tailcall(g, COW_IMG(0x100a3ed0u), t35, t36, t37);
    return;
L_100a3dac: ;
    COW_AT(100a3dac)
    t1 = rd32(COW_IMG(0x10485a90u) + rd32(COW_IMG(0x10487f10u)) * 0x140u);
    wr32(sp0 - 0x104u, t1);
    g->ecx = t1;
    g->edx = in_edx;
    t2 = rd32(COW_IMG(0x10487f10u));
    g->esp = sp0 - 0x100u;
    t3 = cow_call_regs(g, COW_IMG(0x100a3ea0u), t2 * 0x140u, g->ecx, g->edx, 1, 1, t1);
    t4 = g->ecx;
    t5 = g->edx;
    wr32(sp0 - 0x108u, t3);
    wr32(sp0 - 0x10cu, 0x84u);
    wr32(sp0 - 0x110u, 9u);
    g->ecx = t4;
    g->esp = sp0 - 0x108u;
    t6 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x84u);
    t7 = g->ecx;
    wr32(sp0 - 0x10cu, t6);
    wr32(sp0 - 0x110u, sp0 - 0x100u);
    g->edx = sp0 - 0x100u;
    g->esp = sp0 - 0xfcu;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, t6, rd32(sp0 - 0x108u), rd32(sp0 - 0x104u), rd32(sp0 - 0x100u));
    t8 = g->edx;
    wr32(sp0 - 0x114u, sp0 - 0x100u);
    wr32(sp0 - 0x118u, 0u);
    wr32(sp0 - 0x11cu, 3u);
    t9 = COW_IMG(0x10485a78u) + rd32(COW_IMG(0x10487f10u)) * 0x140u;
    wr32(sp0 - 0x120u, t9);
    g->ecx = t9;
    g->edx = t8;
    t10 = rd32(COW_IMG(0x10487f10u));
    g->esp = sp0 - 0x10cu;
    t11 = cow_call_regs(g, COW_IMG(0x100e3570u), t10, g->ecx, g->edx, 1, 5, t9, 3u, 0u, sp0 - 0x100u, sp0 - 0x100u);
    t12 = g->ecx;
    t13 = g->edx;
    g->esp = sp0;
    g->edx = t13;
    cow_tailcall(g, COW_IMG(0x100a3ed0u), t11, t12, t13);
    return;
L_100a3e09: ;
    COW_AT(100a3e09)
    t25 = rd32(COW_IMG(0x10485a90u) + rd32(COW_IMG(0x10487f10u)) * 0x140u);
    wr32(sp0 - 0x104u, t25);
    g->ecx = t25;
    g->edx = edx;
    t26 = rd32(COW_IMG(0x10487f10u));
    g->esp = sp0 - 0x100u;
    t27 = cow_call_regs(g, COW_IMG(0x100a3ea0u), t26 * 0x140u, g->ecx, g->edx, 1, 1, t25);
    t28 = g->ecx;
    t29 = g->edx;
    wr32(sp0 - 0x108u, t27);
    wr32(sp0 - 0x10cu, 0x85u);
    wr32(sp0 - 0x110u, 9u);
    g->ecx = t28;
    g->esp = sp0 - 0x108u;
    t30 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x85u);
    t31 = g->ecx;
    wr32(sp0 - 0x10cu, t30);
    wr32(sp0 - 0x110u, sp0 - 0x100u);
    g->edx = sp0 - 0x100u;
    g->esp = sp0 - 0xfcu;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, t30, rd32(sp0 - 0x108u), rd32(sp0 - 0x104u), rd32(sp0 - 0x100u));
    t32 = g->edx;
    edx = t32;
    goto L_100a3e3e;
L_100a3e69: ;
    COW_AT(100a3e69)
    eax = COW_IMG(0x10485bb4u);
    ecx = 0u;
L_100a3e70: ;
    COW_AT(100a3e70)
    if (rd8(eax) != 0u) goto L_100a3e89;
    COW_AT(100a3e75)
    if ((int32_t)(eax + 0x140u) < (int32_t)COW_IMG(0x104860b4u))
    {
        eax = eax + 0x140u;
        ecx = ecx + 1u;
        goto L_100a3e70;
    }
    COW_AT(100a3e82)
    return;
L_100a3e89: ;
    COW_AT(100a3e89)
    wr32(sp0 - 0x104u, ecx);
    g->esp = sp0 - 0xf8u;
    cow_cdecl(g, COW_IMG(0x100a3f10u), 3, ecx, rd32(sp0 - 0x100u), rd32(sp0 - 0xfcu));
L_100a3e92: ;
    COW_AT(100a3e92)
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100a3d00(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100a3d11u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        g->esp = sp0 - 0x100u;
        (void)sp0;
        return 1;
    }
    case 0x100a3d16u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        g->esp = sp0 - 0x100u;
        (void)sp0;
        return 1;
    }
    case 0x100a3d1eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        g->esp = sp0 - 0x100u;
        (void)sp0;
        return 1;
    }
    case 0x100a3d2au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        g->esp = sp0 - 0x100u;
        (void)sp0;
        return 1;
    }
    case 0x100a3d37u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        g->esp = sp0 - 0x100u;
        (void)sp0;
        return 1;
    }
    case 0x100a3d4bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x100u;
        (void)sp0;
        return 1;
    }
    case 0x100a3d55u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x100u;
        (void)sp0;
        return 1;
    }
    case 0x100a3d5eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x100u;
        (void)sp0;
        return 1;
    }
    case 0x100a3dacu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        g->esp = sp0 - 0x100u;
        (void)sp0;
        return 1;
    }
    case 0x100a3e09u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x100u;
        (void)sp0;
        return 1;
    }
    case 0x100a3e3eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x100u;
        (void)sp0;
        return 1;
    }
    case 0x100a3e69u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        g->esp = sp0 - 0x100u;
        (void)sp0;
        return 1;
    }
    case 0x100a3e70u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        g->esp = sp0 - 0x100u;
        (void)sp0;
        return 1;
    }
    case 0x100a3e75u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        g->esp = sp0 - 0x100u;
        (void)sp0;
        return 1;
    }
    case 0x100a3e82u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x100u;
        (void)sp0;
        return 1;
    }
    case 0x100a3e89u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        g->esp = sp0 - 0x100u;
        (void)sp0;
        return 1;
    }
    case 0x100a3e92u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x100u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100a3d00(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_100a3d00(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
