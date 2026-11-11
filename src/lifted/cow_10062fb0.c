/* f_0x10062fb0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Adjusts ecx by -0x34 and jumps to FUN_100614b0, which conditionally frees/deletes an object based on flags in a stack argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10062fb0(Guest* g)
{
    uint32_t self = g->ecx - 0x34u;
    const uint32_t sp0 = g->esp;
    /* [esp + 8] in FUN_100614b0 corresponds to the first stack argument of this function */
    uint8_t bl = (uint8_t)rd8(sp0 + 4u);

    if (bl & 2)
    {
        uint32_t eax = rd32(self - 4u);
        uint32_t ebp = self - 4u;
        
        /* ecx = (eax << 4) + eax */
        uint32_t ecx_val = (eax << 4) + eax;
        
        /* esi = self + ecx * 8 */
        uint32_t esi = self + ecx_val * 8u;
        
        eax--;
        
        if ((int32_t)eax >= 0)
        {
            uint32_t edi = eax + 1u;
            esi -= 0x88u;
            
            while (edi != 0)
            {
                /* call 0x10061380 with ecx = esi */
                cow_fastcall(g, COW_IMG(0x10061380u), esi, 0, 0);
                edi--;
            }
        }
        
        if (bl & 1)
        {
            /* call 0x1002c8e0 with stack arg ebp */
            cow_cdecl(g, COW_IMG(0x1002c8e0u), 1, ebp);
        }
        
        g->edx = g->edx; /* edx is not modified in this path */
        return ebp;
    }
    else
    {
        /* call 0x10061380 with ecx = self */
        cow_fastcall(g, COW_IMG(0x10061380u), self, 0, 0);
        
        if (bl & 1)
        {
            /* call 0x10028710 with stack arg self */
            cow_cdecl(g, COW_IMG(0x10028710u), 1, self);
        }
        
        g->edx = g->edx; /* edx is not modified in this path */
        return self;
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10062fb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    (void)sp0;
    uint32_t result = cow_fn_10062fb0(g);
    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
