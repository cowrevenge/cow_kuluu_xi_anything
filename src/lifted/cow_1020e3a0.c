/* f_0x1020e3a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1020e3a0(Guest* g)
{
    uint32_t eax;
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
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1020e3b0u: eax = g->eax; in_edx = g->edx; in_esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_1020e3b0;
    case 0x1020e3c1u: eax = g->eax; edx = g->edx; in_esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_1020e3c1;
    case 0x1020e3d0u: eax = g->eax; edx = g->edx; in_esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_1020e3d0;
    case 0x1020e3dcu: eax = g->eax; edx = g->edx; in_esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_1020e3dc;
    case 0x1020e3e9u: eax = g->eax; edx = g->edx; in_esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_1020e3e9;
    case 0x1020e3f1u: eax = g->eax; edx = g->edx; in_esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_1020e3f1;
    case 0x1020e3f4u: eax = g->eax; edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_1020e3f4;
    case 0x1020e3fbu: eax = g->eax; edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_1020e3fb;
    case 0x1020e40eu: eax = g->eax; edx = g->edx; in_esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_1020e40e;
    case 0x1020e45eu: eax = g->eax; edx = g->edx; in_esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_1020e45e;
    case 0x1020e465u: eax = g->eax; edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_1020e465;
    case 0x1020e476u: eax = g->eax; edx = g->edx; in_esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_1020e476;
    case 0x1020e481u: eax = g->eax; edx = g->edx; in_esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_1020e481;
    case 0x1020e48cu: eax = g->eax; edx = g->edx; in_esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_1020e48c;
    case 0x1020e499u: eax = g->eax; edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_1020e499;
    case 0x1020e4aau: eax = g->eax; edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_1020e4aa;
    case 0x1020e4b7u: eax = g->eax; edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_1020e4b7;
    default: break;
    }
#endif

    COW_AT(1020e3a0)
    if (rd32(COW_IMG(0x10664494u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10664494u));
        edx = in_edx;
        goto L_1020e4b7;
    }
    eax = rd32(COW_IMG(0x10664494u));
    COW_AT(1020e3b0)
    if ((uint32_t)(int16_t)arg1 - 3u > 0xeu)
    {
        edx = in_edx;
        goto L_1020e4b7;
    }
    COW_AT(1020e3c1)
    t1 = rd32(COW_IMG(0x1020e4bcu) + rd8(COW_IMG(0x1020e4d4u) + (uint32_t)(int16_t)arg1 - 3u) * 4u);
    edx = rd8(COW_IMG(0x1020e4d4u) + (uint32_t)(int16_t)arg1 - 3u);
    switch (t1 - RD)
    {
    case 0x1020e3d0u: goto L_1020e3d0;
    case 0x1020e3e9u: goto L_1020e3e9;
    case 0x1020e481u: goto L_1020e481;
    case 0x1020e499u: goto L_1020e499;
    case 0x1020e4aau: goto L_1020e4aa;
    case 0x1020e4b7u: goto L_1020e4b7;
    default: rt_fatal(g, COW_IMG(0x1020e3c9u), "switch");
    }
    return 0;
L_1020e3d0: ;
    COW_AT(1020e3d0)
    if ((uint16_t)arg2 != 1u) goto L_1020e4b7;
    COW_AT(1020e3dc)
    g->esp = sp0 - 4u;
    t25 = cow_call_regs(g, COW_IMG(0x1020e290u), eax, self, edx, 0, 1, 1u);
    t26 = g->edx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t26;
    return t25;
L_1020e3e9: ;
    COW_AT(1020e3e9)
    if ((uint32_t)(int16_t)arg2 == 1u) goto L_1020e45e;
    COW_AT(1020e3f1)
    if ((uint32_t)(int16_t)arg2 == 2u) goto L_1020e40e;
    COW_AT(1020e3f4)
    if ((uint32_t)(int16_t)arg2 != 3u) goto L_1020e4b7;
L_1020e3fb: ;
    COW_AT(1020e3fb)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t8 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10385af0u));
    t9 = g->edx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t9;
    return t8;
L_1020e40e: ;
    COW_AT(1020e40e)
    g->eax = eax;
    g->ecx = (uint32_t)(int16_t)arg2 - 2u;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t10 = cow_cdecl(g, COW_IMG(0x101076e0u), 1, eax + 0x5cu);
    t11 = g->ecx;
    t12 = g->edx;
    g->edx = t12;
    g->esp = sp0 - 0xcu;
    t13 = cow_cdecl(g, COW_IMG(0x10107690u), 2, eax + 0x5cu, self + 0x18u);
    t14 = g->edx;
    g->edx = t14;
    g->esp = sp0 - 8u;
    t15 = cow_call_regs(g, COW_IMG(0x1020a9d0u), t13, rd32(COW_IMG(0x10664494u)), g->edx, 0, 6, 1u, eax + 0x5cu, 1u, 0u, 0u, 0u);
    t16 = g->edx;
    g->edx = t16;
    t17 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10385af0u));
    t18 = g->edx;
    g->edx = t18;
    t19 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10385a64u));
    t20 = g->edx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t20;
    return t19;
L_1020e45e: ;
    COW_AT(1020e45e)
    if (rd32(self + 0x14u) == 0u)
    {
        eax = rd32(self + 0x14u);
        goto L_1020e476;
    }
    eax = rd32(self + 0x14u);
    COW_AT(1020e465)
    g->edx = edx;
    g->esp = sp0 - 4u;
    t21 = cow_call_regs(g, COW_IMG(0x101c6920u), eax, rd32(COW_IMG(0x10662da0u)), g->edx, 0, 1, 1u);
    t22 = g->edx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t22;
    return t21;
L_1020e476: ;
    COW_AT(1020e476)
    g->eax = eax;
    g->esp = sp0 - 4u;
    t23 = cow_fastcall(g, COW_IMG(0x1020e220u), self, edx, 0);
    t24 = g->edx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t24;
    return t23;
L_1020e481: ;
    COW_AT(1020e481)
    if (rd32(self + 0x14u) == 0u)
    {
        eax = rd32(self + 0x14u);
        goto L_1020e3fb;
    }
    eax = rd32(self + 0x14u);
    COW_AT(1020e48c)
    g->esp = sp0 - 4u;
    t6 = cow_call_regs(g, COW_IMG(0x1020e290u), eax, self, edx, 0, 1, 1u);
    t7 = g->edx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t7;
    return t6;
L_1020e499: ;
    COW_AT(1020e499)
    g->edx = edx;
    g->esp = sp0 - 4u;
    t4 = cow_call_regs(g, COW_IMG(0x101c6920u), eax, rd32(COW_IMG(0x10662da0u)), g->edx, 0, 1, 4u);
    t5 = g->edx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t5;
    return t4;
L_1020e4aa: ;
    COW_AT(1020e4aa)
    g->edx = edx;
    g->esp = sp0 - 4u;
    t2 = cow_call_regs(g, COW_IMG(0x101c6920u), eax, rd32(COW_IMG(0x10662da0u)), g->edx, 0, 1, 5u);
    t3 = g->edx;
    eax = t2;
    edx = t3;
L_1020e4b7: ;
    COW_AT(1020e4b7)
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1020e3a0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1020e3b0u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        in_esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020e3c1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->ecx = (uint32_t)(int16_t)arg1 - 3u;
        (void)sp0;
        return 1;
    }
    case 0x1020e3d0u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020e3dcu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020e3e9u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020e3f1u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->ecx = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1020e3f4u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->ecx = (uint32_t)(int16_t)arg2 - 2u;
        (void)sp0;
        return 1;
    }
    case 0x1020e3fbu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020e40eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->ecx = (uint32_t)(int16_t)arg2 - 2u;
        (void)sp0;
        return 1;
    }
    case 0x1020e45eu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020e465u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020e476u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020e481u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020e48cu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020e499u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020e4aau:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020e4b7u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1020e3a0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1020e3a0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
