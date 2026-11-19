/* f_0x102b0c90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102b0c90(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
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
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 48u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102b0c98u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; goto E_102b0c98;
    case 0x102b0c99u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; goto E_102b0c99;
    case 0x102b0cc0u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; goto E_102b0cc0;
    case 0x102b0ce0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b0ce0;
    case 0x102b0d08u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102b0d08;
    case 0x102b0d10u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102b0d10;
    case 0x102b0d37u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102b0d37;
    case 0x102b0d49u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102b0d49;
    case 0x102b0d7bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102b0d7b;
    case 0x102b0d85u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102b0d85;
    case 0x102b0dacu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102b0dac;
    case 0x102b0dceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102b0dce;
    case 0x102b0debu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102b0deb;
    default: break;
    }
#endif

    COW_AT(102b0c90)
    if (rd32(sp0 + 4u) != 0u)
    {
        eax = rd32(sp0 + 4u);
        goto L_102b0c99;
    }
    eax = rd32(sp0 + 4u);
    COW_AT(102b0c98)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return eax;
L_102b0c99: ;
    COW_AT(102b0c99)
    wr32(sp0 + 4u, eax);
    COW_AT(102b0cc0)
    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    wr32(sp0 - 0x18u, COW_IMG(0x1036bf68u));
    wr32(sp0 - 0x1cu, arg2);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x10291220u), self, 2, arg2, COW_IMG(0x1036bf68u));
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        esi = t1;
        goto L_102b0d08;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(102b0ce0)
    wr32(sp0 - 0x18u, 0x60u);
    wr32(sp0 - 0x1cu, COW_IMG(0x103bf904u));
    wr32(sp0 - 0x20u, COW_IMG(0x103b379cu));
    g->ebx = arg2;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bf904u));
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0x24u, arg2);
    wr32(sp0 - 0x28u, COW_IMG(0x103bf8a0u));
    g->ebx = arg2;
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf8a0u), arg2);
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    return 0u;
L_102b0d08: ;
    COW_AT(102b0d08)
    if (rd32(sp0 + 4u) != 0u)
    {
        ebx = rd32(sp0 + 4u);
        goto L_102b0d37;
    }
    ebx = rd32(sp0 + 4u);
    COW_AT(102b0d10)
    wr32(sp0 - 0x18u, 0x64u);
    wr32(sp0 - 0x1cu, COW_IMG(0x103bf904u));
    wr32(sp0 - 0x20u, COW_IMG(0x103b379cu));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t7 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bf904u));
    t8 = g->ecx;
    t9 = g->edx;
    wr32(sp0 - 0x24u, COW_IMG(0x103bf8f4u));
    g->ebx = ebx;
    g->esp = sp0 - 0x1cu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf8f4u), COW_IMG(0x103b379cu));
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    return 0u;
L_102b0d37: ;
    COW_AT(102b0d37)
    wr32(sp0 - 0x18u, sp0 - 8u);
    wr32(sp0 - 0x1cu, esi);
    g->eax = sp0 - 8u;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t10 = cow_thiscall_cdecl(g, COW_IMG(0x1029cb00u), ecx, 5, esi, sp0 - 8u, rd32(sp0 - 0x14u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    t11 = g->ecx;
    t12 = g->edx;
    if ((uint8_t)t10 != 0u)
    {
        eax = t10;
        ecx = t11;
        edx = t12;
        goto L_102b0d7b;
    }
    eax = t10;
    ecx = t11;
    edx = t12;
    COW_AT(102b0d49)
    wr32(sp0 - 0x18u, 0x68u);
    wr32(sp0 - 0x1cu, COW_IMG(0x103bf904u));
    wr32(sp0 - 0x20u, COW_IMG(0x103b379cu));
    g->ebx = ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t13 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bf904u));
    t14 = g->edx;
    wr32(sp0 - 0x24u, arg2);
    wr32(sp0 - 0x28u, COW_IMG(0x103bf88cu));
    g->ebx = ebx;
    g->ecx = arg2;
    g->edx = t14;
    g->esp = sp0 - 0x20u;
    t15 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf88cu), arg2);
    t16 = g->ecx;
    t17 = g->edx;
    wr32(sp0 - 0x2cu, esi);
    g->edi = 0u;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t17, 1, 3, esi, COW_IMG(0x103bf88cu), arg2);
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    return 0u;
L_102b0d7b: ;
    COW_AT(102b0d7b)
    if (rd32(sp0 - 8u) != 0x150001u) goto L_102b0deb;
    COW_AT(102b0d85)
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x14u;
    t18 = cow_stdcall(g, COW_IMG(0x1029a000u), 0);
    t19 = g->ecx;
    wr32(sp0 - 0x18u, esi);
    wr32(sp0 - 0x1cu, 1u);
    wr32(sp0 - 0x20u, 4u);
    wr32(sp0 - 0x24u, sp0 - 4u);
    wr32(t18 + 0x1cu, ebx);
    g->ecx = t19;
    g->edx = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10292420u), 4, sp0 - 4u, 4u, 1u, esi);
    t20 = g->ecx;
    t21 = g->edx;
    if ((rd32(sp0 - 4u) & 0x10000u) == 0u)
    {
        eax = rd32(sp0 - 4u);
        ecx = t20;
        edx = t21;
        edi = t18;
        goto L_102b0dce;
    }
    eax = rd32(sp0 - 4u);
    ecx = t20;
    edx = t21;
    edi = t18;
    COW_AT(102b0dac)
    wr32(sp0 - 0x18u, eax & 0xfffeffffu);
    wr32(sp0 - 0x1cu, esi);
    wr32(sp0 - 0x20u, edi);
    g->eax = eax & 0xfffeffffu;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t22 = cow_cdecl(g, COW_IMG(0x102b1710u), 3, edi, esi, eax & 0xfffeffffu);
    t23 = g->ecx;
    t24 = g->edx;
    wr32(sp0 - 0x18u, esi);
    g->edi = edi;
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t24, 1, 3, esi, rd32(sp0 - 0x14u), rd32(sp0 - 0x10u));
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    return edi;
L_102b0dce: ;
    COW_AT(102b0dce)
    wr32(sp0 - 0x18u, eax);
    wr32(sp0 - 0x1cu, esi);
    wr32(sp0 - 0x20u, edi);
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t25 = cow_cdecl(g, COW_IMG(0x102b19d0u), 3, edi, esi, eax);
    t26 = g->ecx;
    t27 = g->edx;
    wr32(sp0 - 0x18u, esi);
    g->edi = edi;
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t27, 1, 3, esi, rd32(sp0 - 0x14u), rd32(sp0 - 0x10u));
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    return edi;
L_102b0deb: ;
    COW_AT(102b0deb)
    wr32(sp0 - 0x18u, 0x75u);
    wr32(sp0 - 0x1cu, COW_IMG(0x103bf904u));
    wr32(sp0 - 0x20u, COW_IMG(0x103b379cu));
    g->ebx = ebx;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bf904u));
    t28 = g->ecx;
    t29 = g->edx;
    t30 = rd32(sp0 - 8u);
    wr32(sp0 - 0x24u, t30);
    wr32(sp0 - 0x28u, COW_IMG(0x103bf8dcu));
    g->ebx = ebx;
    g->eax = t30;
    g->ecx = t28;
    g->edx = t29;
    g->esp = sp0 - 0x20u;
    t31 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf8dcu), t30);
    t32 = g->ecx;
    t33 = g->edx;
    wr32(sp0 - 0x18u, esi);
    g->edi = 0u;
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t33, 1, 3, esi, rd32(sp0 - 0x14u), rd32(sp0 - 0x10u));
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102b0c90(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102b0c98u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x102b0c99u:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x102b0cc0u:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x102b0ce0u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102b0d08u:
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
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102b0d10u:
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
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x102b0d37u:
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
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102b0d49u:
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
        g->edi = 0u;
        wr32(sp0 - 0x18u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102b0d7bu:
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
        g->edi = 0u;
        wr32(sp0 - 0x18u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102b0d85u:
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
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x18u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102b0dacu:
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
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x24u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x102b0dceu:
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
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x24u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x102b0debu:
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
        g->edi = 0u;
        wr32(sp0 - 0x18u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102b0c90(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102b0c90(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
