/* f_0x10062fd0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Adjusts `this` pointer by subtracting 0x34 and delegates to FUN_10060e60, which destroys an array of objects based on flags in the first stack argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10062fd0(Guest* g, uint32_t self, uint32_t flag)
{
    const uint32_t adjusted_self = self - 0x34u;
    
    /* Replicate FUN_10060e60 logic */
    if (flag & 2)
    {
        uint32_t count = rd32(adjusted_self - 4u);
        uint32_t ebp_val = adjusted_self - 4u;
        
        /* Calculate start of array: edi + (count * 9) * 16 */
        uint32_t esi = (count + (count << 3)) << 4;
        esi += adjusted_self;
        
        int32_t eax = (int32_t)count - 1;
        
        if (eax >= 0)
        {
            uint32_t edi_loop = (uint32_t)(eax + 1);
            
            do
            {
                esi -= 0x90u;
                /* Call FUN_10060c60 with ecx=esi */
                cow_fastcall(g, COW_IMG(0x10060c60u), esi, 0, 0);
                edi_loop--;
            } while (edi_loop != 0);
        }
        
        if (flag & 1)
        {
            /* Call FUN_1002c8e0 with param ebp_val */
            cow_cdecl(g, COW_IMG(0x1002c8e0u), 1, ebp_val);
        }
        
        return ebp_val;
    }
    else
    {
        /* Call FUN_10060c60 with ecx=adjusted_self */
        cow_fastcall(g, COW_IMG(0x10060c60u), adjusted_self, 0, 0);
        
        if (flag & 1)
        {
            /* Call FUN_10028710 with param adjusted_self */
            cow_cdecl(g, COW_IMG(0x10028710u), 1, adjusted_self);
        }
        
        return adjusted_self;
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10062fd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10062fd0(g, g->ecx, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
