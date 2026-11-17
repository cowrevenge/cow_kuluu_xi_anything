/* f_0x10118b20 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Starting from the object at this+0x14, obtains an initial node and repeatedly advances until a node whose first 16-bit field is 2 is found, returning the 32-bit field at offset 0xc from that node, or 

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10118b20(Guest* g, uint32_t self)
{
    const uint32_t sp0 = g->esp;
    const uint32_t saved_esi = g->esi;
    const uint32_t saved_ecx = g->ecx;

    /* Original stack layout:
       [sp0]      return address
       [sp0-4]    saved ecx / local node pointer
       [sp0-8]    saved esi
       The address passed to FUN_10126520 is [esp+4], i.e. sp0-4.
    */
    const uint32_t frame = cow_frame(g, sp0, 8u);
    const uint32_t local = frame + 4u;   /* corresponds to sp0 - 4 */

    uint32_t esi = self + 0x14u;
    uint32_t eax;

    /* 10118b25: mov ecx, esi ; call 0x10126500
       The callee is thiscall-style with no stack arguments and a bare ret,
       so the caller pops nothing.
    */
    eax = cow_thiscall_cdecl(g, COW_IMG(0x10126500u), esi, 0u);

    /* 10118b2c: mov dword ptr [esp + 4], eax */
    wr32(local, eax);

    for (;;)
    {
        /* 10118b30: mov eax, dword ptr [esp + 4] */
        eax = rd32(local);

        /* 10118b34: test eax, eax ; 10118b36: je 0x10118b50 */
        if (eax == 0u)
        {
            g->esi = saved_esi;
            g->ecx = saved_ecx;
            return 0u;
        }

        /* 10118b38: lea eax, [esp + 4]
           10118b3c: mov ecx, esi
           10118b3e: push eax
           10118b3f: call 0x10126520
           The callee takes one stack argument and ends with ret 4.
           It also expects ecx = this.
        */
        eax = cow_thiscall(g, COW_IMG(0x10126520u), esi, 1u, local);

        /* 10118b44: cmp word ptr [eax], 2
           10118b48: jne 0x10118b30
        */
        if (rd16(eax) != 2u)
        {
            continue;
        }

        /* 10118b4a: mov eax, dword ptr [eax + 0xc] */
        eax = rd32(eax + 0xcu);

        g->esi = saved_esi;
        g->ecx = saved_ecx;
        return eax;
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10118b20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10118b20(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
