/* f_0x101c09b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101c09b0(Guest* g)
{
    uint32_t eax;
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
    cow_frame(g, sp0, 540u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101c09fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x208u); in_ebx = rd32(sp0 - 0x204u); g->ebx = rd32(sp0 - 0x204u); g->edi = rd32(sp0 - 0x208u); goto E_101c09fd;
    case 0x101c0a14u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x208u); in_ebx = rd32(sp0 - 0x204u); g->ebx = rd32(sp0 - 0x204u); g->edi = rd32(sp0 - 0x208u); goto E_101c0a14;
    case 0x101c0a15u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x20cu); in_edi = rd32(sp0 - 0x208u); in_ebx = rd32(sp0 - 0x204u); g->ebx = rd32(sp0 - 0x204u); g->edi = rd32(sp0 - 0x208u); g->esi = rd32(sp0 - 0x20cu); goto E_101c0a15;
    case 0x101c0a24u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_101c0a24;
    default: break;
    }
#endif

    COW_AT(101c09b0)
    wr32(sp0 - 0x204u, in_ebx);
    wr32(sp0 - 0x208u, in_edi);
    wr32(sp0 - 0x20cu, 1u);
    wr32(sp0 - 0x210u, 0x1ffu);
    wr32(sp0 - 0x214u, sp0 - 0x200u);
    wr32(sp0 - 0x218u, 0x21u);
    g->eax = sp0 - 0x200u;
    g->edx = in_edx;
    g->esp = sp0 - 0x208u;
    t1 = cow_cdecl(g, COW_IMG(0x1030ff10u), 4, 0x21u, sp0 - 0x200u, 0x1ffu, 1u);
    t2 = g->edx;
    wr32(sp0 - 0x20cu, 0u);
    wr32(sp0 - 0x210u, sp0 - 0x200u);
    g->edx = t2;
    t3 = cow_stdcall(g, rd32(COW_IMG(0x10329208u)), 2, sp0 - 0x200u, 0u);   /* kernel32.dll!CreateDirectoryA */
    t4 = g->edx;
    t5 = rd32(self + 0x1f0u);
    t6 = cow_fastcall(g, COW_IMG(0x1019fa90u), t5, t4, 0);
    t7 = g->ecx;
    t8 = g->edx;
    wr32(sp0 - 0x20cu, 0x14000u);
    wr32(sp0 - 0x210u, 1u);
    g->ecx = t7;
    g->edx = t8;
    t9 = cow_cdecl(g, COW_IMG(0x103113a5u), 2, 1u, 0x14000u);
    t10 = g->ecx;
    t11 = g->edx;
    if ((int32_t)t9 >= 0)
    {
        eax = t9;
        ecx = t10;
        edx = t11;
        edi = t9;
        goto L_101c0a14;
    }
    eax = t9;
    edx = t11;
    COW_AT(101c09fd)
    g->eax = eax;
    g->esp = sp0 - 0x208u;
    t12 = cow_fastcall(g, COW_IMG(0x1019fab0u), rd32(self + 0x1f0u), edx, 0);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return 0xffffffffu;
L_101c0a14: ;
    COW_AT(101c0a14)
    wr32(sp0 - 0x20cu, in_esi);
L_101c0a15: ;
    COW_AT(101c0a15)
    wr32(sp0 - 0x210u, edi);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x20cu;
    t13 = cow_cdecl(g, COW_IMG(0x1031139au), 1, edi);
    t14 = g->ecx;
    t15 = g->edx;
    if (t13 == 0u)
    {
        eax = t13;
        ecx = t14;
        edx = t15;
        goto L_101c0a15;
    }
    eax = t13;
    edx = t15;
    esi = t13;
    COW_AT(101c0a24)
    g->esp = sp0 - 0x20cu;
    cow_fastcall(g, COW_IMG(0x1019fab0u), rd32(self + 0x1f0u), edx, 0);
    g->ebx = rd32(sp0 - 0x204u);
    g->esi = rd32(sp0 - 0x20cu);
    g->edi = rd32(sp0 - 0x208u);
    return esi;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101c09b0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101c09fdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x208u);
        in_ebx = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x208u;
        wr32(sp0 - 0x214u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x101c0a14u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x208u);
        in_ebx = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x208u;
        wr32(sp0 - 0x214u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x101c0a15u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x20cu);
        in_edi = rd32(sp0 - 0x208u);
        in_ebx = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x20cu;
        wr32(sp0 - 0x214u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x101c0a24u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20cu;
        wr32(sp0 - 0x214u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101c09b0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101c09b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
