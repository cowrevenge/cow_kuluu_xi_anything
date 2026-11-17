/* f_0x10156760 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls a helper on the stack argument, then conditionally reports a pair/suit string and finally calls another helper with the object's field at +8.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10156760(Guest* g, uint32_t self, uint32_t arg)
{
    const uint32_t saved_esi = g->esi;
    const uint32_t saved_edi = g->edi;

    g->esi = self;
    g->edi = arg;

    /* 10156768: mov ecx, edi */
    /* 1015676a: call 0x1018d3d0 */
    cow_thiscall_cdecl(g, COW_IMG(0x1018d3d0u), arg, 0u);

    /* 1015676f: mov eax, dword ptr [esi + 4] */
    /* 10156772: sub eax, 2 */
    /* 10156775: je 0x10156781 */
    /* 10156777: dec eax */
    /* 10156778: jne 0x1015678d */
    {
        const uint32_t v = rd32(self + 4u);

        if (v == 2u)
        {
            /* 10156781: push 0x10371ea4 */
            /* 10156786: mov ecx, edi */
            /* 10156788: call 0x1018d430 */
            cow_thiscall(g, COW_IMG(0x1018d430u), arg, 1u, COW_IMG(0x10371ea4u));
        }
        else if (v == 3u)
        {
            /* 1015677a: push 0x10371eb0 */
            /* 10156786: mov ecx, edi */
            /* 10156788: call 0x1018d430 */
            cow_thiscall(g, COW_IMG(0x1018d430u), arg, 1u, COW_IMG(0x10371eb0u));
        }
    }

    /* 1015678d: mov eax, dword ptr [esi + 8] */
    /* 10156790: mov ecx, edi */
    /* 10156792: push eax */
    /* 10156793: call 0x1018d440 */
    cow_thiscall(g, COW_IMG(0x1018d440u), arg, 1u, rd32(self + 8u));

    /* 10156798: pop edi */
    /* 10156799: pop esi */
    g->edi = saved_edi;
    g->esi = saved_esi;

    /* edx is whatever the last call left; eax is whatever the last call left. */
    g->edx = g->edx;
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10156760(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg = rd32(sp0 + 4u);

    const uint32_t result = cow_fn_10156760(g, self, arg);

    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
