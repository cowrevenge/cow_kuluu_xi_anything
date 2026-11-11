/* f_0x10063120 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   Adjusts this pointer by -0x34 and delegates to FUN_10061ea0 which performs cleanup/destruction based on flag bits.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10063120(Guest* g, uint32_t self, uint32_t flag)
{
    uint32_t esi = self - 0x34u;
    uint8_t bl = (uint8_t)(flag & 0xFFu);

    if (bl & 2u)
    {
        uint32_t eax = rd32(esi - 4u);
        uint32_t ebp = esi - 4u;
        uint32_t ecx = eax << 5;
        ecx -= eax;
        eax--;
        esi += ecx * 4u;

        if ((int32_t)eax >= 0)
        {
            uint32_t edi = eax + 1u;
            esi -= 0x7Cu;
            do
            {
                cow_fastcall(g, COW_IMG(0x10061db0u), esi, 0u, 0);
                edi--;
                if (edi == 0) break;
                esi -= 0x7Cu;
            } while (1);
        }

        if (bl & 1u)
        {
            cow_stdcall(g, COW_IMG(0x1002c8e0u), 1, ebp);
        }

        g->edx = g->edx; /* edx unchanged from entry */
        return ebp;
    }
    else
    {
        cow_fastcall(g, COW_IMG(0x10061db0u), esi, 0u, 0);

        if (bl & 1u)
        {
            cow_stdcall(g, COW_IMG(0x10028710u), 1, esi);
        }

        g->edx = g->edx; /* edx unchanged from entry */
        return esi;
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10063120(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10063120(g, g->ecx, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
