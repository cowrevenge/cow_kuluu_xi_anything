/* f_0x101c0a40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_101c0a40(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_328;
    uint32_t loc_32c;
    uint32_t loc_330;
    uint32_t loc_334;
    uint32_t sf;
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
    uint32_t t3;
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
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 840u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101c0aacu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; sf = g->sf; in_edi = rd32(sp0 - 0x334u); in_esi = rd32(sp0 - 0x330u); in_ebp = rd32(sp0 - 0x32cu); in_ebx = rd32(sp0 - 0x328u); g->ebp = rd32(sp0 - 0x32cu); g->ebx = rd32(sp0 - 0x328u); g->edi = rd32(sp0 - 0x334u); g->esi = rd32(sp0 - 0x330u); goto E_101c0aac;
    case 0x101c0af7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; sf = g->sf; goto E_101c0af7;
    case 0x101c0afdu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; sf = g->sf; goto E_101c0afd;
    case 0x101c0b02u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; sf = g->sf; loc_334 = rd32(sp0 - 0x334u); loc_330 = rd32(sp0 - 0x330u); loc_32c = rd32(sp0 - 0x32cu); loc_328 = rd32(sp0 - 0x328u); goto E_101c0b02;
    case 0x101c0b12u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; sf = g->sf; goto E_101c0b12;
    case 0x101c0b1fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; sf = g->sf; goto E_101c0b1f;
    case 0x101c0b2cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; sf = g->sf; goto E_101c0b2c;
    case 0x101c0b34u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; sf = g->sf; goto E_101c0b34;
    case 0x101c0b55u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; sf = g->sf; goto E_101c0b55;
    default: break;
    }
#endif

    COW_AT(101c0a40)
    wr32(sp0 - 0x328u, in_ebx);
    wr32(sp0 - 0x32cu, in_ebp);
    wr32(sp0 - 0x330u, in_esi);
    wr32(sp0 - 0x334u, in_edi);
    wr32(sp0 - 0x324u, COW_IMG(0x10337200u));
    wr32(sp0 - 0x320u, 0u);
    edi = sp0 - 0x31cu;
    eax = 0u;
    ecx = 0x40u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x21cu, 0u);
    wr32(sp0 - 0x338u, arg1);
    wr32(sp0 - 0x218u, 0u);
    wr32(sp0 - 0x214u, 0u);
    wr32(sp0 - 0x210u, 0u);
    wr32(sp0 - 0x20cu, 0u);
    wr32(sp0 - 0x208u, 0u);
    wr32(sp0 - 0x204u, 0u);
    g->eax = arg1;
    g->edx = in_edx;
    g->esp = sp0 - 0x334u;
    t1 = cow_cdecl(g, COW_IMG(0x103113b0u), 1, arg1);
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        loc_328 = in_ebx;
        loc_32c = in_ebp;
        loc_330 = in_esi;
        loc_334 = in_edi;
        goto L_101c0b02;
    }
    eax = t1;
    edx = t2;
    COW_AT(101c0aac)
    wr32(sp0 - 0x338u, 1u);
    wr32(sp0 - 0x33cu, 0x1ffu);
    wr32(sp0 - 0x340u, sp0 - 0x200u);
    wr32(sp0 - 0x344u, 0x21u);
    g->eax = eax;
    g->ecx = sp0 - 0x200u;
    g->esp = sp0 - 0x334u;
    t3 = cow_cdecl(g, COW_IMG(0x1030ff10u), 4, 0x21u, sp0 - 0x200u, 0x1ffu, 1u);
    t4 = g->ecx;
    wr32(sp0 - 0x338u, 0u);
    wr32(sp0 - 0x33cu, sp0 - 0x200u);
    g->edx = sp0 - 0x200u;
    t5 = cow_stdcall(g, rd32(COW_IMG(0x10329208u)), 2, sp0 - 0x200u, 0u);   /* kernel32.dll!CreateDirectoryA */
    t6 = g->edx;
    t7 = rd32(self + 0x1f0u);
    t8 = cow_fastcall(g, COW_IMG(0x1019fa90u), t7, t6, 0);
    t9 = g->ecx;
    t10 = g->edx;
    wr32(sp0 - 0x338u, arg3);
    wr32(sp0 - 0x33cu, 1u);
    g->ecx = t9;
    g->edx = t10;
    t11 = cow_cdecl(g, COW_IMG(0x103113a5u), 2, 1u, arg3);
    t12 = g->ecx;
    t13 = g->edx;
    if ((int32_t)t11 >= 0)
    {
        eax = t11;
        ecx = t12;
        edx = t13;
        esi = t11;
        goto L_101c0b12;
    }
    eax = t11;
    edx = t13;
    COW_AT(101c0af7)
    ecx = rd32(self + 0x1f0u);
L_101c0afd: ;
    COW_AT(101c0afd)
    g->eax = eax;
    g->esp = sp0 - 0x334u;
    t26 = cow_fastcall(g, COW_IMG(0x1019fab0u), ecx, edx, 0);
    eax = t26;
    loc_328 = rd32(sp0 - 0x328u);
    loc_32c = rd32(sp0 - 0x32cu);
    loc_330 = rd32(sp0 - 0x330u);
    loc_334 = rd32(sp0 - 0x334u);
L_101c0b02: ;
    COW_AT(101c0b02)
    g->ebx = loc_328;
    g->esi = loc_330;
    g->edi = loc_334;
    g->ebp = loc_32c;
    return 0xffffffffu;
