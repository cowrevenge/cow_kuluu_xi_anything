/* f_0x10317c51 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Ensures a global collation buffer is allocated, processes four fixed collation entries, and returns either the buffer or a fallback pointer depending on whether all comparisons matched.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10317c51(Guest* g)
{
    const uint32_t g_103d0734 = COW_IMG(0x103d0734u);
    const uint32_t g_103d073c = COW_IMG(0x103d073cu);
    const uint32_t g_103d0740 = COW_IMG(0x103d0740u);
    const uint32_t g_103d074c = COW_IMG(0x103d074cu);
    const uint32_t g_103d0770 = COW_IMG(0x103d0770u);
    const uint32_t c_1034f918 = COW_IMG(0x1034f918u);
    const uint32_t c_1034a2b4 = COW_IMG(0x1034a2b4u);

    uint32_t eax = rd32(g_103d0734);
    uint32_t ebp = 1u;

    if (eax == 0u)
    {
        eax = cow_cdecl(g, COW_IMG(0x10312fd6u), 1u, 0x351u);
        wr32(g_103d0734, eax);
    }

    wr8(eax, 0u);

    cow_cdecl(g,
              COW_IMG(0x10317e25u),
              5u,
              rd32(g_103d0734),
              3u,
              rd32(g_103d073c),
              c_1034f918,
              rd32(g_103d0740));

    uint32_t esi = g_103d0740;
    uint32_t ebx = esi;

    do
    {
        cow_cdecl(g,
                  COW_IMG(0x10317510u),
                  2u,
                  rd32(g_103d0734),
                  c_1034a2b4);

        uint32_t strcmp_arg2 = rd32(esi + 0xcu);
        esi += 0xcu;
        uint32_t strcmp_arg1 = rd32(ebx);

        uint32_t strcmp_result = cow_cdecl(g,
                                           COW_IMG(0x10320960u),
                                           2u,
                                           strcmp_arg1,
                                           strcmp_arg2);

        if (strcmp_result != 0u)
        {
            ebp = 0u;
        }

        uint32_t second_arg5 = rd32(esi);
        ebx = esi;
        uint32_t second_arg4 = c_1034f918;
        uint32_t second_arg3 = rd32(esi - 4u);
        uint32_t second_arg2 = 3u;
        uint32_t second_arg1 = rd32(g_103d0734);

        cow_cdecl(g,
                  COW_IMG(0x10317e25u),
                  5u,
                  second_arg1,
                  second_arg2,
                  second_arg3,
                  second_arg4,
                  second_arg5);
    } while ((int32_t)esi < (int32_t)g_103d0770);

    if (ebp != 0u)
    {
        cow_cdecl(g,
                  COW_IMG(0x10312eedu),
                  1u,
                  rd32(g_103d0734));

        wr32(g_103d0734, 0u);
        return rd32(g_103d074c);
    }

    return rd32(g_103d0734);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10317c51(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t saved_ebx = g->ebx;
    const uint32_t saved_esi = g->esi;
    const uint32_t saved_edi = g->edi;
    const uint32_t saved_ebp = g->ebp;

    const uint32_t result = cow_fn_10317c51(g);

    g->ebx = saved_ebx;
    g->esi = saved_esi;
    g->edi = saved_edi;
    g->ebp = saved_ebp;

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
