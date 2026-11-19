/* f_0x102b06f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102b06f0(Guest* g)
{
    uint32_t eax;
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
    cow_frame(g, sp0, 36u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102b070au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_102b070a;
    case 0x102b072eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_102b072e;
    case 0x102b0740u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102b0740;
    case 0x102b076au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102b076a;
    case 0x102b077fu: edx = g->edx; esi = g->esi; goto E_102b077f;
    case 0x102b0786u: edx = g->edx; esi = g->esi; goto E_102b0786;
    case 0x102b079fu: edx = g->edx; esi = g->esi; goto E_102b079f;
    case 0x102b07b8u: edx = g->edx; esi = g->esi; goto E_102b07b8;
    case 0x102b07d1u: edx = g->edx; esi = g->esi; goto E_102b07d1;
    case 0x102b07eau: edx = g->edx; esi = g->esi; goto E_102b07ea;
    case 0x102b0803u: edx = g->edx; esi = g->esi; goto E_102b0803;
    default: break;
    }
#endif

    COW_AT(102b06f0)
    wr32(sp0 - 4u, in_esi);
    wr32(sp0 - 8u, in_edi);
    wr32(sp0 - 0xcu, COW_IMG(0x1034f2d0u));
    wr32(sp0 - 0x10u, arg1);
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x10291220u), self, 2, arg1, COW_IMG(0x1034f2d0u));
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        ecx = t2;
        edx = t3;
        esi = t1;
        goto L_102b072e;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(102b070a)
    wr32(sp0 - 0xcu, 0x5bu);
    wr32(sp0 - 0x10u, COW_IMG(0x103bf7acu));
    wr32(sp0 - 0x14u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bf7acu));
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0x18u, arg1);
    wr32(sp0 - 0x1cu, COW_IMG(0x103b9960u));
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b9960u), arg1);
    g->esi = in_esi;
    g->edi = in_edi;
    return 0u;
L_102b072e: ;
    COW_AT(102b072e)
    wr32(sp0 - 0xcu, sp0 + 4u);
    wr32(sp0 - 0x10u, esi);
    g->eax = sp0 + 4u;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t7 = cow_thiscall_cdecl(g, COW_IMG(0x1029cb00u), ecx, 2, esi, sp0 + 4u);
    t8 = g->ecx;
    t9 = g->edx;
    if ((uint8_t)t7 != 0u)
    {
        edx = t9;
        goto L_102b076a;
    }
    eax = t7;
    ecx = t8;
    edx = t9;
    COW_AT(102b0740)
    wr32(sp0 - 0xcu, 0x5fu);
    wr32(sp0 - 0x10u, COW_IMG(0x103bf7acu));
    wr32(sp0 - 0x14u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t10 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bf7acu));
    t11 = g->ecx;
    t12 = g->edx;
    wr32(sp0 - 0x18u, arg1);
    wr32(sp0 - 0x1cu, COW_IMG(0x103b994cu));
    g->ecx = t11;
    g->edx = t12;
    g->esp = sp0 - 0x14u;
    t13 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b994cu), arg1);
    t14 = g->ecx;
    t15 = g->edx;
    wr32(sp0 - 0x20u, esi);
    g->edi = arg1;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t15, 1, 3, esi, COW_IMG(0x103b994cu), arg1);
    g->esi = rd32(sp0 - 4u);
    g->edi = rd32(sp0 - 8u);
    return 0u;
L_102b076a: ;
    COW_AT(102b076a)
    if (arg1 - 0xa0002u > 7u) goto L_102b0803;
    COW_AT(102b077f)
    t16 = rd32(COW_IMG(0x102b0834u) + arg1 * 4u - 0x280008u);
    switch (t16 - RD)
    {
    case 0x102b0786u: goto L_102b0786;
    case 0x102b079fu: goto L_102b079f;
    case 0x102b07b8u: goto L_102b07b8;
    case 0x102b07d1u: goto L_102b07d1;
    case 0x102b07eau: goto L_102b07ea;
    case 0x102b0803u: goto L_102b0803;
    default: rt_fatal(g, COW_IMG(0x102b077fu), "switch");
    }
    return 0;
L_102b0786: ;
    COW_AT(102b0786)
    wr32(sp0 - 0xcu, esi);
    g->eax = arg1 - 0xa0002u;
    g->ecx = arg1;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t29 = cow_cdecl(g, COW_IMG(0x102ac130u), 1, esi);
    t30 = g->ecx;
    t31 = g->edx;
    wr32(sp0 - 0xcu, esi);
    g->edi = t29;
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t31, 1, 3, esi, rd32(sp0 - 8u), rd32(sp0 - 4u));
    g->esi = rd32(sp0 - 4u);
    g->edi = rd32(sp0 - 8u);
    return t29;
L_102b079f: ;
    COW_AT(102b079f)
    wr32(sp0 - 0xcu, esi);
    g->eax = arg1 - 0xa0002u;
    g->ecx = arg1;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t26 = cow_cdecl(g, COW_IMG(0x102b64e0u), 1, esi);
    t27 = g->ecx;
    t28 = g->edx;
    wr32(sp0 - 0xcu, esi);
    g->edi = t26;
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t28, 1, 3, esi, rd32(sp0 - 8u), rd32(sp0 - 4u));
    g->esi = rd32(sp0 - 4u);
    g->edi = rd32(sp0 - 8u);
    return t26;
L_102b07b8: ;
    COW_AT(102b07b8)
    wr32(sp0 - 0xcu, esi);
    g->eax = arg1 - 0xa0002u;
    g->ecx = arg1;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t23 = cow_cdecl(g, COW_IMG(0x102b5a60u), 1, esi);
    t24 = g->ecx;
    t25 = g->edx;
    wr32(sp0 - 0xcu, esi);
    g->edi = t23;
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t25, 1, 3, esi, rd32(sp0 - 8u), rd32(sp0 - 4u));
    g->esi = rd32(sp0 - 4u);
    g->edi = rd32(sp0 - 8u);
    return t23;
L_102b07d1: ;
    COW_AT(102b07d1)
    wr32(sp0 - 0xcu, esi);
    g->eax = arg1 - 0xa0002u;
    g->ecx = arg1;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t20 = cow_cdecl(g, COW_IMG(0x102acd60u), 1, esi);
    t21 = g->ecx;
    t22 = g->edx;
    wr32(sp0 - 0xcu, esi);
    g->edi = t20;
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t22, 1, 3, esi, rd32(sp0 - 8u), rd32(sp0 - 4u));
    g->esi = rd32(sp0 - 4u);
    g->edi = rd32(sp0 - 8u);
    return t20;
L_102b07ea: ;
    COW_AT(102b07ea)
    wr32(sp0 - 0xcu, esi);
    g->eax = arg1 - 0xa0002u;
    g->ecx = arg1;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t17 = cow_cdecl(g, COW_IMG(0x102ae6c0u), 1, esi);
    t18 = g->ecx;
    t19 = g->edx;
    wr32(sp0 - 0xcu, esi);
    g->edi = t17;
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t19, 1, 3, esi, rd32(sp0 - 8u), rd32(sp0 - 4u));
    g->esi = rd32(sp0 - 4u);
    g->edi = rd32(sp0 - 8u);
    return t17;
L_102b0803: ;
    COW_AT(102b0803)
    wr32(sp0 - 0xcu, 0x67u);
    wr32(sp0 - 0x10u, COW_IMG(0x103bf7acu));
    wr32(sp0 - 0x14u, COW_IMG(0x103b27fcu));
    g->eax = arg1 - 0xa0002u;
    g->ecx = arg1;
    g->esp = sp0 - 0xcu;
    t32 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b27fcu), COW_IMG(0x103bf7acu));
    t33 = g->ecx;
    wr32(sp0 - 0x18u, arg1);
    wr32(sp0 - 0x1cu, COW_IMG(0x103bf7d8u));
    g->ecx = t33;
    g->edx = arg1;
    g->esp = sp0 - 0x14u;
    t34 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf7d8u), arg1);
    t35 = g->ecx;
    t36 = g->edx;
    wr32(sp0 - 0xcu, esi);
    g->edi = 0u;
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t36, 1, 3, esi, rd32(sp0 - 8u), rd32(sp0 - 4u));
    g->esi = rd32(sp0 - 4u);
    g->edi = rd32(sp0 - 8u);
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102b06f0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102b070au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102b072eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102b0740u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        g->edi = arg1;
        wr32(sp0 - 0xcu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102b076au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        wr32(sp0 - 0xcu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102b077fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edx;
        uint32_t esi;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        g->eax = arg1 - 0xa0002u;
        g->ecx = arg1;
        g->edi = 0u;
        wr32(sp0 - 0xcu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102b0786u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edx;
        uint32_t esi;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        g->eax = arg1 - 0xa0002u;
        g->ecx = arg1;
        wr32(sp0 - 0xcu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102b079fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edx;
        uint32_t esi;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        g->eax = arg1 - 0xa0002u;
        g->ecx = arg1;
        wr32(sp0 - 0xcu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102b07b8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edx;
        uint32_t esi;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        g->eax = arg1 - 0xa0002u;
        g->ecx = arg1;
        wr32(sp0 - 0xcu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102b07d1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edx;
        uint32_t esi;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        g->eax = arg1 - 0xa0002u;
        g->ecx = arg1;
        wr32(sp0 - 0xcu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102b07eau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edx;
        uint32_t esi;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        g->eax = arg1 - 0xa0002u;
        g->ecx = arg1;
        wr32(sp0 - 0xcu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102b0803u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edx;
        uint32_t esi;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        g->eax = arg1 - 0xa0002u;
        g->ecx = arg1;
        g->edi = 0u;
        wr32(sp0 - 0xcu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102b06f0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102b06f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
