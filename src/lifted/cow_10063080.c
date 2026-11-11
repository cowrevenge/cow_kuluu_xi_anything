/* f_0x10063080 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Adjusts `this` by -0x34 and performs a conditional cleanup/destructor sequence on the resulting object, returning the final pointer in eax.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10063080(Guest* g)
{
    uint32_t self = g->ecx - 0x34u;
    uint32_t bl_val = rd8(g->esp + 4u); /* [esp+8] after push ebx */

    if (bl_val & 2u)
    {
        uint32_t count = rd32(self - 4u);
        uint32_t ebp_val = self - 4u;
        
        if ((int32_t)(count - 1u) >= 0)
        {
            uint32_t loop_count = count - 1u;
            uint32_t esi_val = (count << 7) + self;
            
            while (loop_count != 0)
            {
                esi_val -= 0x80u;
                cow_fastcall(g, COW_IMG(0x10061920u), esi_val, 0, 0);
                loop_count--;
            }
        }

        if (bl_val & 1u)
        {
            /* push ebp; call 0x1002c8e0; add esp, 4 */
            cow_cdecl(g, COW_IMG(0x1002c8e0u), 1, ebp_val);
        }

        return ebp_val;
    }
    else
    {
        /* call 0x10061920 with ecx=self */
        cow_fastcall(g, COW_IMG(0x10061920u), self, 0, 0);

        if (bl_val & 1u)
        {
            /* push edi; call 0x10028710; add esp, 4 */
            cow_cdecl(g, COW_IMG(0x10028710u), 1, self);
        }

        return self;
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10063080(Guest* g)
{
    const uint32_t sp0 = g->esp;
    (void)sp0;
    const uint32_t result = cow_fn_10063080(g);
    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
