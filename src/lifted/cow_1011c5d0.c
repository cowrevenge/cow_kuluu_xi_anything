/* f_0x1011c5d0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   allocates and initializes a font-like structure of size (arg2 * arg3 * 4 + 0x3d), storing the pointer through arg1.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=3 */
uint32_t cow_fn_1011c5d0(Guest* g, uint32_t arg0, uint32_t arg1, uint32_t arg2)
{
    const uint32_t ebx0 = g->ebx;
    const uint32_t ebp0 = g->ebp;
    const uint32_t esi0 = g->esi;
    const uint32_t edi0 = g->edi;

    const uint32_t product = (uint32_t)((int32_t)arg1 * (int32_t)arg2);
    const uint32_t size = (uint32_t)(product * 4u + 0x3du);

    g->eax = product;
    g->ebp = arg1;
    g->edi = size;

    const uint32_t ptr = cow_cdecl(g, COW_IMG(0x10311bfbu), 1u, size);

    g->ebx = ebx0;
    g->ebp = ebp0;
    g->esi = esi0;
    g->edi = edi0;

    if (ptr == 0u)
    {
        wr32(arg0, 0u);
        g->edx = arg0;
        return 0u;
    }

    uint32_t p = ptr;
    uint32_t n = size >> 2;
    while (n != 0u)
    {
        wr32(p, 0u);
        p += 4u;
        --n;
    }

    n = size & 3u;
    while (n != 0u)
    {
        wr8(p, 0u);
        ++p;
        --n;
    }

    wr8(ptr, 0x30u);

    g->eax = 0u;
    g->ecx = ptr + 1u;
    g->edx = size;
    g->edi = p;

    cow_thiscall(g, COW_IMG(0x100397a0u), ptr + 1u, 1u, COW_IMG(0x1036c3f4u));

    g->ebx = ebx0;
    g->ebp = ebp0;
    g->esi = esi0;
    g->edi = edi0;

    wr32(ptr + 0x19u, arg2);
    wr32(ptr + 0x11u, 0u);
    wr32(ptr + 0x15u, arg1);
    wr16(ptr + 0x1du, 0u);
    wr16(ptr + 0x1fu, 0x20u);
    wr32(ptr + 0x21u, 0u);
    wr32(ptr + 0x25u, 0u);
    wr32(ptr + 0x29u, 0u);
    wr32(ptr + 0x2du, 0u);
    wr32(ptr + 0x31u, 0x100u);
    wr32(ptr + 0x35u, 0x20u);
    wr8(ptr + 0x39u, 1u);
    wr32(arg0, ptr);

    return 0x20u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1011c5d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg0 = rd32(sp0 + 4u);
    const uint32_t arg1 = rd32(sp0 + 8u);
    const uint32_t arg2 = rd32(sp0 + 12u);

    const uint32_t result = cow_fn_1011c5d0(g, arg0, arg1, arg2);

    g->esp = sp0;
    rt_return(g, result, 12u);
}
/* COW_ADAPTER END */
