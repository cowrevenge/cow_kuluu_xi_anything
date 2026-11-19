/* f_0x10315180 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Looks up a 16-bit value from a global table for small indices, otherwise calls a helper to obtain it, then masks it with the second argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_10315180(Guest* g, uint32_t self, uint32_t arg1, uint32_t arg2, uint32_t sp0)
{
    (void)self;

    const uint32_t table = rd32(COW_IMG(0x103d0030u));

    /* 10315187: lea ecx, [eax + 1]
       1031518a: cmp ecx, 0x100
       10315190: ja 0x1031519e
       Unsigned compare on ecx = (uint32_t)(arg1 + 1). */
    if ((uint32_t)(arg1 + 1u) <= 0x100u)
    {
        /* 10315198: movzx eax, word ptr [ecx + eax*2]
           edx is untouched on this path. */
        return (uint32_t)(rd16(table + arg1 * 2u) & arg2);
    }

    /* Slow path. */

    /* 1031519e: mov ecx, eax */
    uint32_t ecx = arg1;

    /* 103151a7: sar ecx, 8  (signed) */
    ecx = (uint32_t)((int32_t)ecx >> 8);

    /* 103151aa: movzx edx, cl */
    uint32_t edx = (uint32_t)(uint8_t)(ecx & 0xFFu);

    /* 103151ad: test byte ptr [esi + edx*2 + 1], 0x80 */
    const uint32_t test_byte = rd8(table + edx * 2u + 1u);

    /* Local buffer at [ebp - 4].  With ebp = sp0 - 4, this is sp0 - 8.
       The original passes its address to the callee, so it must live in guest memory. */
    const uint32_t local = cow_frame(g, sp0, 8u);

    /* Output word address is [ebp + 0xa] = sp0 + 6. */
    const uint32_t out_word = sp0 + 6u;

    uint32_t eax;

    if ((test_byte & 0x80u) != 0u)
    {
        /* 103151b5: and byte ptr [ebp - 2], 0
           103151b9: mov byte ptr [ebp - 4], cl
           103151bc: mov byte ptr [ebp - 3], al */
        wr8(local + 2u, 0u);
        wr8(local + 0u, (uint32_t)(uint8_t)(ecx & 0xFFu));
        wr8(local + 1u, (uint32_t)(uint8_t)(arg1 & 0xFFu));

        /* 103151bf: push 2
           103151cc: pop eax */
        eax = 2u;
    }
    else
    {
        /* 103151c3: and byte ptr [ebp - 3], 0
           103151c7: mov byte ptr [ebp - 4], al */
        wr8(local + 1u, 0u);
        wr8(local + 0u, (uint32_t)(uint8_t)(arg1 & 0xFFu));

        /* 103151ca: push 1
           103151cc: pop eax */
        eax = 1u;
    }

    /* Preserve the original guest register state at the call site. */
    g->eax = eax;
    g->ecx = out_word;
    g->edx = edx;

    /* 103151de: call 0x10320813
       Caller pops 28 bytes, so use cdecl.
       Arguments in source order are the values pushed last-to-first:
         param_1 = 1
         param_2 = &local
         param_3 = eax
         param_4 = &out_word
         param_5 = 0
         param_6 = 0
         param_7 = 1
    */
    const uint32_t call_result = cow_cdecl(
        g,
        COW_IMG(0x10320813u),
        7u,
        1u,
        local,
        eax,
        out_word,
        0u,
        0u,
        1u
    );

    /* 103151e6: test eax, eax
       103151e8: jne 0x103151ec
       103151ea: leave
       103151eb: ret */
    if (call_result == 0u)
    {
        /* On this path the original leaves eax = 0 and edx as left by the callee. */
        return 0u;
    }

    /* 103151ec: movzx eax, word ptr [ebp + 0xa] */
    eax = (uint32_t)rd16(out_word);

    /* 103151f0: and eax, dword ptr [ebp + 0xc] */
    return eax & arg2;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10315180(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(sp0 + 4u);
    const uint32_t arg2 = rd32(sp0 + 8u);

    const uint32_t result = cow_fn_10315180(g, self, arg1, arg2, sp0);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
