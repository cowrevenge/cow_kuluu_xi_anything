/* f_0x102f5410 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   builds a newline-separated string buffer from the object's string array, returning 0 on success or an HRESULT on failure.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102f5410(Guest* g, uint32_t self, uint32_t out)
{
    uint32_t newobj;
    uint32_t obj;
    uint32_t vtbl;
    uint32_t result;
    uint32_t dst;
    uint32_t count;
    uint32_t size;
    uint32_t total;
    uint32_t i;
    uint32_t str;
    uint32_t src;
    uint32_t len;
    uint32_t n;

    wr32(out, 0u);

    if (rd32(self + 0x10u) == 0u)
    {
        return 0u;
    }

    newobj = cow_cdecl(g, COW_IMG(0x10311bfbu), 1u, 0x10u);

    if (newobj != 0u)
    {
        obj = cow_fastcall(g, COW_IMG(0x102f57c8u), newobj, g->edx, 0u);
    }
    else
    {
        obj = 0u;
    }

    if (obj == 0u)
    {
        return 0x8007000Eu;
    }

    count = rd32(self + 4u);
    size  = rd32(self + 0x10u);
    total = count + size + 1u;

    vtbl   = rd32(obj);
    result = cow_thiscall(g, rd32(vtbl + 0x18u), obj, 1u, total);

    if ((int32_t)result < 0)
    {
        vtbl = rd32(obj);
        cow_thiscall(g, rd32(vtbl + 0x14u), obj, 1u, 1u);
        return result;
    }

    vtbl = rd32(obj);
    dst  = cow_stdcall(g, rd32(vtbl + 0x0cu), 1u, obj);

    for (i = 0u; i < rd32(self + 4u); ++i)
    {
        str = rd32(rd32(self) + i * 4u);

        if (str != 0u)
        {
            src = str;
            while (rd8(src) != 0u)
            {
                ++src;
            }

            len = src - str;

            src = str;
            n   = len >> 2;
            while (n != 0u)
            {
                wr32(dst, rd32(src));
                dst += 4u;
                src += 4u;
                --n;
            }

            n = len & 3u;
            while (n != 0u)
            {
                wr8(dst, rd8(src));
                ++dst;
                ++src;
                --n;
            }

            wr8(dst, 0x0Au);
            ++dst;
        }
    }

    wr8(dst, 0u);
    wr32(out, obj);

    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f5410(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_102f5410(g, g->ecx, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
