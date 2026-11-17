/* f_0x10266800 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   calls the imported allocator with the second argument, stores its result through the first argument, and maps a nonzero result to 0xFFFFFFFF or a zero result to 0x8007000E.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_10266800(Guest* g, uint32_t out_bstr, uint32_t olechar)
{
    const uint32_t target = rd32(COW_IMG(0x1032930cu));

    /*
       10266800: mov eax, dword ptr [esp + 8]
       10266804: push eax
       10266805: call dword ptr [0x1032930c]
    */
    const uint32_t bstr = cow_stdcall(g, target, 1u, olechar);

    /*
       1026680b: mov ecx, dword ptr [esp + 4]
       1026680f: mov dword ptr [ecx], eax
    */
    wr32(out_bstr, bstr);

    /*
       10266811: neg eax
       10266813: sbb eax, eax
       10266815: and eax, 0x7ff8fff2
       1026681a: add eax, 0x8007000e

       neg sets CF iff the incoming eax is nonzero.
       sbb eax, eax therefore produces 0 when CF=0, or 0xFFFFFFFF when CF=1.
    */
    uint32_t eax = bstr;

    /* neg eax */
    const uint32_t neg_r = (uint32_t)(0u - eax);
    const uint32_t neg_cf = (eax != 0u) ? 1u : 0u;
    eax = neg_r;

    /* sbb eax, eax */
    const uint32_t sbb_r = (uint32_t)(eax - eax - neg_cf);
    eax = sbb_r;

    /* and eax, 0x7ff8fff2 */
    eax &= 0x7FF8FFF2u;

    /* add eax, 0x8007000e */
    eax += 0x8007000Eu;

    /*
       edx is not written after the call.  cow_stdcall has already left
       g->edx exactly as the imported callee left it.
    */
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10266800(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t out_bstr = rd32(sp0 + 4u);
    const uint32_t olechar = rd32(sp0 + 8u);

    const uint32_t result = cow_fn_10266800(g, out_bstr, olechar);

    g->esp = sp0;
    rt_return(g, result, 8u);
}
/* COW_ADAPTER END */
