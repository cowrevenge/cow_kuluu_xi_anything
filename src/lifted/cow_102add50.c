/* f_0x102add50 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   validates a shape curve index and sample storage, then dispatches to the curve evaluation helper.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=4 */
uint32_t cow_fn_102add50(Guest* g, uint32_t sp0, uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3)
{
    const uint32_t prologue_esp = sp0 - 16u;

    const uint32_t obj = rd32(arg0 + 0x34u);
    if (obj == 0u)
    {
        g->esp = prologue_esp;
        cow_cdecl(g, COW_IMG(0x102858b0u), 3,
                  COW_IMG(0x103b379cu), COW_IMG(0x103bef68u), 0x45au);

        g->esp = prologue_esp - 12u;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2,
                  COW_IMG(0x103beaa4u), COW_IMG(0x103bf17cu));

        g->esp = prologue_esp;
        return g->eax;
    }

    const uint32_t vtx = rd32(obj + 0x14u);
    if (vtx == 0u)
    {
        g->esp = prologue_esp;
        cow_cdecl(g, COW_IMG(0x102858b0u), 3,
                  COW_IMG(0x103b379cu), COW_IMG(0x103bef68u), 0x45au);

        g->esp = prologue_esp - 12u;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2,
                  COW_IMG(0x103beaa4u), COW_IMG(0x103bf17cu));

        g->esp = prologue_esp;
        return g->eax;
    }

    if ((int32_t)arg1 < 0 || (int32_t)arg1 >= (int32_t)rd32(arg0 + 0x44u))
    {
        g->esp = prologue_esp;
        cow_cdecl(g, COW_IMG(0x102858b0u), 3,
                  COW_IMG(0x103b379cu), COW_IMG(0x103bef68u), 0x45du);

        g->esp = prologue_esp - 12u;
        cow_cdecl(g, COW_IMG(0x102858b0u), 3,
                  COW_IMG(0x103bf140u), arg1, rd32(arg0 + 0x44u));

        g->esp = prologue_esp;
        return g->eax;
    }

    if (arg3 == 0u)
    {
        g->esp = prologue_esp;
        cow_cdecl(g, COW_IMG(0x102858b0u), 3,
                  COW_IMG(0x103b379cu), COW_IMG(0x103bef68u), 0x464u);

        g->esp = prologue_esp - 12u;
        cow_cdecl(g, COW_IMG(0x102858b0u), 1,
                  COW_IMG(0x103bf1b4u));

        g->esp = prologue_esp;
        return g->eax;
    }

    const uint32_t ctrl = rd32(obj + 0x54u);
    if (ctrl == 0u)
    {
        g->esp = prologue_esp;
        cow_cdecl(g, COW_IMG(0x102858b0u), 3,
                  COW_IMG(0x103b379cu), COW_IMG(0x103bef68u), 0x468u);

        g->esp = prologue_esp - 12u;
        cow_cdecl(g, COW_IMG(0x102858b0u), 1,
                  COW_IMG(0x103bf050u));

        g->esp = prologue_esp;
        return g->eax;
    }

    const uint32_t table = rd32(arg0 + 0x48u);
    const uint32_t count = rd32(table + arg1 * 4u);

    if ((int32_t)count < 4)
    {
        g->esp = prologue_esp;
        cow_cdecl(g, COW_IMG(0x102858b0u), 3,
                  COW_IMG(0x103b379cu), COW_IMG(0x103bef68u), 0x46cu);

        g->esp = prologue_esp - 12u;
        cow_cdecl(g, COW_IMG(0x102858b0u), 3,
                  COW_IMG(0x103bf188u), count, arg1);

        g->esp = prologue_esp;
        return g->eax;
    }

    uint32_t sum = 0u;
    if ((int32_t)arg1 > 0)
    {
        uint32_t ptr = table;
        uint32_t n = arg1;
        while (n != 0u)
        {
            sum += rd32(ptr);
            ptr += 4u;
            --n;
        }
    }

    const uint32_t storage = ctrl + sum * 12u;
    const uint32_t idx2 = arg2 + 2u;

    g->esp = prologue_esp;
    cow_cdecl(g, COW_IMG(0x102adea0u), 4,
              storage, count, idx2, arg3);

    g->esp = prologue_esp;
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102add50(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t ebx0 = g->ebx;
    const uint32_t ebp0 = g->ebp;
    const uint32_t esi0 = g->esi;
    const uint32_t edi0 = g->edi;

    const uint32_t arg0 = rd32(sp0 +  4u);
    const uint32_t arg1 = rd32(sp0 +  8u);
    const uint32_t arg2 = rd32(sp0 + 12u);
    const uint32_t arg3 = rd32(sp0 + 16u);

    const uint32_t result = cow_fn_102add50(g, sp0, arg0, arg1, arg2, arg3);

    g->ebx = ebx0;
    g->ebp = ebp0;
    g->esi = esi0;
    g->edi = edi0;
    g->esp = sp0;

    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
