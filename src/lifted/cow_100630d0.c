/* f_0x100630d0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   Adjusts the 'this' pointer by subtracting 0x34 and delegates to FUN_10061d00, which manages object cleanup/destruction based on flags.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_100630d0(Guest* g, uint32_t self, uint32_t flags)
{
    uint32_t adjusted_self = self - 0x34u;
    uint8_t bl = (uint8_t)(flags & 0xFF);

    if (bl & 2)
    {
        uint32_t count = rd32(adjusted_self - 4u);
        uint32_t ebp_val = adjusted_self - 4u;
        
        // Calculate end pointer: esi + (count * 15) * 8 - 0x78
        // ecx = count * 3
        // ecx = ecx * 5 -> count * 15
        // esi = adjusted_self + ecx * 8
        uint32_t ecx_val = count * 3u;
        ecx_val = ecx_val * 5u;
        uint32_t end_ptr = adjusted_self + ecx_val * 8u;
        
        // eax was decremented to count - 1. If it was negative (count == 0), js taken, skip loop.
        if ((int32_t)(count - 1u) >= 0)
        {
            uint32_t loop_count = count;
            uint32_t current_ptr = end_ptr - 0x78u;
            
            while (loop_count > 0)
            {
                cow_fastcall(g, COW_IMG(0x10061c30u), current_ptr, g->edx, 0);
                current_ptr -= 0x78u;
                loop_count--;
            }
        }
        
        if (bl & 1)
        {
            cow_stdcall(g, COW_IMG(0x1002c8e0u), 1, ebp_val);
        }
        
        // edx is not explicitly set by the function body logic itself, 
        // but might be modified by callees. Since we don't know callee internals,
        // and the prompt implies preserving input state if not written, 
        // we return the current g->edx which may have been updated by fastcall/stdcall helpers 
        // or remains as input. However, typically in these models, if the register isn't 
        // explicitly assigned in the C code from a calculation, it reflects the state after calls.
        // The previous attempt failed because it hardcoded 0. We must leave g->edx alone (or let callees update it).
        // Since cow_fastcall/stdcall might update g->edx, we just return and let the adapter handle it?
        // No, the function returns uint32_t for EAX. EDX is a side effect.
        // We should NOT assign g->edx = 0. We should leave it as is (which includes any changes from callees).
        
        return ebp_val;
    }
    else
    {
        cow_fastcall(g, COW_IMG(0x10061c30u), adjusted_self, g->edx, 0);
        
        if (bl & 1)
        {
            cow_stdcall(g, COW_IMG(0x10028710u), 1, adjusted_self);
        }
        
        return adjusted_self;
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100630d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    // Stack argument 0 is at [sp0 + 4]
    const uint32_t flags = rd32(sp0 + 4u);
    
    // The function starts with `sub ecx, 0x34` then jumps to FUN_10061d00.
    // FUN_10061d00 expects `this` in ECX and reads flags from [esp+8] (which is the stack arg).
    // So we pass self=ecx, flags=stack_arg.
    
    const uint32_t result = cow_fn_100630d0(g, g->ecx, flags);
    
    g->esp = sp0;
    rt_return(g, result, 4u);   /* ret 4 */
}
/* COW_ADAPTER END */
