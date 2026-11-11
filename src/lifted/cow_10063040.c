/* f_0x10063040 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   Adjusts the 'this' pointer by -0x34 and calls a helper that conditionally invokes destructors or cleanup routines based on flags in the stack argument, returning the adjusted pointer in EAX.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10063040(Guest* g, uint32_t self)
{
    const uint32_t esi = self - 0x34u;
    const uint32_t bl = rd8(g->esp + 4u);

    if (bl & 2)
    {
        uint32_t eax = rd32(esi - 4u);
        const uint32_t ebp = esi - 4u;
        
        // Calculate count: ecx = eax * 15, then esi += ecx * 8 => esi += eax * 120 (0x78)
        uint32_t ecx = eax + eax * 2u;
        ecx = ecx + ecx * 4u;
        uint32_t cur_esi = esi + ecx * 8u;
        
        eax--; // dec eax
        
        if ((int32_t)eax >= 0) // js checks sign of eax after dec (SF=1 means negative, jump if SF=1. So we proceed if SF=0, i.e., non-negative)
        {
            uint32_t edi = eax + 1u;
            cur_esi -= 0x78u;
            
            do
            {
                cow_fastcall(g, COW_IMG(0x10062460u), cur_esi, 0, 0);
                edi--;
                if (edi == 0) break;
                cur_esi -= 0x78u;
            } while (1);
        }
        
        if (bl & 1)
        {
            cow_cdecl(g, COW_IMG(0x1002c8e0u), 1, ebp);
        }
        
        return ebp;
    }
    else
    {
        cow_fastcall(g, COW_IMG(0x10062460u), esi, 0, 0);
        
        if (bl & 1)
        {
            cow_cdecl(g, COW_IMG(0x10028710u), 1, esi);
        }
        
        return esi;
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10063040(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10063040(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
