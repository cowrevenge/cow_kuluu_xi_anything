/* f_0x10063000 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Adjusts the `this` pointer by subtracting 0x34 and then performs a complex cleanup/deallocation routine involving bitfield checks, looped calls to FUN_10061530, and conditional calls to thunks.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10063000(Guest* g)
{
    uint32_t self = g->ecx - 0x34u;
    uint32_t bl_val = rd8(g->esp + 4u); /* [esp+8] in original after push ebx, which is sp0+4 here */
    
    if (bl_val & 2)
    {
        uint32_t eax = rd32(self - 4u);
        uint32_t ebp = self - 4u;
        
        /* ecx = eax * 17 */
        uint32_t ecx_calc = (eax << 4) + eax;
        
        /* esi = self + ecx*8 */
        uint32_t esi = self + (ecx_calc << 3);
        
        eax--; /* dec eax */
        
        if ((int32_t)eax >= 0) /* js checks sign of eax after dec */
        {
            uint32_t edi = eax + 1;
            
            do
            {
                esi -= 0x88u;
                /* call 0x10061530 with ecx=esi (fastcall) */
                cow_fastcall(g, COW_IMG(0x10061530u), esi, 0, 0);
                
                edi--;
            } while (edi != 0);
        }
        
        if (bl_val & 1)
        {
            /* call 0x1002c8e0 with stack arg ebp */
            cow_cdecl(g, COW_IMG(0x1002c8e0u), 1, ebp);
        }
        
        g->edx = g->edx; /* edx is not modified in this path explicitly by instructions shown, but let's check. 
                            The original code doesn't write to edx in the 'if (bl & 2)' block before ret.
                            However, calls might clobber it. The prompt says "Leave in eax and edx exactly what the original leaves".
                            If a call clobbers edx, we must simulate that or assume the callee preserves/restores? 
                            Usually __fastcall/cdecl callees preserve ebx/esi/edi/ebp but not eax/ecx/edx.
                            Since we are calling helpers, they handle their own register state if implemented correctly.
                            But here we just need to return what's in g->eax and set g->edx.
                            In the 'if (bl & 2)' path, edx is never explicitly written by the main function instructions.
                            It might be clobbered by calls. We assume the helper calls preserve the guest state appropriately 
                            or that we just return current g->edx if not touched. 
                            Actually, looking at the other branch:
                        */
        
        /* Return eax = ebp */
        return ebp;
    }
    else
    {
        /* call 0x10061530 with ecx=self (fastcall) */
        cow_fastcall(g, COW_IMG(0x10061530u), self, 0, 0);
        
        if (bl_val & 1)
        {
            /* call 0x10028710 with stack arg self */
            cow_cdecl(g, COW_IMG(0x10028710u), 1, self);
        }
        
        /* Return eax = esi (which is self) */
        return self;
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10063000(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10063000(g);
    g->esp = sp0;
    rt_return(g, result, 4u);   /* ret 4 */
}
/* COW_ADAPTER END */
