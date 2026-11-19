/* f_0x1023db40 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   loops 16 times, collecting results from FUN_100db790 for indices whose FUN_100db6e0 status is 1 or 2 and whose FUN_100db6d0 string does not match the fixed 2-byte string at 0x1034f2b8.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1023db40(Guest* g, uint32_t sp0)
{
    const uint32_t self_global = COW_IMG(0x103601BCu);
    const uint32_t cmp_str = COW_IMG(0x1034F2B8u);

    /* Original stack after:
       sub esp,0x40
       push ebx / ebp / esi / edi
       esp = sp0 - 0x50
       ebp = esp + 0x10 = sp0 - 0x40
    */
    const uint32_t esp_after_pushes = sp0 - 0x50u;
    uint32_t ebp = cow_frame(g, sp0, 0x40u);

    /* Preserve the values that the original restores from its pushes. */
    const uint32_t saved_ebx = g->ebx;
    const uint32_t saved_ebp = g->ebp;
    const uint32_t saved_esi = g->esi;
    const uint32_t saved_edi = g->edi;

    uint32_t ebx = 0u;

    for (;;)
    {
        uint32_t self = rd32(self_global);

        /* First call: FUN_100db6e0(ebx), with ecx = self. */
        g->esp = esp_after_pushes;
        g->ecx = self;
        g->ebx = ebx;
        g->ebp = ebp;
        g->esi = saved_esi;
        g->edi = saved_edi;

        uint32_t status = cow_thiscall(g, COW_IMG(0x100DB6E0u), self, 1u, ebx);

        if (status == 0u)
            goto next;

        if (status != 1u && status != 2u)
            goto next;

        self = rd32(self_global);

        /* Second call: FUN_100db6d0(ebx), with ecx = self and edi preset. */
        g->esp = esp_after_pushes;
        g->ecx = self;
        g->ebx = ebx;
        g->ebp = ebp;
        g->esi = saved_esi;
        g->edi = cmp_str;

        uint32_t esi = cow_thiscall(g, COW_IMG(0x100DB6D0u), self, 1u, ebx);
        uint32_t edi = cmp_str;
        uint32_t ecx = 2u;
        uint32_t zf = 0u;
        uint32_t df = g->df;

        /* repe cmpsb byte ptr [esi], byte ptr es:[edi] */
        while (ecx != 0u)
        {
            uint8_t a = rd8(esi);
            uint8_t b = rd8(edi);
            uint8_t d = (uint8_t)(a - b);

            zf = (d == 0u);

            esi += df ? 0xFFFFFFFFu : 1u;
            edi += df ? 0xFFFFFFFFu : 1u;
            ecx--;

            if (!zf)
                break;
        }

        if (zf)
            goto next;

        self = rd32(self_global);

        /* Third call: FUN_100db790(ebx), with ecx = self. */
        g->esp = esp_after_pushes;
        g->ecx = self;
        g->ebx = ebx;
        g->ebp = ebp;
        g->esi = esi;
        g->edi = edi;

        uint32_t value = cow_thiscall(g, COW_IMG(0x100DB790u), self, 1u, ebx);

        wr32(ebp, value);
        ebp += 4u;

    next:
        ebx++;
        if (!(int32_t)ebx < (int32_t)0x10u)
            break;
    }

    g->ebx = saved_ebx;
    g->ebp = saved_ebp;
    g->esi = saved_esi;
    g->edi = saved_edi;
    g->esp = sp0;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1023db40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1023db40(g, sp0);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