L_101c0b12: ;
    COW_AT(101c0b12)
    wr32(sp0 - 0x338u, esi);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x334u;
    t14 = cow_cdecl(g, COW_IMG(0x1031139au), 1, esi);
    t15 = g->ecx;
    t16 = g->edx;
    if (t14 != 0u)
    {
        eax = t14;
        edx = t16;
        sf = (int32_t)t14 < 0;
        goto L_101c0b2c;
    }
    eax = t14;
    ecx = t15;
    edx = t16;
L_101c0b1f: ;
    COW_AT(101c0b1f)
    wr32(sp0 - 0x338u, esi);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x334u;
    t17 = cow_cdecl(g, COW_IMG(0x1031139au), 1, esi);
    t18 = g->ecx;
    t19 = g->edx;
    if (t17 == 0u)
    {
        eax = t17;
        ecx = t18;
        edx = t19;
        goto L_101c0b1f;
    }
    eax = t17;
    edx = t19;
    sf = (int32_t)t17 < 0;
L_101c0b2c: ;
    COW_AT(101c0b2c)
    if (sf)
    {
        ecx = rd32(self + 0x1f0u);
        goto L_101c0afd;
    }
    ecx = rd32(self + 0x1f0u);
    COW_AT(101c0b34)
    g->esp = sp0 - 0x334u;
    cow_fastcall(g, COW_IMG(0x1019fab0u), ecx, edx, 0);
    t20 = g->edx;
    wr32(sp0 - 0x338u, 1u);
    wr32(sp0 - 0x33cu, sp0 - 0x31cu);
    wr32(sp0 - 0x340u, 0x21u);
    wr32(sp0 - 0x344u, arg1);
    g->ebx = self;
    g->eax = sp0 - 0x31cu;
    t21 = cow_stdcall(g, COW_IMG(0x101c3e40u), 4, arg1, 0x21u, sp0 - 0x31cu, 1u);
    if ((int32_t)t21 < 0)
    {
        eax = t21;
        loc_328 = rd32(sp0 - 0x328u);
        loc_32c = rd32(sp0 - 0x32cu);
        loc_330 = rd32(sp0 - 0x330u);
        loc_334 = rd32(sp0 - 0x334u);
        goto L_101c0b02;
    }
    COW_AT(101c0b55)
    wr32(sp0 - 0x338u, arg4);
    wr32(sp0 - 0x320u, 3u);
    wr32(sp0 - 0x218u, arg2);
    wr32(sp0 - 0x214u, arg3);
    g->eax = arg4;
    g->edx = arg2;
    g->esp = sp0 - 0x334u;
    t22 = cow_stdcall(g, COW_IMG(0x101c3fb0u), 1, arg4);
    t23 = g->edx;
    wr32(sp0 - 0x210u, t22);
    wr32(sp0 - 0x338u, sp0 - 0x31cu);
    wr32(sp0 - 0x33cu, COW_IMG(0x1034f7e0u));
    g->ebx = self;
    t24 = cow_thiscall_cdecl(g, COW_IMG(0x101c0bc0u), sp0 - 0x31cu, 2, COW_IMG(0x1034f7e0u), sp0 - 0x31cu);
    wr32(sp0 - 0x338u, sp0 - 0x324u);
    t25 = cow_fastcall(g, COW_IMG(0x1019f960u), rd32(self + 0x1f0u), sp0 - 0x324u, 1, sp0 - 0x324u);
    g->ebx = rd32(sp0 - 0x328u);
    g->esi = rd32(sp0 - 0x330u);
    g->edi = rd32(sp0 - 0x334u);
    g->ebp = rd32(sp0 - 0x32cu);
    return t25;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101c0a40(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101c0aacu:
    {
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
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x334u);
        in_esi = rd32(sp0 - 0x330u);
        in_ebp = rd32(sp0 - 0x32cu);
        in_ebx = rd32(sp0 - 0x328u);
        g->esp = sp0 - 0x334u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101c0af7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x334u;
        wr32(sp0 - 0x340u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x101c0afdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x334u;
        wr32(sp0 - 0x340u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x101c0b02u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_328;
        uint32_t loc_32c;
        uint32_t loc_330;
        uint32_t loc_334;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        loc_334 = rd32(sp0 - 0x334u);
        loc_330 = rd32(sp0 - 0x330u);
        loc_32c = rd32(sp0 - 0x32cu);
        loc_328 = rd32(sp0 - 0x328u);
        g->esp = sp0 - 0x334u;
        (void)sp0;
        return 1;
    }
    case 0x101c0b12u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        sf = g->sf;
        g->esp = sp0 - 0x334u;
        g->ebp = 0u;
        g->edi = arg3;
        wr32(sp0 - 0x340u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x101c0b1fu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        sf = g->sf;
        g->esp = sp0 - 0x334u;
        g->ebp = 0u;
        g->edi = arg3;
        wr32(sp0 - 0x340u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x101c0b2cu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        sf = g->sf;
        g->esp = sp0 - 0x334u;
        g->edi = arg3;
        g->of = (uint8_t)(0u);
        wr32(sp0 - 0x340u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x101c0b34u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        sf = g->sf;
        g->esp = sp0 - 0x334u;
        g->edi = arg3;
        wr32(sp0 - 0x340u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x101c0b55u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        sf = g->sf;
        g->esp = sp0 - 0x334u;
        g->edi = arg3;
        wr32(sp0 - 0x33cu, sp0 - 0x31cu);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101c0a40(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101c0a40(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
