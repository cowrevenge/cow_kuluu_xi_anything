/* f_0x1002b390 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Computes a base pointer from FUN_10035290() and the first stack argument, copies three dwords from it into a local buffer, then calls FUN_10028230 with a computed this pointer, the second stack argume

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1002b390(Guest* g, uint32_t self, uint32_t arg1, uint32_t arg2)
{
    const uint32_t esi = self;

    /* 1002b396: lea ecx, [esi + 8] */
    /* 1002b399: call 0x10035290 */
    const uint32_t eax = cow_thiscall_cdecl(g, COW_IMG(0x10035290u), esi + 8u, 0);

    /* 1002b3a2: lea ecx, [ecx + ecx*8] */
    /* 1002b3a5: lea eax, [eax + ecx*2] */
    const uint32_t base = eax + arg1 * 18u;

    /* 1002b3a8: lea edx, [eax + 6] */
    const uint32_t edx = base + 6u;

    /* Local buffer passed by address to FUN_10028230. */
    const uint32_t local = cow_frame(g, g->esp, 0x10u);

    /* 1002b3ab: mov ecx, dword ptr [eax + 6] */
    /* 1002b3ae: mov dword ptr [esp + 4], ecx */
    wr32(local + 0u, rd32(base + 6u));

    /* 1002b3b2: mov ecx, dword ptr [edx + 4] */
    /* 1002b3b5: mov dword ptr [esp + 8], ecx */
    wr32(local + 4u, rd32(edx + 4u));

    /* 1002b3bd: mov edx, dword ptr [edx + 8] */
    /* 1002b3c1: mov dword ptr [esp + 0x10], edx */
    wr32(local + 8u, rd32(edx + 8u));

    /* 1002b3c9: movsx ecx, word ptr [eax] */
    /* 1002b3cc: mov eax, dword ptr [esi + 0x14] */
    /* 1002b3d0: shl ecx, 6 */
    /* 1002b3d3: add ecx, eax */
    const uint32_t this2 =
        (uint32_t)((int32_t)((int16_t)rd16(base)) << 6) + rd32(esi + 0x14u);

    /* 1002b3c0: push ecx  (pointer to local buffer) */
    /* 1002b3cf: push edx  (second stack argument) */
    /* 1002b3d5: call 0x10028230 */
    /* Last pushed is first argument: arg2, then &local. */
    cow_thiscall(g, COW_IMG(0x10028230u), this2, 2u, arg2, local);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1002b390(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(sp0 + 4u);
    const uint32_t arg2 = rd32(sp0 + 8u);

    cow_fn_1002b390(g, g->ecx, arg1, arg2);

    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
