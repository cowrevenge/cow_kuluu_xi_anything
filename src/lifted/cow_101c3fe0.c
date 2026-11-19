/* f_0x101c3fe0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101c3fe0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_104;
    uint32_t loc_108;
    uint32_t loc_10c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t2;
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
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 284u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101c3fffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x10cu); in_esi = rd32(sp0 - 0x108u); in_ebx = rd32(sp0 - 0x104u); g->ebx = rd32(sp0 - 0x104u); g->edi = rd32(sp0 - 0x10cu); g->esi = rd32(sp0 - 0x108u); goto E_101c3fff;
    case 0x101c400eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_101c400e;
    case 0x101c4031u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_101c4031;
    case 0x101c4035u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_101c4035;
    case 0x101c403au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_101c403a;
    case 0x101c404au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_101c404a;
    case 0x101c4053u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_101c4053;
    case 0x101c4056u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_101c4056;
    case 0x101c405eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_10c = rd32(sp0 - 0x10cu); loc_108 = rd32(sp0 - 0x108u); loc_104 = rd32(sp0 - 0x104u); goto E_101c405e;
    case 0x101c406fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_101c406f;
    default: break;
    }
#endif

    COW_AT(101c3fe0)
    wr32(sp0 - 0x104u, in_ebx);
    wr32(sp0 - 0x108u, in_esi);
    wr32(sp0 - 0x10cu, in_edi);
    wr32(sp0 - 0x110u, 0u);
    wr32(sp0 - 0x114u, arg1);
    g->ecx = self;
    g->edx = in_edx;
    t1 = rd32(COW_IMG(0x10329208u));
    g->esp = sp0 - 0x10cu;
    t2 = cow_stdcall(g, t1, 2, arg1, 0u);   /* kernel32.dll!CreateDirectoryA */
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 != 0u)
    {
        edx = t4;
        loc_104 = in_ebx;
        loc_108 = in_esi;
        loc_10c = in_edi;
        goto L_101c405e;
    }
    eax = t2;
    ecx = t3;
    edx = t4;
    edi = t1;
    COW_AT(101c3fff)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    t5 = rd32(COW_IMG(0x10329168u));
    g->esp = sp0 - 0x10cu;
    t6 = cow_stdcall(g, t5, 0);   /* kernel32.dll!GetLastError */
    t7 = g->ecx;
    t8 = g->edx;
    if (t6 == 0xb7u)
    {
        edx = t8;
        loc_104 = in_ebx;
        loc_108 = in_esi;
        loc_10c = in_edi;
        goto L_101c405e;
    }
    ecx = t7;
    edx = t8;
    ebx = t5;
    COW_AT(101c400e)
    wr32(sp0 - 0x110u, 0x100u);
    wr32(sp0 - 0x114u, arg1);
    wr32(sp0 - 0x118u, sp0 - 0x100u);
    g->edx = edx;
    g->esp = sp0 - 0x10cu;
    t9 = cow_call_regs(g, COW_IMG(0x10312090u), sp0 - 0x100u, g->ecx, g->edx, 1, 3, sp0 - 0x100u, arg1, 0x100u);
    t10 = g->edx;
    t11 = rd8(sp0 - 0x100u);
    wr8(sp0 - 1u, 0u);
    if ((uint8_t)t11 == 0u)
    {
        edx = t10;
        loc_104 = rd32(sp0 - 0x104u);
        loc_108 = rd32(sp0 - 0x108u);
        loc_10c = rd32(sp0 - 0x10cu);
        goto L_101c405e;
    }
    eax = (t9 & 0xffffff00u) | t11;
    edx = t10;
    COW_AT(101c4031)
    esi = sp0 - 0x100u;
L_101c4035: ;
    COW_AT(101c4035)
    if (rd8(esi) != 0x2fu) goto L_101c4056;
    COW_AT(101c403a)
    wr32(sp0 - 0x110u, 0u);
    wr32(sp0 - 0x114u, sp0 - 0x100u);
    wr8(esi, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10cu;
    t12 = cow_thiscall(g, edi, sp0 - 0x100u, 2, sp0 - 0x100u, 0u);
    t13 = g->ecx;
    t14 = g->edx;
    if (t12 != 0u)
    {
        eax = t12;
        edx = t14;
        goto L_101c4053;
    }
    eax = t12;
    ecx = t13;
    edx = t14;
    COW_AT(101c404a)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10cu;
    t15 = cow_thiscall(g, ebx, ecx, 0);
    t16 = g->edx;
    if (t15 != 0xb7u)
    {
        eax = t15;
        edx = t16;
        goto L_101c406f;
    }
    eax = t15;
    edx = t16;
L_101c4053: ;
    COW_AT(101c4053)
    wr8(esi, 0x2fu);
L_101c4056: ;
    COW_AT(101c4056)
    if (rd8(esi + 1u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi + 1u);
        esi = esi + 1u;
        goto L_101c4035;
    }
    loc_104 = rd32(sp0 - 0x104u);
    loc_108 = rd32(sp0 - 0x108u);
    loc_10c = rd32(sp0 - 0x10cu);
L_101c405e: ;
    COW_AT(101c405e)
    g->ebx = loc_104;
    g->esi = loc_108;
    g->edi = loc_10c;
    g->edx = edx;
    return 1u;
L_101c406f: ;
    COW_AT(101c406f)
    g->ebx = rd32(sp0 - 0x104u);
    g->esi = rd32(sp0 - 0x108u);
    g->edi = rd32(sp0 - 0x10cu);
    g->edx = edx;
    return 0xffffffffu;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101c3fe0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101c3fffu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10cu);
        in_esi = rd32(sp0 - 0x108u);
        in_ebx = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x10cu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c400eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x10cu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c4031u:
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
        g->esp = sp0 - 0x10cu;
        wr32(sp0 - 0x118u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x101c4035u:
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
        g->esp = sp0 - 0x10cu;
        wr32(sp0 - 0x118u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x101c403au:
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
        g->esp = sp0 - 0x10cu;
        wr32(sp0 - 0x118u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x101c404au:
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
        g->esp = sp0 - 0x10cu;
        wr32(sp0 - 0x118u, sp0 - 0x100u);
        wr32(sp0 - 0x114u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x101c4053u:
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
        g->esp = sp0 - 0x10cu;
        wr32(sp0 - 0x118u, sp0 - 0x100u);
        wr32(sp0 - 0x114u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x101c4056u:
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
        g->esp = sp0 - 0x10cu;
        wr32(sp0 - 0x118u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x101c405eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_104;
        uint32_t loc_108;
        uint32_t loc_10c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_10c = rd32(sp0 - 0x10cu);
        loc_108 = rd32(sp0 - 0x108u);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x10cu;
        (void)sp0;
        return 1;
    }
    case 0x101c406fu:
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
        g->esp = sp0 - 0x10cu;
        wr32(sp0 - 0x118u, sp0 - 0x100u);
        wr32(sp0 - 0x114u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101c3fe0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101c3fe0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
