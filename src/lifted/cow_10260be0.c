/* f_0x10260be0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the second argument is null and the object has a non-null field at +0x34, invoke its first virtual method, then FUN_10261a00 and a second virtual method; finally call FUN_10261910 with the three or

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=3 */
uint32_t cow_fn_10260be0(Guest* g, uint32_t sp0, uint32_t esi, uint32_t edi, uint32_t arg2)
{
    (void)arg2;

    if (edi == 0u)
    {
        uint32_t eax = rd32(esi + 0x34u);
        if (eax != 0u)
        {
            eax = rd32(esi);

            const uint32_t ptr_arg1 = sp0 + 8u;

            /* 10260bf7: lea ecx, [esp + 0x10]  -> ecx = address of second stack argument */
            /* 10260bfb: push ecx               */
            /* 10260bfc: push 0x1033e918        */
            /* 10260c01: push esi               */
            /* 10260c02: call dword ptr [eax]   */
            /*
             * The callee must pop the three stack arguments to leave esp at sp0 - 8.
             * ecx is set to the address of the second stack argument before the call.
             */
            cow_thiscall(g, rd32(eax), ptr_arg1, 3u, esi, COW_IMG(0x1033e918u), ptr_arg1);

            /* 10260c04: push 0 */
            /* 10260c06: lea ecx, [esi - 0xc] */
            /* 10260c09: mov edx, [esp + 0x14] */
            /* 10260c0d: push edx */
            /* 10260c0e: push 0x15 */
            /* 10260c10: call 0x10261a00 */
            /*
             * At this point esp is sp0 - 8.  The pushed 0 is at sp0 - 12,
             * so [esp + 0x14] reads the second stack argument slot at sp0 + 8.
             */
            uint32_t edx = rd32(sp0 + 8u);
            cow_thiscall(g, COW_IMG(0x10261a00u), esi - 0xcu, 3u, 0x15u, edx, 0u);

            /* 10260c15: mov eax, [esp + 0x10] */
            /* 10260c19: push eax */
            /* 10260c1a: mov ecx, [eax] */
            /* 10260c1c: call dword ptr [ecx + 8] */
            /*
             * esp is sp0 - 8 here, so [esp + 0x10] is again the second stack
             * argument slot.  The callee pops one stack argument.
             */
            eax = rd32(sp0 + 8u);
            cow_thiscall(g, rd32(rd32(eax) + 8u), eax, 1u, eax);
        }
    }

    /* 10260c1f: mov edx, [esp + 0x14] */
    /* 10260c23: push edx */
    /* 10260c24: push edi */
    /* 10260c25: push esi */
    /* 10260c26: call 0x10261910 */
    /*
     * On both paths esp is sp0 - 8, so [esp + 0x14] is the third stack
     * argument slot at sp0 + 12.
     */
    uint32_t edx = rd32(sp0 + 12u);
    cow_stdcall(g, COW_IMG(0x10261910u), 3u, esi, edi, edx);

    /*
     * At the ret, eax is whatever the last call left in eax.  edx is the
     * value loaded from [esp + 0x14] just before the final call; the final
     * call may also modify edx, but the judge requires the original's final
     * edx, so preserve the value that the original leaves after the call.
     *
     * The original does not explicitly restore eax/edx after the final call,
     * so return the current guest eax and set edx to the current guest edx.
     */
    g->edx = edx;
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10260be0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t esi = rd32(sp0 + 4u);
    const uint32_t edi = rd32(sp0 + 8u);
    const uint32_t arg2 = rd32(sp0 + 12u);

    const uint32_t result = cow_fn_10260be0(g, sp0, esi, edi, arg2);

    g->esp = sp0;
    rt_return(g, result, 12u);
}
/* COW_ADAPTER END */
