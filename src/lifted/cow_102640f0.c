/* f_0x102640f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_102640f0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 52u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102641a0u: eax = g->eax; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_102641a0;
    case 0x102641a2u: eax = g->eax; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_102641a2;
    default: break;
    }
#endif

    COW_AT(102640f0)
    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x10327c46u));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x10u, self);
    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    wr32(sp0 - 0x20u, arg5);
    wr32(sp0 - 0x24u, arg4);
    wr32(sp0 - 0x28u, arg3);
    wr32(sp0 - 0x2cu, arg2);
    wr32(sp0 - 0x30u, arg1);
    wr32(sp0 - 0x10u, self);
    g->edx = arg2;
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, COW_IMG(0x10262fd0u), self, 5, arg1, arg2, arg3, arg4, arg5);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x20u, self + 0xa4u);
    wr32(sp0 - 4u, 0u);
    g->eax = self + 0xa4u;
    g->edx = t3;
    t4 = cow_stdcall(g, rd32(COW_IMG(0x10329184u)), 1, self + 0xa4u);   /* kernel32.dll!InitializeCriticalSection */
    t5 = g->edx;
    wr8(sp0 - 4u, 1u);
    wr32(self + 0xbcu, 0u);
    wr32(self + 0xc0u, 0u);
    wr32(self + 0xc4u, 0u);
    wr32(self + 0xc8u, 0u);
    wr32(self + 0xccu, 0u);
    wr32(self + 0xd0u, 0u);
    wr32(self + 0xd4u, 0u);
    wr32(self + 0xd8u, 0u);
    wr32(self, COW_IMG(0x10340868u));
    wr32(self + 0xcu, COW_IMG(0x10340820u));
    wr32(self + 0x10u, COW_IMG(0x10340808u));
    wr32(self + 0xa0u, COW_IMG(0x103407f8u));
    t6 = cow_fastcall(g, COW_IMG(0x10264280u), self, t5, 0);
    t7 = g->edx;
    if ((int32_t)t6 >= 0)
    {
        edx = t7;
    }
    else
    {
        eax = t6;
        edx = t7;
    COW_AT(102641a0)
        wr32(arg4, eax);
    }
    COW_AT(102641a2)
    t8 = rd32(sp0 - 0xcu);
    wr32(g->fs_base, t8);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return self;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102640f0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102641a0u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->ebx = arg4;
        (void)sp0;
        return 1;
    }
    case 0x102641a2u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102640f0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102640f0(g);
    g->esp = sp0;
    rt_return(g, r, 20u);
}
/* COW_ADAPTER END */
