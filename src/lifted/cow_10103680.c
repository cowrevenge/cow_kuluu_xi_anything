/* f_0x10103680 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If a global pointer is set, formats a 32-bit counter from it via FUN_10312031 and stores a fixed pointer into the caller's output slot.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_10103680(Guest* g, uint32_t param_1)
{
    const uint32_t global = rd32(COW_IMG(0x104E0AF4u));

    if (global == 0u)
    {
        /* Original: eax = 0, xor al, al -> eax = 0; edx is untouched. */
        return 0u;
    }

    const uint32_t value = rd32(global + 0x438u);

    /* Save callee-saved registers exactly as the original does before the call. */
    const uint32_t saved_ebx = g->ebx;
    const uint32_t saved_esi = g->esi;
    const uint32_t saved_edi = g->edi;

    uint32_t eax;
    uint32_t edx;
    uint32_t ecx;
    uint32_t ebx;
    uint32_t esi;
    uint32_t edi;

    /* div 0xf4240: eax = value / 1000000, edx = value % 1000000 */
    eax = value;
    edx = 0u;
    esi = 0xF4240u;
    {
        uint64_t n = ((uint64_t)edx << 32) | (uint64_t)eax;
        uint32_t d = esi;
        eax = (uint32_t)(n / d);
        edx = (uint32_t)(n % d);
    }
    esi = edx;   /* value % 1000000 */
    edi = eax;   /* value / 1000000 */

    /* div 100: edx = value % 100 */
    eax = value;
    edx = 0u;
    ebx = 0x64u;
    {
        uint64_t n = ((uint64_t)edx << 32) | (uint64_t)eax;
        uint32_t d = ebx;
        eax = (uint32_t)(n / d);
        edx = (uint32_t)(n % d);
    }
    const uint32_t arg_low2 = edx;

    /* div 10000: edx = value % 10000 */
    eax = value;
    ecx = 0x2710u;
    edx = 0u;
    {
        uint64_t n = ((uint64_t)edx << 32) | (uint64_t)eax;
        uint32_t d = ecx;
        eax = (uint32_t)(n / d);
        edx = (uint32_t)(n % d);
    }

    /* (value % 10000) / 100 via magic multiply */
    eax = 0x51EB851Fu;
    {
        uint64_t p = (uint64_t)eax * (uint64_t)edx;
        eax = (uint32_t)p;
        edx = (uint32_t)(p >> 32);
    }
    edx >>= 5;
    const uint32_t arg_mid2 = edx;

    /* (value % 1000000) / 10000 via magic multiply */
    eax = 0xD1B71759u;
    {
        uint64_t p = (uint64_t)eax * (uint64_t)esi;
        eax = (uint32_t)p;
        edx = (uint32_t)(p >> 32);
    }
    edx >>= 13;
    const uint32_t arg_high2 = edx;

    /*
       Match register state at the call site as closely as needed.
       The callee is cdecl, so only stack arguments matter for the interface,
       but preserving the original register values before the call is safest.
    */
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->ebx = ebx;
    g->esi = esi;
    g->edi = edi;

    const uint32_t call_eax = cow_cdecl(
        g,
        COW_IMG(0x10312031u),
        6u,
        COW_IMG(0x104DFDA0u),
        COW_IMG(0x10364804u),
        edi,
        arg_high2,
        arg_mid2,
        arg_low2
    );

    /* Restore callee-saved registers as the original pops them. */
    g->ebx = saved_ebx;
    g->esi = saved_esi;
    g->edi = saved_edi;

    /* Original: mov edx, [esp + 0x28] -> the sole stack argument. */
    g->edx = param_1;

    /* Original: mov dword ptr [edx], 0x104dfda0 */
    wr32(param_1, COW_IMG(0x104DFDA0u));

    /* Original: mov al, 1, preserving the high 24 bits left by the callee. */
    return (call_eax & 0xFFFFFF00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10103680(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param_1 = rd32(sp0 + 4u);

    const uint32_t result = cow_fn_10103680(g, param_1);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
