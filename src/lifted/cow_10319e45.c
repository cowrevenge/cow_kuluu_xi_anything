/* f_0x10319e45 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10319e45(Guest* g)
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
    uint32_t t2;
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
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 20u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10319e51u: in_eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; in_esi = g->esi; in_ebx = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); goto E_10319e51;
    case 0x10319e56u: in_eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; in_esi = g->esi; in_ebx = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); goto E_10319e56;
    case 0x10319e5eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; goto E_10319e5e;
    case 0x10319e77u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; goto E_10319e77;
    case 0x10319e7bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_10319e7b;
    case 0x10319e7du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_10319e7d;
    case 0x10319e84u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_10319e84;
    case 0x10319e8au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; goto E_10319e8a;
    case 0x10319e90u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; goto E_10319e90;
    case 0x10319e96u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; goto E_10319e96;
    case 0x10319e9cu: in_eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; in_esi = g->esi; in_ebx = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); goto E_10319e9c;
    case 0x10319ea1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; goto E_10319ea1;
    case 0x10319eacu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; goto E_10319eac;
    case 0x10319eb5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_10319eb5;
    default: break;
    }
#endif

    COW_AT(10319e45)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, in_ebx);
    if ((int32_t)rd32(sp0 + 4u) < 1) goto L_10319e9c;
    ebx = rd32(sp0 + 4u);
    COW_AT(10319e51)
    if ((int32_t)ebx > 31) goto L_10319e9c;
    COW_AT(10319e56)
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, 0xcu);
    g->ebx = ebx;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x1031d016u), g->eax, self, in_edx, 1, 3, 0xcu, in_esi, in_ebx);
    t1 = g->edx;
    edx = t1;
    COW_AT(10319e5e)
    wr8(sp0 + 6u, 0u);
    wr32(sp0 - 0x10u, sp0 + 4u);
    wr8(sp0 + 4u, (uint8_t)((uint8_t)ebx + 0x40u));
    wr8(sp0 + 5u, 0x3au);
    g->eax = sp0 + 4u;
    g->ecx = 0xcu;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t2 = cow_stdcall(g, rd32(COW_IMG(0x103290d0u)), 1, sp0 + 4u);   /* kernel32.dll!SetCurrentDirectoryA */
    t3 = g->ecx;
    t4 = g->edx;
    eax = t2;
    ecx = t3;
    edx = t4;
    COW_AT(10319e77)
    if (eax == 0u)
    {
    COW_AT(10319e8a)
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t5 = cow_stdcall(g, rd32(COW_IMG(0x10329168u)), 0);   /* kernel32.dll!GetLastError */
        t6 = g->ecx;
        t7 = g->edx;
        eax = t5;
        ecx = t6;
        edx = t7;
    COW_AT(10319e90)
        wr32(sp0 - 0x10u, eax);
        g->eax = eax;
        g->esp = sp0 - 0xcu;
        t8 = cow_call_regs(g, COW_IMG(0x10319c16u), g->eax, ecx, edx, 1, 1, eax);
        t9 = g->edx;
        eax = t8;
        edx = t9;
    COW_AT(10319e96)
        ecx = rd32(sp0 - 0x10u);
        esi = 0xffffffffu;
    }
    else
    {
    COW_AT(10319e7b)
        esi = 0u;
    }
    COW_AT(10319e7d)
    wr32(sp0 - 0x10u, 0xcu);
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x1031d077u), g->eax, ecx, edx, 1, 3, 0xcu, rd32(sp0 - 0xcu), rd32(sp0 - 8u));
    t10 = g->edx;
    edx = t10;
    COW_AT(10319e84)
    eax = esi;
    esi = rd32(sp0 - 0xcu);
L_10319eb5: ;
    COW_AT(10319eb5)
    g->ebx = rd32(sp0 - 8u);
    g->esi = esi;
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    return eax;
L_10319e9c: ;
    COW_AT(10319e9c)
    g->eax = in_eax;
    g->esp = sp0 - 8u;
    t11 = cow_fastcall(g, COW_IMG(0x10319c89u), self, in_edx, 0);
    t12 = g->ecx;
    t13 = g->edx;
    eax = t11;
    ecx = t12;
    edx = t13;
    COW_AT(10319ea1)
    wr32(eax, 0xdu);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t14 = cow_fastcall(g, COW_IMG(0x10319c92u), ecx, edx, 0);
    t15 = g->edx;
    eax = t14;
    edx = t15;
    COW_AT(10319eac)
    wr32(eax, 0xfu);
    eax = 0xffffffffu;
    esi = in_esi;
    goto L_10319eb5;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10319e45(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10319e51u:
    {
        uint32_t ebx;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        in_ebx = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10319e56u:
    {
        uint32_t ebx;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        in_ebx = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10319e5eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x10u, 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10319e77u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x10u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x10319e7bu:
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
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x10u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x10319e7du:
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
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10319e84u:
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
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x10u, 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10319e8au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x10u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x10319e90u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x10u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x10319e96u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10319e9cu:
    {
        uint32_t ebx;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        in_ebx = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10319ea1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        g->esp = sp0 - 8u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10319eacu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        g->esp = sp0 - 8u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10319eb5u:
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
        g->esp = sp0 - 8u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10319e45(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10319e45(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
