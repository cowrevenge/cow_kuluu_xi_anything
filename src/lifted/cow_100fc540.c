/* f_0x100fc540 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the global pointer at 0x104dfd98 is nonzero, allocate/obtain a record via FUN_100fc3c0, initialize it, and return 1 in al; otherwise return 0 in al.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_100fc540(Guest* g)
{
    uint32_t eax = g->eax;
    uint32_t edx = g->edx;
    uint32_t esi = g->esi;

    const uint32_t saved_esi = esi;

    /* 100fc540: mov eax, dword ptr [0x104dfd98] */
    eax = rd32(COW_IMG(0x104DFD98u));

    /* 100fc546: test eax, eax / 100fc548: je 0x100fc55e */
    if (eax == 0u)
    {
        /* 100fc55e: xor al, al */
        eax &= 0xFFFFFF00u;

        g->edx = edx;
        g->esi = saved_esi;
        return eax;
    }

    /* 100fc54a..100fc550: push 1; push 1; push 0xb; call 0x100fc3c0 */
    /* callee is cdecl (caller pops), source-order args are 0xb, 1, 1 */
    eax = cow_cdecl(g, COW_IMG(0x100FC3C0u), 3u, 0xBu, 1u, 1u);
    edx = g->edx;

    /* 100fc555: mov esi, eax */
    esi = eax;

    /* 100fc557: add esp, 0xc is handled by cow_cdecl popping the three args. */

    /* 100fc55a: test esi, esi / 100fc55c: jne 0x100fc562 */
    if (esi == 0u)
    {
        /* 100fc55e: xor al, al */
        eax &= 0xFFFFFF00u;

        g->edx = edx;
        g->esi = saved_esi;
        return eax;
    }

    /* 100fc562: push 2 */
    /* 100fc564: mov word ptr [esi + 0x18], 1 */
    wr16(esi + 0x18u, (uint16_t)1u);

    /* 100fc56a: call 0x100fc180 */
    /*
       The original leaves the argument for FUN_100fc180 on the stack until the
       later "add esp, 0x10" after FUN_100ddd20.  To preserve that stack layout
       for the callees, push the argument manually and call with zero arguments
       so cow_cdecl does not pop it.
    */
    g->esp -= 4u;
    wr32(g->esp, 2u);
    (void)cow_cdecl(g, COW_IMG(0x100FC180u), 0u);
    edx = g->edx;

    /* 100fc56f..100fc574: push 0; push 0x1c; push esi; call 0x100ddd20 */
    /* callee is cdecl (caller pops), source-order args are esi, 0x1c, 0 */
    eax = cow_cdecl(g, COW_IMG(0x100DDD20u), 3u, esi, 0x1Cu, 0u);
    edx = g->edx;

    /* 100fc579: add esp, 0x10 */
    /*
       cow_cdecl has already popped the three arguments for FUN_100ddd20
       (12 bytes).  Pop the remaining 4 bytes left from the earlier
       FUN_100fc180 argument.
    */
    g->esp += 4u;

    /* 100fc57c: mov al, 1 */
    eax = (eax & 0xFFFFFF00u) | 1u;

    g->edx = edx;
    g->esi = saved_esi;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100fc540(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_100fc540(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
