/* f_0x102661c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_102661c0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 552u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102661e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0x204u); g->esi = rd32(sp0 - 0x204u); goto E_102661e4;
    case 0x102661ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102661eb;
    case 0x10266206u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10266206;
    case 0x10266228u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10266228;
    default: break;
    }
#endif

    COW_AT(102661c0)
    wr32(sp0 - 0x204u, in_esi);
    wr32(sp0 - 0x208u, 0u);
    wr32(sp0 - 0x20cu, 0u);
    wr32(sp0 - 0x210u, 0x100u);
    wr32(sp0 - 0x214u, sp0 - 0x200u);
    wr32(sp0 - 0x218u, 0xffffffffu);
    wr32(sp0 - 0x21cu, arg2);
    wr32(sp0 - 0x220u, 0u);
    g->eax = sp0 - 0x200u;
    g->ecx = arg2;
    g->edx = in_edx;
    g->esp = sp0 - 0x204u;
    t1 = cow_cdecl(g, rd32(COW_IMG(0x10329234u)), 7, 0u, arg2, 0xffffffffu, sp0 - 0x200u, 0x100u, 0u, 0u);   /* kernel32.dll!GetACP */
    t2 = g->ecx;
    t3 = g->edx;
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(102661e4)
    wr32(sp0 - 0x224u, eax);
    g->esp = sp0 - 0x204u;
    cow_stdcall(g, rd32(COW_IMG(0x10329154u)), 8, eax, 0u, arg2, 0xffffffffu, sp0 - 0x200u, 0x100u, 0u, 0u);   /* kernel32.dll!WideCharToMultiByte */
    COW_AT(102661eb)
    wr32(sp0 - 0x208u, sp0 + 0xcu);
    wr32(sp0 - 0x20cu, sp0 - 0x200u);
    wr32(sp0 - 0x210u, sp0 - 0x100u);
    g->eax = sp0 - 0x200u;
    g->esp = sp0 - 0x204u;
    t4 = cow_stdcall(g, rd32(COW_IMG(0x10329334u)), 3, sp0 - 0x100u, sp0 - 0x200u, sp0 + 0xcu);   /* user32.dll!wvsprintfA */
    eax = t4;
    COW_AT(10266206)
    wr32(sp0 - 0x208u, eax + 1u);
    wr32(sp0 - 0x20cu, arg1);
    wr32(sp0 - 0x210u, 0xffffffffu);
    wr32(sp0 - 0x214u, sp0 - 0x100u);
    wr32(sp0 - 0x218u, 0u);
    wr32(sp0 - 0x21cu, 0u);
    g->edx = eax + 1u;
    g->esp = sp0 - 0x204u;
    cow_stdcall(g, rd32(COW_IMG(0x10329144u)), 6, 0u, 0u, sp0 - 0x100u, 0xffffffffu, arg1, eax + 1u);   /* kernel32.dll!MultiByteToWideChar */
    t5 = g->edx;
    edx = t5;
    esi = eax;
    COW_AT(10266228)
    g->esi = rd32(sp0 - 0x204u);
    g->edx = edx;
    return esi;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102661c0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102661e4u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x220u;
        wr32(sp0 - 0x220u, 0u);
        wr32(sp0 - 0x21cu, arg2);
        wr32(sp0 - 0x218u, 0xffffffffu);
        wr32(sp0 - 0x214u, sp0 - 0x200u);
        wr32(sp0 - 0x210u, 0x100u);
        wr32(sp0 - 0x20cu, 0u);
        wr32(sp0 - 0x208u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102661ebu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x204u;
        wr32(sp0 - 0x214u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x10266206u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x204u;
        wr32(sp0 - 0x214u, sp0 - 0x200u);
        wr32(sp0 - 0x210u, sp0 - 0x100u);
        wr32(sp0 - 0x20cu, sp0 - 0x200u);
        wr32(sp0 - 0x208u, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10266228u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x204u;
        wr32(sp0 - 0x214u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102661c0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102661c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
