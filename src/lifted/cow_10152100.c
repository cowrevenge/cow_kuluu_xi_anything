/* f_0x10152100 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10152100(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10152111u: eax = g->eax; goto E_10152111;
    case 0x1015211bu: eax = g->eax; goto E_1015211b;
    case 0x10152129u: eax = g->eax; goto E_10152129;
    case 0x1015212du: eax = g->eax; goto E_1015212d;
    case 0x10152139u: eax = g->eax; goto E_10152139;
    case 0x1015213du: eax = g->eax; goto E_1015213d;
    case 0x10152148u: eax = g->eax; goto E_10152148;
    default: break;
    }
#endif

    COW_AT(10152100)
    if (rd32(COW_IMG(0x10480af0u) + rd32(arg1) * 4u) == 0u) goto L_1015213d;
    eax = rd32(COW_IMG(0x10480af0u) + rd32(arg1) * 4u);
    COW_AT(10152111)
    t1 = rd16(eax + 0x210u);
    if ((uint16_t)t1 == 0u) goto L_1015212d;
    COW_AT(1015211b)
    g->esp = sp0;
    COW_RET(0x10152129u);
    cow_cdecl(g, COW_IMG(0x10151ad0u), 3, 0x1cu, arg1, eax + 0x214u);
    COW_AT(10152129)
    return;
L_1015212d: ;
    COW_AT(1015212d)
    g->esp = sp0;
    COW_RET(0x10152139u);
    cow_cdecl(g, COW_IMG(0x10151ad0u), 3, 0x1cu, arg1, eax + 0x7cu);
    COW_AT(10152139)
    return;
L_1015213d: ;
    COW_AT(1015213d)
    g->esp = sp0;
    COW_RET(0x10152148u);
    cow_cdecl(g, COW_IMG(0x10151ad0u), 3, 0x1cu, arg1, 0u);
    COW_AT(10152148)
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10152100(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10152111u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0;
        g->ecx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1015211bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0;
        g->ecx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10152129u:
    {
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1015212du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0;
        g->ecx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10152139u:
    {
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1015213du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0;
        g->ecx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10152148u:
    {
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10152100(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10152100(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
