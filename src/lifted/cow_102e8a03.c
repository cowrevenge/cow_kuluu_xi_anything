/* f_0x102e8a03 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Processes a stream/reader object through several virtual method calls, extracting data and updating state fields.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102e8a03(Guest* g, uint32_t self, uint32_t param2)
{
    const uint32_t sp0 = g->esp;
    /* local buffer at [ebp-0x24] = sp0 - 4 - 0x24 = sp0 - 0x28, size 0x24 */
    const uint32_t buf24 = cow_frame(g, sp0, 0x28u);
    /* local at [ebp-4] = sp0 - 4 - 4 = sp0 - 8, size 4 */
    const uint32_t local4 = cow_frame(g, sp0, 8u);

    wr32(local4, 0u);

    if (rd32(self + 0x460u) == 1u) {
        /* vtable+0x38 on *(self+0x34), args: obj, 0, &buf */
        uint32_t eax = rd32(self + 0x34u);
        uint32_t ecx = rd32(eax);
        cow_cdecl(g, rd32(ecx + 0x38u), 3, eax, 0u, buf24);
    } else {
        uint32_t ebx = self + 0x30u;
        if (rd32(ebx) == 0u) {
            /* first call vtable+0x50 */
            uint32_t ecx_val = rd32(self + 0xcu);
            uint32_t eax_val = rd32(self + 8u);
            uint32_t edx_val = rd32(eax_val);
            int32_t r = (int32_t)cow_cdecl(g, rd32(edx_val + 0x50u), 8,
                eax_val, ecx_val, ecx_val, rd32(self + 0x1cu), 1u,
                rd32(self + 0x10u), 0u, ebx);
            if (r < 0) {
                /* second call vtable+0x50 */
                edx_val = rd32(eax_val);
                r = (int32_t)cow_cdecl(g, rd32(edx_val + 0x50u), 8,
                    eax_val, ecx_val, ecx_val, rd32(self + 0x1cu), 0u,
                    rd32(self + 0x10u), 0u, ebx);
                if (r < 0) {
                    return (uint32_t)r;
                }
            }
        }
        /* vtable+0x38 on *(ebx), args: obj, 0, &buf */
        uint32_t ebx_val = rd32(ebx);
        uint32_t eax_v = rd32(ebx_val);
        cow_cdecl(g, rd32(eax_v + 0x38u), 3, ebx_val, 0u, buf24);
    }

    /* read result from [ebp-0x1c] = buf24 + (0x24 - 0x1c) = buf24 + 8 */
    uint32_t eax = rd32(buf24 + 8u) & 1u;
    wr32(self + 0x46cu, eax);

    if (eax == 0u) {
        uint32_t ebx = self + 0x20u;
        if (rd32(ebx) == 0u) {
            uint32_t ecx_val = rd32(self + 0xcu);
            uint32_t eax_val = rd32(self + 8u);
            uint32_t edx_val = rd32(eax_val);
            int32_t r = (int32_t)cow_cdecl(g, rd32(edx_val + 0x64u), 7,
                eax_val, ecx_val, ecx_val, rd32(self + 0x10u), 0u, 1u, ebx);
            if (r < 0) {
                return (uint32_t)r;
            }
        }
        wr32(local4, rd32(ebx));
    } else {
        if (rd32(self + 0x460u) == 1u) {
            uint32_t eax_v = rd32(self + 0x34u);
            uint32_t ecx_v = rd32(eax_v);
            cow_cdecl(g, rd32(ecx_v + 0x3cu), 3, eax_v, param2, local4);
        } else {
            uint32_t eax_v = rd32(self + 0x30u);
            uint32_t ecx_v = rd32(eax_v);
            cow_cdecl(g, rd32(ecx_v + 0x3cu), 2, eax_v, local4);
        }
    }

    uint32_t ebx = self + 0x24u;
    if (rd32(ebx) == 0u && rd32(self + 0x14u) != 0u) {
        uint32_t ecx_val = rd32(self + 0xcu);
        uint32_t eax_val = rd32(self + 8u);
        uint32_t edx_val = rd32(eax_val);
        int32_t r = (int32_t)cow_cdecl(g, rd32(edx_val + 0x68u), 6,
            eax_val, ecx_val, ecx_val, rd32(self + 0x18u), 0u, ebx);
        if (r < 0) {
            return (uint32_t)r;
        }
    }

    /* vtable+0x7c on *(self+8), args: obj, local4, *(ebx) */
    uint32_t eax_val = rd32(self + 8u);
    uint32_t ecx_v = rd32(eax_val);
    cow_cdecl(g, rd32(ecx_v + 0x7cu), 3, eax_val, rd32(local4), rd32(ebx));

    /* vtable+0xa0 on *(self+8), args: obj, self+0x474 */
    eax_val = rd32(self + 8u);
    ecx_v = rd32(eax_val);
    cow_cdecl(g, rd32(ecx_v + 0xa0u), 2, eax_val, self + 0x474u);

    if (rd32(self + 0x46cu) != 0u) {
        uint32_t l4 = rd32(local4);
        uint32_t ecx_v2 = rd32(l4);
        cow_cdecl(g, rd32(ecx_v2 + 8u), 1, l4);
    }

    /* vtable+0x88 on *(self+8), args: obj */
    eax_val = rd32(self + 8u);
    ecx_v = rd32(eax_val);
    int32_t result = (int32_t)cow_cdecl(g, rd32(ecx_v + 0x88u), 1, eax_val);

    if (result >= 0) {
        wr32(self + 0x464u, param2);
        wr32(self + 0x468u, 1u);
        result = 0;
    }

    return (uint32_t)result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e8a03(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_102e8a03(g, g->ecx, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
