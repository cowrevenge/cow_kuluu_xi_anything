/* f_0x100630c0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   Adjusts the object pointer by -0x34 and performs cleanup/destruction logic based on flags, returning the adjusted pointer or header address.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_100630c0(Guest* g, uint32_t self, uint32_t flag)
{
    const uint32_t adjusted_self = self - 0x34u;
    
    if (flag & 2u)
    {
        uint32_t count = rd32(adjusted_self - 4u);
        uint32_t ebp_val = adjusted_self - 4u;
        
        // Calculate end pointer: esi + (count * 15 * 8)
        // ecx = count * 3
        // ecx = ecx * 5 = count * 15
        // esi = adjusted_self + ecx * 8
        uint32_t ecx_val = count * 3u;
        ecx_val = ecx_val * 5u;
        uint32_t esi_val = adjusted_self + ecx_val * 8u;
        
        // js checks sign of (count-1) after dec eax
        if ((int32_t)(count - 1u) >= 0) 
        {
            uint32_t edi_val = count; // lea edi, [eax+1] where eax=count-1
            
            do
            {
                esi_val -= 0x78u;
                cow_fastcall(g, COW_IMG(0x10061ab0u), esi_val, 0, 0);
                edi_val--;
            } while (edi_val != 0);
        }
        
        if (flag & 1u)
        {
            cow_stdcall(g, COW_IMG(0x1002c8e0u), 1, ebp_val);
        }
        
        return ebp_val;
    }
    else
    {
        uint32_t esi_val = adjusted_self;
        cow_fastcall(g, COW_IMG(0x10061ab0u), esi_val, 0, 0);
        
        if (flag & 1u)
        {
            cow_stdcall(g, COW_IMG(0x10028710u), 1, esi_val);
        }
        
        return esi_val;
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100630c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    // Stack argument 0 is at sp0 + 4
    const uint32_t flag = rd32(sp0 + 4u);
    
    // The original function starts with `sub ecx, 0x34` then jumps to FUN_10061b80.
    // FUN_10061b80 expects `this` in ecx and flag on stack (esp+8 after push ebx).
    // So we pass adjusted_self = g->ecx - 0x34 as 'self' to cow_fn.
    const uint32_t result = cow_fn_100630c0(g, g->ecx, flag);
    
    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
