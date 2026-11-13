/* f_0x1031dd13 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Decrements the 32-bit counter at [param+4]; if it remains non-negative, returns the byte at [param] and advances [param], otherwise calls FUN_10319505(param) and returns its result.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_1031dd13(Guest* g, uint32_t param)
{
    uint32_t edx = param;

    /* 1031dd17: dec dword ptr [edx + 4] */
    const uint32_t addr = edx + 4u;
    const uint32_t old = rd32(addr);
    const uint32_t neu = old - 1u;
    wr32(addr, neu);

    /* 1031dd1a: js 0x1031dd25 */
    if ((int32_t)neu < 0)
    {
        /* 1031dd25: push edx */
        /* 1031dd26: call 0x10319505 */
        g->edx = edx;
        const uint32_t eax = cow_cdecl(g, COW_IMG(0x10319505u), 1u, edx);

        /* 1031dd2b: pop ecx */
        /* 1031dd2c: ret */
        g->edx = g->edx;
        return eax;
    }

    /* 1031dd1c: mov ecx, dword ptr [edx] */
    uint32_t ecx = rd32(edx);

    /* 1031dd1e: movzx eax, byte ptr [ecx] */
    const uint32_t eax = rd8(ecx);

    /* 1031dd21: inc ecx */
    ecx = ecx + 1u;

    /* 1031dd22: mov dword ptr [edx], ecx */
    wr32(edx, ecx);

    /* 1031dd24: ret */
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031dd13(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd32(sp0 + 4u);

    g->esp = sp0;
    const uint32_t result = cow_fn_1031dd13(g, param);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
